/*
 * XREFs of IntpAllocateGroupContext @ 0x14069D0FC
 * Callers:
 *     IntPartCreate @ 0x140C5EE28 (IntPartCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IntpAllocateGroupContext(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  unsigned __int8 v4; // cl
  _BYTE *v5; // rdx

  result = ExAllocatePool2(0x40uLL, 16LL * a2 + 8, 0x5049654Bu);
  v4 = 0;
  if ( result )
  {
    *(_WORD *)result = 0;
    *(_BYTE *)(result + 2) = a2;
    if ( a2 )
    {
      v5 = (_BYTE *)(result + 8);
      do
      {
        *v5 = v4++;
        v5 += 16;
      }
      while ( v4 < a2 );
    }
  }
  return result;
}
