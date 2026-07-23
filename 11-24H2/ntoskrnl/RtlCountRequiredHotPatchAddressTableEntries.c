/*
 * XREFs of RtlCountRequiredHotPatchAddressTableEntries @ 0x14082F5C8
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1406A44AC (RtlGetHotPatchSize.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1406A46E4 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlCountRequiredHotPatchAddressTableEntries(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned int *a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        _DWORD *a15)
{
  int v16; // ebx
  unsigned int HotPatchSize; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rdi
  int v24; // edx
  bool v25; // al
  int v26; // r11d
  bool v27; // cl
  __int64 v28; // rcx
  char *v29; // rcx
  _BYTE *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // r10
  int v33; // r11d

  v16 = 0;
  HotPatchSize = RtlGetHotPatchSize(a6);
  v23 = HotPatchSize;
  while ( 1 )
  {
    v24 = *a7;
    if ( !*a7 )
      break;
    if ( a8 )
      v25 = v24 < 0;
    else
      v25 = v24 >= 0;
    ++a7;
    v26 = v24 & 0xFFF;
    v27 = 0;
    if ( (v24 & 0xFC000) == 0x1C000 )
      v27 = v25;
    if ( v27 )
    {
      while ( v26 )
      {
        v28 = *a7;
        if ( (unsigned int)v28 < 0x10 || (int)v28 + 2 > a2 )
          return 3221225595LL;
        v29 = (char *)(a1 + v28);
        v30 = 0LL;
        if ( (_DWORD)v23 != 2 )
          v30 = a7 + 2;
        v31 = RtlpCheckFunctionPatchAppliedInOriginalImage(v29, v30, v20, v21, a4);
        if ( v31 == -1 )
          return 3221225595LL;
        if ( v31 == -2 )
        {
          ++v16;
        }
        else if ( v31 >= a5 )
        {
          return 3221225507LL;
        }
        a7 = (unsigned int *)(v32 + 4 * v23);
        v26 = v33 - 1;
      }
    }
    else
    {
      a7 += (unsigned int)(v26 * v23);
    }
  }
  *a15 = v16;
  return 0LL;
}
