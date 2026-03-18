/*
 * XREFs of HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x140014FB8
 * Callers:
 *     HUBDSM_CompletingClientRequestInConfiguredWithSpecialFile @ 0x140021330 (HUBDSM_CompletingClientRequestInConfiguredWithSpecialFile.c)
 *     HUBDSM_CompletingClientUnconfigureRequest @ 0x1400213C0 (HUBDSM_CompletingClientUnconfigureRequest.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F63C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_CompleteClientSerialRequestWithStatusSuccess(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int16 v5; // ax
  _DWORD *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 464);
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  LOWORD(v12) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    &v12);
  if ( DWORD2(v13) == 2228227 )
  {
    v4 = *((_QWORD *)&v12 + 1);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        *(unsigned __int16 *)(*((_QWORD *)&v12 + 1) + 2LL),
        &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
        (const GUID *)(a1 + 1524),
        *(_QWORD *)(a1 + 24),
        *(unsigned __int16 *)(*((_QWORD *)&v12 + 1) + 2LL),
        *(_DWORD *)(*((_QWORD *)&v12 + 1) + 4LL));
    v5 = *(_WORD *)(v4 + 2);
    if ( !v5 && *(_QWORD *)(v4 + 24) || v5 == 1 || v5 == 59 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10u);
  }
  if ( DWORD2(v13) == 2232243 )
  {
    **((_DWORD **)&v12 + 1) = 0;
    v6 = (_DWORD *)*((_QWORD *)&v12 + 1);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) & 0x100) != 0 )
    {
      **((_DWORD **)&v12 + 1) = 2;
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 32LL), 0xFFFFFEFF);
    }
    v3 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 32LL);
    if ( (v3 & 0x80u) != 0LL )
    {
      *v6 |= 1u;
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 32LL), 0xFFFFFF7F);
    }
  }
  v7 = *(_QWORD *)(a1 + 464);
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(v8 + 1424) = 1;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    LODWORD(v11) = 0;
    LODWORD(v10) = DWORD2(v13);
    McTemplateK0pqq_EtwWriteTransfer(
      v3,
      &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
      (const GUID *)(a1 + 1524),
      *(_QWORD *)(a1 + 24),
      v10,
      v11);
  }
  if ( (*(_DWORD *)(a1 + 1644) & 0x40) != 0 )
  {
    *(_OWORD *)(a1 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFBF);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v7,
           0LL);
}
