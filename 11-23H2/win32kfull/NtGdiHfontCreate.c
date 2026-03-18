/*
 * XREFs of NtGdiHfontCreate @ 0x1C006EFA0
 * Callers:
 *     <none>
 * Callees:
 *     hfontCreate @ 0x1C00C4ED0 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtGdiHfontCreate(char *Src, size_t Size)
{
  __int64 v2; // rsi
  _BYTE Srca[352]; // [rsp+30h] [rbp-1D8h] BYREF
  int v7; // [rsp+190h] [rbp-78h]

  v2 = (unsigned int)Size;
  if ( !Src || (unsigned int)(Size - 1) > 0x1A3 )
    return 0LL;
  memset_0(Srca, 0, 0x1A4uLL);
  if ( &Src[v2] < Src || (unsigned __int64)&Src[v2] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Srca, Src, (unsigned int)v2);
  v7 = 0;
  return hfontCreate(Srca, 0);
}
