/*
 * XREFs of FindSubspace @ 0x140026CE8
 * Callers:
 *     RegisterSubspace @ 0x140026D70 (RegisterSubspace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FindSubspace(int a1)
{
  __int64 v2; // rbx
  __int64 i; // rax

  v2 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140014BE8,
    0LL);
  for ( i = qword_140014BF0; (__int64 *)i != &qword_140014BF0; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 48) == a1 )
    {
      v2 = i;
      break;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140014BE8);
  return v2;
}
