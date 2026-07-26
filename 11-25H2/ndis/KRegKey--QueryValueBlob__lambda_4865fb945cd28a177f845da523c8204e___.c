/*
 * XREFs of KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x14014D548
 * Callers:
 *     ?ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z @ 0x1401409B0 (-ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z.c)
 * Callees:
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x140099380 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140141060 (--_V@YAXPEAX@Z.c)
 *     _lambda_4865fb945cd28a177f845da523c8204e_::operator() @ 0x1401732D0 (_lambda_4865fb945cd28a177f845da523c8204e_--operator().c)
 */

NTSTATUS __fastcall KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3)
{
  HANDLE v5; // rcx
  _DWORD *v6; // rbx
  NTSTATUS result; // eax
  void *Pool2; // rax
  NTSTATUS v9; // edi
  void *v10; // rdi
  int v11; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v13; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+180h] [rbp+80h] BYREF

  v15 = a3;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v5 = *a1;
  v13 = 0LL;
  ResultLength = 0;
  v6 = KeyValueInformation;
  result = ZwQueryValueKey(v5, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(&v13, Pool2);
    v6 = v13;
    if ( !v13 )
      return -1073741670;
    v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v13, ResultLength, &ResultLength);
    if ( v9 < 0 )
    {
      if ( v6 )
        operator delete[](v6);
      return v9;
    }
    v10 = v6;
  }
  else
  {
    v10 = 0LL;
    if ( result < 0 )
      return result;
  }
  if ( v6[1] == -65406 )
  {
    v11 = lambda_4865fb945cd28a177f845da523c8204e_::operator()(&v15, v6 + 3, (unsigned int)v6[2]);
    if ( v10 )
      operator delete[](v10);
    return v11;
  }
  else
  {
    if ( v10 )
      operator delete[](v10);
    return -1073741788;
  }
}
