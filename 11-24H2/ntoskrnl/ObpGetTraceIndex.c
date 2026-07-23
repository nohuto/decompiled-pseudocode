/*
 * XREFs of ObpGetTraceIndex @ 0x14074317C
 * Callers:
 *     ObpPushRefDerefInfo @ 0x140743518 (ObpPushRefDerefInfo.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpGetTraceIndex(unsigned __int16 *Source2)
{
  unsigned int v1; // esi
  unsigned __int16 *v3; // r8
  __int64 v4; // rcx
  int v5; // edx
  int v6; // eax
  _QWORD *v7; // r15
  __int16 v8; // si
  unsigned int v9; // ebp
  unsigned __int16 *v10; // r8
  unsigned int v11; // edi
  __int64 Pool2; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx

  v1 = 0;
  v3 = Source2;
  v4 = 32LL;
  do
  {
    v5 = v3[1];
    v6 = *v3;
    v3 += 2;
    v1 += v6 ^ v5;
    --v4;
  }
  while ( v4 );
  v7 = ObpStackTable;
  v8 = v1 % 0x3FFD;
  LOWORD(v9) = v8;
  while ( 1 )
  {
    v10 = (unsigned __int16 *)ObpStackTable;
    LOWORD(v11) = *((_WORD *)ObpStackTable + (unsigned __int16)v9 + 68);
    if ( (_WORD)v11 == 0xFFFF )
      break;
    if ( RtlCompareMemory(
           (const void *)(v7[((unsigned __int64)*((unsigned __int16 *)ObpStackTable + (unsigned __int16)v9 + 68) >> 10)
                           + 1]
                        + ((unsigned __int64)(v11 & 0x3FF) << 7)),
           Source2,
           0x80uLL) == 128 )
      return (unsigned __int16)v11;
    v9 = ((unsigned int)(unsigned __int16)v9 + 1) % 0x3FFD;
    if ( (_WORD)v9 == v8 )
      return 16381LL;
  }
  if ( *(_WORD *)ObpStackTable == *((_WORD *)ObpStackTable + 1) )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x20000uLL, 0x7452624Fu);
    if ( !Pool2 )
      return 16381LL;
    v10 = (unsigned __int16 *)ObpStackTable;
    *((_QWORD *)ObpStackTable + ((unsigned __int64)*((unsigned __int16 *)ObpStackTable + 1) >> 10) + 1) = Pool2;
    v10[1] += 1024;
  }
  v11 = *v10;
  v10[(unsigned __int16)v9 + 68] = v11;
  v14 = (unsigned __int64)(v11 & 0x3FF) << 7;
  v15 = *(_QWORD *)&v10[4 * ((unsigned __int64)v11 >> 10) + 4];
  *(_OWORD *)(v15 + v14) = *(_OWORD *)Source2;
  *(_OWORD *)(v15 + v14 + 16) = *((_OWORD *)Source2 + 1);
  *(_OWORD *)(v15 + v14 + 32) = *((_OWORD *)Source2 + 2);
  *(_OWORD *)(v15 + v14 + 48) = *((_OWORD *)Source2 + 3);
  *(_OWORD *)(v15 + v14 + 64) = *((_OWORD *)Source2 + 4);
  *(_OWORD *)(v15 + v14 + 80) = *((_OWORD *)Source2 + 5);
  *(_OWORD *)(v15 + v14 + 96) = *((_OWORD *)Source2 + 6);
  *(_OWORD *)(v15 + v14 + 112) = *((_OWORD *)Source2 + 7);
  ++*v10;
  return (unsigned __int16)v11;
}
