/*
 * XREFs of ?IRegionToRgnDataAndReset@@YAJPEAUIRegion@@PEAUCSM_RGNDATA_@@@Z @ 0x14002CCC4
 * Callers:
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAUCSM_RGNDATA_@@@Z @ 0x14002CC34 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAUCSM_RGNDATA_@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IRegionToRgnDataAndReset(struct IRegion *a1, struct CSM_RGNDATA_ *a2)
{
  _DWORD *v2; // rdi
  unsigned int v5; // eax
  unsigned int v6; // esi
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v2 = (_DWORD *)((char *)a2 + 160);
  *((_DWORD *)a2 + 40) = 10;
  v5 = (*(__int64 (__fastcall **)(struct IRegion *, char *, struct CSM_RGNDATA_ *, int *))(*(_QWORD *)a1 + 56LL))(
         a1,
         (char *)a2 + 160,
         a2,
         &v8);
  v6 = v5;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      *v2 = -1;
    }
    else if ( v5 == -1073741789 && v8 == 2 )
    {
      (*(void (__fastcall **)(struct IRegion *, struct CSM_RGNDATA_ *))(*(_QWORD *)a1 + 64LL))(a1, a2);
      v6 = 0;
      *v2 = 1;
    }
  }
  else
  {
    *v2 = 0;
  }
  (*(void (__fastcall **)(struct IRegion *))(*(_QWORD *)a1 + 16LL))(a1);
  return v6;
}
