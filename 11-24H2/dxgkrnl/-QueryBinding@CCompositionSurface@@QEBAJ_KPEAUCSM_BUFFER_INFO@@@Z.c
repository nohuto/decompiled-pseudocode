/*
 * XREFs of ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x140049F30
 * Callers:
 *     NtQueryCompositionSurfaceBinding @ 0x1400472D0 (NtQueryCompositionSurfaceBinding.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::QueryBinding(CCompositionSurface *this, __int64 a2, struct CSM_BUFFER_INFO *a3)
{
  unsigned int v3; // r10d
  _QWORD **v4; // rcx
  _QWORD *i; // rax

  *(_DWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = 0LL;
  if ( !a2 )
    a2 = *((_QWORD *)this + 5);
  v3 = -1073741275;
  if ( *((_DWORD *)this + 34) )
  {
    v4 = (_QWORD **)((char *)this + 120);
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
    {
      if ( *(i - 1) == a2 )
        return (*(unsigned int (__fastcall **)(_QWORD *, struct CSM_BUFFER_INFO *))(*(i - 3) + 48LL))(i - 3, a3);
    }
  }
  return v3;
}
