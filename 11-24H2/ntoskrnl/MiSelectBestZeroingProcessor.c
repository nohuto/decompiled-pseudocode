/*
 * XREFs of MiSelectBestZeroingProcessor @ 0x140413840
 * Callers:
 *     MiMoveBackgroundZeroThreads @ 0x1403A3B00 (MiMoveBackgroundZeroThreads.c)
 *     MiBackgroundZeroNodePages @ 0x140412BA0 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x1403312CC (MiAssignBackgroundZeroThreadToProcessor.c)
 *     MiFindBestZeroingProcessor @ 0x1403313C8 (MiFindBestZeroingProcessor.c)
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x14041399C (MiUnlinkZeroThreadFromActiveDomain.c)
 *     MiDecrementZeroEngineThread @ 0x140413AA8 (MiDecrementZeroEngineThread.c)
 */

_BOOL8 __fastcall MiSelectBestZeroingProcessor(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rdx
  __int64 v9; // rax
  KIRQL v11; // r15
  int v12; // r14d
  _OWORD v13[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-28h]

  v5 = *(_QWORD *)(a2 + 352);
  v15 = 0LL;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  if ( v5 == *(_QWORD *)(a2 + 368)
    && (v9 = *(unsigned __int16 *)(a2 + 360), (_WORD)v9 == *(_WORD *)(a2 + 376))
    && v5
    && (v5 & qword_140E2ED90[v9]) == 0 )
  {
    ++dword_140EF4EC0;
    return 1LL;
  }
  else
  {
    ++dword_140EF4EC4;
    if ( a3 )
      v11 = 17;
    else
      v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 208) + 15280LL));
    if ( *(_QWORD *)(a2 + 352) )
      MiUnlinkZeroThreadFromActiveDomain(a2);
    MiFindBestZeroingProcessor((__int64)v13, (int *)a1, a4, 1);
    v12 = DWORD2(v14);
    ++dword_140EF4EA8[SDWORD2(v14)];
    if ( v12 == 5 )
    {
      MiDecrementZeroEngineThread(a2);
    }
    else
    {
      ++*(_DWORD *)(a1 + 276);
      MiAssignBackgroundZeroThreadToProcessor(a2, a1, (__int64)v13);
    }
    if ( !a3 )
      MiReleaseSpinLockExclusive((_DWORD *)(*(_QWORD *)(a1 + 208) + 15280LL), v11);
    return v12 != 5;
  }
}
