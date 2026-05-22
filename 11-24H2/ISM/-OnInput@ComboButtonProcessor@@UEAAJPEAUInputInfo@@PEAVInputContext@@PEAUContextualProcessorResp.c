/*
 * XREFs of ?OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801A4D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801A5DEC (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall ComboButtonProcessor::OnInput(
        ButtonRecognizer **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // edi
  ButtonRecognizer *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(char *)a2 >= 0 )
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  else
  {
    v6 = ButtonRecognizer::DetectComboButton(this[6], a2);
    v7 = 0;
    v8 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x71,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\c"
                 "ombobuttonprocessor.cpp",
        (const char *)(unsigned int)v6);
      return v8;
    }
    v10 = this[6];
    if ( *((_BYTE *)v10 + 16) )
    {
      *((_DWORD *)a4 + 2) = 3;
    }
    else
    {
      LOBYTE(v7) = *((_BYTE *)v10 + 17) != 0;
      *((_DWORD *)a4 + 2) = v7;
    }
  }
  return 0LL;
}
