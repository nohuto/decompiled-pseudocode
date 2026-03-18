/*
 * XREFs of ??1FxPkgIo@@UEAA@XZ @ 0x14003F798
 * Callers:
 *     ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x14003F760 (--_EFxPkgIo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x14003ECB4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x140040500 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxPkgIo::~FxPkgIo(FxPkgIo *this)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rsi
  char *Flink; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *v5; // rax

  this->m_DefaultQueue = 0LL;
  this->m_DeviceBase = 0LL;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  this->__vftable = (FxPkgIo_vtbl *)FxPkgIo::`vftable';
  while ( 1 )
  {
    Flink = (char *)p_m_DynamicDispatchInfoListHead->Flink;
    if ( p_m_DynamicDispatchInfoListHead->Flink == p_m_DynamicDispatchInfoListHead )
      break;
    if ( *((_LIST_ENTRY **)Flink + 1) != p_m_DynamicDispatchInfoListHead
      || (v5 = *(_LIST_ENTRY **)Flink, *(char **)(*(_QWORD *)Flink + 8LL) != Flink) )
    {
      __fastfail(3u);
    }
    p_m_DynamicDispatchInfoListHead->Flink = v5;
    v5->Blink = p_m_DynamicDispatchInfoListHead;
    *((_QWORD *)Flink + 1) = Flink;
    *(_QWORD *)Flink = Flink;
    `vector destructor iterator'(Flink + 16, 0x10uLL, 4uLL, (void (__fastcall *)(void *))FxDeviceBase::AddChildList);
    FxStump::operator delete(Flink);
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xBu, WPP_FxPkgIo_cpp_Traceguids, this);
  FxNonPagedObject::~FxNonPagedObject(this);
}
