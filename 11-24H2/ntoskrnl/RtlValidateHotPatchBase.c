/*
 * XREFs of RtlValidateHotPatchBase @ 0x14082FBA0
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x1407F28D8 (MiCaptureHotPatchInfo.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1406A44AC (RtlGetHotPatchSize.c)
 *     RtlDetermineHotPatchExtent @ 0x14082F6F4 (RtlDetermineHotPatchExtent.c)
 */

char __fastcall RtlValidateHotPatchBase(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int *v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int HotPatchSize; // r10d
  int v14; // ebx
  unsigned int v15; // r13d
  unsigned int v16; // r12d
  int i; // esi
  unsigned int v18; // ecx
  unsigned int v20; // [rsp+30h] [rbp-38h]
  unsigned int v21; // [rsp+34h] [rbp-34h] BYREF
  char *v22; // [rsp+38h] [rbp-30h]

  a5 = 0;
  if ( a6 == 0x8664 || a6 == 0xAA64 )
  {
    v6 = 8;
  }
  else
  {
    if ( a6 != 332 )
      return 0;
    v6 = 4;
  }
  v7 = *(unsigned int *)(a2 + 24);
  v8 = (unsigned int)a1[1];
  if ( (unsigned int)v7 >= (unsigned int)v8 )
    return 0;
  v9 = (_DWORD *)((char *)a1 + v7);
  v22 = (char *)a1 + v8;
  HotPatchSize = RtlGetHotPatchSize(a1);
  v20 = HotPatchSize;
  while ( 1 )
  {
    v14 = *v9;
    if ( !*v9 )
      break;
    if ( (unsigned __int64)v9 >= v10 || (v14 & 0x3FF03000) != 0 || (v14 & 0x40000000) != 0 )
      return 0;
    if ( v14 >= 0 )
    {
      v15 = v11;
      v16 = v12;
      if ( (v14 & 0xFC000) != 0x1C000 )
        return 0;
    }
    else
    {
      v15 = v12;
      v16 = v11;
    }
    for ( i = *v9++ & 0xFFF; i; --i )
    {
      if ( (v14 & 0x4000) != 0 )
      {
        v18 = v6 + v9[1];
        if ( v18 < v6 || v18 > v16 )
          return 0;
      }
      if ( (v14 & 0xFC000) == 0x5C000 && v14 >= 0 )
        return 0;
      if ( (v14 & 0x8000) != 0 )
      {
        if ( !RtlDetermineHotPatchExtent((unsigned int)v14, *v9, a6, &v21, &a5) || a5 > v15 >> 12 )
          return 0;
        HotPatchSize = v20;
      }
      if ( (v14 & 0xFC000) == 0x78000 && v9[1] == -1 )
        return 0;
      v9 += HotPatchSize;
    }
    v10 = (unsigned __int64)v22;
    v12 = a4;
    v11 = a3;
  }
  return 1;
}
