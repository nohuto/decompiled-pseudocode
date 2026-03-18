/*
 * XREFs of ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z @ 0x18012BE00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18012BF0C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CManipulationContext::GetLastPointerTarget(
        CManipulationContext *this,
        int a2,
        struct TargetingInfo *a3)
{
  int v4; // ebx
  __int64 i; // r9
  _DWORD *v8; // rdx

  v4 = 0;
  *(_DWORD *)a3 = 0;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease((char *)a3 + 8);
  for ( i = 0LL; i < *((int *)this + 24); ++i )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 10) + 4 * i) == a2 )
    {
      if ( v4 != -1 )
      {
        v8 = (_DWORD *)(*((_QWORD *)this + 11) + 16LL * v4);
        *(_DWORD *)a3 = *v8;
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=((char *)a3 + 8, v8 + 2);
      }
      return 0LL;
    }
    ++v4;
  }
  return 0LL;
}
