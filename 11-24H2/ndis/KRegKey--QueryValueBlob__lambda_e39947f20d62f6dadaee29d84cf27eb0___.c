/*
 * XREFs of KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___ @ 0x140167FF0
 * Callers:
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x140167820 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x14008DAB0 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140136070 (--_V@YAXPEAX@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _OWORD *a3)
{
  HANDLE v6; // rcx
  int v7; // edi
  _BYTE *v8; // r14
  NTSTATUS result; // eax
  void *Pool2; // rax
  NTSTATUS v11; // esi
  void *v12; // rcx
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
  if ( result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1852392018LL);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(&v14, Pool2);
    v8 = v14;
    if ( !v14 )
      return -1073741670;
    v11 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v14, ResultLength, &ResultLength);
    if ( v11 < 0 )
    {
      if ( v8 )
        operator delete[](v8);
      return v11;
    }
    v12 = v8;
  }
  else
  {
    v12 = 0LL;
    if ( result < 0 )
      return result;
  }
  if ( *((_DWORD *)v8 + 1) == 3 )
  {
    if ( *((_DWORD *)v8 + 2) == 16 )
      *a3 = *(_OWORD *)(v8 + 12);
    else
      v7 = -1073741811;
    if ( v12 )
      operator delete[](v12);
    return v7;
  }
  else
  {
    if ( v12 )
      operator delete[](v12);
    return -1073741788;
  }
}
