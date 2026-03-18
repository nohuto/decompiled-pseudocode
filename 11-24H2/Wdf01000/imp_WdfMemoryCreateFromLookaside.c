/*
 * XREFs of imp_WdfMemoryCreateFromLookaside @ 0x140012BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?DetectExcessiveAllocation@FxObject@@AEAAXXZ @ 0x140011B20 (-DetectExcessiveAllocation@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14001CFC0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfMemoryCreateFromLookaside(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Lookaside,
        WDFMEMORY__ **Memory)
{
  __int64 v5; // rcx
  FxLookasideList *flags; // rbx
  __int64 result; // rax
  FxMemoryObject *v8; // rdi
  FxObject *Driver; // rbx
  _WDF_OBJECT_ATTRIBUTES *p_m_MemoryAttributes; // rsi
  unsigned __int64 ParentObject; // r14
  __int64 v12; // rcx
  __int64 m_ObjectSize; // rax
  char *v14; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  WDFMEMORY__ *v17; // rbx
  int v18; // r14d
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxLookasideList_vtbl *v20; // rax
  unsigned __int8 v21; // dl
  unsigned int v22; // r8d
  unsigned __int16 v23; // r9
  unsigned __int8 v24; // dl
  unsigned int v25; // r8d
  unsigned __int16 v26; // r9
  KIRQL v27; // al
  const _GUID *v28; // [rsp+20h] [rbp-50h]
  FxMemoryObject *pMemory; // [rsp+50h] [rbp-20h] BYREF
  FxLookasideList **p_pLookaside; // [rsp+58h] [rbp-18h] BYREF
  __int16 v31; // [rsp+60h] [rbp-10h]
  __int16 v32; // [rsp+62h] [rbp-Eh]
  int v33; // [rsp+64h] [rbp-Ch]
  void *retaddr; // [rsp+A8h] [rbp+38h]
  FxObject *v35; // [rsp+B8h] [rbp+48h] BYREF
  FxLookasideList *pLookaside; // [rsp+C8h] [rbp+58h] BYREF

  pMemory = 0LL;
  if ( !Lookaside )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1009uLL);
  LOWORD(v5) = 0;
  flags = (FxLookasideList *)(~Lookaside & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Lookaside & 1) != 0 )
  {
    v5 = LOWORD(flags->__vftable);
    flags = (FxLookasideList *)((char *)flags - v5);
  }
  if ( flags->m_Type == 4105 )
  {
    pLookaside = flags;
  }
  else
  {
    pLookaside = 0LL;
    p_pLookaside = &pLookaside;
    v32 = v5;
    v33 = 0;
    v20 = flags->__vftable;
    v31 = 4105;
    if ( v20->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pLookaside) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v21, v22, v23, v28, (const void *)Lookaside, 0x1009u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Lookaside, 0x1009uLL);
    }
    flags = pLookaside;
  }
  if ( !Memory )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  *Memory = 0LL;
  result = ((__int64 (__fastcall *)(FxLookasideList *, FxMemoryObject **))flags->Allocate)(flags, &pMemory);
  if ( (int)result >= 0 )
  {
    v8 = pMemory;
    Driver = 0LL;
    p_m_MemoryAttributes = &pLookaside->m_MemoryAttributes;
    v35 = 0LL;
    if ( pMemory->m_ObjectSize )
    {
      if ( pLookaside == (FxLookasideList *)-104LL )
        goto LABEL_48;
      if ( pLookaside->m_MemoryAttributes.ExecutionLevel == WdfExecutionLevelPassive )
      {
        v27 = KeAcquireSpinLockRaiseToDpc(&pMemory->m_SpinLock.m_Lock);
        v8->m_ObjectFlags |= 0x11u;
        KeReleaseSpinLock(&v8->m_SpinLock.m_Lock, v27);
        Driver = v35;
      }
      ParentObject = (unsigned __int64)p_m_MemoryAttributes->ParentObject;
      if ( !ParentObject )
      {
LABEL_48:
        if ( !v8->m_ParentObject )
        {
          m_Globals = v8->m_Globals;
          if ( (FxMemoryObject *)m_Globals->Driver != v8 )
          {
            Driver = m_Globals->Driver;
            v35 = Driver;
          }
        }
      }
      else
      {
        LOWORD(v12) = 0;
        Driver = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (ParentObject & 1) != 0 )
        {
          v12 = LOWORD(Driver->__vftable);
          Driver = (FxObject *)((char *)Driver - v12);
        }
        if ( Driver->m_Type == 4096 )
        {
          v35 = Driver;
        }
        else
        {
          v32 = v12;
          p_pLookaside = (FxLookasideList **)&v35;
          v31 = 4096;
          v33 = 0;
          if ( Driver->QueryInterface(Driver, (FxQueryInterfaceParams *)&p_pLookaside) < 0 )
          {
            WPP_IFR_SF_qDqD(
              Driver->m_Globals,
              v24,
              v25,
              v26,
              v28,
              (const void *)ParentObject,
              0x1000u,
              Driver,
              Driver->m_Type);
            FxVerifierBugCheckWorker(Driver->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          Driver = v35;
        }
      }
      if ( !Driver || (v18 = FxObject::AssignParentObject(v8, Driver), v18 >= 0) )
      {
        if ( p_m_MemoryAttributes )
        {
          m_ObjectSize = v8->m_ObjectSize;
          if ( (_WORD)m_ObjectSize )
            v14 = (char *)v8 + m_ObjectSize;
          else
            v14 = 0LL;
          EvtDestroyCallback = p_m_MemoryAttributes->EvtDestroyCallback;
          if ( EvtDestroyCallback )
            *((_QWORD *)v14 + 3) = EvtDestroyCallback;
          EvtCleanupCallback = p_m_MemoryAttributes->EvtCleanupCallback;
          if ( EvtCleanupCallback )
          {
            *((_QWORD *)v14 + 2) = EvtCleanupCallback;
            v8->m_ObjectFlags |= 0x400u;
          }
        }
        v8->m_ObjectFlags |= 8u;
        v17 = (WDFMEMORY__ *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v8->m_ObjectSize )
          v17 = 0LL;
        FxObject::DetectExcessiveAllocation(v8);
        v18 = 0;
        *Memory = v17;
        return (unsigned int)v18;
      }
      v8 = pMemory;
    }
    else
    {
      v18 = -1073741816;
    }
    FxObject::DeleteFromFailedCreate(v8);
    return (unsigned int)v18;
  }
  return result;
}
