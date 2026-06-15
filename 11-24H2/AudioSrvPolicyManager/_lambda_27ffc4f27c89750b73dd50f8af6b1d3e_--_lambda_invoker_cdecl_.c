/*
 * XREFs of _lambda_27ffc4f27c89750b73dd50f8af6b1d3e_::_lambda_invoker_cdecl_ @ 0x18001B950
 * Callers:
 *     <none>
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18002269C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800229C8 (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall lambda_27ffc4f27c89750b73dd50f8af6b1d3e_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  char *v5; // rsi
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(Context + 536);
  EnterCriticalSection((LPCRITICAL_SECTION)(Context + 536));
  v5 = (char *)*((_QWORD *)Context + 72);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v6);
    CloseHandle(v5);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v6);
  }
  *((_QWORD *)Context + 72) = 0LL;
  if ( v3 )
    LeaveCriticalSection(v3);
}
