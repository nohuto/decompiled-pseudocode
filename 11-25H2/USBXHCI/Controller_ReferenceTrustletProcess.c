/*
 * XREFs of Controller_ReferenceTrustletProcess @ 0x1400421DC
 * Callers:
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_ReferenceTrustletProcess(_QWORD *a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // r9d
  __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( !a1[129] )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01033 + 3584))(
           WdfDriverGlobals,
           *a1,
           &v7);
    if ( (v2 & 0x80000000) == 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3600))(WdfDriverGlobals, v7);
      a1[129] = v5;
      if ( v5 )
        return v2;
      v2 = -1073741436;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      v4 = 289;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      v4 = 288;
    }
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(a1[9], v3, 4, v4, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v2);
    return v2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1[9], 2, 4, 287, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
  return (unsigned int)-1073741436;
}
