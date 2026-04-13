/*
 * XREFs of TelIsTelemetryTypeAllowed @ 0x180004770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelGetAllAllowedTelemetryTypes @ 0x1800039F0 (TelGetAllAllowedTelemetryTypes.c)
 */

__int64 __fastcall TelIsTelemetryTypeAllowed(int a1, __int64 a2, __int64 a3)
{
  int AllAllowedTelemetryTypes; // ebx
  __int64 v5; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  AllAllowedTelemetryTypes = TelGetAllAllowedTelemetryTypes(&v8, a2, a3);
  if ( AllAllowedTelemetryTypes >= 0 )
    AllAllowedTelemetryTypes = (a1 & v8) != a1;
  if ( AllAllowedTelemetryTypes < 0 )
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xE8, v5, (const char *)(unsigned int)AllAllowedTelemetryTypes);
  return (unsigned int)AllAllowedTelemetryTypes;
}
