/*
 * XREFs of SmmBuildAdlFromAddress @ 0x140060C34
 * Callers:
 *     ?SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z @ 0x140060B9C (-SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmmBuildAdlFromAddress(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  _QWORD *v5; // r8
  _QWORD *result; // rax

  v4 = a3 + (a2 >> 12);
  v5 = *(_QWORD **)(a1 + 16);
  result = &v5[a4];
  if ( v5 != result )
  {
    do
    {
      *v5++ = v4;
      result = *(_QWORD **)(a1 + 16);
      ++v4;
    }
    while ( v5 != &result[a4] );
  }
  return result;
}
