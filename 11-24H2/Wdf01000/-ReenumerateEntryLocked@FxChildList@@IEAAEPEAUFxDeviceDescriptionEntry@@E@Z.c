/*
 * XREFs of ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x14008C70C
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x140030B24 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x14008C674 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqdd @ 0x140086778 (WPP_IFR_SF_qqdd.c)
 */

unsigned __int8 __fastcall FxChildList::ReenumerateEntryLocked(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  _LIST_ENTRY *p_m_ModificationLink; // r9
  FxDeviceDescriptionEntry *Flink; // rdi
  _FX_DRIVER_GLOBALS *v6; // rcx
  char v7; // bl
  FxDevice *v8; // r10
  const void *_a1; // rdx
  _LIST_ENTRY *p_m_ModificationListHead; // rax
  _LIST_ENTRY *Blink; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevice *m_Pdo; // r8
  const void *v14; // rdx
  BOOL _a4; // [rsp+40h] [rbp-18h]

  p_m_ModificationLink = &Entry->m_ModificationLink;
  Flink = (FxDeviceDescriptionEntry *)Entry->m_ModificationLink.Flink;
  if ( Flink == (FxDeviceDescriptionEntry *)&Entry->m_ModificationLink
    && (unsigned int)(Entry->m_DescriptionState - 1) <= 1 )
  {
    if ( !FromQDR )
    {
      p_m_ModificationListHead = &this->m_ModificationListHead;
      Entry->m_ModificationState = ModificationClone;
      Blink = this->m_ModificationListHead.Blink;
      if ( Blink->Flink != p_m_ModificationListHead )
        __fastfail(3u);
      p_m_ModificationLink->Flink = p_m_ModificationListHead;
      Entry->m_ModificationLink.Blink = Blink;
      Blink->Flink = p_m_ModificationLink;
      p_m_ModificationListHead->Blink = p_m_ModificationLink;
    }
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      m_Pdo = Entry->m_Pdo;
      v14 = (const void *)((unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_Pdo->m_ObjectSize )
        v14 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xCu,
        0x14u,
        WPP_FxChildList_cpp_Traceguids,
        v14,
        m_Pdo->m_DeviceObject.m_DeviceObject);
    }
    return 1;
  }
  else
  {
    v6 = this->m_Globals;
    v7 = 0;
    if ( v6->FxVerboseOn )
    {
      v8 = Entry->m_Pdo;
      _a4 = (unsigned int)(Entry->m_DescriptionState - 1) <= 1;
      _a1 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v8->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqdd(
        v6,
        5u,
        0xCu,
        0x15u,
        WPP_FxChildList_cpp_Traceguids,
        _a1,
        v8->m_DeviceObject.m_DeviceObject,
        Flink == (FxDeviceDescriptionEntry *)p_m_ModificationLink,
        _a4);
    }
  }
  return v7;
}
