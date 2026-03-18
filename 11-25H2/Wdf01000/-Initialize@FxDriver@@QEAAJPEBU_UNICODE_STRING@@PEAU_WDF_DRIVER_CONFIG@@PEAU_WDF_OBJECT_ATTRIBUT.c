/*
 * XREFs of ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004CD14
 * Callers:
 *     imp_WdfDriverCreate @ 0x14006CBA0 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1400425FC (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?AllocateDriverObjectExtensionAndStoreFxDriver@FxDriver@@QEAAJXZ @ 0x14004CCC4 (-AllocateDriverObjectExtensionAndStoreFxDriver@FxDriver@@QEAAJXZ.c)
 *     ?ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004D004 (-ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14004E2AC (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x140059520 (-_RequiresRemLock@FxDevice@@SA-AW4FxDeviceRemLockAction@@EE@Z.c)
 *     WPP_IFR_SF_qZ @ 0x140095470 (WPP_IFR_SF_qZ.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall FxDriver::Initialize(
        FxDriver *this,
        const _UNICODE_STRING *ArgRegistryPath,
        _WDF_DRIVER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _DRIVER_OBJECT *m_DriverObject; // rdx
  NTSTATUS DriverObjectExtensionAndStoreFxDriver; // ebx
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  __int64 v13; // r9
  unsigned __int16 Length; // ax
  _FX_DRIVER_GLOBALS *v15; // r10
  unsigned __int16 v16; // cx
  void *v17; // rax
  unsigned __int64 v18; // rbp
  FX_POOL **v19; // rax
  wchar_t *v21; // rax
  wchar_t *Buffer; // rax
  unsigned int DriverInitFlags; // ecx
  _DRIVER_EXTENSION *DriverExtension; // rax
  unsigned __int8 v25; // cl
  bool v26; // zf
  char v27; // cl
  __int64 v28; // r8
  __int64 (__fastcall *v29)(_DEVICE_OBJECT *, _IRP *); // rax
  const _GUID *level; // [rsp+20h] [rbp-48h]
  __m128i v31; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  m_Globals = this->m_Globals;
  FxObject::MarkNoDeleteDDI(this, ObjectLock);
  this->m_ObjectFlags |= 0x800u;
  FxDriver::ConfigureConstraints(this, DriverAttributes);
  m_DriverObject = this->m_DriverObject.m_DriverObject;
  if ( m_DriverObject )
  {
    DriverObjectExtensionAndStoreFxDriver = FxDisposeList::_Create(m_Globals, m_DriverObject, &this->m_DisposeList);
    if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
    {
      DriverObjectExtensionAndStoreFxDriver = FxDriver::AllocateDriverObjectExtensionAndStoreFxDriver(this);
      if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
      {
        if ( (Config->DriverInitFlags & 2) == 0 )
        {
          this->m_DriverDeviceAdd.Method = Config->EvtDriverDeviceAdd;
          this->m_DriverUnload.Method = Config->EvtDriverUnload;
        }
        if ( ArgRegistryPath )
        {
          Length = ArgRegistryPath->Length;
          v15 = this->m_Globals;
          this->m_RegistryPath.Length = ArgRegistryPath->Length;
          v31.m128i_i64[0] = 0LL;
          v16 = Length + 2;
          v31.m128i_i64[1] = 256LL;
          v17 = retaddr;
          this->m_RegistryPath.MaximumLength = v16;
          if ( !v15->FxPoolTrackingOn )
            v17 = 0LL;
          v18 = v16;
          v19 = FxPoolAllocator(v15, &v15->FxPoolFrameworks, &v31, v16, v15->Tag, v17);
          this->m_RegistryPath.Buffer = (wchar_t *)v19;
          if ( v19 )
          {
            memmove(v19, ArgRegistryPath->Buffer, ArgRegistryPath->Length);
            this->m_RegistryPath.Buffer[(v18 >> 1) - 1] = 0;
            v21 = wcsrchr(this->m_RegistryPath.Buffer, 0x5Cu);
            if ( v21 )
              Buffer = v21 + 1;
            else
              Buffer = this->m_RegistryPath.Buffer;
            this->m_ServiceName = Buffer;
          }
          else
          {
            *(_DWORD *)&this->m_RegistryPath.Length = 0;
            DriverObjectExtensionAndStoreFxDriver = -1073741670;
          }
        }
        if ( m_Globals->IsDriverCompanion )
        {
          this->m_DriverObject.m_DriverObject->DriverExtension->AddDevice = FxDriver::AddDevice;
          this->m_DriverObject.m_DriverObject->DriverUnload = FxDriver::Unload;
        }
        else if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
        {
          DriverInitFlags = Config->DriverInitFlags;
          if ( (DriverInitFlags & 2) == 0 )
          {
            DriverExtension = this->m_DriverObject.m_DriverObject->DriverExtension;
            if ( (DriverInitFlags & 1) != 0 )
            {
              DriverExtension->AddDevice = 0LL;
              this->m_DriverObject.m_DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))((unsigned __int64)FxDriver::Unload & -(__int64)(Config->EvtDriverUnload != 0LL));
            }
            else
            {
              DriverExtension->AddDevice = FxDriver::AddDevice;
              this->m_DriverObject.m_DriverObject->DriverUnload = FxDriver::Unload;
            }
            v25 = 0;
            do
            {
              v26 = FxDevice::_RequiresRemLock(v25, 0) == FxDeviceRemLockNotRequired;
              v29 = (__int64 (__fastcall *)(_DEVICE_OBJECT *, _IRP *))FxDevice::Dispatch;
              if ( !v26 )
                v29 = FxDevice::DispatchWithLock;
              *(_QWORD *)(v13 + v28) = v29;
              v25 = v27 + 1;
              v12 = v28 + 8;
            }
            while ( v25 <= 0x1Bu );
          }
          if ( (_BYTE)KdDebuggerEnabled == 1 && !(_BYTE)KdDebuggerNotPresent )
            this->m_DebuggerConnected = 1;
          if ( (Config->DriverInitFlags & 1) != 0 && !Config->EvtDriverUnload )
            WPP_IFR_SF_qZ(m_Globals, v11, v12, v13, level, this->m_DriverObject.m_DriverObject, &this->m_RegistryPath);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)DriverObjectExtensionAndStoreFxDriver;
}
