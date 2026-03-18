/*
 * XREFs of ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x14009D098
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x14020A5B0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x14001EC7C (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x14001F788 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::UnPair(CCompositionSurface *this)
{
  char *v2; // rdi
  char *i; // rbx
  CFlipExBuffer *v4; // rax

  if ( *((_QWORD *)this + 20) )
  {
    v2 = (char *)this + 120;
    for ( i = (char *)*((_QWORD *)this + 15); i != v2; i = *(char **)i )
    {
      v4 = CFlipExBuffer::FromBuffer((unsigned __int64)(i - 24));
      CFlipExBuffer::DisableCascadedSignaling(v4);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 16LL))(*((_QWORD *)this + 20));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 8LL))(*((_QWORD *)this + 20), 0LL);
    *((_QWORD *)this + 20) = 0LL;
  }
  return 0LL;
}
