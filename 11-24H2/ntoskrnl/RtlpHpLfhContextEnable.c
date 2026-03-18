/*
 * XREFs of RtlpHpLfhContextEnable @ 0x14060657C
 * Callers:
 *     RtlpHpHeapCreate @ 0x140604D0C (RtlpHpHeapCreate.c)
 *     ExpHeapInitLfhStartCallback @ 0x14065A2D0 (ExpHeapInitLfhStartCallback.c)
 * Callees:
 *     RtlpHpEnvTlsAlloc @ 0x140605E4C (RtlpHpEnvTlsAlloc.c)
 *     RtlpHpLfhContextUpdateConfig @ 0x14060696C (RtlpHpLfhContextUpdateConfig.c)
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
