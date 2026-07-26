/*
 * XREFs of ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x140169500
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14006E990 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x14008CD60 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1401424B8 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 __fastcall ndisWdfUpdateAddDeviceParameters(struct KRegKey *a1, struct _GUID *a2)
{
  struct _GUID *v3; // rdi
  int v4; // edx
  NTSTATUS SubkeyName; // ebx
  void *m_ptr; // r9
  NTSTATUS v7; // eax
  HANDLE v8; // rcx
  ULONG i; // esi
  PCUNICODE_STRING GuidString; // [rsp+30h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  GUID Guid; // [rsp+40h] [rbp-38h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      58,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids);
  }
  if ( IsIfBlockAvailable(v3) )
  {
    SubkeyName = 0;
    goto LABEL_18;
  }
  m_ptr = a1->m_ptr;
  Handle = 0LL;
  v7 = KRegKey::Open((KRegKey *)&Handle, 9u, L"NetworkInterface", m_ptr);
  SubkeyName = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        13,
        59,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        v7);
    }
    v8 = Handle;
    if ( !Handle )
      goto LABEL_18;
LABEL_17:
    ZwClose(v8);
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
  v8 = Handle;
  if ( Handle )
    goto LABEL_17;
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      13,
      60,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      SubkeyName);
  }
  return (unsigned int)SubkeyName;
}
