/*
 * XREFs of PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x140752B60
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140A22A64 (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopAdaptiveSetSystemInitiatedRebootTargetStateOverride(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rsi
  unsigned int v3; // ebx

  v1 = *(_DWORD *)(a1 + 12);
  v2 = a1;
  if ( v1 > 6 )
    return (unsigned int)-1073741811;
  v3 = 0;
  if ( !v1 && *(_BYTE *)(a1 + 8) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LOBYTE(a1) = 1;
    PopAcquireAdaptiveLock(a1);
    qword_140FD7248 = qword_140FD7248 & 0xFFFFFFFFFFFFFFF8uLL | *(_DWORD *)(v2 + 12) & 7;
    qword_140FD7248 = qword_140FD7248 & 0xFFFFFFFFFFFFFFF7uLL | (*(_BYTE *)(v2 + 8) != 0 ? 8 : 0);
    PopReleaseAdaptiveLock();
  }
  return v3;
}
