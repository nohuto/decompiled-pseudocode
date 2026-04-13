/*
 * XREFs of ?Release@CCachedSTAObject@@UEAAKXZ @ 0x180039300
 * Callers:
 *     ?CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z @ 0x18002D7BC (-CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180033440 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x18003D668 (-_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedSTAObject::Release(CCachedSTAObject *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    operator delete(this);
  return v1;
}
