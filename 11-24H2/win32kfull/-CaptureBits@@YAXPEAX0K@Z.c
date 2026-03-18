/*
 * XREFs of ?CaptureBits@@YAXPEAX0K@Z @ 0x1403388FC
 * Callers:
 *     NtGdiEngGradientFill @ 0x140339420 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x140339C60 (NtGdiEngPlgBlt.c)
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall CaptureBits(void *a1, char *a2, unsigned int a3)
{
  char *v3; // r9

  if ( a1 && a2 )
  {
    v3 = &a2[a3];
    if ( v3 < a2 || (unsigned __int64)v3 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
}
