/*
 * XREFs of ?test_interface_with_exception_guard@details@tip2@@YA_NAEAUtest_data_interface@12@PEAVoutput_archive@tson@@W4serialize_options@12@PEAVinput_archive@5@PEBUTipReportingInfo@@@Z @ 0x1800A7680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall tip2::details::test_interface_with_exception_guard(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rax
  char result; // al

  try
  {
    v5 = *a1;
    if ( a2 )
    {
      (*(void (**)(void))(v5 + 8))();
    }
    else if ( a4 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(v5 + 16))(a1, a4);
    }
    else if ( a5 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(v5 + 24))(a1, a5);
    }
    else
    {
      (*(void (**)(void))v5)();
    }
    result = 1;
  }
  catch ( ... )
  {
    return 0;
  }
  return result;
}
