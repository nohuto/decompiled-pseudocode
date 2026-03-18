/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x14067FD28
 * Callers:
 *     ExpDebuggerWorker @ 0x140B79F70 (ExpDebuggerWorker.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiCompactDebuggerPatchTable @ 0x14067DF60 (MiCompactDebuggerPatchTable.c)
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
  __int64 v7; // r15

  v0 = 0LL;
  v1 = qword_140E301E8;
  do
  {
    if ( (*v1 & 1) != 0 )
    {
      v2 = *v1 - 1;
      _InterlockedExchange64(&qword_140E301E8[v0], 0LL);
      v3 = MiLockPageInline(v2);
      v4 = MiCaptureDirtyBitToPfn(v2);
      MiRemoveLockedPageChargeAndDecRef(v2, v5, v6);
      v7 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL));
      MiUnlockPage(v2, v3);
      if ( v4 )
        MiReleasePageFileInfo(v7, v4, 0LL);
    }
    v0 = (unsigned int)(v0 + 1);
    ++v1;
  }
  while ( (unsigned int)v0 < 0x20 );
  return MiCompactDebuggerPatchTable(0);
}
