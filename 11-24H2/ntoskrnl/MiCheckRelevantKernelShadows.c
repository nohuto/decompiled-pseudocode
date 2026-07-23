/*
 * XREFs of MiCheckRelevantKernelShadows @ 0x1402EE648
 * Callers:
 *     MiCheckProcessShadow @ 0x140242C50 (MiCheckProcessShadow.c)
 * Callees:
 *     KeQueryKvaShadowRegion @ 0x1402EE6B8 (KeQueryKvaShadowRegion.c)
 *     MiCheckKernelShadow @ 0x1402EE7D4 (MiCheckKernelShadow.c)
 */

__int64 __fastcall MiCheckRelevantKernelShadows(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 i; // rcx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  v1 = 0LL;
  v3 = 0xFFFFFFFFLL;
  for ( i = 0LL; (unsigned int)KeQueryKvaShadowRegion(i, &v7, &v6); i = v1 )
  {
    v3 = MiCheckKernelShadow(a1, v7, v6);
    if ( v3 != 0xFFFFFFFFLL )
      break;
    ++v1;
  }
  return v3;
}
