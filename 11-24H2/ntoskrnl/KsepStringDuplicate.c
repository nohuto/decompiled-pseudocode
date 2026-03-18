/*
 * XREFs of KsepStringDuplicate @ 0x14095CB04
 * Callers:
 *     KsepDbGetSdbString @ 0x14073E580 (KsepDbGetSdbString.c)
 *     KsepStringSplitMultiString @ 0x140740268 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407404BC (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x140740728 (KsepRegistryCreateKey.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14095A578 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14095A8A0 (KseAddHardwareId.c)
 *     KsepRegistryOpenKey @ 0x14095BE4C (KsepRegistryOpenKey.c)
 *     KsepDbCacheReadDevice @ 0x14095C178 (KsepDbCacheReadDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14095C824 (KsepDbQueryRegistryDeviceData.c)
 *     KsepStringTransform @ 0x14095C9C8 (KsepStringTransform.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404A03F0 (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x1405E9340 (RtlAssert.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
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
