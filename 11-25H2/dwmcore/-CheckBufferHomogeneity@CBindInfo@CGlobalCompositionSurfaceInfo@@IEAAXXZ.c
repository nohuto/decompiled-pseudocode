/*
 * XREFs of ?CheckBufferHomogeneity@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x180100684
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180101448 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CheckBufferHomogeneity(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rdi
  unsigned int i; // esi
  __int64 v5; // rax
  _DWORD *v6; // rax

  *((_BYTE *)this + 190) = 1;
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 10) - (_QWORD)v2) >> 3) > 1 )
  {
    v3 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 224LL))(*v2);
    for ( i = 1; ; ++i )
    {
      v5 = *((_QWORD *)this + 9);
      if ( i >= (unsigned __int64)((*((_QWORD *)this + 10) - v5) >> 3) )
        break;
      v6 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 8LL * i) + 224LL))(*(_QWORD *)(v5 + 8LL * i));
      if ( *v6 != *v3 || v6[1] != v3[1] || v6[4] != v3[4] || v6[10] != v3[10] )
      {
        *((_BYTE *)this + 190) = 0;
        return;
      }
    }
  }
}
