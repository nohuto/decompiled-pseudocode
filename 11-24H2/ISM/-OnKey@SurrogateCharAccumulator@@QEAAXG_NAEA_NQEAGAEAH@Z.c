/*
 * XREFs of ?OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z @ 0x1800F4584
 * Callers:
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800F4B34 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 *     ?SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@K@Z @ 0x18015EA40 (-SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SurrogateCharAccumulator::OnKey(
        SurrogateCharAccumulator *this,
        unsigned __int16 a2,
        unsigned __int8 a3,
        bool *a4,
        unsigned __int16 *const a5,
        int *a6)
{
  __int64 v7; // rcx
  __int16 v8; // ax
  unsigned __int16 v9; // ax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  a5[2] = 0;
  *a4 = 0;
  if ( (unsigned __int16)(a2 + 10240) > 0x3FFu )
  {
    v7 = 2LL * a3;
    if ( (unsigned __int16)(a2 + 9216) <= 0x3FFu && (v8 = *(_WORD *)((char *)this + v7)) != 0 )
    {
      if ( (unsigned __int16)(v8 + 10240) > 0x3FFu )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x31,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\InputServiceProxy.h",
          (const char *)a4);
      *a6 = 2;
      v9 = a2;
      a2 = *(_WORD *)((char *)this + v7);
    }
    else
    {
      *a6 = 1;
      v9 = 0;
    }
    *a5 = a2;
    a5[1] = v9;
    *(_WORD *)((char *)this + v7) = 0;
  }
  else
  {
    *((_WORD *)this + a3) = a2;
    *a4 = 1;
  }
}
