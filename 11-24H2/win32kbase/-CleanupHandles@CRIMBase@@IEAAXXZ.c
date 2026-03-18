/*
 * XREFs of ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x14006C338
 * Callers:
 *     ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x140187818 (-UninitializeSensor@CBaseInput@@QEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x14006C150 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 */

void __fastcall CRIMBase::CleanupHandles(HANDLE *this)
{
  CRIMBase::SensorDispatcherObject *v1; // rbx
  CRIMBase::SensorDispatcherObject *v3; // rsi
  char *v4; // rcx
  char *v5; // rcx

  v1 = (CRIMBase::SensorDispatcherObject *)(this + 21);
  v3 = (CRIMBase::SensorDispatcherObject *)(this + 154);
  while ( v1 != v3 )
  {
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(v1);
    v1 = (CRIMBase::SensorDispatcherObject *)((char *)v1 + 56);
  }
  if ( this[1] != (HANDLE)-1LL )
  {
    RIMUnregisterForInput();
    ObCloseHandle(this[1], 1);
    this[1] = (HANDLE)-1LL;
  }
  if ( this[2] )
  {
    CPushLock::AcquireLockExclusive((CPushLock *)(this + 19));
    ObfDereferenceObject(this[2]);
    this[2] = 0LL;
    CPushLock::ReleaseLock((CPushLock *)(this + 19));
  }
  v4 = (char *)this[8];
  if ( v4 && v4 != this[9] )
  {
    GreDeleteFastMutex(v4);
    this[8] = 0LL;
  }
  v5 = (char *)this[9];
  if ( v5 != (char *)(this + 10) )
  {
    GreDeleteFastMutex(v5);
    this[9] = 0LL;
    *((_DWORD *)this + 14) = 0;
    if ( this[8] )
      this[8] = 0LL;
  }
}
