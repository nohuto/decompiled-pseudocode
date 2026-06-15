/*
 * XREFs of ?Shutdown@CDuckingManager@@UEAAXXZ @ 0x18002E720
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18002F234 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

void __fastcall CDuckingManager::Shutdown(CDuckingManager *this)
{
  struct _Mtx_internal_imp_t *v1; // rbx

  v1 = (CDuckingManager *)((char *)this + 320);
  *((_BYTE *)this + 400) = 1;
  std::_Mutex_base::lock((CDuckingManager *)((char *)this + 320));
  *((_BYTE *)this + 312) = 1;
  _Mtx_unlock(v1);
}
