/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01FACA8
 * Callers:
 *     CancelCapturedMipOverride @ 0x1C01E7BB0 (CancelCapturedMipOverride.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00092AC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00572B4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     IsMiPActive @ 0x1C012E5F4 (IsMiPActive.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this)
{
  char *v1; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 Queue; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 924, 1, 1) )
  {
    v1 = (char *)this + 3576;
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)this + 3576, 2);
    if ( PtiFromInputDest )
    {
      if ( (unsigned int)IsMiPActive(PtiFromInputDest, 0LL) )
      {
        Queue = CInputDest::GetQueue((__int64)v1, 2);
        if ( Queue )
          *(_QWORD *)(Queue + 440) = 0LL;
      }
    }
  }
}
