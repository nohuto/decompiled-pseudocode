/*
 * XREFs of imp_WdfDriverOpenParametersRegistryKey @ 0x140052260
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400532F8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x1400564AC (-_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

__int64 __fastcall imp_WdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  FX_POOL **v13; // rax
  FX_POOL **v14; // rsi
  int v15; // ebx
  signed int v16; // eax
  void *hKey; // [rsp+40h] [rbp-61h] BYREF
  WDFKEY__ *status; // [rsp+48h] [rbp-59h] BYREF
  FxDriver *pDriver; // [rsp+50h] [rbp-51h] BYREF
  _UNICODE_STRING parameters; // [rsp+58h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-39h] BYREF
  wchar_t parameters_buffer[12]; // [rsp+98h] [rbp-9h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDriver = 0LL;
  hKey = 0LL;
  status = 0LL;
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v5, KeyAttributes, 0);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(v5, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
      v13 = FxObjectHandleAlloc2(v5, v11, 0x78uLL, v12, KeyAttributes, 0, FxObjectTypeExternal);
      v14 = v13;
      if ( !v13 )
        return 3221225626LL;
      FxObject::FxObject((FxObject *)v13, 0x1006u, 0x78u, v5);
      *((_WORD *)v14 + 12) |= 0x11u;
      *v14 = (FX_POOL *)FxRegKey::`vftable';
      v14[13] = 0LL;
      v14[14] = 0LL;
      v15 = FxObject::Commit((FxObject *)v14, KeyAttributes, (void **)&status, 0LL, 1u);
      if ( v15 >= 0 )
      {
        if ( (DesiredAccess & 0x7FFDFFE6) != 0 )
        {
          WPP_IFR_SF_(v5, 3u, 6u, 0xAu, WPP_FxDriverApiKm_cpp_Traceguids);
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ObjectAttributes.ObjectName = &pDriver->m_RegistryPath;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          ObjectAttributes.RootDirectory = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v15 = ZwOpenKey(&hKey, 0xF003Fu, &ObjectAttributes);
          if ( v15 >= 0 )
          {
            parameters.Buffer = parameters_buffer;
            wcscpy(parameters_buffer, L"Parameters");
            *(_QWORD *)&parameters.Length = 1441812LL;
            v15 = FxRegKey::_Create(hKey, &parameters, (void **)v14 + 14, DesiredAccess, 0, 0LL);
            if ( v15 >= 0 )
              *Key = status;
            ZwClose(hKey);
            if ( v15 >= 0 )
              return (unsigned int)v15;
          }
        }
        else
        {
          v16 = IoOpenDriverRegistryKey(pDriver->m_DriverObject.m_DriverObject, 0LL, DesiredAccess, 0LL, &hKey);
          v15 = v16;
          if ( v16 >= 0 )
          {
            v14[14] = (FX_POOL *)hKey;
            *Key = status;
            return (unsigned int)v15;
          }
          WPP_IFR_SF_D(v5, 2u, 6u, 0xBu, WPP_FxDriverApiKm_cpp_Traceguids, v16);
        }
      }
      FxObject::DeleteFromFailedCreate((FxObject *)v14);
      return (unsigned int)v15;
    }
  }
  return result;
}
