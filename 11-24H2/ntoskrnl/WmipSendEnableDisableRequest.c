/*
 * XREFs of WmipSendEnableDisableRequest @ 0x1409D12AC
 * Callers:
 *     WmipEnableCollectionForNewGuid @ 0x1409CB9CC (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409CFA88 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDoDisableRequest @ 0x1409D11DC (WmipDoDisableRequest.c)
 *     WmipSendEnableRequest @ 0x140A909B4 (WmipSendEnableRequest.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     WmipSendWmiIrp @ 0x1409CD990 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1409CE1D4 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409CF068 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipSendEnableDisableRequest(char a1, __int64 a2, char a3)
{
  int v6; // eax
  bool v7; // r13
  __int64 v8; // rbp
  int v9; // esi
  volatile signed __int64 **Pool2; // rdi
  __int64 *i; // rbx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  volatile signed __int64 **v16; // rsi
  volatile signed __int64 *v17; // rbx
  int v19; // eax
  ULONG_PTR v20; // rcx
  int v21; // ecx
  int v22; // eax
  __int128 v24; // [rsp+38h] [rbp-290h] BYREF
  LARGE_INTEGER v25[2]; // [rsp+48h] [rbp-280h] BYREF
  _OWORD v26[2]; // [rsp+58h] [rbp-270h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-248h] BYREF

  memset_0(P, 0, sizeof(P));
  v6 = *(_DWORD *)(a2 + 16);
  *(_OWORD *)&v25[0].LowPart = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( (v6 & 1) != 0 )
    return 0LL;
  v7 = ((a1 - 4) & 0xFD) == 0;
  v8 = 0LL;
  v9 = a3 != 0 ? 0x2000 : 0x4000;
  if ( *(_DWORD *)(a2 + 36) > 0x40u )
  {
    Pool2 = (volatile signed __int64 **)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = (volatile signed __int64 **)P;
  }
  for ( i = *(__int64 **)(a2 + 56); i != (__int64 *)(a2 + 56) && (unsigned int)v8 < *(_DWORD *)(a2 + 36); i = (__int64 *)*i )
  {
    v12 = *((_DWORD *)i + 4);
    if ( (v12 & 0x1000) == 0 && (a3 || (v12 & 4) != 0) )
    {
      v13 = i[8];
      if ( (*(_DWORD *)(v13 + 16) & 0x20000000) == 0 )
      {
        v19 = v12 & v9;
        if ( v7 )
        {
          if ( !v19 )
          {
LABEL_20:
            v20 = i[8];
            Pool2[v8] = (volatile signed __int64 *)v13;
            WmipReferenceEntry(v20);
            v8 = (unsigned int)(v8 + 1);
          }
        }
        else if ( v19 )
        {
          goto LABEL_20;
        }
        v21 = *((_DWORD *)i + 4);
        if ( v7 )
          v22 = v21 | v9;
        else
          v22 = v21 & ~v9;
        *((_DWORD *)i + 4) = v22;
        continue;
      }
    }
  }
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  if ( (_DWORD)v8 )
  {
    v15 = *(_OWORD *)(a2 + 72);
    v25[0].LowPart = 48;
    v16 = Pool2;
    *(_OWORD *)((char *)v26 + 8) = v15;
    do
    {
      v17 = *v16;
      LOBYTE(v14) = a1;
      WmipSendWmiIrp(v14, *((unsigned int *)*v16 + 14), (__int64)v26 + 8, 48, (__int64)v25, &v24);
      WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, v17);
      ++v16;
      --v8;
    }
    while ( v8 );
  }
  if ( Pool2 != (volatile signed __int64 **)P )
    ExFreePoolWithTag(Pool2, 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  return 0LL;
}
