/*
 * XREFs of imp_WdfObjectAllocateContext @ 0x140034B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x140036F9C (WPP_IFR_SF_DDid.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall imp_WdfObjectAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Context)
{
  __int64 v6; // rcx
  unsigned __int16 *v7; // rbx
  _FX_DRIVER_GLOBALS *v8; // rdi
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  FxTagTracker *v12; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  __int64 v14; // r9
  unsigned __int64 flags; // rdx
  unsigned __int64 v16; // r15
  int id; // esi
  unsigned int v18; // ecx
  void *v19; // rax
  _OWORD *v20; // rax
  _QWORD *v21; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v22; // rax
  unsigned __int64 ContextSizeOverride; // r8
  _QWORD *v24; // rsi
  __int64 v25; // rax
  KIRQL v26; // dl
  volatile __int64 *v27; // rcx
  int v28; // esi
  void (__fastcall *EvtCleanupCallback)(void *); // rax
  unsigned int v30; // ebx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-50h]
  FxPoolTypeOrPoolFlags v37; // [rsp+50h] [rbp-20h]
  FxPoolTypeOrPoolFlags v38; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int Tag; // [rsp+A8h] [rbp+38h] BYREF

  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  LOWORD(v6) = 0;
  v7 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v6 = *v7;
    v7 = (unsigned __int16 *)((char *)v7 - v6);
  }
  v8 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v7 + 2);
  if ( (_WORD)v6 )
  {
    v30 = -1073741767;
    WPP_IFR_SF_qd(v8, 3u, 0xBu, 0xEu, WPP_HandleAPI_cpp_Traceguids, (const void *)Handle, -1073741767);
    return v30;
  }
  WdfBindInfo = v8->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
    v10 = 9;
  else
    v10 = 8;
  Tag = FxValidateObjectAttributes(*((_FX_DRIVER_GLOBALS **)v7 + 2), Attributes, v10);
  if ( (Tag & 0x80000000) == 0 )
  {
    if ( !Attributes->ContextTypeInfo )
    {
      Tag = -1073741773;
      WPP_IFR_SF_qd(v8, 3u, 0xBu, 0xCu, WPP_HandleAPI_cpp_Traceguids, Attributes, -1073741773);
      return Tag;
    }
    v11 = _InterlockedIncrement((volatile signed __int32 *)v7 + 3);
    if ( *((char *)v7 + 24) < 0 )
    {
      v12 = (FxTagTracker *)*((_QWORD *)v7 - 6);
      if ( v12 )
        FxTagTracker::UpdateTagHistory(
          v12,
          &Tag,
          519,
          "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp",
          TagAddRef,
          v11);
    }
    ContextTypeInfo = Attributes->ContextTypeInfo;
    v14 = -1LL;
    flags = 0LL;
    if ( ContextTypeInfo )
    {
      flags = Attributes->ContextSizeOverride;
      if ( flags )
        goto LABEL_45;
      flags = ContextTypeInfo->ContextSize;
    }
    v16 = 48LL;
    id = 0;
    if ( !flags )
    {
LABEL_18:
      if ( v8->FxVerifierHandle )
      {
        v34 = v16 + 48;
        v35 = v16;
        if ( v16 + 48 >= v16 )
          v14 = v16 + 48;
        v16 = v14;
        id = v34 < v35 ? 0xC0000095 : 0;
      }
      if ( id >= 0 )
      {
LABEL_20:
        Tag = id;
        if ( id >= 0 )
        {
          v18 = v8->Tag;
          v19 = retaddr;
          *(_QWORD *)&v37.UsePoolType = 0LL;
          v37.u.PoolFlags = 64LL;
          if ( !v8->FxPoolTrackingOn )
            v19 = 0LL;
          v38 = v37;
          v20 = FxPoolAllocator(v8, &v8->FxPoolFrameworks, &v38, v16, v18, v19);
          v21 = v20;
          if ( v20 )
          {
            *v20 = 0LL;
            v20[1] = 0LL;
            v20[2] = 0LL;
            *(_QWORD *)v20 = v7;
            v22 = Attributes->ContextTypeInfo;
            if ( v22 )
            {
              ContextSizeOverride = Attributes->ContextSizeOverride;
              if ( !ContextSizeOverride )
                ContextSizeOverride = v22->ContextSize;
              memset(v21 + 6, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            }
            v24 = 0LL;
            v21[4] = Attributes->ContextTypeInfo;
            v25 = v7[5];
            if ( (_WORD)v25 )
              v24 = (_QWORD *)((char *)v7 + v25);
            v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 7);
            if ( v7[13] == 1 && v24 )
            {
              v27 = v24 + 1;
              while ( v24 )
              {
                if ( v24[4] == v21[4] )
                {
                  if ( Context )
                    *Context = v24 + 6;
                  v28 = 0x40000000;
                  goto LABEL_40;
                }
                v27 = v24 + 1;
                v24 = (_QWORD *)v24[1];
              }
              v28 = 0;
              _InterlockedExchange64(v27, (__int64)v21);
              if ( Context )
                *Context = v21 + 6;
              v21[3] = Attributes->EvtDestroyCallback;
              EvtCleanupCallback = Attributes->EvtCleanupCallback;
              if ( EvtCleanupCallback )
              {
                v21[2] = EvtCleanupCallback;
                v7[12] |= 0x400u;
              }
            }
            else
            {
              v28 = -1073741738;
            }
LABEL_40:
            KeReleaseSpinLock((PKSPIN_LOCK)v7 + 7, v26);
            Tag = v28;
            if ( v28 )
              FxPoolFree(v21);
          }
          else
          {
            Tag = -1073741670;
          }
        }
        goto LABEL_42;
      }
LABEL_49:
      WPP_IFR_SF_DDid(v8, flags, 0xC0000095, v14, RefType, 0, 0, flags, id);
      goto LABEL_20;
    }
LABEL_45:
    v32 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v32 < flags )
    {
      Tag = -1073741675;
LABEL_42:
      (*(void (__fastcall **)(unsigned __int16 *, unsigned int *, __int64, const char *))(*(_QWORD *)v7 + 16LL))(
        v7,
        &Tag,
        554LL,
        "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
      return Tag;
    }
    v33 = v32 + 48;
    v16 = -1LL;
    if ( v33 >= 0x30 )
      v16 = v33;
    id = v33 < 0x30 ? 0xC0000095 : 0;
    if ( v33 < 0x30 )
      goto LABEL_49;
    goto LABEL_18;
  }
  return Tag;
}
