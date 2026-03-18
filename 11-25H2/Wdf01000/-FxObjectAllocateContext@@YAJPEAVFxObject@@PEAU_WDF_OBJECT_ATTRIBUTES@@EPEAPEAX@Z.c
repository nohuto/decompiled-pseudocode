/*
 * XREFs of ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x140034F10
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x14001FCD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfCxDeviceInitAllocateContext @ 0x140092B90 (imp_WdfCxDeviceInitAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x140036F9C (WPP_IFR_SF_DDid.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

int __fastcall FxObjectAllocateContext(
        FxObject *Object,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int8 AllowCallbacksOnly,
        void **Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int v10; // r8d
  int result; // eax
  __int64 v12; // r8
  unsigned __int16 v13; // r9
  unsigned int v14; // edx
  int v15; // esi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 flags; // rdx
  unsigned __int64 v18; // r15
  int id; // edi
  unsigned int Tag; // ecx
  void *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v24; // rax
  unsigned __int64 ContextSizeOverride; // r8
  __int64 m_ObjectSize; // rax
  _QWORD *v27; // rbx
  KIRQL v28; // dl
  volatile __int64 *v29; // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  FxTagTracker *m_Lock; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-78h]
  FxPoolTypeOrPoolFlags v37; // [rsp+50h] [rbp-48h]
  FxPoolTypeOrPoolFlags v38; // [rsp+60h] [rbp-38h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int status; // [rsp+A0h] [rbp+8h] BYREF

  m_Globals = Object->m_Globals;
  WdfBindInfo = m_Globals->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
    v10 = 9;
  else
    v10 = 8;
  result = FxValidateObjectAttributes(Object->m_Globals, Attributes, v10);
  status = result;
  if ( result >= 0 )
  {
    if ( !Attributes->ContextTypeInfo && !AllowCallbacksOnly )
    {
      status = -1073741773;
      WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xCu, WPP_HandleAPI_cpp_Traceguids, Attributes, -1073741773);
      return status;
    }
    v14 = _InterlockedIncrement(&Object->m_Refcnt);
    v15 = 0;
    if ( SLOBYTE(Object->m_ObjectFlags) < 0 )
    {
      m_Lock = (FxTagTracker *)Object[-1].m_SpinLock.m_Lock;
      if ( m_Lock )
        FxTagTracker::UpdateTagHistory(
          m_Lock,
          &status,
          519,
          "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp",
          TagAddRef,
          v14);
    }
    ContextTypeInfo = Attributes->ContextTypeInfo;
    flags = 0LL;
    if ( ContextTypeInfo )
    {
      flags = Attributes->ContextSizeOverride;
      if ( flags )
      {
LABEL_38:
        v31 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v31 < flags )
        {
          status = -1073741675;
          goto LABEL_35;
        }
        v18 = v31 + 48;
        v32 = v18;
        if ( v18 < 0x30 )
        {
          v18 = -1LL;
          id = v32 < 0x30 ? 0xC0000095 : 0;
          goto LABEL_41;
        }
        id = v18 < 0x30 ? 0xC0000095 : 0;
LABEL_12:
        if ( m_Globals->FxVerifierHandle )
        {
          v34 = v18 + 48;
          v35 = v18;
          v12 = -1LL;
          if ( v18 + 48 >= v18 )
            v12 = v18 + 48;
          v18 = v12;
          id = v34 < v35 ? 0xC0000095 : 0;
        }
        if ( id >= 0 )
        {
LABEL_14:
          status = id;
          if ( id >= 0 )
          {
            Tag = m_Globals->Tag;
            *(_QWORD *)&v37.UsePoolType = 0LL;
            v37.u.PoolFlags = 64LL;
            if ( m_Globals->FxPoolTrackingOn )
              v21 = retaddr;
            else
              v21 = 0LL;
            v38 = v37;
            v22 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v38, v18, Tag, v21);
            v23 = v22;
            if ( v22 )
            {
              v22[1] = 0LL;
              v22[2] = 0LL;
              v22[3] = 0LL;
              v22[4] = 0LL;
              v22[5] = 0LL;
              *v22 = Object;
              v24 = Attributes->ContextTypeInfo;
              if ( v24 )
              {
                ContextSizeOverride = Attributes->ContextSizeOverride;
                if ( !ContextSizeOverride )
                  ContextSizeOverride = v24->ContextSize;
                memset(v23 + 6, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              }
              v23[4] = Attributes->ContextTypeInfo;
              m_ObjectSize = Object->m_ObjectSize;
              if ( (_WORD)m_ObjectSize )
                v27 = (FxObject_vtbl **)((char *)&Object->__vftable + m_ObjectSize);
              else
                v27 = 0LL;
              v28 = KeAcquireSpinLockRaiseToDpc(&Object->m_SpinLock.m_Lock);
              if ( Object->m_ObjectState == 1 && v27 )
              {
                v29 = v27 + 1;
                while ( v27 )
                {
                  if ( v27[4] == v23[4] )
                  {
                    if ( Context )
                      *Context = v27 + 6;
                    v15 = 0x40000000;
                    goto LABEL_34;
                  }
                  v29 = v27 + 1;
                  v27 = (_QWORD *)v27[1];
                }
                _InterlockedExchange64(v29, (__int64)v23);
                if ( Context )
                  *Context = v23 + 6;
                v23[3] = Attributes->EvtDestroyCallback;
                EvtCleanupCallback = Attributes->EvtCleanupCallback;
                if ( EvtCleanupCallback )
                {
                  v23[2] = EvtCleanupCallback;
                  Object->m_ObjectFlags |= 0x400u;
                }
LABEL_34:
                KeReleaseSpinLock(&Object->m_SpinLock.m_Lock, v28);
                status = v15;
                if ( !v15 )
                  goto LABEL_35;
              }
              else
              {
                KeReleaseSpinLock(&Object->m_SpinLock.m_Lock, v28);
                status = -1073741738;
              }
              FxPoolFree(v23);
            }
            else
            {
              status = -1073741670;
            }
          }
LABEL_35:
          Object->Release(Object, &status, 554, "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
          return status;
        }
LABEL_41:
        WPP_IFR_SF_DDid(m_Globals, flags, v12, v13, RefType, 0, 0, flags, id);
        goto LABEL_14;
      }
      flags = ContextTypeInfo->ContextSize;
    }
    v18 = 48LL;
    id = 0;
    if ( !flags )
      goto LABEL_12;
    goto LABEL_38;
  }
  return result;
}
