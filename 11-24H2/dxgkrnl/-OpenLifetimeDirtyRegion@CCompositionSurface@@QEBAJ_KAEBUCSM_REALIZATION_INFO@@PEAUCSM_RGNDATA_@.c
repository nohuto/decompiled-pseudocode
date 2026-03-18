/*
 * XREFs of ?OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAUCSM_RGNDATA_@@@Z @ 0x14002C76C
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140043640 (NtOpenCompositionSurfaceDirtyRegion.c)
 * Callees:
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAUCSM_RGNDATA_@@@Z @ 0x14002D36C (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAUCSM_RGNDATA_@@@Z.c)
 */

int __fastcall CCompositionSurface::OpenLifetimeDirtyRegion(
        CCompositionSurface *this,
        __int64 a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CSM_RGNDATA_ *a4)
{
  int result; // eax
  char *v6; // r10
  char *i; // rcx
  _QWORD *v8; // r8
  int v9; // edx
  _QWORD *v10; // rcx
  CBufferRealization *v11; // rcx

  result = -1073741275;
  if ( *((_DWORD *)this + 34) )
  {
    v6 = (char *)this + 120;
    for ( i = (char *)*((_QWORD *)this + 15); i != v6; i = *(char **)i )
    {
      if ( *((_QWORD *)i - 1) == a2 )
      {
        v8 = i + 248;
        v9 = 0;
        v10 = (_QWORD *)*((_QWORD *)i + 31);
        while ( v10 != v8 )
        {
          if ( v9 == *((_DWORD *)a3 + 1) )
          {
            v11 = (CBufferRealization *)(v10 - 1);
            if ( v11 )
              return CBufferRealization::OpenLifetimeDirtyRegion(v11, a4);
            return result;
          }
          v10 = (_QWORD *)*v10;
          ++v9;
        }
        return result;
      }
    }
  }
  return result;
}
