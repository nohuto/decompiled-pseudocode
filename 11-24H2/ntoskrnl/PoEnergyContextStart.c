/*
 * XREFs of PoEnergyContextStart @ 0x140907444
 * Callers:
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PopEtInit @ 0x140C32B60 (PopEtInit.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopEtGetProcessAppId @ 0x14090754C (PopEtGetProcessAppId.c)
 */

__int64 __fastcall PoEnergyContextStart(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // r14
  char v2; // si
  struct _EX_RUNDOWN_REF *v4; // rdi
  int ProcessAppId; // ebx
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 1640);
  v2 = 0;
  memset(v7, 0, sizeof(v7));
  if ( PopEtGlobals )
  {
    v4 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 488);
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
    {
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
        return (unsigned int)-1073741558;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v7);
      v2 = 1;
    }
    ProcessAppId = PopEtGetProcessAppId(BugCheckParameter1, v1 + 456);
    if ( ProcessAppId < 0 )
      *(_QWORD *)(v1 + 456) = PopEtGlobals + 880;
    else
      ProcessAppId = 0;
    if ( v2 )
    {
      KiUnstackDetachProcess((__int64)v7, 0);
      ExReleaseRundownProtection_0(v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
