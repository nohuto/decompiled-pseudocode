/*
 * XREFs of ?IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18013C280
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18013B3FC (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 * Callees:
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x18003E290 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CChannelContext::IncreasePendingEffectCompilations(CChannelContext *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !CComposition::IsCompositionThread(this) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1D3,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\channelcontext.cpp",
      v2);
  if ( (*((_DWORD *)this + 32))++ == -1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1D6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\channelcontext.cpp",
      v2);
}
