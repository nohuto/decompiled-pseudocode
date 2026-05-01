/*
 * XREFs of ??R_lambda_990521e561bc13f238039e7a89bd70b9_@@QEBA@XZ @ 0x180489AA8
 * Callers:
 *     ??$AtomicUpdate@V_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@AEBV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x18048923C (--$AtomicUpdate@V_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@V_lambda_990521e561bc13f238039e7a89b.c)
 *     ??$Do@V_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@AEBV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x1804895DC (--$Do@V_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@-.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall _lambda_990521e561bc13f238039e7a89bd70b9_::operator()(unsigned int ***a1)
{
  unsigned int **v1; // r8
  unsigned int v2; // edx
  unsigned int *result; // rax
  unsigned int **v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = *a1;
  v2 = 0;
  result = **a1;
  if ( *result )
  {
    v4 = a1[1];
    do
    {
      v5 = 14LL * v2++;
      v6 = (__int64)&(*v4)[v5];
      *(_OWORD *)v6 = 0LL;
      *(_OWORD *)(v6 + 16) = 0LL;
      *(_OWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 48) = 0LL;
      result = *v1;
    }
    while ( v2 < **v1 );
  }
  *result = 0;
  return result;
}
