/*
 * XREFs of _SafeReallocBlob @ 0x1406A3B48
 * Callers:
 *     RtlpMuiRegGrowLanguageConfigList @ 0x14082D484 (RtlpMuiRegGrowLanguageConfigList.c)
 *     RtlpMuiRegGrowLanguages @ 0x14082D508 (RtlpMuiRegGrowLanguages.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void *__fastcall SafeReallocBlob(
        unsigned int *Src,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned __int64 v8; // r8
  unsigned int v9; // eax
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
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v9, 0x72746C6Du);
  v11 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memmove(Pool2, Src, *Src);
  ExFreePoolWithTag(Src, 0);
  return v11;
}
