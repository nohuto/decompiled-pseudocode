/*
 * XREFs of KsepStringDuplicateUnicode @ 0x140941D34
 * Callers:
 *     KseDriverLoadImage @ 0x14094187C (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140941BB8 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14049AA70 (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall KsepStringDuplicateUnicode(__int64 a1, const void **a2)
{
  size_t v4; // r14
  size_t v5; // rsi
  _WORD *Paged; // rax
  _WORD *v7; // rbp
  __int64 result; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 197261;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x28Du, 0LL);
  }
  *(_OWORD *)a1 = 0LL;
  v4 = *(unsigned __int16 *)a2;
  v5 = v4 + 2;
  Paged = KsepPoolAllocatePaged(v4 + 2);
  v7 = Paged;
  if ( !Paged )
    return 3221225495LL;
  memmove(Paged, a2[1], v4);
  v7[(v5 >> 1) - 1] = 0;
  *(_WORD *)a1 = v4;
  result = 0LL;
  *(_QWORD *)(a1 + 8) = v7;
  *(_WORD *)(a1 + 2) = v5;
  return result;
}
