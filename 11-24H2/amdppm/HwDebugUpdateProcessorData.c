/*
 * XREFs of HwDebugUpdateProcessorData @ 0x1400014F0
 * Callers:
 *     <none>
 * Callees:
 *     HwDebugUpdateRegister @ 0x14000CB18 (HwDebugUpdateRegister.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HwDebugUpdateProcessorData(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  unsigned int i; // ebp
  __int64 result; // rax
  unsigned int j; // ebp

  v3 = (__int64 *)(a1 + 8);
  v4 = 2LL;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
        WdfDriverGlobals,
        *(_QWORD *)(v5 + 280));
      if ( *(_QWORD *)(v5 + 296) != a2 )
      {
        for ( i = 0; i < *(unsigned __int8 *)(v5 + 308); HwDebugUpdateRegister(v5 + 24 * (i++ + 13LL), a2) )
          ;
      }
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v5 + 280));
    }
    v6 = v3[1];
    if ( v6 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
        WdfDriverGlobals,
        *(_QWORD *)(v6 + 280));
      if ( *(_QWORD *)(v6 + 296) != a2 )
      {
        for ( j = 0; j < *(unsigned __int8 *)(v6 + 308); HwDebugUpdateRegister(v6 + 24 * (j++ + 13LL), a2) )
          ;
      }
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v6 + 280));
    }
    v3 += 2;
    --v4;
  }
  while ( v4 );
  return result;
}
