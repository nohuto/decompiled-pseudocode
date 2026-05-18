/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18000F228
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18000F05C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18000F1F4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18000F35C (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18000F3D8 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall MilInstrumentationBreak(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  char v2; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v4) = (_BYTE)a2;
  v2 = (char)a1;
  if ( !g_fDisableInstrumentationBreaks )
  {
    v4 = 0;
    if ( RegGetHKLMDword(a1, a2, &v4) && !v4 )
    {
      if ( (v2 & 8) == 0 || (unsigned int)IsKernelDebuggerPresent() )
        goto LABEL_10;
      if ( !IsDebuggerPresent() )
      {
        if ( !byte_18001E67A )
          byte_18001E67A = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_18001E678, 2u, 0LL) >= 0;
        if ( byte_18001E678 )
LABEL_10:
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0xD6,
            (__int64)"onecoreuap\\windows\\dwm\\common\\util\\utillib\\debugbreak.cpp",
            (const char *)0x8007029CLL);
      }
    }
  }
}
