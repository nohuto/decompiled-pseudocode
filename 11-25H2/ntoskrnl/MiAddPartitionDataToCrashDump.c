/*
 * XREFs of MiAddPartitionDataToCrashDump @ 0x14066B648
 * Callers:
 *     MmAddPrivateDataToCrashDump @ 0x14066BF24 (MmAddPrivateDataToCrashDump.c)
 * Callees:
 *     MiAddPartitionToCrashDump @ 0x14066B850 (MiAddPartitionToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddPartitionDataToCrashDump(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // edx
  int v6; // r11d
  unsigned int v7; // r10d
  char *v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rdx
  char *v11; // rdx
  __int64 i; // r9
  unsigned __int64 v13; // rax
  unsigned int SizeOfBitMap; // edx
  int v15; // eax

  v1 = 0;
  LODWORD(v3) = MmAddRangeToCrashDump(a1, qword_140E2FD48, 8LL);
  if ( (int)v3 < 0 )
    return (unsigned int)v3;
  LODWORD(v3) = MmAddRangeToCrashDump(a1, qword_140E2FD28, 16LL);
  if ( (int)v3 < 0 )
    return (unsigned int)v3;
  v4 = MmAddRangeToCrashDump(
         a1,
         qword_140E2FD28->Buffer,
         8 * (((unsigned __int64)qword_140E2FD28->SizeOfBitMap >> 6) + ((qword_140E2FD28->SizeOfBitMap & 0x3F) != 0)));
  v3 = (unsigned int)v4;
  if ( v4 < 0 )
    return (unsigned int)v3;
  do
  {
    v5 = qword_140E2FD28->SizeOfBitMap - 1;
    v6 = ((__int64)qword_140E2FD28->Buffer & 4) != 0LL ? 0x20 : 0;
    v7 = v1 < qword_140E2FD28->SizeOfBitMap ? v1 : 0;
    v8 = (char *)qword_140E2FD28->Buffer - (((__int64)qword_140E2FD28->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v9 = v6 + v5;
      if ( v5 - v7 == -1 )
        goto LABEL_6;
      v11 = &v8[8 * ((unsigned __int64)(v6 + v7) >> 6)];
      for ( i = ~*(_QWORD *)v11 | ((1LL << ((v6 + v7) & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v11 )
      {
        v11 += 8;
        if ( v11 > &v8[8 * ((unsigned __int64)v9 >> 6)] )
          goto LABEL_6;
      }
      _BitScanForward64(&v13, ~i);
      v10 = (unsigned int)v13 + ((unsigned int)((v11 - v8) >> 3) << 6);
      if ( (unsigned int)v10 > v9 )
      {
LABEL_6:
        v10 = 0xFFFFFFFFLL;
        goto LABEL_13;
      }
      if ( (_DWORD)v10 != -1 )
        break;
LABEL_13:
      if ( !v7 )
        goto LABEL_18;
      SizeOfBitMap = v1 + 1;
      if ( v1 + 1 > qword_140E2FD28->SizeOfBitMap )
        SizeOfBitMap = qword_140E2FD28->SizeOfBitMap;
      v5 = SizeOfBitMap - 1;
      v7 = 0;
    }
    v10 = (unsigned int)(v10 - v6);
LABEL_18:
    if ( (unsigned int)v10 < v1 )
      break;
    if ( (_DWORD)v10 == -1 )
      break;
    v1 = v10 + 1;
    v15 = MiAddPartitionToCrashDump(a1, *((_QWORD *)qword_140E2FD48 + v10), v3);
    v3 = (unsigned int)v15;
  }
  while ( v15 >= 0 );
  if ( (int)v3 >= 0 )
  {
    if ( !stru_140E2FD70.Buffer
      || (LODWORD(v3) = MmAddRangeToCrashDump(
                          a1,
                          stru_140E2FD70.Buffer,
                          8 * ((stru_140E2FD70.SizeOfBitMap >> 6) + ((stru_140E2FD70.SizeOfBitMap & 0x3F) != 0))),
          (int)v3 >= 0) )
    {
      if ( qword_140E2FD80 )
        LODWORD(v3) = MmAddRangeToCrashDump(a1, qword_140E2FD80, 0x2000000LL);
    }
  }
  return (unsigned int)v3;
}
