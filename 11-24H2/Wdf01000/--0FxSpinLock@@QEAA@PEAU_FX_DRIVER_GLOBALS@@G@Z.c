/*
 * XREFs of ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x140053CDC
 * Callers:
 *     imp_WdfSpinLockCreate @ 0x140020CD0 (imp_WdfSpinLockCreate.c)
 * Callees:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x140053DB0 (-Construct@FxObject@@AEAAXE@Z.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

void __fastcall FxSpinLock::FxSpinLock(
        FxSpinLock *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ExtraSize)
{
  FxSpinLock *v4; // rcx
  unsigned __int16 m_ObjectSize; // di
  __int64 p_m_Globals; // rdx
  __int64 p_m_Type; // rcx

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxSpinLock_vtbl *)FxObject::`vftable';
  this->m_Type = 4132;
  this->m_ObjectSize = ((ExtraSize + 15) & 0xFFF0) + 128;
  this->FxObject::m_SpinLock.m_Lock = 0LL;
  this->FxObject::m_SpinLock.m_DbgFlagIsInitialized = 1;
  FxObject::Construct(this, 0);
  v4 = 0LL;
  this->__vftable = (FxSpinLock_vtbl *)FxSpinLock::`vftable';
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  *(_WORD *)&this->m_Irql = 0;
  m_ObjectSize = this->m_ObjectSize;
  if ( m_ObjectSize != 128 )
    v4 = this + 1;
  if ( v4 )
  {
    memset(v4, 0, 0x100uLL);
    p_m_Globals = 16LL;
    p_m_Type = 8LL;
    if ( m_ObjectSize != 128 )
    {
      p_m_Globals = (__int64)&this[1].m_Globals;
      p_m_Type = (__int64)&this[1].m_Type;
    }
    *(_QWORD *)p_m_Type = p_m_Globals;
  }
}
