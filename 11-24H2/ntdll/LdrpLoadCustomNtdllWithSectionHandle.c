/*
 * XREFs of LdrpLoadCustomNtdllWithSectionHandle @ 0x18015EF48
 * Callers:
 *     LdrpLoadPatchedNtdll @ 0x180066450 (LdrpLoadPatchedNtdll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E502C (LdrpProtectAndRelocateImage.c)
 *     NpMapViewOfSection @ 0x180161850 (NpMapViewOfSection.c)
 *     NpUnmapViewOfSection @ 0x180161870 (NpUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpLoadCustomNtdllWithSectionHandle(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = 0LL;
  *a2 = 0LL;
  v3 = NpMapViewOfSection(a1, -1LL, a2, 0LL, 0LL, 0LL, &v7, 1, 0, 128);
  if ( v3 == 1073741827 )
    v3 = LdrpProtectAndRelocateImage(*a2);
  if ( v3 >= 0 )
  {
    v4 = *a2;
    v6 = 0LL;
    RtlImageNtHeaderEx(1, v4, 0LL, &v6);
    if ( v6 )
      return (unsigned int)v3;
    v3 = -1073741701;
  }
  if ( *a2 )
  {
    NpUnmapViewOfSection(-1LL);
    *a2 = 0LL;
  }
  return (unsigned int)v3;
}
