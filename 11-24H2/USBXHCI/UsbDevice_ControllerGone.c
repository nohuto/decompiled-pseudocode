/*
 * XREFs of UsbDevice_ControllerGone @ 0x14004D710
 * Callers:
 *     Controller_InitiateRecovery @ 0x14004032C (Controller_InitiateRecovery.c)
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

char __fastcall UsbDevice_ControllerGone(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rdi
  unsigned int v4; // r14d
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // edx

  v1 = 0LL;
  v2 = (__int64 *)(a1 + 184);
  v4 = -1073741595;
  v5 = 31LL;
  do
  {
    if ( *v2 )
      ESM_AddEsmEvent(*v2);
    ++v2;
    --v5;
  }
  while ( v5 );
  v6 = *(_QWORD *)(a1 + 432);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 432) = 0LL;
    v1 = v6;
    LOBYTE(v6) = -*(_BYTE *)(a1 + 440);
    v4 = *(_BYTE *)(a1 + 440) == 0 ? 0xC00000E5 : 0;
  }
  if ( *(_QWORD *)(a1 + 448) )
  {
    v7 = 1;
    if ( *(int *)(a1 + 456) < 0 )
      v7 = 2;
    LOBYTE(v6) = UsbDevice_QueueConfigureEndpointEvent(a1, v7);
  }
  if ( v1 )
    LOBYTE(v6) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
                   WdfDriverGlobals,
                   v1,
                   v4);
  return v6;
}
