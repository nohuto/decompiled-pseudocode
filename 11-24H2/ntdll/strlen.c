/*
 * XREFs of strlen @ 0x1801660A0
 * Callers:
 *     RtlGetVersion @ 0x18000B7B0 (RtlGetVersion.c)
 *     LdrpReportError @ 0x180032720 (LdrpReportError.c)
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x180036720 (LdrpGetDelayloadExportDll.c)
 *     LdrpGetShimEngineInterface @ 0x180036888 (LdrpGetShimEngineInterface.c)
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18008D200 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800D7DA0 (LdrpLogDelayLoadTrigger.c)
 *     RtlInitAnsiStringEx @ 0x1800DB490 (RtlInitAnsiStringEx.c)
 *     RtlInitAnsiString @ 0x1800DF230 (RtlInitAnsiString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1800E32B0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     AVrfpDetectVerifiedExports @ 0x1800E75FC (AVrfpDetectVerifiedExports.c)
 *     RtlAppendAsciizToString @ 0x18013A790 (RtlAppendAsciizToString.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strlen(const char *Str)
{
  const char *v1; // rax
  __int64 v2; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned int v8; // edx

  v1 = Str;
  v2 = -(__int64)Str;
  if ( ((unsigned __int8)v1 & 7) == 0 )
    goto LABEL_4;
  do
  {
    if ( !*v1++ )
      return (size_t)&v1[v2 - 1];
  }
  while ( ((unsigned __int8)v1 & 7) != 0 );
  while ( 1 )
  {
    do
    {
LABEL_4:
      v4 = *(_QWORD *)v1;
      v1 += 8;
    }
    while ( (((v4 + 0x7EFEFEFEFEFEFEFFLL) ^ ~v4) & 0x8101010101010100uLL) == 0 );
    v5 = *((_QWORD *)v1 - 1);
    if ( !(_BYTE)v5 )
      break;
    if ( !BYTE1(v5) )
      return (size_t)&v1[v2 - 7];
    v6 = v5 >> 16;
    if ( !(_BYTE)v6 )
      return (size_t)&v1[v2 - 6];
    if ( !BYTE1(v6) )
      return (size_t)&v1[v2 - 5];
    v7 = v6 >> 16;
    if ( !(_BYTE)v7 )
      return (size_t)&v1[v2 - 4];
    if ( !BYTE1(v7) )
      return (size_t)&v1[v2 - 3];
    v8 = WORD1(v7);
    if ( !(_BYTE)v8 )
      return (size_t)&v1[v2 - 2];
    if ( !BYTE1(v8) )
      return (size_t)&v1[v2 - 1];
  }
  return (size_t)&v1[v2 - 8];
}
