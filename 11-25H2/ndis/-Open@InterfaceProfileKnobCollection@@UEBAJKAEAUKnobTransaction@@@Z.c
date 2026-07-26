/*
 * XREFs of ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140167770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140080280 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_RECORDER_SF__guid_d @ 0x140081440 (WPP_RECORDER_SF__guid_d.c)
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1400D07B0 (WPP_RECORDER_SF__guid_Dd.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140167E00 (-Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x140168E70 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x140169240 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1401694D0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1401695A0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x140169940 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x140172190 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140174B50 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall InterfaceProfileKnobCollection::Open(
        InterfaceProfileKnobCollection *this,
        unsigned int a2,
        struct KnobTransaction *a3)
{
  struct KnobTransaction *v3; // rdi
  __int64 result; // rax
  __int64 v7; // r12
  _BYTE *v8; // r15
  size_t v9; // r8
  ULONG v10; // r9d
  int v11; // edx
  NTSTATUS inited; // esi
  unsigned __int16 v13; // r9
  HANDLE v14; // rcx
  int v15; // ebx
  unsigned __int16 v16; // r9
  PVOID v17; // rcx
  ULONG v18; // r9d
  NTSTATUS v19; // r14d
  const struct _UNICODE_STRING *v20; // r8
  struct Rtl::KString *v21; // rax
  int v22; // edx
  PVOID v23; // rcx
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  wchar_t pszSrc[256]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = a3;
  result = RegistryKnobCollection::Open(this, a2, a3);
  if ( (int)result < 0 )
    return result;
  *((_BYTE *)v3 + 16) = 0;
  v7 = *((_QWORD *)this + 3) + 12LL;
  v8 = (char *)v3 + 16;
  Handle = 0LL;
  netsetupBuildObjectPath(2LL, v7, 0LL);
  DestinationString = 0LL;
  inited = RtlUnicodeStringInitWorker(&DestinationString, pszSrc, v9, v10);
  if ( inited >= 0 )
  {
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    Handle = KeyHandle;
  }
  if ( inited == -1073741772 )
  {
    netsetupBuildObjectPath(2LL, v7, 1LL);
    inited = KRegKey::Open((KRegKey *)&Handle, 1u, pszSrc, 0LL);
  }
  if ( inited < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        1u,
        0xAu,
        (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
        v7,
        1,
        inited);
    goto LABEL_26;
  }
  v26 = 0;
  KeyHandle = &Handle;
  P = 0LL;
  inited = NetSetupPropertyBag::ReadString(&KeyHandle, &NETSETUPPKEY_Operational_ExecutionContextProfile, &P);
  if ( inited < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = 11;
LABEL_15:
      WPP_RECORDER_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        v13,
        (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
        v7,
        inited);
      goto LABEL_25;
    }
    goto LABEL_25;
  }
  inited = NetSetupPropertyBag::ReadUint32(
             (NetSetupPropertyBag *)&KeyHandle,
             (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Operational_ExecutionContextProfileSource,
             &v26);
  if ( inited < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = 12;
      goto LABEL_15;
    }
LABEL_25:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
LABEL_26:
    if ( Handle )
      ZwClose(Handle);
    return (unsigned int)inited;
  }
  if ( v26 && v26 != 3 )
  {
    if ( v26 != 2 )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
      v14 = Handle;
      if ( !Handle )
        return 3221225524LL;
LABEL_40:
      ZwClose(v14);
      return 3221225524LL;
    }
    if ( !*(_WORD *)P )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
      v14 = Handle;
      if ( !Handle )
        return 3221225524LL;
      goto LABEL_40;
    }
    inited = KRegKey::Open((KRegKey *)v3, a2, L"Reserved\\ExecutionContextProfiles", *(void **)v3);
    if ( inited < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0x11u,
          (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
          inited);
      goto LABEL_25;
    }
    v15 = KRegKey::Open((KRegKey *)v3, a2, (const struct _UNICODE_STRING *)P, *(void **)v3);
    if ( v15 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = 18;
LABEL_72:
        WPP_RECORDER_SF__guid_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          v16,
          (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
          v7,
          v15);
        goto LABEL_73;
      }
      goto LABEL_73;
    }
    v3 = (struct KnobTransaction *)((char *)v3 + 8);
LABEL_33:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (void **)v3,
      0LL);
    v17 = P;
    *v8 = 1;
    P = 0LL;
    if ( v17 )
      ExFreePoolWithTag(v17, 0x7274534Bu);
    if ( Handle )
      ZwClose(Handle);
    return 0LL;
  }
  if ( (a2 & 2) != 0 )
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
    if ( Handle )
      ZwClose(Handle);
    return 3221225506LL;
  }
  v19 = KRegKey::Open((KRegKey *)v3 + 1, a2, L"Reserved\\ExecutionContextProfiles", *((void **)v3 + 1));
  if ( v19 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
        v19);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
LABEL_65:
    if ( Handle )
      ZwClose(Handle);
    return (unsigned int)v19;
  }
  v20 = (const struct _UNICODE_STRING *)P;
  if ( *(_WORD *)P )
  {
LABEL_69:
    v15 = KRegKey::Open((KRegKey *)v3 + 1, a2, v20, *((void **)v3 + 1));
    if ( v15 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = 16;
        goto LABEL_72;
      }
LABEL_73:
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
      if ( Handle )
        ZwClose(Handle);
      return (unsigned int)v15;
    }
    goto LABEL_33;
  }
  DestinationString = 0LL;
  v19 = RtlUnicodeStringInitWorker(&DestinationString, L"DefaultProfile", (const size_t)P, v18);
  if ( v19 >= 0 )
    v19 = KRegKey::QueryValueString((char *)v3 + 8, &DestinationString, &P);
  if ( v19 != -1073741772 )
  {
    if ( v19 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids,
          v19);
      v23 = P;
      P = 0LL;
      if ( v23 )
        ExFreePoolWithTag(v23, 0x7274534Bu);
      goto LABEL_65;
    }
    v20 = (const struct _UNICODE_STRING *)P;
    goto LABEL_69;
  }
  v21 = Rtl::KString::Initialize(L"Balanced");
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, v21);
  v20 = (const struct _UNICODE_STRING *)P;
  if ( P )
    goto LABEL_69;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 3;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      (_DWORD)P + 1,
      (_DWORD)P + 14,
      (struct _GUID *)&WPP_7350990bba9a33d8934e66c0f1152c3c_Traceguids);
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
  if ( Handle )
    ZwClose(Handle);
  return 3221225626LL;
}
