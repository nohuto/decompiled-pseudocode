/*
 * XREFs of KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x14014EB1C
 * Callers:
 *     Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x14014EFA0 (Ndis--BindRegistry--LoadNetworkInterfaceAddress.c)
 * Callees:
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x140099380 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140141060 (--_V@YAXPEAX@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _WORD *a3)
{
  HANDLE v6; // rcx
  _DWORD *v7; // rdi
  NTSTATUS result; // eax
  void *Pool2; // rax
  NTSTATUS v10; // esi
  void *v11; // rsi
  unsigned int v12; // eax
  int v13; // ebx
  size_t v14; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-138h] BYREF
  PVOID v16; // [rsp+38h] [rbp-130h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v16 = 0LL;
  ResultLength = 0;
  v7 = KeyValueInformation;
  result = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(&v16, Pool2);
    v7 = v16;
    if ( !v16 )
      return -1073741670;
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v16, ResultLength, &ResultLength);
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
  if ( v7[1] == 3 )
  {
    v12 = v7[2];
    if ( v12 <= 0x20 )
    {
      v14 = (unsigned int)v7[2];
      *a3 = v12;
      memmove(a3 + 1, v7 + 3, v14);
      v13 = 0;
    }
    else
    {
      v13 = -1073741811;
    }
    if ( v11 )
      operator delete[](v11);
    return v13;
  }
  else
  {
    if ( v11 )
      operator delete[](v11);
    return -1073741788;
  }
}
