/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000EF24
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x14000EDA0 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x14000CE9C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x14000F024 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x14000F0A0 (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x14000F0EC (-IsKernelDebuggerPresent@@YAHXZ.c)
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
    if ( RegGetHKLMDword(a1, a2, &v4)
      && !v4
      && ((v2 & 8) == 0
       || (unsigned int)IsKernelDebuggerPresent()
       || !IsDebuggerPresent() && (unsigned int)IsKernelDebuggerEnabled()) )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xD6,
        (__int64)"onecoreuap\\windows\\dwm\\common\\util\\utillib\\debugbreak.cpp",
        (const char *)0x8007029CLL);
    }
  }
}
