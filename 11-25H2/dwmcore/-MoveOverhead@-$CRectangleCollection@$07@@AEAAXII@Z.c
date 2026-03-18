/*
 * XREFs of ?MoveOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x1802496D0
 * Callers:
 *     ?Merge@?$CRectangleCollection@$07@@QEAA_NII@Z @ 0x1802492E8 (-Merge@-$CRectangleCollection@$07@@QEAA_NII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleCollection<8>::MoveOverhead(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 result; // rax
  unsigned int v10; // xmm1_4
  unsigned int v11; // ecx
  __int64 v12; // r9
  unsigned int v13; // xmm0_4
  unsigned int v14; // xmm1_4
  unsigned int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // xmm0_4
  unsigned int v20; // xmm1_4

  v5 = a3 - 1;
  if ( a2 )
  {
    v6 = a2;
    v7 = (a2 * (a2 - 1)) >> 1;
    v8 = ((a3 * v5) >> 1) - v7;
    do
    {
      result = (unsigned int)(v8 + v7);
      v10 = a1[2 * result + 38];
      a1[2 * v7 + 37] = a1[2 * result + 37];
      a1[2 * v7 + 38] = v10;
      v7 = (unsigned int)(v7 + 1);
      --v6;
    }
    while ( v6 );
  }
  v11 = a2 + 1;
  if ( a2 + 1 < a3 )
  {
    v12 = v11 + ((a3 * v5) >> 1);
    do
    {
      v13 = a1[2 * v12 + 37];
      v14 = a1[2 * v12 + 38];
      v12 = (unsigned int)(v12 + 1);
      v15 = v11 * (v11 - 1);
      ++v11;
      result = a2 + (v15 >> 1);
      a1[2 * result + 37] = v13;
      a1[2 * result + 38] = v14;
    }
    while ( v11 < a3 );
  }
  v16 = a3 + 1;
  while ( v16 < *a1 )
  {
    v17 = (v16 * (v16 - 1)) >> 1;
    ++v16;
    v18 = v17 + a3;
    v19 = a1[2 * v18 + 37];
    v20 = a1[2 * v18 + 38];
    result = v17 + a2;
    a1[2 * result + 37] = v19;
    a1[2 * result + 38] = v20;
  }
  return result;
}
