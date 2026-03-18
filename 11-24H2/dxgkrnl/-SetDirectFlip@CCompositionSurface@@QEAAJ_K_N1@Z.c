/*
 * XREFs of ?SetDirectFlip@CCompositionSurface@@QEAAJ_K_N1@Z @ 0x140057724
 * Callers:
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1400537D0 (NtSetCompositionSurfaceDirectFlipState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::SetDirectFlip(CCompositionSurface *this, __int64 a2, __int64 a3, char a4)
{
  char v5; // r11
  unsigned int v6; // ebx
  _QWORD **v7; // rcx
  _QWORD *i; // rax
  _QWORD *v9; // r9
  __int64 v10; // rdx

  v5 = a3;
  v6 = -1073741275;
  if ( *((_DWORD *)this + 34) )
  {
    v7 = (_QWORD **)((char *)this + 120);
    for ( i = *v7; i != v7; i = (_QWORD *)*i )
    {
      v9 = i - 3;
      if ( *(i - 1) == a2 )
      {
        v10 = *v9;
        v6 = 0;
        LOBYTE(a3) = a4;
        LOBYTE(v10) = v5;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v9 + 176LL))(i - 3, v10, a3);
        return v6;
      }
    }
  }
  return v6;
}
