/*
 * XREFs of RegisterVmIdleStates @ 0x1400269A0
 * Callers:
 *     RegisterGuestIdleStates @ 0x140025C90 (RegisterGuestIdleStates.c)
 *     RegisterHvIdleStates @ 0x140026390 (RegisterHvIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     RegisterHvPepContext @ 0x1400268B4 (RegisterHvPepContext.c)
 *     RegisterIdleComplete @ 0x140034408 (RegisterIdleComplete.c)
 */

__int64 __fastcall RegisterVmIdleStates(__int64 a1)
{
  _DWORD *v2; // r9
  __int64 i; // rdx
  NTSTATUS v4; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400145A8,
    0LL);
  v2 = *(_DWORD **)(a1 + 1144);
  if ( v2 && *v2 )
  {
    for ( i = 0LL; (unsigned int)i < *v2; i = (unsigned int)(i + 1) )
    {
      if ( (v2[3 * i + 1] & 0x200) == 0 )
      {
        v4 = -1073741637;
        goto LABEL_13;
      }
    }
    v4 = RegisterHvPepContext(a1);
    if ( v4 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 720) )
      {
        *(_BYTE *)(a1 + 720) = 1;
        RegisterIdleComplete(a1);
      }
      v4 = 0;
    }
  }
  else
  {
    v4 = -1073741823;
  }
LABEL_13:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400145A8);
  return (unsigned int)v4;
}
