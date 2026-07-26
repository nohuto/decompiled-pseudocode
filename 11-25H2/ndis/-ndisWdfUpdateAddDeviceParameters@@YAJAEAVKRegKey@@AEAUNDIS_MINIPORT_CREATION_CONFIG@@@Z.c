/*
 * XREFs of ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1401763C0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14008AE90 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x140098690 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14014D108 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x140168E70 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 __fastcall ndisWdfUpdateAddDeviceParameters(struct KRegKey *a1, struct _GUID *a2)
{
  struct _GUID *v3; // rdi
  NTSTATUS SubkeyName; // ebx
  void *m_ptr; // r9
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  ULONG i; // esi
  __int64 v10; // [rsp+28h] [rbp-50h]
  PCUNICODE_STRING GuidString; // [rsp+30h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  GUID Guid; // [rsp+40h] [rbp-38h] BYREF

  v3 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      58,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids);
  }
  if ( IsIfBlockAvailable(v3) )
  {
    SubkeyName = 0;
    goto LABEL_18;
  }
  m_ptr = a1->m_ptr;
  Handle = 0LL;
  v6 = KRegKey::Open((KRegKey *)&Handle, 9u, L"NetworkInterface", m_ptr);
  SubkeyName = v6;
  if ( v6 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x3Bu,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        v6);
    v7 = Handle;
    if ( !Handle )
      goto LABEL_18;
LABEL_17:
    ZwClose(v7);
    goto LABEL_18;
  }
  for ( i = 0; ; ++i )
  {
    GuidString = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&Handle, i, (void **)&GuidString);
    if ( SubkeyName < 0 )
      break;
    Guid = 0LL;
    if ( RtlGUIDFromString(GuidString, &Guid) >= 0 && IsIfBlockAvailable(&Guid) )
    {
      SubkeyName = 0;
      *v3 = Guid;
      break;
    }
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
  v7 = Handle;
  if ( Handle )
    goto LABEL_17;
LABEL_18:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = SubkeyName;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Cu,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      v10);
  }
  return (unsigned int)SubkeyName;
}
