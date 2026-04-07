/*
 * XREFs of ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800172F0
 * Callers:
 *     _lambda_71f40e0cc89b0c7a1c7417970f0d8c94_::operator() @ 0x180065AD0 (_lambda_71f40e0cc89b0c7a1c7417970f0d8c94_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetDirtyFlags(CVisual *this, int a2)
{
  __int64 v2; // rbx

  if ( (a2 & *((_DWORD *)this + 22)) != a2 )
  {
    v2 = *((_QWORD *)this + 3);
    for ( *((_DWORD *)this + 22) |= a2; v2; v2 = *(_QWORD *)(v2 + 24) )
    {
      if ( (*(_BYTE *)(v2 + 88) & 1) != 0 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    }
  }
}
