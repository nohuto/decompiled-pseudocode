/*
 * XREFs of _lambda_661bc23c674c805837064d315685ee67_::operator() @ 0x18074ADBC
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x18074ABF8 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_661bc23c674c805837064d315685ee67_::operator()(_QWORD **a1, __int64 a2)
{
  char v4; // di
  int (__fastcall *v5)(__int64, HSTRING *); // rbp
  HSTRING v6; // rsi
  DWORD LastError; // ebx
  PCWSTR StringRawBuffer; // rax
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  HSTRING string; // [rsp+60h] [rbp+18h] BYREF

  string = 0LL;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 88LL))(a2, &v10) < 0 )
    goto LABEL_7;
  v4 = 1;
  if ( v10 > 1 )
    goto LABEL_7;
  v5 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL);
  v6 = string;
  if ( string )
  {
    LastError = GetLastError();
    WindowsDeleteString(v6);
    SetLastError(LastError);
  }
  if ( v5(a2, &string) < 0
    || (StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL), (unsigned int)_o__wcsicmp(**a1, StringRawBuffer)) )
  {
LABEL_7:
    v4 = 0;
  }
  if ( string )
    WindowsDeleteString(string);
  return v4;
}
