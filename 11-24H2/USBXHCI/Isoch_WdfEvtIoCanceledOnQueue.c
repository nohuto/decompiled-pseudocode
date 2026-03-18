/*
 * XREFs of Isoch_WdfEvtIoCanceledOnQueue @ 0x14004C5C0
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x1400148B4 (TR_QueueDpcForTransferCompletion.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Isoch_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int16 v6; // ax
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _OWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B1F0);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   a2,
                   off_14006AE88);
  v5 = 0LL;
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v11[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v6 = -1;
  }
  else
  {
    v6 = 40;
  }
  LOWORD(v11[0]) = v6;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v11);
  v7 = (_DWORD *)*((_QWORD *)&v11[0] + 1);
  *(_DWORD *)(*((_QWORD *)&v11[0] + 1) + 4LL) = -1073676288;
  v7[9] = 0;
  v7[34] = 0;
  if ( v7[33] )
  {
    do
    {
      v8 = 3 * v5;
      v5 = (unsigned int)(v5 + 1);
      v7[v8 + 37] = -1;
    }
    while ( (unsigned int)v5 < v7[33] );
  }
  memset(v4, 0, 0x300uLL);
  v4[1] = v4;
  *v4 = v4;
  *((_DWORD *)v4 + 16) = 3;
  v4[3] = a2;
  *((_DWORD *)v4 + 17) = -1073741536;
  *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v9 = *(_QWORD **)(v3 + 432);
  if ( *v9 != v3 + 424 )
    __fastfail(3u);
  *v4 = v3 + 424;
  v4[1] = v9;
  *v9 = v4;
  *(_QWORD *)(v3 + 432) = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
  return TR_QueueDpcForTransferCompletion((_QWORD *)v3);
}
