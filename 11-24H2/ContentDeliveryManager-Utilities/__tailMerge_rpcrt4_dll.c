/*
 * XREFs of __tailMerge_rpcrt4_dll @ 0x1800236DC
 * Callers:
 *     __imp_load_UuidCreate @ 0x18002375B (__imp_load_UuidCreate.c)
 *     __imp_load_NdrDllGetClassObject @ 0x1800237F8 (__imp_load_NdrDllGetClassObject.c)
 *     __imp_load_NdrDllCanUnloadNow @ 0x18002380A (__imp_load_NdrDllCanUnloadNow.c)
 *     __imp_load_NdrOleFree @ 0x18002385C (__imp_load_NdrOleFree.c)
 *     __imp_load_NdrOleAllocate @ 0x18002389C (__imp_load_NdrOleAllocate.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800B2B90 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_rpcrt4_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_rpcrt4_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
