/*
 * XREFs of KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x140142B80
 * Callers:
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015C750 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 * Callees:
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x14008DAB0 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140136070 (--_V@YAXPEAX@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        char *a3)
{
  HANDLE v6; // rcx
  PVOID v7; // rbx
  _BYTE *v8; // rsi
  NTSTATUS result; // eax
  void *Pool2; // rax
  NTSTATUS v11; // esi
  void *v12; // rcx
  char v13; // dl
  int v14; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-138h] BYREF
  PVOID v16; // [rsp+38h] [rbp-130h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v7 = 0LL;
  ResultLength = 0;
  v16 = 0LL;
  v8 = KeyValueInformation;
  result = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018LL);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(&v16, Pool2);
    v7 = v16;
    if ( !v16 )
      return -1073741670;
    v11 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v16, ResultLength, &ResultLength);
    if ( v11 < 0 )
    {
      if ( v7 )
        operator delete[](v7);
      return v11;
    }
    v8 = v7;
    v12 = v7;
  }
  else
  {
    v12 = 0LL;
    if ( result < 0 )
      return result;
  }
  if ( *((_DWORD *)v8 + 1) != -65519 )
  {
    if ( v12 )
      operator delete[](v12);
    return -1073741788;
  }
  v13 = 1;
  if ( *((_DWORD *)v8 + 2) != 1 )
    goto LABEL_15;
  if ( !v8[12] )
  {
    v13 = 0;
    goto LABEL_20;
  }
  if ( v8[12] == 1 )
  {
LABEL_20:
    *a3 = v13;
    v14 = 0;
    goto LABEL_21;
  }
LABEL_15:
  v14 = -1073741762;
LABEL_21:
  if ( v7 )
    operator delete[](v7);
  return v14;
}
