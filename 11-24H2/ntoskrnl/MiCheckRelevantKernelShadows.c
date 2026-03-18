/*
 * XREFs of MiCheckRelevantKernelShadows @ 0x140268380
 * Callers:
 *     MiCheckProcessShadow @ 0x1402E1370 (MiCheckProcessShadow.c)
 * Callees:
 *     MiCheckKernelShadow @ 0x140266594 (MiCheckKernelShadow.c)
 *     KeQueryKvaShadowRegion @ 0x1402683F0 (KeQueryKvaShadowRegion.c)
 */

unsigned __int64 __fastcall MiCheckRelevantKernelShadows(char a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 i; // rcx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  v1 = 0LL;
  v3 = 0xFFFFFFFFLL;
  for ( i = 0LL; (unsigned int)KeQueryKvaShadowRegion(i, &v7, &v6); i = v1 )
  {
    v3 = MiCheckKernelShadow(a1, v7, v6);
    if ( v3 != 0xFFFFFFFF )
      break;
    ++v1;
  }
  return v3;
}
