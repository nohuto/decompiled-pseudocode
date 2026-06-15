/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140021B30
 * Callers:
 *     ?Pause@CAudioPump@@UEAAJXZ @ 0x1400216D0 (-Pause@CAudioPump@@UEAAJXZ.c)
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x1400217F0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x14002BD10 (-Resume@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14005E7B0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9D8, v2, v3);
}
