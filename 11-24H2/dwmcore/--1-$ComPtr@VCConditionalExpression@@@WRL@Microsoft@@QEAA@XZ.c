/*
 * XREFs of ??1?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E6184
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1800E5F5C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1800E6100 (--1CManipulation@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
