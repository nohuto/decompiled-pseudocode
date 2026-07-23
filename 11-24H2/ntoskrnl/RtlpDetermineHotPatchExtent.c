/*
 * XREFs of RtlpDetermineHotPatchExtent @ 0x140B66158
 * Callers:
 *     RtlDetermineHotPatchExtent @ 0x14082F6F4 (RtlDetermineHotPatchExtent.c)
 *     RtlApplyHotPatch @ 0x140B65BA0 (RtlApplyHotPatch.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpDetermineHotPatchExtent(int a1, __int16 a2, unsigned int *a3, int *a4)
{
  int v4; // r10d
  int v5; // eax
  int v6; // ecx
  char result; // al
  unsigned int v8; // eax

  v4 = 4;
  if ( a2 == -31132 || a2 == -21916 )
  {
    v5 = 8;
  }
  else
  {
    if ( a2 != 332 )
      return 0;
    v5 = 4;
  }
  v6 = a1 & 0xFC000;
  if ( v6 == 114688 )
  {
    v4 = 8;
    v8 = a2 != -21916 ? 0xFFFFFFFA : 0;
    goto LABEL_16;
  }
  if ( v6 == 180224 )
    goto LABEL_13;
  if ( v6 != 245760 )
  {
    if ( v6 != 278528 && v6 != 376832 && v6 != 491520 )
      return 0;
LABEL_13:
    v4 = v5;
  }
  v8 = 0;
LABEL_16:
  *a3 = v8;
  result = 1;
  *a4 = v4;
  return result;
}
