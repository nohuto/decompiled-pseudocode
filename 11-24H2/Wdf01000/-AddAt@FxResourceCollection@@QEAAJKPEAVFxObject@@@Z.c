/*
 * XREFs of ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x14009A4D4
 * Callers:
 *     FxCmResourceListInsertDescriptor @ 0x14009855C (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x140098650 (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1400987B4 (FxIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14006655C (-AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxResourceCollection::AddAt(FxResourceCollection *this, int Index, FX_POOL *Object)
{
  bool v4; // zf
  int v7; // esi
  FxCollectionInternal *v8; // rcx
  FX_POOL **Entry; // r8
  FxCollectionInternal *v10; // rbx
  int v11; // ecx
  _LIST_ENTRY **p_Blink; // rax
  _LIST_ENTRY *p_m_ListHead; // rdx
  _LIST_ENTRY *Blink; // rax
  const void *_a1; // rdi
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  v4 = (this->m_AccessFlags & 1) == 0;
  irql = 0;
  if ( v4 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v4 = this->m_ObjectSize == 0;
    p_m_Globals = &this->m_Globals;
    m_Globals = this->m_Globals;
    if ( v4 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    FxVerifierDbgBreakPoint(*p_m_Globals);
    return 3221225506LL;
  }
  else
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Object);
    v7 = 0;
    Entry = FxCollectionInternal::AllocateEntry(v8, this->m_Globals);
    if ( Entry )
    {
      v10 = &this->FxCollectionInternal;
      if ( Index == -1 || Index == v10->m_Count )
      {
        p_m_ListHead = &this->m_ListHead;
LABEL_12:
        Blink = p_m_ListHead->Blink;
        Blink->Flink = (_LIST_ENTRY *)(Entry + 1);
        Entry[1] = (FX_POOL *)p_m_ListHead;
        Entry[2] = (FX_POOL *)Blink;
        p_m_ListHead->Blink = (_LIST_ENTRY *)(Entry + 1);
        *Entry = Object;
        FxObject::AddRef(
          (FxObject *)Object,
          &this->FxCollectionInternal,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
        ++v10->m_Count;
        this->m_Changed = 1;
      }
      else
      {
        v11 = 0;
        p_Blink = &this->m_ListHead.Flink[-1].Blink;
        while ( p_Blink != (_LIST_ENTRY **)v10 )
        {
          p_m_ListHead = (_LIST_ENTRY *)(p_Blink + 1);
          if ( v11 == Index )
          {
            if ( p_Blink != (_LIST_ENTRY **)-8LL )
              goto LABEL_12;
            break;
          }
          p_Blink = &p_m_ListHead->Flink[-1].Blink;
          ++v11;
        }
        FxStump::operator delete(Entry);
        v7 = -1073741684;
      }
    }
    else
    {
      v7 = -1073741670;
    }
    FxNonPagedObject::Unlock(this, irql, (unsigned __int8)Entry);
    if ( v7 < 0 )
      FxObject::DeleteFromFailedCreate((FxObject *)Object);
    return (unsigned int)v7;
  }
}
