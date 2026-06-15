/*
 * XREFs of ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800591B4
 * Callers:
 *     ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x180059100 (-SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z.c)
 *     ?SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z @ 0x180107050 (-SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPolicyConfig::SetPropertyStoreProperty(
        struct IMMDevice *a1,
        int a2,
        const struct _tagpropertykey *a3,
        const struct tagPROPVARIANT *a4)
{
  int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+28h] [rbp-8h] BYREF

  v9 = 0LL;
  if ( a2 )
  {
    v8 = 0LL;
    if ( !a1
      || (v8 = 0LL,
          ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
            a1,
            &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
            &v8),
          !v8) )
    {
      v9 = 0LL;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
      goto LABEL_7;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 40LL))(v8, 1LL, &v9);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 1LL, &v9);
  }
  if ( v6 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 1330, v6);
    goto LABEL_14;
  }
LABEL_7:
  if ( v9 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, const struct tagPROPVARIANT *))(*(_QWORD *)v9 + 48LL))(
           v9,
           a3,
           a4);
    if ( v6 >= 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = -2147024894;
  }
LABEL_14:
  AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetPropertyStoreProperty", 2100, v6);
LABEL_9:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v6;
}
