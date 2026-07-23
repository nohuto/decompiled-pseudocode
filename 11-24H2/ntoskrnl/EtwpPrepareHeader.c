/*
 * XREFs of EtwpPrepareHeader @ 0x1409D64A4
 * Callers:
 *     EtwpFileModeCompress @ 0x1402B780C (EtwpFileModeCompress.c)
 *     EtwpBufferingModeFlush @ 0x1409D2A94 (EtwpBufferingModeFlush.c)
 *     EtwpAddLogHeader @ 0x1409D59FC (EtwpAddLogHeader.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall EtwpPrepareHeader(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx

  v4 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( !v5 )
    v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 48) = v5;
  if ( a3 != 1 && v5 == 72 )
    return 2147483682LL;
  *(_WORD *)(a2 + 52) = a3 | 0x20;
  if ( (*(_QWORD *)(a1 + 800) || (a3 & 0x40) == 0) && (int)(*(_DWORD *)a2 - v5) > 0 )
    memset_0((void *)(a2 + v5), 255, (int)(*(_DWORD *)a2 - v5));
  if ( *(_DWORD *)(a2 + 48) == 72 )
    return (unsigned int)-2147483614;
  return v4;
}
