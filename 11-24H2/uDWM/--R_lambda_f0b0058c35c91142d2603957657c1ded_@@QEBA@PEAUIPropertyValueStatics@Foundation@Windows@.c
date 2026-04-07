/*
 * XREFs of ??R_lambda_f0b0058c35c91142d2603957657c1ded_@@QEBA@PEAUIPropertyValueStatics@Foundation@Windows@@@Z @ 0x18004E4A8
 * Callers:
 *     ??$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@KAJAEBV_lambda_f0b0058c35c91142d2603957657c1ded_@@@Z @ 0x18004E54C (--$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@-$EffectBase@UIGaussianBlurEf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_f0b0058c35c91142d2603957657c1ded_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  switch ( *(_DWORD *)a1 )
  {
    case 0:
      return (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(*a2 + 112))(a2, a2, *(_QWORD *)(a1 + 16));
    case 1:
      v4 = *a2;
      v5 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 76LL);
      break;
    case 2:
      v4 = *a2;
      v5 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 80LL);
      break;
    default:
      return 2147942487LL;
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v4 + 88))(a2, v5, *(_QWORD *)(a1 + 16), a1);
}
