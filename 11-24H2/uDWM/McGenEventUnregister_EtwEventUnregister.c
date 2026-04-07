/*
 * XREFs of McGenEventUnregister_EtwEventUnregister @ 0x1800C9DC4
 * Callers:
 *     DllMain @ 0x180076210 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventUnregister_EtwEventUnregister(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !Microsoft_Windows_Dwm_Udwm_Provider_Context[0] )
    return 0LL;
  result = EtwEventUnregister(Microsoft_Windows_Dwm_Udwm_Provider_Context[0], a2, a3);
  Microsoft_Windows_Dwm_Udwm_Provider_Context[0] = 0LL;
  return result;
}
