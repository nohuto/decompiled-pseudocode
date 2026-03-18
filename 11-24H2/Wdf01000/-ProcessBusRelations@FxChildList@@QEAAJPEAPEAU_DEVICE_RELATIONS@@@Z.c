/*
 * XREFs of ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x140030B24
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140030750 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?_ComputeRelationsSize@FxChildList@@SA_KK@Z @ 0x14002F644 (-_ComputeRelationsSize@FxChildList@@SA_KK@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400313F4 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140035AD4 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x14003ED0C (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     WPP_IFR_SF_qqq @ 0x140041538 (WPP_IFR_SF_qqq.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x14008C35C (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x14008C70C (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

__int64 __fastcall FxChildList::ProcessBusRelations(FxChildList *this, _LIST_ENTRY **DeviceRelations)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  char v4; // bp
  _DEVICE_RELATIONS *v5; // r15
  KIRQL v6; // al
  _LIST_ENTRY *p_m_DescriptionListHead; // r13
  _LIST_ENTRY *Flink; // r14
  KIRQL v9; // r12
  unsigned int v10; // ebx
  _LIST_ENTRY *_a3; // r14
  char v12; // r13
  int v13; // ebp
  unsigned __int8 v14; // r12
  KIRQL v15; // al
  KIRQL v16; // bl
  __int64 v18; // rax
  _LIST_ENTRY *v19; // rbx
  FxChildList *v20; // r13
  _DEVICE_OBJECT *v21; // rbx
  _LIST_ENTRY *v22; // rdx
  const void *_a1; // rcx
  _LIST_ENTRY *v24; // rdx
  const void *v25; // rcx
  _LIST_ENTRY *v26; // rbx
  _LIST_ENTRY *v27; // rbp
  _LIST_ENTRY *v28; // rdx
  const void *v29; // rcx
  const void *v30; // rcx
  const void *v31; // rbx
  const void *v32; // rax
  _LIST_ENTRY *v33; // rbx
  int v34; // eax
  _LIST_ENTRY *v35; // rdx
  const void *v36; // rcx
  _LIST_ENTRY *v37; // rdx
  const void *v38; // rcx
  _LIST_ENTRY *v39; // rdx
  const void *v40; // rcx
  _LIST_ENTRY *v41; // rdx
  const void *v42; // rcx
  const void *v43; // rcx
  size_t v44; // rax
  _LIST_ENTRY *v45; // rdx
  const void *v46; // rcx
  _LIST_ENTRY *v47; // rdx
  const void *v48; // rcx
  PVOID *Objects; // rbx
  __int64 Count; // rdi
  unsigned __int8 invalidateRelations; // [rsp+40h] [rbp-78h] BYREF
  KIRQL v52; // [rsp+41h] [rbp-77h]
  int v53; // [rsp+44h] [rbp-74h]
  _DEVICE_RELATIONS *Pool2; // [rsp+48h] [rbp-70h]
  _LIST_ENTRY *v55; // [rsp+50h] [rbp-68h]
  _LIST_ENTRY freeHead; // [rsp+58h] [rbp-60h] BYREF
  char v57; // [rsp+C0h] [rbp+8h]
  char v59; // [rsp+D0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+D8h] [rbp+20h]
  KIRQL NewIrqla; // [rsp+D8h] [rbp+20h]

  FxVerifierCheckIrqlLevel(this->m_Globals, 0);
  m_Globals = this->m_Globals;
  v4 = 0;
  freeHead.Blink = &freeHead;
  v59 = 1;
  v57 = 0;
  invalidateRelations = 0;
  v5 = 0LL;
  freeHead.Flink = &freeHead;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  this->m_State = ListLockedForEnum;
  Flink = this->m_DescriptionListHead.Flink;
  v9 = v6;
  v52 = v6;
  v10 = 0;
  NewIrql = 0;
  if ( Flink != &this->m_DescriptionListHead )
  {
    do
    {
      if ( LODWORD(Flink[1].Flink) == 1 || LODWORD(Flink[1].Flink) == 2 )
      {
        ++v10;
      }
      else if ( LODWORD(Flink[1].Flink) == 4 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v22 = Flink[4].Flink;
          _a1 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !WORD1(v22->Blink) )
            _a1 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x22u, WPP_FxChildList_cpp_Traceguids, _a1, v22[9].Flink);
        }
        v4 = 1;
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    v9 = v52;
    NewIrql = v4;
  }
  KeReleaseSpinLock(&this->m_ListLock, v9);
  _a3 = *DeviceRelations;
  v55 = *DeviceRelations;
  if ( v10 )
  {
    if ( _a3 )
      v10 += LODWORD(_a3->Flink);
  }
  else
  {
    if ( !v4 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v30 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x24u, WPP_FxChildList_cpp_Traceguids, v30);
      }
LABEL_5:
      v12 = 0;
      v13 = -1073741637;
LABEL_6:
      v14 = v57;
      goto $Done_9;
    }
    if ( _a3 )
    {
      v26 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        do
        {
          v27 = v26->Flink;
          if ( LODWORD(v26[1].Flink) == 4 )
          {
            v28 = v26[4].Flink;
            v29 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v28->Blink) )
              v29 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x23u, WPP_FxChildList_cpp_Traceguids, v29, v28[9].Flink);
            LODWORD(v26[1].Flink) = 3;
            BYTE3(v26[5].Flink) = 1;
          }
          v26 = v27;
        }
        while ( v27 != p_m_DescriptionListHead );
        _a3 = v55;
        v5 = 0LL;
      }
      goto LABEL_5;
    }
  }
  v18 = FxChildList::_ComputeRelationsSize(v10);
  Pool2 = (_DEVICE_RELATIONS *)ExAllocatePool2(256LL, v18, m_Globals->Tag);
  v5 = Pool2;
  if ( !Pool2 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x25u, WPP_FxChildList_cpp_Traceguids, v10);
    ++this->m_EnumRetries;
    v13 = -1073741637;
    v59 = 0;
    v53 = -1073741637;
    if ( this->m_EnumRetries > 3u )
    {
      if ( NewIrql )
      {
        v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v32 = 0LL;
        WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x26u, WPP_FxChildList_cpp_Traceguids, v32);
      }
      else
      {
        v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      }
      if ( !this->m_ObjectSize )
        v31 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x27u, WPP_FxChildList_cpp_Traceguids, v31, 3);
    }
    else
    {
      v57 = 1;
    }
    if ( _a3 )
    {
      v33 = this->m_DescriptionListHead.Flink;
      if ( v33 != p_m_DescriptionListHead )
      {
        do
        {
          v55 = v33->Flink;
          v34 = (int)v33[1].Flink;
          if ( v34 == 2 )
          {
            v37 = v33[4].Flink;
            v38 = (const void *)((unsigned __int64)v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v37->Blink) )
              v38 = 0LL;
            WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x28u, WPP_FxChildList_cpp_Traceguids, v38, v37[9].Flink, _a3);
            NewIrqla = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
            if ( this->m_StaticList )
            {
              v41 = v33[4].Flink;
              v42 = (const void *)((unsigned __int64)v41 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v41->Blink) )
                v42 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 3u, 0xCu, 0x2Au, WPP_FxChildList_cpp_Traceguids, v42, v41[9].Flink);
            }
            else if ( FxChildList::ReenumerateEntryLocked(this, (FxDeviceDescriptionEntry *)v33, 1u) )
            {
              v39 = v33[4].Flink;
              v40 = (const void *)((unsigned __int64)v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v39->Blink) )
                v40 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x29u, WPP_FxChildList_cpp_Traceguids, v40, v39[9].Flink);
              FxChildList::CloneEntryLocked(this, &freeHead, (FxDeviceDescriptionEntry *)v33, 1u);
            }
            LODWORD(v33[1].Flink) = 3;
            BYTE3(v33[5].Flink) = 1;
            KeReleaseSpinLock(&this->m_ListLock, NewIrqla);
          }
          else if ( v34 == 4 )
          {
            v35 = v33[4].Flink;
            v36 = (const void *)((unsigned __int64)v35 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v35->Blink) )
              v36 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_FxChildList_cpp_Traceguids, v36, v35[9].Flink);
            LODWORD(v33[1].Flink) = 3;
            BYTE3(v33[5].Flink) = 1;
          }
          v33 = v55;
        }
        while ( v55 != p_m_DescriptionListHead );
        v5 = Pool2;
        v13 = v53;
      }
    }
    else
    {
      v13 = -1073741670;
    }
    goto LABEL_67;
  }
  if ( _a3 && LODWORD(_a3->Flink) )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v43 = 0LL;
      WPP_IFR_SF_qqd(m_Globals, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v43, _a3, (unsigned int)_a3->Flink);
    }
    v44 = FxChildList::_ComputeRelationsSize((unsigned int)_a3->Flink);
    memmove(Pool2, _a3, v44);
  }
  v19 = this->m_DescriptionListHead.Flink;
  v13 = 0;
  if ( v19 == &this->m_DescriptionListHead )
  {
LABEL_67:
    v12 = v59;
    goto LABEL_6;
  }
  do
  {
    v20 = (FxChildList *)v19->Flink;
    switch ( LODWORD(v19[1].Flink) )
    {
      case 1:
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x2Du, WPP_FxChildList_cpp_Traceguids);
        if ( FxChildList::CreateDevice(this, (FxDeviceDescriptionEntry *)v19, &invalidateRelations) )
        {
          v24 = v19[4].Flink;
          v25 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !WORD1(v24->Blink) )
            v25 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x2Eu, WPP_FxChildList_cpp_Traceguids, v25, v24[9].Flink);
LABEL_25:
          if ( m_Globals->FxVerboseOn )
          {
            v47 = v19[4].Flink;
            v48 = (const void *)((unsigned __int64)v47 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v47->Blink) )
              v48 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v48, v47[9].Flink);
          }
          v21 = (_DEVICE_OBJECT *)v19[4].Flink[9].Flink;
          ObfReferenceObject(v21);
          v5->Objects[v5->Count++] = v21;
        }
        break;
      case 2:
        goto LABEL_25;
      case 4:
        v45 = v19[4].Flink;
        v46 = (const void *)((unsigned __int64)v45 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !WORD1(v45->Blink) )
          v46 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v46, v45[9].Flink);
        LODWORD(v19[1].Flink) = 3;
        BYTE3(v19[5].Flink) = 1;
        break;
    }
    v19 = (_LIST_ENTRY *)v20;
  }
  while ( v20 != (FxChildList *)&this->m_DescriptionListHead );
  v14 = invalidateRelations;
  _a3 = v55;
  v12 = 1;
$Done_9:
  v15 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  this->m_State = ListUnlocked;
  v16 = v15;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  if ( v13 >= 0 )
    this->m_EnumRetries = 0;
  KeReleaseSpinLock(&this->m_ListLock, v16);
  if ( v14 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, BusRelations);
  FxChildList::DrainFreeListHead(this, &freeHead);
  if ( v12 )
  {
    if ( _a3 )
    {
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x31u, WPP_FxChildList_cpp_Traceguids, _a3);
      ExFreePoolWithTag(_a3, 0);
    }
    if ( v13 < 0 && v5 )
    {
      if ( v5->Count )
      {
        Objects = (PVOID *)v5->Objects;
        Count = v5->Count;
        do
        {
          ObfDereferenceObject(*Objects++);
          --Count;
        }
        while ( Count );
      }
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    *DeviceRelations = (_LIST_ENTRY *)v5;
  }
  return (unsigned int)v13;
}
