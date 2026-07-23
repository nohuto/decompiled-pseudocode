/*
 * XREFs of KdpInitializeExtendedContext @ 0x140B7B39C
 * Callers:
 *     KdpGetContext @ 0x140B792F8 (KdpGetContext.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KdpInitializeExtendedContext(_DWORD *a1, int a2)
{
  _DWORD *v2; // r14
  char *v5; // rcx
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rax

  a1[12] = a2;
  v2 = a1 + 308;
  a1[311] = 1232;
  a1[309] = 1264;
  a1[310] = -1232;
  a1[308] = -1232;
  v5 = (char *)(a1 + 316);
  if ( (a2 & 0x100040) == 0x100040 )
  {
    v6 = (char *)(((unsigned __int64)v2 + 95) & 0xFFFFFFFFFFFFFFC0uLL);
    memset_0(v6, 0, 0x40uLL);
    a1[312] = (_DWORD)v6 - (_DWORD)v2;
    v7 = (unsigned int)(MEMORY[0xFFFFF780000003E8] - 512);
    a1[313] = v7;
    a1[309] = (_DWORD)v6 - (_DWORD)v2 + v7 - *v2;
    v5 = &v6[v7];
  }
  result = 1048704LL;
  if ( (a2 & 0x100080) == 0x100080 )
  {
    v9 = (unsigned __int64)(v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_OWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    LODWORD(v9) = v9 - (_DWORD)v2;
    a1[314] = v9;
    result = (unsigned int)(v9 - *v2 + 24);
    a1[315] = 24;
    a1[309] = result;
  }
  return result;
}
