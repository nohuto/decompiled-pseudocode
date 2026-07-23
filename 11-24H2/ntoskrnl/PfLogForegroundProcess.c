/*
 * XREFs of PfLogForegroundProcess @ 0x1402629EC
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     PfLogEvent @ 0x14020DB78 (PfLogEvent.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 */

__int64 __fastcall PfLogForegroundProcess(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  size_t Size; // [rsp+20h] [rbp-28h]
  int v8[2]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+38h] [rbp-10h]
  int v10; // [rsp+3Ch] [rbp-Ch]

  v1 = *(_QWORD *)(a1 + 856);
  if ( (unsigned __int8)PsReferencePartitionSafe(v1) )
  {
    v3 = *(_QWORD *)(v1 + 32);
    if ( v1 && v3 && *(_DWORD *)(v3 + 608) < *(_DWORD *)(v3 + 612) )
    {
      v6 = *(unsigned int *)(v2 - 560);
      v10 = 0;
      *(_QWORD *)v8 = v6;
      v9 = *(_DWORD *)(v2 - 124);
      LODWORD(Size) = 16;
      v4 = PfLogEvent(
             v3,
             7,
             dword_140E66FCC
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                           + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
             v8,
             Size);
      goto LABEL_5;
    }
  }
  else
  {
    v1 = 0LL;
  }
  v4 = -1073741637;
  if ( v1 )
LABEL_5:
    PsDereferencePartition(v1);
  return v4;
}
