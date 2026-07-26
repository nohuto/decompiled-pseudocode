/*
 * XREFs of ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x140167820
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1401677D0 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015C750 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x14015C9F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___ @ 0x140167FF0 (KRegKey--QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV3Registry(
        struct NDIS_BIND_PROTOCOL_DRIVER *a1,
        __int64 a2,
        size_t a3,
        ULONG a4)
{
  NTSTATUS v5; // eax
  HANDLE v6; // rcx
  Rtl::KString *value; // rdx
  NTSTATUS v8; // eax
  HANDLE v9; // rcx
  HANDLE v11; // rcx
  bool v12; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _GUID v17; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszSrc[256]; // [rsp+A0h] [rbp-60h] BYREF

  a1->ProtocolBindFlags = 0;
  DestinationString = 0LL;
  if ( RtlUnicodeStringInitWorker(
         &DestinationString,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup",
         a3,
         a4) < 0 )
    return 0;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v6 = KeyHandle;
  if ( v5 < 0 )
  {
LABEL_11:
    if ( v6 )
      ZwClose(v6);
    return 0;
  }
  value = a1->Name.__ptr_.__value_;
  v17 = 0LL;
  if ( (int)KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___(&KeyHandle, value, &v17) < 0 )
    goto LABEL_10;
  netsetupBuildObjectPath(4LL, (int *)&v17, 0, 1u, pszSrc);
  Handle = 0LL;
  v8 = KRegKey::Open((KRegKey *)&Handle, 1u, pszSrc, 0LL);
  if ( v8 == -1073741772 )
  {
    if ( !*((_BYTE *)qword_14011D088 + 96) )
      goto LABEL_8;
    netsetupBuildObjectPath(4LL, (int *)&v17, 1u, 1u, pszSrc);
    v8 = KRegKey::Open((KRegKey *)&Handle, 1u, pszSrc, 0LL);
  }
  if ( v8 < 0 )
  {
LABEL_8:
    v9 = Handle;
    if ( Handle )
LABEL_9:
      ZwClose(v9);
LABEL_10:
    v6 = KeyHandle;
    goto LABEL_11;
  }
  v12 = 0;
  *(_QWORD *)&DestinationString.Length = &Handle;
  if ( (unsigned int)NetSetupPropertyBag::ReadBoolean(
                       (NetSetupPropertyBag *)&DestinationString,
                       (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_ProtocolDriver_NoStartAtBootHint,
                       &v12) )
  {
    v9 = Handle;
    if ( !Handle )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( !v12 )
    a1->ProtocolBindFlags |= 1u;
  v11 = Handle;
  a1->Guid = v17;
  if ( v11 )
    ZwClose(v11);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 1;
}
