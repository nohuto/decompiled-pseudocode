/*
 * XREFs of AccelpSiovSetCompressionWorkspace @ 0x140665164
 * Callers:
 *     AccelpSiovIaaOperationHandler @ 0x140664C80 (AccelpSiovIaaOperationHandler.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AccelpSiovSetCompressionWorkspace(
        unsigned int *a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r8
  _OWORD *v14; // rcx
  __int128 v15; // xmm1

  memset_0(a1, 0, a2);
  v11 = 0;
  a1[1] = a5;
  *a1 = a2;
  a1[2] = a6;
  a1[3] = a7;
  if ( a6 == 1 && a7 == 1 )
  {
    v12 = 8LL;
LABEL_9:
    *((_QWORD *)a1 + 2) = ((unsigned __int64)&a1[v12 + 7] + 3) & 0xFFFFFFFFFFFFFFE0uLL;
    return v11;
  }
  v12 = 4408LL;
  *((_QWORD *)a1 + 3) = a1 + 8;
  if ( !a3 )
    goto LABEL_9;
  if ( a4 >= 0x400 )
  {
    v13 = 8LL;
    v14 = a1 + 3162;
    do
    {
      *v14 = *a3;
      v14[1] = a3[1];
      v14[2] = a3[2];
      v14[3] = a3[3];
      v14[4] = a3[4];
      v14[5] = a3[5];
      v14[6] = a3[6];
      v14 += 8;
      v15 = a3[7];
      a3 += 8;
      *(v14 - 1) = v15;
      --v13;
    }
    while ( v13 );
    goto LABEL_9;
  }
  return (unsigned int)-1073741811;
}
