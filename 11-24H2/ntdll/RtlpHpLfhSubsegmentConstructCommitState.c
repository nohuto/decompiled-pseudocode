/*
 * XREFs of RtlpHpLfhSubsegmentConstructCommitState @ 0x180064560
 * Callers:
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1800643E0 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1800DB1E0 (RtlpHpLfhSubsegmentReformatCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentConstructCommitState(__int64 a1, unsigned __int64 a2, _QWORD *a3, _WORD *a4)
{
  unsigned int v4; // r15d
  int v6; // eax
  _QWORD *v7; // r14
  int v8; // r11d
  int v10; // ebx
  _QWORD *v11; // rbp
  unsigned __int64 v12; // r13
  unsigned __int16 v13; // r12
  unsigned __int64 v14; // r9
  char v15; // cl
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  unsigned __int16 v20; // [rsp+32h] [rbp+Ah]

  v4 = 0;
  v6 = qword_1801CCEC8 ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v7 = a3;
  v8 = (unsigned __int16)v6;
  *a4 = 1;
  v10 = 0;
  v20 = HIWORD(v6);
  v11 = &a3[(unsigned int)*(unsigned __int8 *)(a2 + 24) - 9];
  v12 = 0xFFFFFFFFuLL >> ((32 - (*(_BYTE *)(a2 + 34) & 0x1F)) & 0x1F);
  if ( a3 <= v11 )
  {
    v13 = HIWORD(v6);
    do
    {
      v14 = (unsigned int)*v7 & (unsigned int)v12;
      if ( v7 != v11 )
        v14 = (unsigned int)*v7;
      v4 += __popcnt(v14);
      if ( v14 )
      {
        do
        {
          v15 = *(_BYTE *)(a2 + 38);
          _BitScanForward64(&v16, v14);
          v14 ^= 1LL << v16;
          LODWORD(v16) = v13 + v8 * (v10 + v16);
          v17 = (unsigned int)v16 >> 12 >> v15;
          v18 = ((unsigned int)(v16 + v8 - 1) >> 12 >> v15) - v17 + 1;
          if ( ((unsigned int)(v16 + v8 - 1) >> 12 >> v15) - (_DWORD)v17 != -1 )
          {
            do
            {
              ++a4[v17];
              v17 = (unsigned int)(v17 + 1);
              --v18;
            }
            while ( v18 );
          }
        }
        while ( v14 );
        v13 = v20;
      }
      ++v7;
      v10 += 32;
    }
    while ( v7 <= v11 );
  }
  return v4;
}
