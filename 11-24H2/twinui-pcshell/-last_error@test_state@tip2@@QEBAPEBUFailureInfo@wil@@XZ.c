/*
 * XREFs of ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x180294F00
 * Callers:
 *     ?evaluate_and_report@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1803366B0 (-evaluate_and_report@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate_and_report@?$shared_data@$00$00$00@details@tip2@@AEAAX_J@Z @ 0x1803C3528 (-evaluate_and_report@-$shared_data@$00$00$00@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1803C3790 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate@_tip_QuickSwitchTest@@QEAAXXZ @ 0x1804A03B4 (-evaluate@_tip_QuickSwitchTest@@QEAAXXZ.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x180698C04 (-evaluate_and_report@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     <none>
 */

const struct wil::FailureInfo *__fastcall tip2::test_state::last_error(tip2::test_state *this)
{
  __int64 v1; // rdx
  int v2; // r8d
  __int64 v3; // r9
  const struct wil::FailureInfo *result; // rax
  int v5; // ecx

  v1 = *((_QWORD *)this + 8);
  v2 = 0;
  v3 = v1 + 168LL * *((_QWORD *)this + 10);
  result = 0LL;
  while ( v1 != v3 )
  {
    v5 = *(_DWORD *)(v1 + 8);
    if ( v2 != v5 )
      result = (const struct wil::FailureInfo *)v1;
    v1 += 168LL;
    if ( v2 == v5 )
      v5 = v2;
    v2 = v5;
  }
  return result;
}
