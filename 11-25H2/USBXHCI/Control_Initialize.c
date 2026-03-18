/*
 * XREFs of Control_Initialize @ 0x1400813D0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsSecureDevice @ 0x140034338 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_DDd @ 0x140049AD8 (WPP_RECORDER_SF_DDd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Control_Initialize(__int64 a1)
{
  bool v2; // al
  int v3; // edi
  unsigned __int16 v4; // r9
  int v6; // [rsp+30h] [rbp-51h]
  int v7; // [rsp+38h] [rbp-49h]
  int v8; // [rsp+40h] [rbp-41h]
  __int128 v9; // [rsp+48h] [rbp-39h] BYREF
  __int128 v10; // [rsp+58h] [rbp-29h]
  __int128 v11; // [rsp+68h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-9h]
  __int128 v13; // [rsp+80h] [rbp-1h] BYREF
  __int64 v14; // [rsp+90h] [rbp+Fh]
  __int128 v15; // [rsp+98h] [rbp+17h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+27h]
  __int128 v17; // [rsp+B0h] [rbp+2Fh] BYREF
  __int128 v18; // [rsp+C0h] [rbp+3Fh]
  __int64 v19; // [rsp+D0h] [rbp+4Fh]

  DWORD1(v9) = 0;
  DWORD1(v15) = 0;
  DWORD1(v17) = 0;
  DWORD1(v13) = 0;
  *(_QWORD *)(a1 + 384) = a1 + 376;
  *(_QWORD *)(a1 + 376) = a1 + 376;
  v2 = (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x20000LL) == 0
    && (*(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FFu) >= 8;
  *(_BYTE *)(a1 + 328) = v2;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x37 )
      LODWORD(v17) = -1;
    else
      LODWORD(v17) = *(_DWORD *)(WdfStructures + 440);
  }
  else
  {
    LODWORD(v17) = 40;
  }
  LODWORD(v18) = 0;
  DWORD2(v18) = 0;
  *((_QWORD *)&v17 + 1) = Control_WdfEvtTimerForTransferTimeout;
  BYTE4(v18) = 1;
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v9) = -1;
    else
      LODWORD(v9) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v9) = 56;
  }
  *(_QWORD *)&v11 = *(_QWORD *)(a1 + 72);
  *((_QWORD *)&v10 + 1) = 0x100000001LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
         WdfDriverGlobals,
         &v17,
         &v9,
         a1 + 352);
  if ( v3 >= 0 )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(a1 + 40)) )
    {
      v14 = 0LL;
      v13 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x43 )
          LODWORD(v13) = -1;
        else
          LODWORD(v13) = *(_DWORD *)(WdfStructures + 536);
      }
      else
      {
        LODWORD(v13) = 24;
      }
      LOBYTE(v14) = 1;
      *((_QWORD *)&v13 + 1) = Control_WdfWorkItemForCanceledOnQueueTransferCompletion;
      v12 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x26 )
          LODWORD(v9) = -1;
        else
          LODWORD(v9) = *(_DWORD *)(WdfStructures + 304);
      }
      else
      {
        LODWORD(v9) = 56;
      }
      *(_QWORD *)&v11 = *(_QWORD *)(a1 + 72);
      *((_QWORD *)&v10 + 1) = 0x100000001LL;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
             WdfDriverGlobals,
             &v13,
             &v9,
             a1 + 344);
      if ( v3 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v3;
      v4 = 11;
    }
    else
    {
      v16 = 0LL;
      v15 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x17 )
          LODWORD(v15) = -1;
        else
          LODWORD(v15) = *(_DWORD *)(WdfStructures + 184);
      }
      else
      {
        LODWORD(v15) = 24;
      }
      LOBYTE(v16) = 1;
      *((_QWORD *)&v15 + 1) = Control_WdfDpcForCanceledOnQueueTransferCompletion;
      v12 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x26 )
          LODWORD(v9) = -1;
        else
          LODWORD(v9) = *(_DWORD *)(WdfStructures + 304);
      }
      else
      {
        LODWORD(v9) = 56;
      }
      *(_QWORD *)&v11 = *(_QWORD *)(a1 + 72);
      *((_QWORD *)&v10 + 1) = 0x100000001LL;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 888))(
             WdfDriverGlobals,
             &v15,
             &v9,
             a1 + 336);
      if ( v3 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v3;
      v4 = 12;
    }
    v8 = v3;
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    goto LABEL_46;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 10;
    v8 = v3;
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
LABEL_46:
    WPP_RECORDER_SF_DDd(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      v4,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v6,
      v7,
      v8,
      v9,
      (_QWORD)v10);
  }
  return (unsigned int)v3;
}
