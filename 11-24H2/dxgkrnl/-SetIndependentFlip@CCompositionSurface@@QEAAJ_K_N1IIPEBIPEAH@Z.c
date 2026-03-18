/*
 * XREFs of ?SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z @ 0x14004CED4
 * Callers:
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1400450D0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::SetIndependentFlip(
        CCompositionSurface *this,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        const unsigned int *a7,
        int *a8)
{
  char v8; // di
  unsigned int v9; // r11d
  _QWORD **v10; // rcx
  _QWORD *i; // rax
  __int64 v12; // rdx

  v8 = a3;
  v9 = -1073741275;
  if ( *((_DWORD *)this + 34) )
  {
    v10 = (_QWORD **)((char *)this + 120);
    for ( i = *v10; i != v10; i = (_QWORD *)*i )
    {
      if ( *(i - 1) == a2 )
      {
        LOBYTE(a3) = a4;
        v12 = a6;
        LOBYTE(v12) = v8;
        return (*(unsigned int (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, unsigned int, const unsigned int *, int *))(*(i - 3) + 184LL))(
                 i - 3,
                 v12,
                 a3,
                 a5,
                 a6,
                 a7,
                 a8);
      }
    }
  }
  return v9;
}
