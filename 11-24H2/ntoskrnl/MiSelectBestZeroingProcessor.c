/*
 * XREFs of MiSelectBestZeroingProcessor @ 0x1403C7C00
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x1403C6F60 (MiBackgroundZeroNodePages.c)
 *     MiMoveBackgroundZeroThreads @ 0x1403C8F60 (MiMoveBackgroundZeroThreads.c)
 * Callees:
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x140209CEC (MiAssignBackgroundZeroThreadToProcessor.c)
 *     MiFindBestZeroingProcessor @ 0x140209DE8 (MiFindBestZeroingProcessor.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x1403C7D5C (MiUnlinkZeroThreadFromActiveDomain.c)
 *     MiDecrementZeroEngineThread @ 0x1403C7E68 (MiDecrementZeroEngineThread.c)
 */

_BOOL8 __fastcall MiSelectBestZeroingProcessor(__int64 a1, __int64 a2, int a3, unsigned int a4)
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
    && (v5 & qword_140E2EC50[v9]) == 0 )
  {
    ++dword_140EF4CA0;
    return 1LL;
  }
  else
  {
    ++dword_140EF4CA4;
    if ( a3 )
      v11 = 17;
    else
      v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 208) + 15280LL));
    if ( *(_QWORD *)(a2 + 352) )
      MiUnlinkZeroThreadFromActiveDomain(a2);
    MiFindBestZeroingProcessor((__int64)v13, (int *)a1, a4, 1);
    v12 = DWORD2(v14);
    ++dword_140EF4C88[SDWORD2(v14)];
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
