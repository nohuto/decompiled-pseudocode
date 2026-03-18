/*
 * XREFs of ?MilCompositionEngine_GetComposedEventId@@YAJPEAI@Z @ 0x180236610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x180266E0C (-GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall MilCompositionEngine_GetComposedEventId(unsigned int *a1)
{
  int ComposedEventId; // ebx
  __int64 v2; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !g_pConnection )
  {
    ComposedEventId = -2147483634;
    v2 = 43LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)(unsigned int)ComposedEventId);
    return (unsigned int)ComposedEventId;
  }
  ComposedEventId = CInternalMilCmdConnection::GetComposedEventId(g_pConnection, a1);
  if ( ComposedEventId < 0 )
  {
    v2 = 44LL;
    goto LABEL_3;
  }
  return 0LL;
}
