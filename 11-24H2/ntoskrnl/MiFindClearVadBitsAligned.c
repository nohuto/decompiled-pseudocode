/*
 * XREFs of MiFindClearVadBitsAligned @ 0x140919F20
 * Callers:
 *     MiFindEmptyAddressRange @ 0x140918570 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFindClearVadBitsAligned(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // r11
  _DWORD *v11; // r8
  unsigned __int64 i; // rcx

  v6 = *a1;
  v8 = a2 >> 16;
  if ( a3 < *a1 )
  {
    result = v8;
    v10 = v6 - a3;
    if ( a4 < v6 && a4 > v8 )
      result = ~(v8 - 1) & (v8 + a4 - 1);
    while ( result <= v10 )
    {
      v11 = (_DWORD *)(a1[1] + 4 * (result >> 5));
      for ( i = 0LL; i < a3; i += 32LL )
      {
        if ( *v11 )
          break;
        ++v11;
      }
      if ( i == a3 )
        return result;
      result = v8 + (~(v8 - 1) & (i + result));
    }
  }
  return -1LL;
}
