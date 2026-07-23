/*
 * XREFs of PoEnergyContextStart @ 0x1408DEB60
 * Callers:
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PopEtInit @ 0x140C34CA0 (PopEtInit.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopEtGetProcessAppId @ 0x1408DEC68 (PopEtGetProcessAppId.c)
 */

__int64 __fastcall PoEnergyContextStart(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // r14
  char v2; // si
  struct _EX_RUNDOWN_REF *v4; // rdi
  int ProcessAppId; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 1640);
  v2 = 0;
  memset(v9, 0, sizeof(v9));
  if ( PopEtGlobals )
  {
    v4 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 488);
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
        return (unsigned int)-1073741558;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v9);
      v2 = 1;
    }
    ProcessAppId = PopEtGetProcessAppId(BugCheckParameter1, v1 + 456);
    if ( ProcessAppId < 0 )
      *(_QWORD *)(v1 + 456) = PopEtGlobals + 880;
    else
      ProcessAppId = 0;
    if ( v2 )
    {
      KiUnstackDetachProcess((__int64)v9, 0, v6, v7);
      ExReleaseRundownProtection_0(v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
