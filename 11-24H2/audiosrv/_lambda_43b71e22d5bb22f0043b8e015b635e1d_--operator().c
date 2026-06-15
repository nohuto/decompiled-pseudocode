/*
 * XREFs of _lambda_43b71e22d5bb22f0043b8e015b635e1d_::operator() @ 0x18014FF2C
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x18000DE88 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     wil::details::lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___::_lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___ @ 0x1800A204C (wil--details--lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___--_lambda_call__lambda_43b7.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_43b71e22d5bb22f0043b8e015b635e1d_::operator()(__int64 a1)
{
  HSTRING v2; // rcx
  HSTRING v3; // rcx
  void **v4; // rdx
  void *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx

  v2 = **(HSTRING **)a1;
  if ( v2 )
  {
    WindowsDeleteString(v2);
    **(_QWORD **)a1 = 0LL;
  }
  v3 = **(HSTRING **)(a1 + 8);
  if ( v3 )
  {
    WindowsDeleteString(v3);
    **(_QWORD **)(a1 + 8) = 0LL;
  }
  v4 = *(void ***)(a1 + 16);
  v5 = *v4;
  if ( *v4 )
  {
    v6 = 0LL;
    if ( **(_DWORD **)(a1 + 24) )
    {
      do
      {
        v7 = *((_QWORD *)*v4 + v6);
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          v4 = *(void ***)(a1 + 16);
          *((_QWORD *)*v4 + v6) = 0LL;
        }
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < **(_DWORD **)(a1 + 24) );
      v5 = *v4;
    }
    CoTaskMemFree(v5);
  }
}
