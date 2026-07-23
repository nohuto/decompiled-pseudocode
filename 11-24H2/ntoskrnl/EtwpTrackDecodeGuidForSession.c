/*
 * XREFs of EtwpTrackDecodeGuidForSession @ 0x140A5AA14
 * Callers:
 *     EtwpUpdateRegEntryEnableMask @ 0x140838494 (EtwpUpdateRegEntryEnableMask.c)
 *     AddDecodeGuidToSessions @ 0x140A5A96C (AddDecodeGuidToSessions.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

bool __fastcall EtwpTrackDecodeGuidForSession(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 *v3; // rsi
  __int64 v4; // r14
  bool v6; // bl
  char *v7; // rax
  char *v8; // rbp
  _QWORD *i; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 Pool2; // rcx
  __int128 v15; // xmm1

  v2 = *(_QWORD *)(a2 + 112);
  v3 = (unsigned __int64 *)(a1 + 688);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  v7 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    v8[10] = 1;
  for ( i = *(_QWORD **)(a1 + 112); i; i = (_QWORD *)*i )
  {
    v10 = *(_QWORD *)(v2 + 34) - i[1];
    if ( !v10 )
      v10 = *(_QWORD *)(v2 + 42) - i[2];
    if ( !v10 )
    {
      v11 = *(_QWORD *)(v4 + 40) - i[3];
      if ( !v11 )
        v11 = *(_QWORD *)(v4 + 48) - i[4];
      v6 = v11 == 0;
      goto LABEL_15;
    }
  }
  v12 = *(_DWORD *)(a1 + 324) + 2048;
  if ( v12 <= *(_DWORD *)(a1 + 4) && v12 <= 0x10000 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x30uLL, 0x62777445u);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = *(_QWORD *)(a1 + 112);
      *(_OWORD *)(Pool2 + 8) = *(_OWORD *)(v2 + 34);
      v15 = *(_OWORD *)(v4 + 40);
      *(_BYTE *)(Pool2 + 40) = 0;
      *(_OWORD *)(Pool2 + 24) = v15;
      ++*(_DWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 324) += 32;
      *(_QWORD *)(a1 + 112) = Pool2;
      _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x8C0u);
      v6 = 1;
    }
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return v6;
}
