/*
 * XREFs of SmHpBufferAlloc @ 0x14039F6A0
 * Callers:
 *     SmHpChunkAlloc @ 0x1403A08F0 (SmHpChunkAlloc.c)
 * Callees:
 *     SmHpBufferUpdateFullness @ 0x14039F7E0 (SmHpBufferUpdateFullness.c)
 *     SmBinaryArrayGrow @ 0x1404A0258 (SmBinaryArrayGrow.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmHpBufferAlloc(_DWORD *a1)
{
  unsigned __int16 v2; // bp
  _QWORD *Pool2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  _WORD *v7; // r8
  _WORD *v8; // rdx
  unsigned __int64 i; // rcx

  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 0LL;
  v4 = (unsigned int)a1[136];
  if ( (_DWORD)v4 != -1 )
  {
    _BitScanReverse((unsigned int *)&v5, v4);
    v6 = *(_QWORD *)&a1[2 * v5] + 16 * (v4 ^ (unsigned int)(1 << v5));
    a1[136] = *(_DWORD *)(v6 + 8);
    goto LABEL_4;
  }
  if ( a1[64] > a1[65] )
  {
    v6 = 0LL;
    goto LABEL_14;
  }
  v6 = SmBinaryArrayGrow(a1);
  if ( !v6 )
  {
LABEL_14:
    ExFreePoolWithTag(Pool2, 0);
    return v6;
  }
  LODWORD(v4) = a1[64];
  a1[64] = v4 + 1;
LABEL_4:
  *((_DWORD *)Pool2 + 5) = 0;
  *((_DWORD *)Pool2 + 4) = v4;
  v7 = (_WORD *)(v6 + 8);
  Pool2[1] = Pool2;
  *Pool2 = Pool2;
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_QWORD *)v6 = Pool2;
  v8 = (_WORD *)((char *)Pool2 + (unsigned int)a1[70]);
  for ( i = (unsigned __int64)v8 + (unsigned int)a1[68]; i <= (unsigned __int64)(Pool2 + 512); i += (unsigned int)a1[68] )
  {
    ++v2;
    *v7 = (_WORD)v8 - (_WORD)Pool2;
    v7 = v8;
    v8 = (_WORD *)i;
  }
  *v7 = -1;
  SmHpBufferUpdateFullness(a1, v6, v2);
  return v6;
}
