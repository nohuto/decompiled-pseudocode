/*
 * XREFs of ?IsInBidirectionalMode@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800DEF90
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800108DC (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

bool __fastcall CBtAudioResourceManagerBase::IsInBidirectionalMode(CBtAudioResourceManagerBase *this)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  CBtAudioResourceManagerBase *v2; // rdi

  v1 = (CBtAudioResourceManagerBase *)((char *)this + 512);
  v2 = this;
  std::_Mutex_base::lock((CBtAudioResourceManagerBase *)((char *)this + 512));
  LOBYTE(v2) = *((_DWORD *)v2 + 136) != 0;
  _Mtx_unlock(v1);
  return (char)v2;
}
