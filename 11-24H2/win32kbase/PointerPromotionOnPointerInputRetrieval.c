/*
 * XREFs of PointerPromotionOnPointerInputRetrieval @ 0x140108FE0
 * Callers:
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1400C48D4 (ApiSetPointerPromotionOnPointerInputRetrieval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PointerPromotionOnPointerInputRetrieval(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4))(_QWORD, _QWORD, __int64, _QWORD)
{
  unsigned int v6; // esi
  unsigned __int16 v7; // bp
  __int64 (__fastcall *result)(_QWORD, _QWORD, __int64, _QWORD); // rax

  v6 = a2;
  v7 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                 + 48)
                                                                     + 6296LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))result(v7, v6, a3, a4);
  return result;
}
