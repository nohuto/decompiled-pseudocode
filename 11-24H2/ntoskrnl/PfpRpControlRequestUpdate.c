/*
 * XREFs of PfpRpControlRequestUpdate @ 0x140A5EDA0
 * Callers:
 *     PfpRpControlRequestPerform @ 0x140A5ED28 (PfpRpControlRequestPerform.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1D3B8 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashAddEntries @ 0x140A5EF34 (PfpRpCHashAddEntries.c)
 */

__int64 __fastcall PfpRpControlRequestUpdate(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r15
  _DWORD *v4; // rcx
  unsigned int v5; // esi
  _QWORD *v7; // r12
  unsigned int *v8; // r14
  _QWORD *v9; // r13
  void *v10; // rcx
  __int64 v11; // rbp
  PEPROCESS v12; // rcx
  __int64 result; // rax
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  PEPROCESS Process; // [rsp+60h] [rbp+8h] BYREF

  v2 = (unsigned int)(a2[2] + a2[1]);
  Process = 0LL;
  v4 = a2 + 6;
  v5 = 0;
  v7 = a2 + 6;
  v8 = a2 + 6;
  v9 = (_QWORD *)(((unsigned __int64)&a2[2 * v2 + 7] + 3) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (_DWORD)v2 )
  {
    do
    {
      v10 = (void *)v8[1];
      v11 = *v8;
      *v7++ = v11;
      if ( (_DWORD)v10 && PsLookupProcessByProcessId(v10, &Process) >= 0 )
      {
        v12 = Process;
        if ( HIDWORD(Process[1].CpuPartitionList.Blink) == (_DWORD)v11 )
        {
          if ( v5 < a2[1] )
            _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x4000u);
          else
            _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFFBFFF);
          v12 = Process;
        }
        ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      }
      ++v5;
      v8 += 2;
    }
    while ( v5 < (unsigned int)v2 );
    v4 = a2 + 6;
  }
  result = PfpRpCHashAddEntries(a1, a1 + 96, a1 + 120, v4, a2[1]);
  if ( (int)result >= 0 )
  {
    v14 = a2[2];
    if ( !v14
      || !*(_DWORD *)(a1 + 112)
      || (result = PfpRpCHashDeleteEntries(a1, a1 + 96, (volatile signed __int64 *)(a1 + 120), v14, &a2[2 * a2[1] + 6]),
          (int)result >= 0) )
    {
      PfpRpCHashAddEntries(a1, a1 + 56, a1 + 88, &v9[a2[3]], a2[4]);
      v15 = a2[3];
      if ( !v15 || !*(_DWORD *)(a1 + 72) )
        return 0LL;
      result = PfpRpCHashDeleteEntries(a1, a1 + 56, (volatile signed __int64 *)(a1 + 88), v15, v9);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(a1 + 80) = 0LL;
        return 0LL;
      }
    }
  }
  return result;
}
