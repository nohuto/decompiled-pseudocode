/*
 * XREFs of ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1800ED728
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800ED3DC (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 v1; // rbx
  _QWORD *i; // rsi

  v1 = 0LL;
  for ( i = (_QWORD *)((char *)this + 936); (unsigned int)v1 < *((_DWORD *)this + 240); v1 = (unsigned int)(v1 + 1) )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(*(CDrawListCache **)(*i + 8 * v1));
  DynArray<CChannelContext *,1>::Reset(i, 1LL);
}
