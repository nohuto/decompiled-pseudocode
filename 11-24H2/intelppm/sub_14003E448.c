/*
 * XREFs of sub_14003E448 @ 0x14003E448
 * Callers:
 *     sub_140030478 @ 0x140030478 (sub_140030478.c)
 *     sub_140037AD0 @ 0x140037AD0 (sub_140037AD0.c)
 *     sub_14003DDFC @ 0x14003DDFC (sub_14003DDFC.c)
 * Callees:
 *     sub_14003E4A0 @ 0x14003E4A0 (sub_14003E4A0.c)
 */

__int64 __fastcall sub_14003E448(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = sub_14003E4A0(a1, a2, *(unsigned __int8 *)(a2 + 12), 0, a3, a4, 0LL, a5);
  if ( (int)result >= 0 )
  {
    if ( a5 )
      *(_BYTE *)(a5 + 82) = *(_BYTE *)(a2 + 12);
  }
  return result;
}
