/*
 * XREFs of KsepStringDuplicate @ 0x1409445C4
 * Callers:
 *     KsepDbGetSdbString @ 0x14073C4B0 (KsepDbGetSdbString.c)
 *     KsepStringSplitMultiString @ 0x14073E198 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x14073E3EC (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x14073E658 (KsepRegistryCreateKey.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140942038 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x140942360 (KseAddHardwareId.c)
 *     KsepRegistryOpenKey @ 0x14094390C (KsepRegistryOpenKey.c)
 *     KsepDbCacheReadDevice @ 0x140943C38 (KsepDbCacheReadDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409442E4 (KsepDbQueryRegistryDeviceData.c)
 *     KsepStringTransform @ 0x140944488 (KsepStringTransform.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14049AA70 (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall KsepStringDuplicate(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  size_t v5; // rbx
  __int64 result; // rax
  void *Paged; // rax
  void *v8; // rsi
  __int64 v9; // rax

  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 197202;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x252u, 0LL);
  }
  v4 = -1LL;
  *(_OWORD *)a1 = 0LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( v5 > 0xFFFE )
    return 3221225990LL;
  Paged = KsepPoolAllocatePaged(v5);
  v8 = Paged;
  if ( !Paged )
    return 3221225495LL;
  memmove(Paged, a2, v5);
  *(_QWORD *)(a1 + 8) = v8;
  *(_WORD *)a1 = v5 - 2;
  result = 0LL;
  *(_WORD *)(a1 + 2) = v5;
  return result;
}
