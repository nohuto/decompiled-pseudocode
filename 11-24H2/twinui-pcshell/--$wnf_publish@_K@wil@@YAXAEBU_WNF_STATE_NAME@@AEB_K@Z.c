/*
 * XREFs of ??$wnf_publish@_K@wil@@YAXAEBU_WNF_STATE_NAME@@AEB_K@Z @ 0x1800A4364
 * Callers:
 *     ?OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800A3F70 (-OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_publish<unsigned __int64>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  result = (unsigned int)RtlPublishWnfStateData(WNF_NPSM_FOREGROUND_WINDOW, 0LL, a2, 8LL) | 0x10000000;
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x361,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)result,
      0);
  return result;
}
