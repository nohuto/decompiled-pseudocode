/*
 * XREFs of AmlpValidateFirmwareMemoryAddress @ 0x140034730
 * Callers:
 *     AMLIValidateFirmwareMemoryAddress @ 0x14006AE58 (AMLIValidateFirmwareMemoryAddress.c)
 * Callees:
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 */

__int64 __fastcall AmlpValidateFirmwareMemoryAddress(const void **a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v5; // rdi
  __int64 i; // rsi
  __int64 v7; // r8
  __int64 v8; // rcx

  v2 = (__int64)*a1;
  v3 = a2;
  v5 = (__int64)*a1 + a2;
  if ( v5 <= 4096 )
    return 0LL;
  if ( v2 < 4096 )
    v2 = 4096LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)(MemoryInfo + 8) )
      return 0LL;
    v7 = MemoryInfo + 24 * i;
    v8 = *(_QWORD *)(v7 + 16);
    if ( v5 > v8 && v2 < *(_QWORD *)(v7 + 24) + v8 )
      break;
LABEL_8:
    ;
  }
  if ( *(_DWORD *)(v7 + 32) != 1 )
  {
    if ( *(_DWORD *)(v7 + 32) == 3 )
    {
      if ( gAllowInvalidReclaimMemoryMap )
      {
        LogError(-1072431088);
        AcpiDiagTraceAmlError(0LL, -1072431088);
        PrintDebugMessage(0x67u, *a1, (char *)*a1 + v3, 0LL, 0LL);
      }
    }
    goto LABEL_8;
  }
  return 3221225508LL;
}
