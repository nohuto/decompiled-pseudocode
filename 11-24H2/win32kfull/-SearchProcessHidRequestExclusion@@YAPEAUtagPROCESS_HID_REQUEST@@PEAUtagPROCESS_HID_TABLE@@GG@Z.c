/*
 * XREFs of ?SearchProcessHidRequestExclusion@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x140131458
 * Callers:
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x140130AE8 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall SearchProcessHidRequestExclusion(
        struct tagPROCESS_HID_TABLE *a1,
        __int16 a2,
        __int16 a3)
{
  struct tagPROCESS_HID_REQUEST *v3; // rcx
  struct tagPROCESS_HID_REQUEST *result; // rax

  v3 = (struct tagPROCESS_HID_TABLE *)((char *)a1 + 48);
  for ( result = *(struct tagPROCESS_HID_REQUEST **)v3; result != v3; result = *(struct tagPROCESS_HID_REQUEST **)result )
  {
    if ( *((_WORD *)result + 8) == a2 && *((_WORD *)result + 9) == a3 )
      return result;
  }
  return 0LL;
}
