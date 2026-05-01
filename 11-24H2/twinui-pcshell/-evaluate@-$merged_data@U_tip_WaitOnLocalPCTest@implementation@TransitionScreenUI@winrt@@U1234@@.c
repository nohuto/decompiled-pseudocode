/*
 * XREFs of ?evaluate@?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@EEAAXXZ @ 0x18065D200
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::evaluate(
        __int64 a1,
        const char *a2)
{
  __int64 v2; // r9
  const char *v3; // rax
  __int64 v4; // r9
  char v5; // r10

  v2 = *(_QWORD *)(a1 + 264);
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 0x4000;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x200) != 0 )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::waitonlocal_succeeded", a2);
    if ( *(_BYTE *)(v4 + 152) == v5 )
    {
      *(_QWORD *)(v4 + 160) = v3;
      *(_BYTE *)(v4 + 152) = 1;
      *(_WORD *)(v4 + 154) = 1;
    }
  }
  else if ( !*(_BYTE *)(v2 + 152) )
  {
    *(_WORD *)(v2 + 154) = 16385;
LABEL_4:
    *(_BYTE *)(v2 + 152) = 3;
    *(_QWORD *)(v2 + 160) = 0LL;
  }
}
