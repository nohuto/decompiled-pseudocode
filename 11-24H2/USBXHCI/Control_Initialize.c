/*
 * XREFs of Control_Initialize @ 0x140080740
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsSecureDevice @ 0x1400328B8 (Controller_IsSecureDevice.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_DDd @ 0x140049388 (WPP_RECORDER_SF_DDd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Control_Initialize(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int16 v3; // ax
  bool v4; // cf
  char v5; // al
  int v6; // edi
  unsigned __int16 v7; // r9
  int v9; // [rsp+30h] [rbp-61h]
  int v10; // [rsp+38h] [rbp-59h]
  int v11; // [rsp+40h] [rbp-51h]
  __int128 v12; // [rsp+48h] [rbp-49h] BYREF
  __int128 v13; // [rsp+58h] [rbp-39h]
  __int128 v14; // [rsp+68h] [rbp-29h]
  __int64 v15; // [rsp+78h] [rbp-19h]
  __int128 v16; // [rsp+80h] [rbp-11h] BYREF
  __int64 v17; // [rsp+90h] [rbp-1h]
  __int128 v18; // [rsp+98h] [rbp+7h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+17h]
  __int128 v20; // [rsp+B0h] [rbp+1Fh] BYREF
  __int128 v21; // [rsp+C0h] [rbp+2Fh]
  __int64 v22; // [rsp+D0h] [rbp+3Fh]

  DWORD1(v12) = 0;
  DWORD1(v18) = 0;
  DWORD1(v20) = 0;
  DWORD1(v16) = 0;
  *(_QWORD *)(a1 + 384) = a1 + 376;
  *(_QWORD *)(a1 + 376) = a1 + 376;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x20000LL) != 0
    || ((v2 = *(_QWORD *)(a1 + 56), !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline())
     || *(_WORD *)(v2 + 100)
     || !*(_BYTE *)(v2 + 39)
     || ((*(_DWORD *)(v2 + 128) - 1) & 0xFFFFFFFB) != 0
      ? (v3 = *(_WORD *)(v2 + 100) & 0x7FF)
      : (v3 = *(_WORD *)(v2 + 105)),
        v4 = v3 < 8u,
        v5 = 1,
        v4) )
  {
    v5 = 0;
  }
  *(_BYTE *)(a1 + 328) = v5;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x37 )
      LODWORD(v20) = -1;
    else
      LODWORD(v20) = *(_DWORD *)(WdfStructures + 440);
  }
  else
  {
    LODWORD(v20) = 40;
  }
  LODWORD(v21) = 0;
  *((_QWORD *)&v20 + 1) = Control_WdfEvtTimerForTransferTimeout;
  BYTE4(v21) = 1;
  DWORD2(v21) = 0;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v12) = -1;
    else
      LODWORD(v12) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v12) = 56;
  }
  *(_QWORD *)&v14 = *(_QWORD *)(a1 + 72);
  *((_QWORD *)&v13 + 1) = 0x100000001LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
         WdfDriverGlobals,
         &v20,
         &v12,
         a1 + 352);
  if ( v6 >= 0 )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(a1 + 40)) )
    {
      v17 = 0LL;
      v16 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x43 )
          LODWORD(v16) = -1;
        else
          LODWORD(v16) = *(_DWORD *)(WdfStructures + 536);
      }
      else
      {
        LODWORD(v16) = 24;
      }
      LOBYTE(v17) = 1;
      *((_QWORD *)&v16 + 1) = Control_WdfWorkItemForCanceledOnQueueTransferCompletion;
      v15 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x26 )
          LODWORD(v12) = -1;
        else
          LODWORD(v12) = *(_DWORD *)(WdfStructures + 304);
      }
      else
      {
        LODWORD(v12) = 56;
      }
      *(_QWORD *)&v14 = *(_QWORD *)(a1 + 72);
      *((_QWORD *)&v13 + 1) = 0x100000001LL;
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
             WdfDriverGlobals,
             &v16,
             &v12,
             a1 + 344);
      if ( v6 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v6;
      v7 = 11;
    }
    else
    {
      v19 = 0LL;
      v18 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x17 )
          LODWORD(v18) = -1;
        else
          LODWORD(v18) = *(_DWORD *)(WdfStructures + 184);
      }
      else
      {
        LODWORD(v18) = 24;
      }
      LOBYTE(v19) = 1;
      *((_QWORD *)&v18 + 1) = Control_WdfDpcForCanceledOnQueueTransferCompletion;
      v15 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x26 )
          LODWORD(v12) = -1;
        else
          LODWORD(v12) = *(_DWORD *)(WdfStructures + 304);
      }
      else
      {
        LODWORD(v12) = 56;
      }
      *(_QWORD *)&v14 = *(_QWORD *)(a1 + 72);
      *((_QWORD *)&v13 + 1) = 0x100000001LL;
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 888))(
             WdfDriverGlobals,
             &v18,
             &v12,
             a1 + 336);
      if ( v6 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v6;
      v7 = 12;
    }
    v11 = v6;
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
    v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    goto LABEL_51;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 10;
    v11 = v6;
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
    v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
LABEL_51:
    WPP_RECORDER_SF_DDd(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      v7,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v9,
      v10,
      v11,
      v12,
      (_QWORD)v13);
  }
  return (unsigned int)v6;
}
