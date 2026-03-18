/*
 * XREFs of _SafeReallocBlob @ 0x1406A2AF8
 * Callers:
 *     RtlpMuiRegGrowLanguageConfigList @ 0x14082CC54 (RtlpMuiRegGrowLanguageConfigList.c)
 *     RtlpMuiRegGrowLanguages @ 0x14082CCD8 (RtlpMuiRegGrowLanguages.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void *__fastcall SafeReallocBlob(
        unsigned int *Src,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  unsigned __int64 v8; // r8
  int v9; // eax
  void *Pool2; // rax
  void *v11; // rdi

  if ( !Src )
    return 0LL;
  v8 = a4 * (unsigned __int64)a3;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v8 + a2;
  if ( (unsigned int)v8 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v9;
  if ( !v9 )
    return 0LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memmove(Pool2, Src, *Src);
  ExFreePoolWithTag(Src, 0);
  return v11;
}
