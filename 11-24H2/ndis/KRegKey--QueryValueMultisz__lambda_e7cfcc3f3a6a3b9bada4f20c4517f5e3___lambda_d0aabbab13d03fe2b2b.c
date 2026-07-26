/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x14015CF30
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x14015CDE0 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140074B10 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140136070 (--_V@YAXPEAX@Z.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x14015D340 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___(
        HANDLE *a1,
        __int64 a2,
        unsigned int *a3,
        Ndis::BindStack *a4)
{
  HANDLE v7; // rcx
  unsigned int v8; // r15d
  wchar_t *Pool2; // r14
  wchar_t *v10; // rbx
  NTSTATUS result; // eax
  __int64 v12; // rax
  const wchar_t *v13; // rbp
  char *v14; // rcx
  char *v15; // rdx
  int v16; // edi
  const wchar_t *v17; // rsi
  bool v18; // zf
  int v19; // ebp
  NTSTATUS ValueKey; // ebp
  ULONG ResultLength[4]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v7 = *a1;
  v8 = 0;
  ResultLength[0] = 0;
  Pool2 = (wchar_t *)KeyValueInformation;
  v10 = 0LL;
  result = ZwQueryValueKey(
             v7,
             (PUNICODE_STRING)&Ndis::ProtocolListValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x100u,
             ResultLength);
  if ( result == -2147483643 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, ResultLength[0], 2052287565LL);
    v10 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    ValueKey = ZwQueryValueKey(
                 *a1,
                 (PUNICODE_STRING)&Ndis::ProtocolListValueName,
                 KeyValuePartialInformation,
                 Pool2,
                 ResultLength[0],
                 ResultLength);
    if ( ValueKey < 0 )
    {
      operator delete[](Pool2);
      return ValueKey;
    }
  }
  else if ( result < 0 )
  {
    return result;
  }
  if ( *((_DWORD *)Pool2 + 1) != 7 )
  {
    if ( v10 )
      operator delete[](v10);
    return -1073741788;
  }
  v12 = *((unsigned int *)Pool2 + 2);
  if ( (v12 & 1) != 0 )
  {
    if ( v10 )
      operator delete[](v10);
    return -1073741811;
  }
  v13 = Pool2 + 6;
  v14 = (char *)(Pool2 + 6);
  v15 = (char *)Pool2 + v12 + 12;
LABEL_6:
  if ( v14 >= v15 )
  {
    if ( !v10 )
      return -1073741789;
    goto LABEL_21;
  }
  if ( *(_WORD *)v14 )
  {
    while ( 1 )
    {
      v14 += 2;
      if ( v14 >= v15 )
        break;
      if ( !*(_WORD *)v14 )
      {
        ++v8;
        v14 += 2;
        goto LABEL_6;
      }
    }
    if ( !v10 )
      return -1073741789;
LABEL_21:
    operator delete[](v10);
    return -1073741789;
  }
  if ( v8 > 0x80 )
  {
    v16 = -1073740757;
    goto LABEL_41;
  }
  if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
          a3,
          v8) )
  {
    v16 = -1073741670;
LABEL_41:
    if ( v10 )
      operator delete[](v10);
    return v16;
  }
  while ( *v13 )
  {
    v17 = v13;
    do
    {
      v18 = v17[1] == 0;
      ++v17;
    }
    while ( !v18 );
    v19 = Ndis::BindStack::AddStaticProtocolBinding(a4, v13);
    if ( v19 < 0 )
    {
      if ( v10 )
        operator delete[](v10);
      return v19;
    }
    v13 = v17 + 1;
  }
  if ( v10 )
    operator delete[](v10);
  return 0;
}
