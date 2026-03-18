/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x14021E6D0
 * Callers:
 *     CancelCapturedMipOverride @ 0x140155F50 (CancelCapturedMipOverride.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     IsMiPActive @ 0x1400BD87C (IsMiPActive.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E39B0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this)
{
  CInputDest *v1; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 Queue; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1) )
  {
    v1 = (CMouseProcessor *)((char *)this + 3784);
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((CMouseProcessor *)((char *)this + 3784), 2);
    if ( PtiFromInputDest )
    {
      if ( (unsigned int)IsMiPActive(PtiFromInputDest, 0LL) )
      {
        Queue = CInputDest::GetQueue(v1, 2);
        if ( Queue )
          *(_QWORD *)(Queue + 488) = 0LL;
      }
    }
  }
}
