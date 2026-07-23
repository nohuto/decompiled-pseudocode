/*
 * XREFs of MiPrepareToHotPatchImagePatchCallback @ 0x1407F61D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     RtlDetermineHotPatchExtent @ 0x14082F6F4 (RtlDetermineHotPatchExtent.c)
 *     RtlIsCodeInEcRanges @ 0x140B66104 (RtlIsCodeInEcRanges.c)
 */

char __fastcall MiPrepareToHotPatchImagePatchCallback(__int64 *a1, unsigned int *a2, int a3, unsigned __int8 a4)
{
  __int64 v5; // rbx
  int v6; // esi
  int v7; // r8d
  ULONG StartingIndex; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  StartingIndex = 0;
  v10 = 0;
  if ( *((_DWORD *)a1 + 2) != a4 )
  {
    if ( (a3 & 0xFC000) != 0x5C000 )
      return 0;
    ++a2;
  }
  v5 = *a1;
  v6 = *a2;
  if ( (unsigned __int8)RtlIsCodeInEcRanges(*a2, *(_QWORD *)(v5 + 144), *(unsigned int *)(v5 + 152)) )
    v7 = 43620;
  else
    v7 = *(unsigned __int16 *)(v5 + 136);
  RtlDetermineHotPatchExtent(a3, v6, v7, (unsigned int)&StartingIndex, (__int64)&v10);
  RtlClearBits(*(PRTL_BITMAP *)(v5 + 48), StartingIndex, v10 - StartingIndex + 1);
  return 0;
}
