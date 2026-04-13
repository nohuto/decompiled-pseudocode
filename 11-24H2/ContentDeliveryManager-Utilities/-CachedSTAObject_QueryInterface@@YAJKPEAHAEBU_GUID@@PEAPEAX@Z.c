/*
 * XREFs of ?CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z @ 0x18002D78C
 * Callers:
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180033520 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@CCachedSTAObject@@UEAAKXZ @ 0x180039360 (-Release@CCachedSTAObject@@UEAAKXZ.c)
 *     ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x18003D848 (-_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CachedSTAObject_QueryInterface(__int64 a1, int *a2, struct _GUID *a3, void **a4)
{
  DWORD v4; // ecx
  unsigned int v6; // ebx
  int CachedSTAObject; // eax
  CCachedSTAObject *v8; // rdi
  __int64 (__fastcall ***v9)(_QWORD, GUID *, void **); // rcx
  CCachedSTAObject *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = (CCachedSTAObject *)a3;
  v4 = g_tlsThumbnailCache;
  *a4 = 0LL;
  if ( a2 )
    *a2 = 0;
  v6 = 1;
  if ( v4 != -1 )
  {
    v11 = 0LL;
    CachedSTAObject = _GetCachedSTAObject(v4, a2, &v11);
    v6 = CachedSTAObject;
    if ( CachedSTAObject < 0 )
    {
      return 1;
    }
    else
    {
      v8 = v11;
      if ( !CachedSTAObject )
      {
        *a4 = 0LL;
        v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, void **))*((_QWORD *)v8 + 4);
        if ( v9 )
          v6 = (**v9)(v9, &GUID_f676c15d_596a_4ce2_8234_33996f445db1, a4);
        else
          v6 = 1;
      }
      CCachedSTAObject::Release(v8);
    }
  }
  return v6;
}
