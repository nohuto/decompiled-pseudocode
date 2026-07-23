/*
 * XREFs of LdrIsResItemExist @ 0x1402DC488
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14044EAD4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpSearchResourceSection_U @ 0x1409B999C (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrRscIsTypeExist @ 0x1402DC264 (LdrRscIsTypeExist.c)
 *     LdrpGetRcConfig @ 0x1402DC5EC (LdrpGetRcConfig.c)
 */

__int64 __fastcall LdrIsResItemExist(void *a1, unsigned __int64 *a2)
{
  unsigned int *RcConfig; // rax
  __int64 v4; // r8
  unsigned int *v5; // rbx
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  RcConfig = (unsigned int *)LdrpGetRcConfig(a1);
  v5 = RcConfig;
  if ( RcConfig )
  {
    if ( (int)LdrRscIsTypeExist(RcConfig, *a2, v4, &v8) < 0 )
    {
      return 393216;
    }
    else
    {
      v6 = v8;
      if ( (v5[5] & 0x100) != 0 )
        v6 = v8 | 0x100000;
      if ( (v5[4] & 0x10) != 0 )
        v6 |= 0x200000u;
    }
  }
  else
  {
    return 0x80000;
  }
  return v6;
}
