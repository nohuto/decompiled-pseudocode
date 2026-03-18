/*
 * XREFs of Controller_UcxEvtReset @ 0x140042BE0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtReset(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  if ( Controller_IsControllerAccessible(v2) )
  {
    Controller_InternalReset(v2, v3, v4);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 72), v3, 4, 195, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  }
  v7 = 1;
  v6 = 12LL;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64 *))qword_14006BD78)(UcxDriverGlobals, a1, &v6);
}
