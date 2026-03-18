/*
 * XREFs of Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1400392F0
 * Callers:
 *     <none>
 * Callees:
 *     XilEndpoint_ReleaseBuffer @ 0x140001CBC (XilEndpoint_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     XilEndpoint_AcquireBuffer @ 0x14000E5BC (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_InitializeTransferRing @ 0x140010424 (Endpoint_InitializeTransferRing.c)
 *     Endpoint_GetDequeuePointer @ 0x14001053C (Endpoint_GetDequeuePointer.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048280 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Endpoint_UcxEvtDefaultEndpointUpdate(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int16 v4; // ax
  __int64 v5; // rbx
  _QWORD *v6; // rsi
  _DWORD *v7; // rbp
  _DWORD *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int *v13; // rbp
  int IsEnabledDeviceUsageNoInline; // eax
  int v15; // ecx
  _DWORD *v16; // rbx
  unsigned int *v17; // rcx
  __int64 v18; // r9
  int v19; // r8d
  unsigned int v20; // eax
  __int16 v21; // ax
  char v22; // al
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+30h] [rbp-88h]
  __int64 v27; // [rsp+40h] [rbp-78h]
  _OWORD v28[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v29; // [rsp+78h] [rbp-40h]

  v2 = 0;
  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v28[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v28[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v28);
  v5 = *((_QWORD *)&v28[0] + 1);
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*((_QWORD *)&v28[0] + 1) + 24LL),
                   off_14006AFE8);
  v7 = (_DWORD *)(v5 + 32);
  v8 = v6 + 18;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*v6 + 72LL),
      4u,
      0xDu,
      0x1Fu,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      *(unsigned __int8 *)(v6[2] + 135LL),
      *v8,
      *v7);
  v9 = *(_QWORD *)(*v6 + 88LL);
  v27 = *(_QWORD *)(*v6 + 144LL);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          a2,
          off_14006AE88);
  memset((void *)(v10 + 8), 0, 0x70uLL);
  *(_QWORD *)v10 = v6;
  *(_DWORD *)(v10 + 16) = *v7;
  v11 = XilEndpoint_AcquireBuffer(v6, (*(_DWORD *)(v9 + 104) & 4) != 0 ? 2112 : 1056, (__int64)v6, 0x31747045u);
  *(_QWORD *)(v10 + 8) = v11;
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v26) = *v8;
      LODWORD(v25) = *(unsigned __int8 *)(v6[2] + 135LL);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*v6 + 72LL),
        2u,
        0xDu,
        0x20u,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        v25,
        v26);
    }
    if ( *(_QWORD *)(v10 + 8) )
    {
      XilEndpoint_ReleaseBuffer((__int64)v6);
      *(_QWORD *)(v10 + 8) = 0LL;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             3221225626LL);
  }
  v13 = *(unsigned int **)(v11 + 16);
  IsEnabledDeviceUsageNoInline = Feature_UISCSF__private_IsEnabledDeviceUsageNoInline();
  v15 = *(_DWORD *)(v9 + 104) & 4;
  if ( !IsEnabledDeviceUsageNoInline )
  {
    v16 = v13 + 32;
    if ( !v15 )
      v16 = v13 + 16;
    goto LABEL_33;
  }
  v16 = v13 + 16;
  if ( v15 )
  {
    v17 = v13 + 16;
    v16 = v13 + 32;
  }
  else
  {
    v17 = v13 + 8;
  }
  if ( (*(_QWORD *)(*v6 + 744LL) & 0x20000000LL) != 0 )
  {
    v18 = v6[2];
    v19 = *(_DWORD *)(v18 + 20);
    if ( v19 )
    {
      switch ( v19 )
      {
        case 1:
          v20 = *v17 & 0xFF0FFFFF | 0x100000;
          break;
        case 2:
          v20 = *v17 & 0xFF0FFFFF | 0x300000;
          break;
        case 3:
          v20 = *v17 & 0xFF0FFFFF | 0x400000;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v26) = *(_DWORD *)(v18 + 20);
            LODWORD(v25) = *(unsigned __int8 *)(v18 + 135);
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*v6 + 72LL),
              2u,
              0xCu,
              0x21u,
              (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
              v25,
              v26);
          }
          goto LABEL_33;
      }
    }
    else
    {
      v20 = *v17 & 0xFF0FFFFF | 0x200000;
    }
    *v17 = v20;
  }
LABEL_33:
  v13[1] |= 2u;
  v16[1] ^= ((unsigned __int8)v16[1] ^ (unsigned __int8)(8 * *((_DWORD *)v6 + 30))) & 0x38;
  v21 = *(_WORD *)(v10 + 16);
  *((_BYTE *)v16 + 2) = 0;
  *v16 &= 0xFFFF80FF;
  *((_WORD *)v16 + 3) = v21;
  *((_BYTE *)v16 + 5) = 0;
  v22 = *((_BYTE *)v6 + 99) & 3;
  if ( v22 != 1 )
  {
    if ( (*(_QWORD *)(*v6 + 736LL) & 0x10000000000000LL) == 0
      || v22 != 3
      || *((char *)v6 + 98) >= 0
      || (v23 = v6[2], *(_WORD *)(v23 + 124) != 1529)
      || *(_WORD *)(v23 + 126) != 4353
      || *(_DWORD *)(v23 + 36) <= 1u )
    {
      v2 = 6;
    }
  }
  v16[1] = v2 & 0xFFFFFFFE | v16[1] & 0xFFFFFFF8;
  *((_QWORD *)v16 + 1) = Endpoint_GetDequeuePointer((__int64)v6, 0);
  *((_DWORD *)v6 + 38) = *((unsigned __int16 *)v16 + 3);
  Endpoint_InitializeTransferRing(v6, 0);
  memset((void *)(v10 + 24), 0, 0x60uLL);
  *(_QWORD *)(v10 + 64) = Endpoint_EvaluateContextCompletion;
  v24 = *(_DWORD *)(v10 + 60);
  *(_QWORD *)(v10 + 72) = v10;
  *(_DWORD *)(v10 + 60) = v24 & 0xFFFF03FF | 0x3400;
  *(_BYTE *)(v10 + 63) = *(_BYTE *)(v6[2] + 135LL);
  *(_QWORD *)(v10 + 48) = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL);
  *(_QWORD *)(v10 + 96) = v13;
  *(_DWORD *)(v10 + 104) = *(_DWORD *)(*(_QWORD *)(v10 + 8) + 44LL);
  *(_DWORD *)(v10 + 108) = 2;
  *(_QWORD *)(v10 + 112) = v6;
  return Command_SendCommand(v27, v10 + 24);
}
