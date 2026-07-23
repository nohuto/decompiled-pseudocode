/*
 * XREFs of EtwpTrackBinaryForSession @ 0x1409F8C88
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, _QWORD *a3)
{
  unsigned __int64 *v3; // rbx
  char *v7; // rax
  char *v8; // rdi
  unsigned __int16 v9; // dx
  _DWORD *i; // rbx
  SIZE_T v12; // rax
  unsigned int v13; // r9d
  unsigned int j; // edx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 Pool2; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rcx

  v3 = (unsigned __int64 *)(a1 + 688);
  v7 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    v8[10] = 1;
  v9 = *(_WORD *)a2;
  if ( *(_DWORD *)(a1 + 324) + (unsigned int)*(unsigned __int16 *)a2 <= *(_DWORD *)(a1 + 4) )
  {
    for ( i = *(_DWORD **)(a1 + 1304); i != (_DWORD *)(a1 + 1304); i = *(_DWORD **)i )
    {
      if ( i[4] == v9 + 2LL )
      {
        v12 = RtlCompareMemory(&i[4 * i[5] + 7], a2[1], v9);
        v9 = *(_WORD *)a2;
        if ( v12 == *(unsigned __int16 *)a2 )
        {
          v13 = i[5];
          for ( j = 0; j < v13; ++j )
          {
            v15 = 4LL * j;
            v16 = *a3 - *(_QWORD *)&i[v15 + 7];
            if ( *a3 == *(_QWORD *)&i[v15 + 7] )
              v16 = a3[1] - *(_QWORD *)&i[v15 + 9];
            if ( !v16 )
              goto LABEL_6;
          }
          if ( v13 < 0x10 )
          {
            Pool2 = ExAllocatePool2(0x100uLL, i[4] + 16 * (v13 + 3), 0x62777445u);
            v18 = Pool2;
            if ( Pool2 )
            {
              memmove((void *)(Pool2 + 28), i + 7, 16LL * (unsigned int)i[5]);
              *(_OWORD *)(v18 + 16LL * (unsigned int)i[5] + 28) = *(_OWORD *)a3;
              v19 = (unsigned int)(i[5] + 1);
              *(_DWORD *)(v18 + 20) = v19;
              *(_DWORD *)(v18 + 24) = i[6] + 1;
              *(_DWORD *)(v18 + 16) = i[4];
              memmove((void *)(v18 + 16 * v19 + 28), &i[4 * i[5] + 7], (unsigned int)i[4]);
              v20 = *(_QWORD *)i;
              if ( *(_DWORD **)(*(_QWORD *)i + 8LL) == i )
              {
                v21 = (_QWORD *)*((_QWORD *)i + 1);
                if ( (_DWORD *)*v21 == i )
                {
                  *v21 = v20;
                  *(_QWORD *)(v20 + 8) = v21;
                  ExFreePoolWithTag(i, 0);
                  goto LABEL_27;
                }
              }
              goto LABEL_28;
            }
          }
          goto LABEL_6;
        }
      }
    }
    v22 = ExAllocatePool2(0x100uLL, v9 + 50LL, 0x62777445u);
    v18 = v22;
    if ( v22 )
    {
      *(_DWORD *)(v22 + 20) = 1;
      *(_DWORD *)(v22 + 24) = 1;
      *(_OWORD *)(v22 + 28) = *(_OWORD *)a3;
      *(_DWORD *)(v22 + 16) = *(unsigned __int16 *)a2 + 2;
      memmove((void *)(v22 + 44), a2[1], *(unsigned __int16 *)a2);
      *(_WORD *)(v18 + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 44) = 0;
      *(_DWORD *)(a1 + 324) += *(_DWORD *)(v18 + 16) + 16;
LABEL_27:
      v23 = (__int64 *)(a1 + 1304);
      v24 = *(_QWORD *)(a1 + 1304);
      if ( *(_QWORD *)(v24 + 8) != a1 + 1304 )
LABEL_28:
        __fastfail(3u);
      *(_QWORD *)v18 = v24;
      *(_QWORD *)(v18 + 8) = v23;
      *(_QWORD *)(v24 + 8) = v18;
      *v23 = v18;
      _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0xC0u);
    }
  }
LABEL_6:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
  return KeAbPostRelease(a1 + 688);
}
