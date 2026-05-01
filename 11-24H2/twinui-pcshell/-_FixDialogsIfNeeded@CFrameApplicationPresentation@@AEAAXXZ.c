/*
 * XREFs of ?_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800D2678
 * Callers:
 *     _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x1800D20B8 (_lambda_31520e38682400c193ecfa4924368fd9_--operator().c)
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::operator() @ 0x18030A098 (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CFrameApplicationPresentation::_FixDialogsIfNeeded(CFrameApplicationPresentation *this)
{
  __int64 v1; // rcx

  if ( **((_QWORD **)this + 14) && !*((_DWORD *)this + 54) )
  {
    v1 = *((_QWORD *)this + 81);
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 192LL))(v1);
  }
}
