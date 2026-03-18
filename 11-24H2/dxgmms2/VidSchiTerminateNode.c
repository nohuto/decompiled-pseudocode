/*
 * XREFs of VidSchiTerminateNode @ 0x14010E9D0
 * Callers:
 *     VidSchTerminateAdapter @ 0x1400FAED0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x140020D30 (VidSchiDecrementContextReference.c)
 */

__int64 __fastcall VidSchiTerminateNode(char *P)
{
  struct _VIDSCH_CONTEXT *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)P + 27);
  if ( v2 )
  {
    VidSchiDecrementContextReference(v2, 0);
    *((_QWORD *)P + 27) = 0LL;
  }
  if ( (*((_DWORD *)P + 3) & 2) != 0 )
    ExDeleteResourceLite((PERESOURCE)(P + 1784));
  v3 = (void *)*((_QWORD *)P + 23);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (void *)*((_QWORD *)P + 25);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
