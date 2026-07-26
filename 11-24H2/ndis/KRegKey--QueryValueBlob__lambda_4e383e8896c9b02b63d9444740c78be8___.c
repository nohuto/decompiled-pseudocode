/*
 * XREFs of KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___ @ 0x140137880
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8____0 @ 0x1401379F8 (KRegKey--QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8____0.c)
 * Callees:
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x14008DAB0 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140136070 (--_V@YAXPEAX@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _OWORD *a3)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rdi
  NTSTATUS result; // eax
  void *Pool2; // rax
  NTSTATUS v10; // esi
  void *v11; // rcx
  int v12; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-138h] BYREF
  PVOID v14; // [rsp+38h] [rbp-130h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v14 = 0LL;
  ResultLength = 0;
  v7 = KeyValueInformation;
  result = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018LL);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(&v14, Pool2);
    v7 = v14;
    if ( !v14 )
      return -1073741670;
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v14, ResultLength, &ResultLength);
    if ( v10 < 0 )
    {
      if ( v7 )
        operator delete[](v7);
      return v10;
    }
    v11 = v7;
  }
  else
  {
    v11 = 0LL;
    if ( result < 0 )
      return result;
  }
  if ( *((_DWORD *)v7 + 1) == 3 )
  {
    if ( *((_DWORD *)v7 + 2) == 16 )
    {
      *a3 = *(_OWORD *)(v7 + 12);
      v12 = 0;
    }
    else
    {
      v12 = -1073741453;
    }
    if ( v11 )
      operator delete[](v11);
    return v12;
  }
  else
  {
    if ( v11 )
      operator delete[](v11);
    return -1073741788;
  }
}
