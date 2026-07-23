/*
 * XREFs of KiInitDpcThresholds @ 0x140C2A14C
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KiInitializeLegacyWatchdogProfileThresholds @ 0x140C2A5B8 (KiInitializeLegacyWatchdogProfileThresholds.c)
 */

__int64 KiInitDpcThresholds()
{
  unsigned int v0; // r8d
  unsigned int v1; // r9d
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 result; // rax
  int v7; // edx
  unsigned int v8; // ecx

  v0 = KeDpcWatchdogPeriodMs;
  if ( (unsigned int)(KeDpcWatchdogPeriodMs - 1) <= 0x7CE )
  {
    v0 = 2000;
    KeDpcWatchdogPeriodMs = 2000;
  }
  v1 = KeDpcTimeoutMs;
  if ( (unsigned int)(KeDpcTimeoutMs - 1) <= 0x12 )
  {
    v1 = 20;
    KeDpcTimeoutMs = 20;
  }
  v2 = KeDpcSoftTimeoutMs;
  if ( KeDpcSoftTimeoutMs )
  {
    if ( (unsigned int)KeDpcSoftTimeoutMs < 0x14 )
    {
      v2 = 20;
      KeDpcSoftTimeoutMs = 20;
    }
    if ( v1 && v2 > v1 )
    {
      v2 = v1;
      KeDpcSoftTimeoutMs = v1;
    }
  }
  v3 = KeDpcCumulativeSoftTimeoutMs;
  if ( KeDpcCumulativeSoftTimeoutMs )
  {
    if ( (unsigned int)KeDpcCumulativeSoftTimeoutMs < 0x7D0 )
    {
      v3 = 2000;
      KeDpcCumulativeSoftTimeoutMs = 2000;
    }
    if ( v0 && v3 > v0 )
    {
      v3 = v0;
      KeDpcCumulativeSoftTimeoutMs = v0;
    }
  }
  if ( (unsigned int)(KeDpcWatchdogProfileSingleDpcThresholdMs - 1) <= 0xFFFFFFFD )
  {
    v4 = v2;
    if ( (v2 || (v4 = v1) != 0) && KeDpcWatchdogProfileSingleDpcThresholdMs > v4 )
      KeDpcWatchdogProfileSingleDpcThresholdMs = v2;
  }
  if ( (unsigned int)(KeDpcWatchdogProfileCumulativeDpcThresholdMs - 1) <= 0xFFFFFFFD )
  {
    v5 = v3;
    if ( (v3 || (v5 = v0) != 0) && KeDpcWatchdogProfileCumulativeDpcThresholdMs > v5 )
      KeDpcWatchdogProfileCumulativeDpcThresholdMs = v3;
  }
  KiInitializeLegacyWatchdogProfileThresholds();
  result = (unsigned int)KeDpcWatchdogProfileSingleDpcThresholdMs;
  if ( KeDpcWatchdogProfileSingleDpcThresholdMs == -1 )
  {
    result = 0LL;
    KeDpcWatchdogProfileSingleDpcThresholdMs = 0;
  }
  v7 = KeDpcWatchdogProfileCumulativeDpcThresholdMs;
  if ( KeDpcWatchdogProfileCumulativeDpcThresholdMs == -1 )
  {
    v7 = 0;
    KeDpcWatchdogProfileCumulativeDpcThresholdMs = 0;
  }
  v8 = KeDpcWatchdogProfileBufferSizeBytes;
  if ( KeDpcWatchdogProfileBufferSizeBytes == -1 )
  {
    v8 = 0;
    KeDpcWatchdogProfileBufferSizeBytes = 0;
    if ( (_DWORD)result || v7 )
    {
      v8 = 266240;
LABEL_37:
      KeDpcWatchdogProfileBufferSizeBytes = v8;
    }
  }
  else
  {
    result = (unsigned int)(KeDpcWatchdogProfileBufferSizeBytes - 1);
    if ( (unsigned int)result <= 0x1FFE )
    {
      v8 = 0x2000;
      goto LABEL_37;
    }
  }
  dword_140FC53D4 = v8 >> 3;
  return result;
}
