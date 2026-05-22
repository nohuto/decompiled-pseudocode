/*
 * XREFs of ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x1800A6918
 * Callers:
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800A63CC (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x180106904 (-evaluate_and_report@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z.c)
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
