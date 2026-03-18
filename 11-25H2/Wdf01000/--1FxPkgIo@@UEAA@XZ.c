/*
 * XREFs of ??1FxPkgIo@@UEAA@XZ @ 0x14004B5B8
 * Callers:
 *     ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x14004B580 (--_EFxPkgIo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x14004AAD4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxPkgIo::~FxPkgIo(FxPkgIo *this)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rsi
  _LIST_ENTRY *Flink; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *v5; // rax

  this->m_DefaultQueue = 0LL;
  this->m_DeviceBase = 0LL;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  this->__vftable = (FxPkgIo_vtbl *)FxPkgIo::`vftable';
  while ( 1 )
  {
    Flink = p_m_DynamicDispatchInfoListHead->Flink;
    if ( p_m_DynamicDispatchInfoListHead->Flink == p_m_DynamicDispatchInfoListHead )
      break;
    if ( Flink->Blink != p_m_DynamicDispatchInfoListHead || (v5 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_m_DynamicDispatchInfoListHead->Flink = v5;
    v5->Blink = p_m_DynamicDispatchInfoListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    `vector destructor iterator'(
      (char *)&Flink[1],
      0x10uLL,
      4uLL,
      (void (__fastcall *)(void *))FxDeviceBase::AddChildList);
    FxStump::operator delete(Flink);
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xBu, WPP_FxPkgIo_cpp_Traceguids, this);
  FxNonPagedObject::~FxNonPagedObject(this);
}
