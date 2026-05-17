/*
 * XREFs of LdrpResolveDelayLoadDescriptor @ 0x1800EBDB0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180070920 (LdrpSnapKernelBaseExtensions.c)
 *     LdrResolveDelayLoadsFromDll @ 0x18015F030 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x18001CEA0 (LdrResolveDelayLoadedAPI.c)
 */

__int64 __fastcall LdrpResolveDelayLoadDescriptor(unsigned __int64 a1, unsigned int *a2)
{
  _QWORD *v2; // rsi
  unsigned int v3; // ebx
  __int64 v6; // rdi
  char *v7; // rax
  bool v8; // zf

  v2 = (_QWORD *)(a1 + a2[3]);
  v3 = 0;
  LODWORD(v6) = 0;
  if ( *v2 )
  {
    v7 = (char *)(a1 + a2[3]);
    do
    {
      v8 = LdrResolveDelayLoadedAPI(a1, a2, 0LL, 0LL, v7, 0) == 0;
      v6 = (unsigned int)(v6 + 1);
      v7 = (char *)&v2[v6];
      if ( v8 )
        v3 = -1073740782;
    }
    while ( *(_QWORD *)v7 );
  }
  return v3;
}
