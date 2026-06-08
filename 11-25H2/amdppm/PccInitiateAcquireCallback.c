/*
 * XREFs of PccInitiateAcquireCallback @ 0x14000CF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PccInitiateAcquireCallback(__int64 a1, __int64 (*a2)(void))
{
  __int64 i; // rcx
  __int64 result; // rax

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_140014C08);
  for ( i = qword_140014628; (__int64 *)i != &qword_140014628; i = *(_QWORD *)i )
    **(_BYTE **)(i + 24) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(WdfDriverGlobals, qword_140014C08);
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(), __int64 (*)(void)))qword_140014BB8)(
             qword_140014B80,
             0LL,
             PccInitiateExecuteCallback,
             a2);
  if ( (int)result < 0 )
  {
    if ( a2 )
      return a2();
  }
  return result;
}
