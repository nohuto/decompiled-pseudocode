/*
 * XREFs of WmipSendEnableDisableRequest @ 0x1409AF934
 * Callers:
 *     WmipDoDisableRequest @ 0x1409AF864 (WmipDoDisableRequest.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B0E04 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B20EC (WmipEnableCollectionForNewGuid.c)
 *     WmipSendEnableRequest @ 0x140A8D0B0 (WmipSendEnableRequest.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WmipSendWmiIrp @ 0x1409B2964 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409B4038 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipSendEnableDisableRequest(char a1, __int64 a2, char a3)
{
  int v6; // eax
  bool v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // esi
  _BYTE *Pool2; // rdi
  __int64 *i; // rbx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // xmm0
  _BYTE *v17; // rsi
  __int64 v18; // rbx
  int v20; // eax
  ULONG_PTR v21; // rcx
  int v22; // ecx
  int v23; // eax
  _BYTE v25[16]; // [rsp+38h] [rbp-290h] BYREF
  LARGE_INTEGER v26[2]; // [rsp+48h] [rbp-280h] BYREF
  _OWORD v27[2]; // [rsp+58h] [rbp-270h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-248h] BYREF

  memset_0(P, 0, sizeof(P));
  v6 = *(_DWORD *)(a2 + 16);
  *(_OWORD *)&v26[0].LowPart = 0LL;
  memset(v27, 0, sizeof(v27));
  if ( (v6 & 1) != 0 )
    return 0LL;
  v7 = ((a1 - 4) & 0xFD) == 0;
  v8 = *(unsigned int *)(a2 + 36);
  v9 = 0LL;
  v10 = a3 != 0 ? 0x2000 : 0x4000;
  if ( (unsigned int)v8 > 0x40 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, 8 * v8, 0x70696D57u);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  for ( i = *(__int64 **)(a2 + 56); i != (__int64 *)(a2 + 56) && (unsigned int)v9 < *(_DWORD *)(a2 + 36); i = (__int64 *)*i )
  {
    v13 = *((_DWORD *)i + 4);
    if ( (v13 & 0x1000) == 0 && (a3 || (v13 & 4) != 0) )
    {
      v14 = i[8];
      if ( (*(_DWORD *)(v14 + 16) & 0x20000000) == 0 )
      {
        v20 = v13 & v10;
        if ( v7 )
        {
          if ( !v20 )
          {
LABEL_20:
            v21 = i[8];
            *(_QWORD *)&Pool2[8 * v9] = v14;
            WmipReferenceEntry(v21);
            v9 = (unsigned int)(v9 + 1);
          }
        }
        else if ( v20 )
        {
          goto LABEL_20;
        }
        v22 = *((_DWORD *)i + 4);
        if ( v7 )
          v23 = v22 | v10;
        else
          v23 = v22 & ~v10;
        *((_DWORD *)i + 4) = v23;
        continue;
      }
    }
  }
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  if ( (_DWORD)v9 )
  {
    v16 = *(_OWORD *)(a2 + 72);
    v26[0].LowPart = 48;
    v17 = Pool2;
    *(_OWORD *)((char *)v27 + 8) = v16;
    do
    {
      v18 = *(_QWORD *)v17;
      LOBYTE(v15) = a1;
      WmipSendWmiIrp(v15, *(unsigned int *)(*(_QWORD *)v17 + 56LL), (char *)v27 + 8, 48LL, v26, v25);
      WmipUnreferenceEntry(&WmipDSChunkInfo, v18);
      v17 += 8;
      --v9;
    }
    while ( v9 );
  }
  if ( Pool2 != P )
    ExFreePoolWithTag(Pool2, 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  return 0LL;
}
