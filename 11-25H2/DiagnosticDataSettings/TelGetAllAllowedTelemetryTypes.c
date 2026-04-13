/*
 * XREFs of TelGetAllAllowedTelemetryTypes @ 0x1800039F0
 * Callers:
 *     TelIsTelemetryTypeAllowed @ 0x180004770 (TelIsTelemetryTypeAllowed.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelEvaluateActiveSettingAuthority @ 0x1800038C0 (TelEvaluateActiveSettingAuthority.c)
 */

__int64 __fastcall TelGetAllAllowedTelemetryTypes(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int active; // eax
  __int64 v7; // r8
  unsigned int v8; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( a1 )
  {
    *a1 = 0;
    v10 = 0;
    active = TelEvaluateActiveSettingAuthority(&v10, &v11, a3);
    v8 = active;
    if ( active < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x11C, v7, (const char *)(unsigned int)active);
      return v8;
    }
    else if ( v10 )
    {
      if ( v10 != 1 )
        *a1 |= 6u;
      *a1 |= 1u;
    }
    return v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xFA, a3, (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
