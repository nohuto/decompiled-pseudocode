/*
 * XREFs of ?Release@CCachedSTAObject@@UEAAKXZ @ 0x18067E860
 * Callers:
 *     ?CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z @ 0x1802AA2C4 (-CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z @ 0x18067D604 (-CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z.c)
 *     ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x18067EBB4 (-_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CCachedSTAObject::Release(CCachedSTAObject *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    operator delete(this);
  return v1;
}
