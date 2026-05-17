/*
 * XREFs of RtlpHpEnvTlsSetValue @ 0x18004EB3C
 * Callers:
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18004EAC0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhTlsCleanup @ 0x18004EDC0 (RtlpHpLfhTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1800A4664 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800A4A18 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x1800A4CF4 (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180119830 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlTlsSetValue @ 0x1800B98A0 (RtlTlsSetValue.c)
 *     RtlpHpEnvFlsSetValue @ 0x1800F7600 (RtlpHpEnvFlsSetValue.c)
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
