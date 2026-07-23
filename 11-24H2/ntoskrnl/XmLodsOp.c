/*
 * XREFs of XmLodsOp @ 0x140574090
 * Callers:
 *     <none>
 * Callees:
 *     XmSetSourceValue @ 0x140461CF8 (XmSetSourceValue.c)
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 *     XmGetStringAddress @ 0x140574D6C (XmGetStringAddress.c)
 */

_WORD *__fastcall XmLodsOp(__int64 a1)
{
  int v2; // edi
  _WORD *result; // rax
  unsigned __int16 *StringAddress; // rax
  __int64 v5; // rcx

  v2 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      v2 = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
    }
    else
    {
      v2 = *(unsigned __int16 *)(a1 + 28);
      *(_WORD *)(a1 + 28) = 0;
    }
  }
  result = (_WORD *)(a1 + 24);
  for ( *(_QWORD *)(a1 + 88) = a1 + 24; v2; --v2 )
  {
    StringAddress = (unsigned __int16 *)XmGetStringAddress(a1, *(unsigned int *)(a1 + 116), 6LL);
    XmSetSourceValue(a1, StringAddress);
    result = XmStoreResult(v5, *(_DWORD *)(a1 + 108));
  }
  return result;
}
