/*
 * XREFs of RtlpHpEnvTlsSetValue @ 0x18006471C
 * Callers:
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhTlsCleanup @ 0x1800649A0 (RtlpHpLfhTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1800D6160 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800D638C (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x1800D6668 (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlTlsSetValue @ 0x1800B1640 (RtlTlsSetValue.c)
 *     RtlpHpEnvFlsSetValue @ 0x1800F1D50 (RtlpHpEnvFlsSetValue.c)
 */

__int64 __fastcall RtlpHpEnvTlsSetValue(unsigned int a1, __int64 a2)
{
  unsigned __int16 v3; // si
  __int64 result; // rax
  unsigned int v5; // ebx

  v3 = a1;
  if ( ((__int64)NtCurrentTeb()->HeapFlsData & 1) != 0 )
    return 3221225547LL;
  v5 = HIWORD(a1);
  result = RtlpHpEnvFlsSetValue(HIWORD(a1));
  if ( (int)result >= 0 )
  {
    if ( (int)RtlTlsSetValue(v3, a2) >= 0 )
    {
      return 0LL;
    }
    else
    {
      if ( (int)RtlpHpEnvFlsSetValue(v5) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      return 3221225495LL;
    }
  }
  return result;
}
