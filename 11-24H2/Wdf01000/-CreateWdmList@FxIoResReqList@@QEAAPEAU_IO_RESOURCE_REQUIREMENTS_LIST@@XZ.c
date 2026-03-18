/*
 * XREFs of ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x14009A7DC
 * Callers:
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400474A8 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400743C8 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 */

_IO_RESOURCE_REQUIREMENTS_LIST *__fastcall FxIoResReqList::CreateWdmList(FxIoResReqList *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  FxCollectionInternal *v2; // rsi
  __int64 m_Count; // r10
  unsigned int v4; // r9d
  unsigned int *v5; // r8
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY **p_Blink; // rdx
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  unsigned int *Pool2; // rax
  _LIST_ENTRY *v17; // r10
  _LIST_ENTRY *v18; // rdx
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // r9
  _LIST_ENTRY *v21; // rax
  _LIST_ENTRY **v22; // r9
  _LIST_ENTRY **v23; // rdx

  m_Globals = this->m_Globals;
  v2 = &this->FxCollectionInternal;
  m_Count = this->m_Count;
  v4 = 0;
  v5 = 0LL;
  if ( (_DWORD)m_Count )
  {
    Flink = this->m_ListHead.Flink;
    while ( 1 )
    {
      p_Blink = &Flink[-1].Blink;
      if ( p_Blink == (_LIST_ENTRY **)v2 )
        break;
      v9 = v4 + LODWORD((*p_Blink)[7].Blink);
      if ( v9 < v4 )
        goto $Overflow;
      Flink = p_Blink[1];
      v4 = v9;
    }
    v10 = 40LL * (unsigned int)(m_Count - 1);
    if ( v10 > 0xFFFFFFFF
      || (v11 = v10 + 72, v11 < 0x48)
      || (v12 = 32LL * v4, v12 > 0xFFFFFFFF)
      || (v13 = v12 + v11, (unsigned int)v12 + v11 < v11)
      || (v14 = 32 * m_Count, (unsigned __int64)(32 * m_Count) > 0xFFFFFFFF)
      || v13 < v14 )
    {
$Overflow:
      WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0xCu, WPP_FxResourceCollection_cpp_Traceguids);
      return 0LL;
    }
    v15 = v13 - v14;
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, v15, m_Globals->Tag);
    v5 = Pool2;
    if ( Pool2 )
    {
      v17 = (_LIST_ENTRY *)(Pool2 + 8);
      v18 = this->m_ListHead.Flink;
      Pool2[1] = this->m_InterfaceType;
      Pool2[3] = this->m_SlotNumber;
      Pool2[7] = v2->m_Count;
      *Pool2 = v15;
      while ( 1 )
      {
        v23 = &v18[-1].Blink;
        if ( v23 == (_LIST_ENTRY **)v2 )
          break;
        v19 = *v23;
        LODWORD(v17->Flink) = 65537;
        HIDWORD(v17->Flink) = v19[7].Blink;
        v17 = (_LIST_ENTRY *)((char *)v17 + 8);
        v20 = v19[8].Flink;
        while ( 1 )
        {
          v22 = &v20[-1].Blink;
          if ( v22 == &v19[7].Blink )
            break;
          v21 = *v22;
          *v17 = *(_LIST_ENTRY *)((char *)*v22 + 104);
          v17[1] = *(_LIST_ENTRY *)((char *)v21 + 120);
          v20 = v22[1];
          v17 += 2;
        }
        v18 = v23[1];
      }
    }
  }
  return (_IO_RESOURCE_REQUIREMENTS_LIST *)v5;
}
