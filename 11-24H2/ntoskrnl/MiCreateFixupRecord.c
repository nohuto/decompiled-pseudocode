/*
 * XREFs of MiCreateFixupRecord @ 0x1409771A4
 * Callers:
 *     MiScanRelocationPage @ 0x140976FE0 (MiScanRelocationPage.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 */

__int64 __fastcall MiCreateFixupRecord(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, _WORD *a6, _QWORD *a7)
{
  __int64 v8; // rbx
  __int16 v9; // r13
  unsigned int v10; // r12d
  int v11; // r14d
  __int64 Pool; // rax
  __int64 v14; // [rsp+50h] [rbp+8h]

  if ( (a3 + 4096) >> 12 >= *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    return 3221225477LL;
  v8 = 0LL;
  HIDWORD(v14) = 0;
  v9 = *a6 >> 12;
  v10 = 4096 - a4;
  if ( (a3 & 0xFFF) >= 4096 - a4 )
  {
    *a6 &= 0xFFFu;
    v11 = a5;
  }
  else
  {
    v11 = a5;
    if ( a5 == 4 )
    {
      LODWORD(v14) = *(_DWORD *)(a3 + a2);
      v8 = v14;
    }
    else
    {
      v8 = *(_QWORD *)(a3 + a2);
    }
  }
  Pool = MiAllocatePool(0x100uLL, 0x20uLL, 1917218125);
  if ( !Pool )
    return 3221225626LL;
  *(_WORD *)(Pool + 16) = v9;
  *(_DWORD *)(Pool + 12) = a3 + v11;
  if ( (a3 & 0xFFF) < v10 )
  {
    *(_DWORD *)(Pool + 8) = a3;
    *(_QWORD *)(Pool + 24) = v8;
    *(_QWORD *)(*a7 + 8 * ((unsigned __int64)a3 >> 12)) |= 1uLL;
  }
  else
  {
    *(_DWORD *)(Pool + 8) = (a3 & 0xFFFFF000) + 4096;
  }
  *(_QWORD *)(*a7 + 8 * ((unsigned __int64)*(unsigned int *)(Pool + 12) >> 12)) |= 1uLL;
  *(_QWORD *)Pool = a7[2];
  a7[2] = Pool;
  return 0LL;
}
