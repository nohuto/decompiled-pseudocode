/*
 * XREFs of Control_WdfEvtIoCanceledOnQueue @ 0x14004C400
 * Callers:
 *     <none>
 * Callees:
 *     Control_TransferData_Initialize @ 0x140006CB0 (Control_TransferData_Initialize.c)
 *     WPP_RECORDER_SF_DDi @ 0x1400370AC (WPP_RECORDER_SF_DDi.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Control_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 *v9; // rdx
  _OWORD v11[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v12; // [rsp+60h] [rbp-28h]

  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x33 )
      LOWORD(v11[0]) = -1;
    else
      LOWORD(v11[0]) = *(_WORD *)(WdfStructures + 408);
  }
  else
  {
    LOWORD(v11[0]) = 40;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v11);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B1F0);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a2,
         off_14006AE88);
  v7 = *((_QWORD *)&v11[0] + 1);
  v8 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      4u,
      v6,
      0x28u,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
      a2,
      *(_QWORD *)&v11[0]);
  Control_TransferData_Initialize(v4, a2, v7, (_QWORD *)v8);
  *(_DWORD *)(v8 + 112) = 3;
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v9 = *(__int64 **)(v4 + 384);
  if ( *v9 != v4 + 376 )
    __fastfail(3u);
  *(_QWORD *)v8 = v4 + 376;
  *(_QWORD *)(v8 + 8) = v9;
  *v9 = v8;
  *(_QWORD *)(v4 + 384) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 40) + 1001LL) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3040))(
             WdfDriverGlobals,
             *(_QWORD *)(v4 + 344));
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 896))(
             WdfDriverGlobals,
             *(_QWORD *)(v4 + 336));
}
