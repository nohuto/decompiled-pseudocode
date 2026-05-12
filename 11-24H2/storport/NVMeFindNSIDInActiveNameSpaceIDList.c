/*
 * XREFs of NVMeFindNSIDInActiveNameSpaceIDList @ 0x1400BEAE4
 * Callers:
 *     NvmeNamespaceIdentify @ 0x1400BF954 (NvmeNamespaceIdentify.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeFindNSIDInActiveNameSpaceIDList(__int64 a1, __int64 a2, int a3)
{
  __int64 i; // rdx
  int v4; // r9d

  for ( i = 0LL; (unsigned int)i < 0x400; i = (unsigned int)(i + 1) )
  {
    v4 = *(_DWORD *)(a1 + 4 * i);
    if ( !v4 )
      break;
    if ( v4 == a3 )
      return 1;
  }
  return 0;
}
