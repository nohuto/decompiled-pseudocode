/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180050180
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180106258 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x1801062E0 (-GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        struct IMMDevice *a1,
        int a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+28h] [rbp-8h] BYREF

  v9 = 0LL;
  if ( a2 )
  {
    v10 = 0LL;
    if ( !a1
      || (v10 = 0LL,
          ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
            a1,
            &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
            &v10),
          !v10) )
    {
      v9 = 0LL;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
      v6 = 0;
      goto LABEL_7;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 40LL))(v10, 0LL, &v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v9);
  }
  if ( v6 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 1330, v6);
    goto LABEL_17;
  }
LABEL_7:
  v7 = v9;
  if ( v9 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
           v9,
           a3,
           a4);
    if ( v6 >= 0 )
    {
LABEL_9:
      v7 = v9;
      goto LABEL_10;
    }
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 2057, v6);
    goto LABEL_9;
  }
  *(_OWORD *)&a4->vt = 0LL;
  a4->bstrblobVal.pData = 0LL;
LABEL_10:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
