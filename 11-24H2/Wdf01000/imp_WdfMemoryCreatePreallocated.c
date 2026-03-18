/*
 * XREFs of imp_WdfMemoryCreatePreallocated @ 0x14005AC90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400111CC (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1400804DC (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfMemoryCreatePreallocated(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FX_POOL *Buffer,
        FX_POOL *BufferSize,
        WDFMEMORY__ **PMemory)
{
  int id; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 ParentObject; // r14
  __int64 v11; // rcx
  FxObject *v12; // rbx
  WDFMEMORY__ **v13; // r15
  __int64 result; // rax
  ULONG Tag; // r12d
  __int64 v16; // r8
  unsigned __int64 flags; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v19; // r14
  bool v20; // zf
  void *v21; // rax
  FX_POOL **v22; // rax
  _FX_DRIVER_GLOBALS *v23; // rdx
  FX_POOL **v24; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v25; // rax
  unsigned __int64 ContextSizeOverride; // r8
  FX_POOL *v27; // rax
  int v28; // edi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int8 v31; // dl
  unsigned int v32; // r8d
  unsigned __int16 v33; // r9
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  const _GUID *AssignDriverAsDefaultParent; // [rsp+20h] [rbp-40h]
  __m128i v37; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  FxObject *pParent; // [rsp+A0h] [rbp+40h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+A8h] [rbp+48h] BYREF
  FX_POOL *v41; // [rsp+B0h] [rbp+50h]

  v41 = Buffer;
  id = 0;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hMemory = 0LL;
  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        LOWORD(v11) = 0;
        v12 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (ParentObject & 1) != 0 )
        {
          v11 = LOWORD(v12->__vftable);
          v12 = (FxObject *)((char *)v12 - v11);
        }
        if ( v12->m_Type == 4096 )
        {
          pParent = v12;
        }
        else
        {
          v37.m128i_i16[5] = v11;
          v37.m128i_i64[0] = (__int64)&pParent;
          v37.m128i_i16[4] = 4096;
          pParent = 0LL;
          v37.m128i_i32[3] = 0;
          if ( v12->QueryInterface(v12, (FxQueryInterfaceParams *)&v37) < 0 )
          {
            WPP_IFR_SF_qDqD(
              v12->m_Globals,
              v31,
              v32,
              v33,
              AssignDriverAsDefaultParent,
              (const void *)ParentObject,
              0x1000u,
              v12,
              v12->m_Type);
            FxVerifierBugCheckWorker(v12->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          v12 = pParent;
        }
        m_Globals = v12->m_Globals;
        id = 0;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
        (unsigned __int8)Attributes,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v13 = PMemory;
  if ( !PMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *PMemory = 0LL;
  if ( !BufferSize )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, 0xC000000D);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
  if ( (int)result >= 0 )
  {
    Tag = m_Globals->Tag;
    v16 = -1LL;
    v37.m128i_i64[1] = 64LL;
    flags = 0LL;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        flags = Attributes->ContextSizeOverride;
        if ( flags )
          goto LABEL_40;
        flags = ContextTypeInfo->ContextSize;
      }
    }
    v19 = 176LL;
    if ( !flags )
    {
LABEL_18:
      if ( m_Globals->FxVerifierHandle )
      {
        v34 = v19 + 48;
        v35 = v19;
        if ( v19 + 48 >= v19 )
          v16 = v19 + 48;
        v19 = v16;
        id = v34 < v35 ? 0xC0000095 : 0;
      }
      if ( id >= 0 )
      {
LABEL_20:
        v20 = m_Globals->FxPoolTrackingOn == 0;
        v37.m128i_i64[0] = 0LL;
        v37.m128i_i64[1] = 64LL;
        if ( v20 )
          v21 = 0LL;
        else
          v21 = retaddr;
        v22 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v37, v19, Tag, v21);
        v24 = v22;
        if ( v22 )
        {
          if ( m_Globals->FxVerifierHandle )
          {
            v24 = v22 + 6;
            *(_OWORD *)v22 = 0LL;
            *((_OWORD *)v22 + 1) = 0LL;
            *((_OWORD *)v22 + 2) = 0LL;
            *((_DWORD *)v22 + 8) = 1146058822;
          }
          *((_OWORD *)v24 + 8) = 0LL;
          *((_OWORD *)v24 + 9) = 0LL;
          *((_OWORD *)v24 + 10) = 0LL;
          v24[16] = (FX_POOL *)v24;
          if ( Attributes )
          {
            v25 = Attributes->ContextTypeInfo;
            if ( v25 )
            {
              ContextSizeOverride = Attributes->ContextSizeOverride;
              if ( !ContextSizeOverride )
                ContextSizeOverride = v25->ContextSize;
              memset(v24 + 22, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            }
            v24[20] = (FX_POOL *)Attributes->ContextTypeInfo;
          }
        }
        if ( v24 )
        {
          v24[2] = (FX_POOL *)m_Globals;
          *v24 = (FX_POOL *)FxObject::`vftable';
          *((_DWORD *)v24 + 2) = 8392704;
          v24[7] = 0LL;
          *((_BYTE *)v24 + 48) = 1;
          *((_DWORD *)v24 + 3) = 1;
          *((_DWORD *)v24 + 6) = 0x10000;
          v24[8] = 0LL;
          v24[5] = (FX_POOL *)(v24 + 4);
          v24[4] = (FX_POOL *)(v24 + 4);
          v24[10] = (FX_POOL *)(v24 + 9);
          v24[9] = (FX_POOL *)(v24 + 9);
          v27 = v24[2];
          v24[11] = 0LL;
          v24[12] = 0LL;
          if ( *(&v27[2].NonPagedLock.m_DbgFlagIsInitialized + 4) )
            FxObject::Vf_VerifyConstruct((FxObject *)v24, v23, 0);
          v24[14] = BufferSize;
          *v24 = (FX_POOL *)FxMemoryObject::`vftable'{for `FxObject'};
          v24[13] = (FX_POOL *)FxMemoryObject::`vftable'{for `IFxMemory'};
          if ( ((_BYTE)v24[3] & 0x80) != 0 )
            FxObject::AllocateTagTracker((FxObject *)v24, 0x100Au);
          *v24 = (FX_POOL *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
          v24[13] = (FX_POOL *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
          v24[15] = v41;
          v28 = FxObject::Commit((FxObject *)v24, Attributes, (void **)&hMemory, 0LL, 1u);
          if ( v28 < 0 )
            FxObject::DeleteFromFailedCreate((FxObject *)v24);
          else
            *v13 = hMemory;
          return (unsigned int)v28;
        }
        return 3221225626LL;
      }
LABEL_44:
      WPP_IFR_SF_DDid(m_Globals, flags, v16, 0x95u, AssignDriverAsDefaultParent, 0x80u, 0, flags, id);
      if ( id < 0 )
        return 3221225626LL;
      goto LABEL_20;
    }
LABEL_40:
    v29 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v29 < flags )
      return 3221225626LL;
    v30 = v29 + 176;
    v19 = -1LL;
    if ( v30 >= 0xB0 )
      v19 = v30;
    id = v30 < 0xB0 ? 0xC0000095 : 0;
    if ( v30 < 0xB0 )
      goto LABEL_44;
    goto LABEL_18;
  }
  return result;
}
