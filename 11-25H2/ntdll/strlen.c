/*
 * XREFs of strlen @ 0x180169260
 * Callers:
 *     LdrpReportError @ 0x180008910 (LdrpReportError.c)
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x180023840 (LdrpGetDelayloadExportDll.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800239B0 (LdrpLogDelayLoadTrigger.c)
 *     RtlGetVersion @ 0x180039460 (RtlGetVersion.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpGetShimEngineInterface @ 0x1800D11F0 (LdrpGetShimEngineInterface.c)
 *     RtlInitAnsiStringEx @ 0x1800DD5F0 (RtlInitAnsiStringEx.c)
 *     RtlInitAnsiString @ 0x1800E0910 (RtlInitAnsiString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1800E9DE0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     AVrfpDetectVerifiedExports @ 0x1800ED1AC (AVrfpDetectVerifiedExports.c)
 *     RtlIsApiSetImplemented @ 0x1800EE0F0 (RtlIsApiSetImplemented.c)
 *     RtlAppendAsciizToString @ 0x18013DCD0 (RtlAppendAsciizToString.c)
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
