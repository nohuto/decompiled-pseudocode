/*
 * XREFs of PfLogFileDataAccess @ 0x140275080
 * Callers:
 *     MiLogRelocationRva @ 0x1408F567C (MiLogRelocationRva.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     PfLogEvent @ 0x140245398 (PfLogEvent.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 */

__int64 __fastcall PfLogFileDataAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v5; // rdi
  __int64 v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // r10
  unsigned int v11; // edi
  unsigned int PagePriorityThread; // eax
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned int v17; // edx
  __int64 v18; // rcx
  size_t Size; // [rsp+20h] [rbp-48h]
  int v20[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v21; // [rsp+40h] [rbp-28h]
  unsigned __int64 v22; // [rsp+50h] [rbp-18h]

  v5 = *(_QWORD **)(a2 + 544);
  v22 = 0LL;
  *(_OWORD *)v20 = 0LL;
  v7 = v5[235];
  v21 = 0LL;
  _m_prefetchw((const void *)(v7 + 40));
  v8 = *(_QWORD *)(v7 + 40);
  do
  {
    if ( (unsigned __int64)(v8 + 1) <= 1 )
    {
      if ( v8 )
        __fastfail(0xEu);
      v7 = 0LL;
      goto LABEL_5;
    }
    v9 = v8;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 40), v8 + 1, v8);
  }
  while ( v9 != v8 );
  v10 = *(_QWORD *)(v7 + 32);
  if ( v7 && v10 && *(_DWORD *)(v10 + 608) < *(_DWORD *)(v10 + 612) )
  {
    PagePriorityThread = PsGetPagePriorityThread(a2);
    if ( PagePriorityThread < v17 )
    {
      v11 = 0;
    }
    else
    {
      v18 = v5[58];
      *(_QWORD *)&v21 = v15 & 0x7FFFFFFFFFFFFFFFLL | ((__int64)a5 << 63);
      *(_QWORD *)&v20[2] = v14 >> 12;
      *((_QWORD *)&v21 + 1) = (v5[63] ^ v18) & 0x1FFFFFFFFFFFFFFFLL;
      v22 = __PAIR64__(v18, xmmword_140F0E408);
      *(_QWORD *)v20 = a1;
      LODWORD(Size) = 40;
      v11 = PfLogEvent(
              v16,
              10,
              dword_140E66E7C
            + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
              v20,
              Size);
    }
    goto LABEL_6;
  }
LABEL_5:
  v11 = -1073741637;
  if ( !v7 )
    return v11;
LABEL_6:
  PsDereferencePartition(v7);
  return v11;
}
