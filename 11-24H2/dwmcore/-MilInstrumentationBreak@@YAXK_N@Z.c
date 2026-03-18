/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1802B4C14
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800823C0 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180226E04 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18022EA90 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall MilInstrumentationBreak(char a1, char a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v4) = a2;
  if ( !g_fDisableInstrumentationBreaks )
  {
    v4 = 0;
    if ( RegGetHKLMDword(L"Software\\Microsoft\\Avalon.Graphics", L"DisableInstrumentationBreaking", &v4) && !v4 )
    {
      if ( (a1 & 8) == 0 || (unsigned int)IsKernelDebuggerPresent() )
        goto LABEL_10;
      if ( !IsDebuggerPresent() )
      {
        if ( !byte_1803FEA83 )
          byte_1803FEA83 = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1803FEA84, 2u, 0LL) >= 0;
        if ( byte_1803FEA84 )
LABEL_10:
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0xD6,
            (int)"onecoreuap\\windows\\dwm\\common\\util\\utillib\\debugbreak.cpp",
            (const char *)0x8007029CLL);
      }
    }
  }
}
