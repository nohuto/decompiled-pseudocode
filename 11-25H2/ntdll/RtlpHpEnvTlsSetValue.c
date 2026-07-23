/*
 * XREFs of RtlpHpEnvTlsSetValue @ 0x18000A3CC
 * Callers:
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x180009B7C (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800F5658 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180114104 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpFlsSetValue @ 0x18000A5E0 (RtlpFlsSetValue.c)
 *     RtlTlsSetValue @ 0x18000A7A0 (RtlTlsSetValue.c)
 *     RtlpHpEnvFlsSetValue @ 0x1800F9260 (RtlpHpEnvFlsSetValue.c)
 */

__int64 __fastcall RtlpHpEnvTlsSetValue(unsigned int a1, __int64 a2)
{
  unsigned __int16 v3; // si
  unsigned int v4; // ebx
  __int64 result; // rax

  v3 = a1;
  v4 = HIWORD(a1);
  result = RtlpFlsSetValue(&RtlpHpEnvFlsContext);
  if ( (int)result >= 0 )
  {
    if ( (int)RtlTlsSetValue(v3, a2) < 0 )
    {
      if ( (int)RtlpHpEnvFlsSetValue(v4, 0LL) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      return 3221225495LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
