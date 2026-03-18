/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeCompleteDpc @ 0x140018A90
 * Callers:
 *     <none>
 * Callees:
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x140018AD4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_WdfEvtTimer20PortResumeCompleteDpc(__int64 a1)
{
  _QWORD **v1; // rax

  v1 = (_QWORD **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_14006B268);
  return RootHub_WdfEvtTimer20PortResumeComplete(**v1, *((unsigned int *)*v1 + 2));
}
