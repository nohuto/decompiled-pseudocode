/*
 * XREFs of PoEnergyContextStart @ 0x14083B7A8
 * Callers:
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PopEtInit @ 0x140C21A5C (PopEtInit.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopEtGetProcessAppId @ 0x14083B8B0 (PopEtGetProcessAppId.c)
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
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
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
      KiUnstackDetachProcess((__int64)v7, 0LL);
      ExReleaseRundownProtection_0(v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
