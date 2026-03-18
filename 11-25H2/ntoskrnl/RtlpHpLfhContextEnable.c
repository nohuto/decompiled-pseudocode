/*
 * XREFs of RtlpHpLfhContextEnable @ 0x1405FA23C
 * Callers:
 *     RtlpHpHeapCreate @ 0x1405F89CC (RtlpHpHeapCreate.c)
 *     ExpHeapInitLfhStartCallback @ 0x14064E440 (ExpHeapInitLfhStartCallback.c)
 * Callees:
 *     RtlpHpEnvTlsAlloc @ 0x1405F9B0C (RtlpHpEnvTlsAlloc.c)
 *     RtlpHpLfhContextUpdateConfig @ 0x1405FA62C (RtlpHpLfhContextUpdateConfig.c)
 */

__int64 __fastcall RtlpHpLfhContextEnable(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // r8d

  v4 = RtlpHpEnvTlsAlloc();
  if ( v4 )
  {
    *(_DWORD *)(a1 + 76) = v4;
    RtlpHpLfhContextUpdateConfig(a1, a2, 0LL);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
