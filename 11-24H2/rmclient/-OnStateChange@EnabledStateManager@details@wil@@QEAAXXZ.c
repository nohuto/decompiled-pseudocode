/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180012EB0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CA@PEAX@Z @ 0x180012A20 (-_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CA@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  volatile signed __int32 **Ptr; // rax
  volatile signed __int32 **v4; // r8
  unsigned int v5; // edx
  int v6; // eax

  if ( LODWORD(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    Ptr = (volatile signed __int32 **)this[10].Ptr;
    v4 = (volatile signed __int32 **)this[11].Ptr;
    while ( Ptr != v4 )
    {
      v5 = -2111;
      if ( *(_DWORD *)Ptr )
        v5 = -5;
      _InterlockedAnd(Ptr[1], v5);
      Ptr += 2;
    }
    this[11].Ptr = this[10].Ptr;
    v6 = 1;
    if ( HIDWORD(this[3].Ptr) != -1 )
      v6 = HIDWORD(this[3].Ptr) + 1;
    HIDWORD(this[3].Ptr) = v6;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
