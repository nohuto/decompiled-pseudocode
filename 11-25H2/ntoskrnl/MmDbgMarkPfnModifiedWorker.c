/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x140674508
 * Callers:
 *     ExpDebuggerWorker @ 0x140B69F70 (ExpDebuggerWorker.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiCompactDebuggerPatchTable @ 0x140672748 (MiCompactDebuggerPatchTable.c)
 */

__int64 MmDbgMarkPfnModifiedWorker()
{
  __int64 v0; // rsi
  __int64 *v1; // r14
  __int64 v2; // rbp
  unsigned __int8 v3; // di
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // r15

  v0 = 0LL;
  v1 = qword_140E2FFA0;
  do
  {
    if ( (*v1 & 1) != 0 )
    {
      v2 = *v1 - 1;
      _InterlockedExchange64(&qword_140E2FFA0[v0], 0LL);
      v3 = MiLockPageInline(v2);
      v4 = MiCaptureDirtyBitToPfn(v2);
      MiRemoveLockedPageChargeAndDecRef(v2, v5, v6, v7);
      v8 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL));
      MiUnlockPage(v2, v3);
      if ( v4 )
        MiReleasePageFileInfo(v8, v4, 0);
    }
    v0 = (unsigned int)(v0 + 1);
    ++v1;
  }
  while ( (unsigned int)v0 < 0x20 );
  return MiCompactDebuggerPatchTable(0);
}
