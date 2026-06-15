/*
 * XREFs of ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18004F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        struct tagPROPVARIANT *a5)
{
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF

  v12 = 0LL;
  if ( !a2 || !a5 )
  {
    v7 = -2147467261;
    goto LABEL_4;
  }
  v7 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a2,
         &v12);
  if ( v7 < 0 )
  {
LABEL_4:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyValue", 1440, v7);
    goto LABEL_17;
  }
  v10 = 0LL;
  if ( a3 )
  {
    v11 = 0LL;
    if ( !v12
      || ((**(void (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
            v12,
            &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
            &v11),
          !v11) )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
      v7 = 0;
      goto LABEL_11;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, 0LL, &v10);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, &v10);
  }
  if ( v7 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 1330, v7);
    goto LABEL_25;
  }
LABEL_11:
  v8 = v10;
  if ( v10 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
           v10,
           a4,
           a5);
    if ( v7 >= 0 )
    {
LABEL_13:
      v8 = v10;
      goto LABEL_14;
    }
LABEL_25:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 2057, v7);
    goto LABEL_13;
  }
  *(_OWORD *)&a5->vt = 0LL;
  a5->bstrblobVal.pData = 0LL;
LABEL_14:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 < 0 )
    goto LABEL_4;
LABEL_17:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v7;
}
