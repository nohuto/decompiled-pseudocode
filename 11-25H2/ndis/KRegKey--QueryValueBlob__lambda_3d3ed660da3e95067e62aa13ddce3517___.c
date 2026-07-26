/*
 * XREFs of KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x140169BE0
 * Callers:
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1401694D0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 * Callees:
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x140099380 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140141060 (--_V@YAXPEAX@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _DWORD *a3)
{
  HANDLE v6; // rcx
  int v7; // edi
  _DWORD *v8; // rsi
  NTSTATUS result; // eax
  void *v10; // rdx
  void *Pool2; // rax
  NTSTATUS v12; // ebp
  ULONG ResultLength; // [rsp+30h] [rbp-138h] BYREF
  PVOID v14; // [rsp+38h] [rbp-130h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v7 = 0;
  v14 = 0LL;
  ResultLength = 0;
  v8 = KeyValueInformation;
  result = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result != -2147483643 )
  {
    v10 = 0LL;
    if ( result < 0 )
      return result;
    goto LABEL_3;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(&v14, Pool2);
  v8 = v14;
  if ( !v14 )
    return -1073741670;
  v12 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v14, ResultLength, &ResultLength);
  if ( v12 >= 0 )
  {
    v10 = v8;
LABEL_3:
    if ( v8[1] == -65529 )
    {
      if ( v8[2] == 4 )
        *a3 = v8[3];
      else
        v7 = -1073741762;
      if ( v10 )
        operator delete[](v10);
      return v7;
    }
    else
    {
      if ( v10 )
        operator delete[](v10);
      return -1073741788;
    }
  }
  if ( v8 )
    operator delete[](v8);
  return v12;
}
