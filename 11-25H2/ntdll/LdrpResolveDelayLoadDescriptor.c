/*
 * XREFs of LdrpResolveDelayLoadDescriptor @ 0x180020F60
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     LdrResolveDelayLoadsFromDll @ 0x180160540 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180021000 (LdrResolveDelayLoadedAPI.c)
 */

__int64 __fastcall LdrpResolveDelayLoadDescriptor(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned int v3; // ebx
  char v4; // r14
  __int64 v5; // rdi
  _QWORD *v6; // rax
  bool v7; // zf

  v2 = (_QWORD *)(a1 + *(unsigned int *)(a2 + 12));
  v3 = 0;
  v4 = a1;
  LODWORD(v5) = 0;
  if ( *v2 )
  {
    v6 = (_QWORD *)(a1 + *(unsigned int *)(a2 + 12));
    do
    {
      v7 = LdrResolveDelayLoadedAPI(v4, (__int64)v6, 0) == 0;
      v5 = (unsigned int)(v5 + 1);
      v6 = &v2[v5];
      if ( v7 )
        v3 = -1073740782;
    }
    while ( *v6 );
  }
  return v3;
}
