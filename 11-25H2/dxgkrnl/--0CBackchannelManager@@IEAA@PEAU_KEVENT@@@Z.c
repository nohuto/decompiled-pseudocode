/*
 * XREFs of ??0CBackchannelManager@@IEAA@PEAU_KEVENT@@@Z @ 0x14009E080
 * Callers:
 *     ?Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z @ 0x14005832C (-Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CBackchannelManager *__fastcall CBackchannelManager::CBackchannelManager(CBackchannelManager *this, struct _KEVENT *a2)
{
  *(_QWORD *)this = &CBackchannelManager::`vftable';
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = -1;
  *((_QWORD *)this + 4) = a2;
  ObfReferenceObject(a2);
  return this;
}
