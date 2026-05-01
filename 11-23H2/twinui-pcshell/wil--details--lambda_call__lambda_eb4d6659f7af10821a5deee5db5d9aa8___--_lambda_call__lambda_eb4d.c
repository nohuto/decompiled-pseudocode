/*
 * XREFs of wil::details::lambda_call__lambda_eb4d6659f7af10821a5deee5db5d9aa8___::_lambda_call__lambda_eb4d6659f7af10821a5deee5db5d9aa8___ @ 0x1801E5144
 * Callers:
 *     __lambda_4c0f6ed1d632f9eabd9f454ff611597b_::operator()_::_1_::dtor$0 @ 0x1801E51FD (__lambda_4c0f6ed1d632f9eabd9f454ff611597b_--operator()_--_1_--dtor$0.c)
 *     __lambda_b945abeeb0d2b18f20f6e47375aac32a_::operator()_::_1_::dtor$0 @ 0x1801E54E1 (__lambda_b945abeeb0d2b18f20f6e47375aac32a_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_eb4d6659f7af10821a5deee5db5d9aa8___::_lambda_call__lambda_eb4d6659f7af10821a5deee5db5d9aa8___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 340) = 0;
  }
  return result;
}
