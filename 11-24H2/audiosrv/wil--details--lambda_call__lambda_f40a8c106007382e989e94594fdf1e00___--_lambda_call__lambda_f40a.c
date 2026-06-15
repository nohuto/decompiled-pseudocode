/*
 * XREFs of wil::details::lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___::_lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___ @ 0x18009E2DC
 * Callers:
 *     _CAudioDGProcess::LaunchADGProcess_::_1_::dtor$0 @ 0x180169D42 (_CAudioDGProcess--LaunchADGProcess_--_1_--dtor$0.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180059E78 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

char *__fastcall wil::details::lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___::_lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___(
        _BYTE *a1)
{
  char *v2; // rcx
  char *result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(char **)(*(_QWORD *)a1 + 88LL);
    result = v2 - 1;
    if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)(*(_QWORD *)a1 + 88LL),
        0LL);
      result = *(char **)a1;
      *(_DWORD *)(*(_QWORD *)a1 + 96LL) = 0;
    }
  }
  return result;
}
