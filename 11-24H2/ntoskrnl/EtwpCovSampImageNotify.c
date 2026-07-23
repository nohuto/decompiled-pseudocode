/*
 * XREFs of EtwpCovSampImageNotify @ 0x1409228E0
 * Callers:
 *     PsCallImageNotifyRoutines @ 0x140922440 (PsCallImageNotifyRoutines.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A0C3A0 (EtwpCovSampEnumerateProcess.c)
 *     EtwpCovSampEnumerateDriver @ 0x140A9E5D0 (EtwpCovSampEnumerateDriver.c)
 * Callees:
 *     EtwpCovSampReleaseSamplerRundown @ 0x140922E54 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampModuleDereference @ 0x14092387C (EtwpCovSampModuleDereference.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1409238C0 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextGetModule @ 0x140923930 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1409247F8 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampProcessAddModule @ 0x14092489C (EtwpCovSampProcessAddModule.c)
 */

void __fastcall EtwpCovSampImageNotify(PUNICODE_STRING FullImageName, struct _LIST_ENTRY *ProcessId, char *ImageInfo)
{
  ULONG_PTR v3; // rbx
  int v6; // r15d
  char *v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  ULONG_PTR Affinity; // rbp
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v6 = (int)FullImageName;
  if ( (*(_DWORD *)ImageInfo & 0x400) == 0 )
    goto LABEL_11;
  v7 = ImageInfo - 8;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v12) >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = qword_140EFEF98 + 16;
    Process = CurrentThread->ApcState.Process;
    if ( ProcessId )
    {
      if ( ProcessId == Process[1].Header.WaitListHead.Flink
        && (int)EtwpCovSampProcessEnsureContext(CurrentThread->ApcState.Process) >= 0 )
      {
        Affinity = (ULONG_PTR)Process[4].Affinity;
        goto LABEL_7;
      }
    }
    else if ( (*(_DWORD *)ImageInfo & 0x100) != 0 )
    {
      Affinity = qword_140EFEF98 + 1264;
LABEL_7:
      if ( (int)EtwpCovSampContextGetModule(v3, (_DWORD)Process, Affinity, v6, (__int64)v7, (__int64)&v11) >= 0 )
        EtwpCovSampProcessAddModule(Affinity, v3, v11, *((_QWORD *)ImageInfo + 1));
    }
  }
  if ( v11 )
    EtwpCovSampModuleDereference(v3);
LABEL_11:
  EtwpCovSampReleaseSamplerRundown(v12);
}
