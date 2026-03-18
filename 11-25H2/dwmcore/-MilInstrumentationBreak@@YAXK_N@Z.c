/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1802BE264
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800E7A40 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1802328E4 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18023ABA0 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
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
        if ( !byte_18040AB86 )
          byte_18040AB86 = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_18040AB84, 2u, 0LL) >= 0;
        if ( byte_18040AB84 )
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
