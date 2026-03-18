/*
 * XREFs of ?NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ @ 0x14009CE90
 * Callers:
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z @ 0x1400360C0 (-OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionSurface::NotifyBuffersOfDwmTermination(CCompositionSurface *this)
{
  char *v1; // rdi
  char *i; // rbx

  if ( *((_DWORD *)this + 34) )
  {
    v1 = (char *)this + 120;
    for ( i = (char *)*((_QWORD *)this + 15); i != v1; i = *(char **)i )
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)i - 3) + 56LL))((_QWORD *)i - 3);
  }
}
