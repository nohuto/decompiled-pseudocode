/*
 * XREFs of ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015BC80
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14006E990 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015BAD0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x140069B30 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ndisIfReadHiddenFlag @ 0x140135CE0 (ndisIfReadHiddenFlag.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015C360 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x14015C4A0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015C580 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015C750 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x140165940 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ndisIfReadInterfaceAddDeviceParameters(
        struct NDIS_MINIPORT_CREATION_CONFIG *a1,
        struct _DEVICE_OBJECT *a2)
{
  struct Rtl::KString *v3; // r15
  int v5; // edi
  size_t v6; // r8
  ULONG v7; // r9d
  int Boolean; // eax
  HANDLE v10; // rcx
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE *p_Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v13; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszSrc[48]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0LL;
  Handle = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey((__int64)a1, (KRegKey *)&Handle, 1u, 1);
  if ( v5 < 0 )
  {
LABEL_10:
    if ( Handle )
      ZwClose(Handle);
    return (unsigned int)v5;
  }
  p_Handle = &Handle;
  if ( (unsigned int)NetSetupPropertyBag::ReadUint64(
                       (NetSetupPropertyBag *)&p_Handle,
                       (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_NetLuid,
                       (unsigned __int64 *)a1 + 2) )
    goto LABEL_20;
  if ( !(unsigned int)NetSetupPropertyBag::ReadUint32(
                        (NetSetupPropertyBag *)&p_Handle,
                        (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_PhysicalMediaType,
                        (unsigned int *)a1 + 11) )
    *((_BYTE *)a1 + 40) = 1;
  v13 = 0;
  if ( (unsigned int)NetSetupPropertyBag::ReadUint32(
                       (NetSetupPropertyBag *)&p_Handle,
                       (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_INF_Characteristics,
                       &v13)
    || (*((_BYTE *)a1 + 72) = (v13 & 2) != 0,
        (unsigned int)NetSetupPropertyBag::ReadBoolean(
                        (NetSetupPropertyBag *)&p_Handle,
                        (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IsVirtual,
                        (bool *)a1 + 73))
    || (unsigned int)NetSetupPropertyBag::ReadBoolean(
                       (NetSetupPropertyBag *)&p_Handle,
                       (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IsPhysical,
                       (bool *)a1 + 74)
    || ndisIfReadHiddenFlag((NetSetupPropertyBag *)&p_Handle, a2, (bool *)a1 + 75) )
  {
LABEL_20:
    v10 = Handle;
    if ( !Handle )
      return 3221225805LL;
    goto LABEL_18;
  }
  v5 = RtlStringCchPrintfW(
         pszSrc,
         48LL,
         L"\\Device\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         *(unsigned int *)a1,
         *((unsigned __int16 *)a1 + 2),
         *((unsigned __int16 *)a1 + 3),
         *((unsigned __int8 *)a1 + 8),
         *((unsigned __int8 *)a1 + 9),
         *((unsigned __int8 *)a1 + 10),
         *((unsigned __int8 *)a1 + 11),
         *((unsigned __int8 *)a1 + 12),
         *((unsigned __int8 *)a1 + 13),
         *((unsigned __int8 *)a1 + 14),
         *((unsigned __int8 *)a1 + 15));
  if ( v5 < 0 )
    goto LABEL_10;
  DestinationString = 0LL;
  if ( RtlUnicodeStringInitWorker(&DestinationString, pszSrc, v6, v7) >= 0 )
    v3 = Rtl::KString::Initialize(&DestinationString);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)a1 + 7, v3);
  if ( *((_QWORD *)a1 + 7) )
  {
    Boolean = NetSetupPropertyBag::ReadBoolean(
                (NetSetupPropertyBag *)&p_Handle,
                (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IsLightweight,
                (bool *)a1 + 89);
    v10 = Handle;
    if ( Boolean )
    {
      if ( !Handle )
        return 3221225805LL;
LABEL_18:
      ZwClose(v10);
      return 3221225805LL;
    }
    if ( Handle )
      ZwClose(Handle);
    return 0LL;
  }
  else
  {
    if ( Handle )
      ZwClose(Handle);
    return 3221225626LL;
  }
}
