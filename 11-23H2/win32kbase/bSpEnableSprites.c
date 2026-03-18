/*
 * XREFs of bSpEnableSprites @ 0x1C0062980
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0160E5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall bSpEnableSprites(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02947B8;
  if ( qword_1C02947B8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02947B8(a1);
  return result;
}
