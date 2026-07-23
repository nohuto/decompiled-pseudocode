/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x140680F28
 * Callers:
 *     ExpDebuggerWorker @ 0x140B7BF70 (ExpDebuggerWorker.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiCompactDebuggerPatchTable @ 0x14067F160 (MiCompactDebuggerPatchTable.c)
 */

__int64 __fastcall MmDbgMarkPfnModifiedWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 *v5; // r14
  __int64 v6; // rbp
  unsigned __int8 v7; // di
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15

  v4 = 0LL;
  v5 = qword_140E30328;
  do
  {
    if ( (*v5 & 1) != 0 )
    {
      v6 = *v5 - 1;
      _InterlockedExchange64(&qword_140E30328[v4], 0LL);
      v7 = MiLockPageInline(v6, a2, a3, a4);
      v8 = MiCaptureDirtyBitToPfn(v6);
      MiRemoveLockedPageChargeAndDecRef(v6, v9, v10, v11);
      v12 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
      MiUnlockPage(v6, v7);
      if ( v8 )
        MiReleasePageFileInfo(v12, v8, 0LL, a4);
    }
    v4 = (unsigned int)(v4 + 1);
    ++v5;
  }
  while ( (unsigned int)v4 < 0x20 );
  return MiCompactDebuggerPatchTable(0);
}
