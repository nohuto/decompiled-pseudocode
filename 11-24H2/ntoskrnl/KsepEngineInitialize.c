/*
 * XREFs of KsepEngineInitialize @ 0x140C2D410
 * Callers:
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 * Callees:
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 *     KsepCacheInitialize @ 0x14073E4CC (KsepCacheInitialize.c)
 *     KsepEngineReadFlags @ 0x140C2E280 (KsepEngineReadFlags.c)
 */

__int64 __fastcall KsepEngineInitialize(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rax

  if ( !a1 )
  {
    v2 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v2 + 1] = -1073740768;
    KsepHistoryErrors[2 * v2] = 131872;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\ksecore.c", 0x320u, 0LL);
  }
  a1[3] = a1 + 2;
  a1[2] = a1 + 2;
  a1[5] = a1 + 4;
  a1[4] = a1 + 4;
  a1[6] = 0LL;
  v3 = KsepCacheInitialize(
         (__int64)a1,
         (__int64)KsepCacheDeviceEqual,
         (__int64)KsepCacheDeviceHash,
         (__int64)KsepCacheDeviceFree);
  a1[9] = v3;
  if ( !v3 )
    return 3221225495LL;
  v6 = KsepCacheInitialize(v4, (__int64)KsepCacheHwIdEqual, (__int64)KsepCacheHwIdHash, (__int64)KsepCacheHwIdFree);
  a1[10] = v6;
  if ( !v6 )
    return 3221225495LL;
  a1[7] = KseGetIoCallbacks;
  a1[8] = KseSetCompletionHook;
  result = KsepEngineReadFlags(&KseEngine);
  if ( (int)result >= 0 && (KseEngine & 3) == 3 )
    return 3221225659LL;
  return result;
}
