/*
 * XREFs of NtGdiDrawStream @ 0x140186D60
 * Callers:
 *     <none>
 * Callees:
 *     GreDrawStream @ 0x14025D364 (GreDrawStream.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiDrawStream(HDC a1, size_t Size, char *Src)
{
  size_t v4; // rsi
  unsigned int v6; // edi
  _BYTE *v7; // rbx
  _BYTE v9[256]; // [rsp+30h] [rbp-138h] BYREF

  v4 = (unsigned int)Size;
  v6 = 0;
  v7 = 0LL;
  if ( (unsigned int)Size <= 0x100 )
  {
    v7 = v9;
  }
  else
  {
    if ( (unsigned int)Size > 0x2710000 )
      goto LABEL_10;
    v7 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)Size);
    if ( !v7 )
      goto LABEL_10;
  }
  if ( &Src[v4] < Src || (unsigned __int64)&Src[v4] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v7, Src, v4);
  v6 = GreDrawStream(a1);
LABEL_10:
  if ( v7 && v7 != v9 )
    FreeTmpBuffer(v7);
  return v6;
}
