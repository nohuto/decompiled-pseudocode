/*
 * XREFs of ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14007EE00
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1400434C0 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqDD @ 0x140097F68 (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqdqdd @ 0x14009B9C4 (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureFileObjectClass(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _LIST_ENTRY *Blink; // rdi
  _LIST_ENTRY *v4; // r14
  unsigned int globals; // ebx
  signed int _a4; // ecx
  int _a6; // ebx
  int v10; // r8d
  FxDeviceBase *m_DeviceBase; // rdx
  _LIST_ENTRY *v12; // rax
  const void *_a3; // r8
  unsigned __int64 Flink; // rdx
  unsigned __int16 v15; // ax
  const void *_a2; // rdx
  unsigned int v17; // esi
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // r10
  __int16 v20; // ax
  const void *v21; // rcx
  unsigned __int64 m_Driver; // r10
  unsigned __int16 v23; // ax
  FxDeviceBase *v24; // rdx
  const void *v25; // r10
  unsigned __int16 m_ObjectSize; // ax
  const void *v27; // rdx

  m_Globals = this->m_Globals;
  Blink = FileObjInfoList->Blink;
  v4 = 0LL;
  globals = 1;
  while ( 1 )
  {
    if ( Blink == FileObjInfoList )
    {
      v17 = 0;
      LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next) = globals;
      return v17;
    }
    _a4 = (signed int)Blink[5].Flink;
    if ( _a4 != 1 && globals != _a4 )
      break;
LABEL_16:
    Blink = Blink->Blink;
  }
  if ( globals == 1 )
  {
    v4 = Blink[9].Blink;
    globals = (unsigned int)Blink[5].Flink;
    goto LABEL_16;
  }
  _a6 = globals >> 31;
  v10 = (unsigned int)_a4 >> 31;
  if ( (_BYTE)_a6 == _a4 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    v12 = Blink[9].Blink;
    globals = ((_a4 >= 0) << 31) - 2147483644;
    _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a3 = 0LL;
    if ( v12 )
      Flink = (unsigned __int64)v12[1].Flink;
    else
      Flink = (unsigned __int64)m_DeviceBase->m_Driver;
    v15 = *(_WORD *)(Flink + 10);
    _a2 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v15 )
      _a2 = 0LL;
    WPP_IFR_SF_qqDD(m_Globals, 4u, (unsigned int)_a3, 0x10u, WPP_FxPkgGeneral_cpp_Traceguids, _a2, _a3, _a4, globals);
    goto LABEL_16;
  }
  v17 = -1073741808;
  v18 = v4[1].Flink;
  v19 = Blink[9].Blink;
  v20 = WORD1(v18->Blink);
  v21 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v20 )
    v21 = 0LL;
  if ( v19 )
    m_Driver = (unsigned __int64)v19[1].Flink;
  else
    m_Driver = (unsigned __int64)this->m_DeviceBase->m_Driver;
  v23 = *(_WORD *)(m_Driver + 10);
  v24 = this->m_DeviceBase;
  v25 = (const void *)(m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v23 )
    v25 = 0LL;
  m_ObjectSize = v24->m_ObjectSize;
  v27 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v27 = 0LL;
  WPP_IFR_SF_qqdqdd(
    m_Globals,
    (unsigned __int8)v27,
    0x12u,
    0xFu,
    WPP_FxPkgGeneral_cpp_Traceguids,
    v27,
    v25,
    v10,
    v21,
    _a6,
    -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return v17;
}
