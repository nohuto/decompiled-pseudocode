/*
 * XREFs of ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C00AB3E0
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C005AA48 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C005BEB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C00A41D0 (_anonymous_namespace_--EligibleWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C021D95C (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     ?ComputeShowCommandSource@@YA?AW4ShowCommandSource@@H@Z @ 0x1C0224448 (-ComputeShowCommandSource@@YA-AW4ShowCommandSource@@H@Z.c)
 */

__int64 __fastcall xxxGetShellShowWindowCommand(__int64 a1, struct tagWND *a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v6; // ebp
  char v9; // di
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r15d
  char v14; // dl
  __int128 v15; // xmm6
  int v16; // r13d
  char v17; // dl
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  char v21; // r14
  char v22; // al
  char v23; // dl
  char v24; // dl
  __int64 v25; // [rsp+40h] [rbp-D8h]
  __int64 v26; // [rsp+60h] [rbp-B8h] BYREF
  int v27; // [rsp+68h] [rbp-B0h]
  unsigned int v28; // [rsp+70h] [rbp-A8h]
  int v29; // [rsp+74h] [rbp-A4h]
  __int128 v30; // [rsp+78h] [rbp-A0h]

  v4 = *((_QWORD *)a2 + 3);
  v6 = a3;
  if ( !*(_QWORD *)(v4 + 328)
    || (v9 = 1, (*(_DWORD *)(v4 + 336) & 1) == 0)
    || !anonymous_namespace_::EligibleWindow(a2, 1) )
  {
    if ( (_BYTE)v6 == 21 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 396LL);
    *(_DWORD *)a1 = 0;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a4 + 20) & 0x20000) != 0 )
  {
    v13 = *(unsigned __int8 *)(a4 + 24);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v11) = 0;
    }
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (__int64)gFullLog,
        4u,
        0xCu,
        0x15u,
        (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
        *(_QWORD *)a2,
        *(unsigned __int16 *)(a4 + 24));
    if ( (((_BYTE)v13 - 1) & 0xFD) == 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v14 = 0;
      }
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = v13;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v14,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          0xCu,
          0x16u,
          (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
          v25);
      }
      *((_DWORD *)a2 + 80) |= 2u;
      *(_DWORD *)a1 = 1;
      *(_BYTE *)(a1 + 4) = v13;
      goto LABEL_7;
    }
  }
  v15 = 0LL;
  v16 = ComputeShowCommandSource(v6, v11, v12, &WPP_GLOBAL_Control);
  if ( v16 != 4 )
  {
    if ( !v16 )
    {
LABEL_95:
      *(_DWORD *)a1 = v16;
      *(_BYTE *)(a1 + 4) = v6;
      *(_WORD *)(a1 + 5) = 0;
      *(_BYTE *)(a1 + 7) = 0;
      *(_OWORD *)(a1 + 8) = v15;
      return a1;
    }
LABEL_87:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        0LL,
        4u,
        0xCu,
        0x1Du,
        (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
        *(_QWORD *)a2);
    *((_DWORD *)a2 + 80) |= 2u;
    goto LABEL_95;
  }
  v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v17,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0xCu,
      0x17u,
      (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
      v25);
  }
  memset_0(&v26, 0, 0x68uLL);
  v18 = *(_QWORD *)a2;
  *((_DWORD *)a2 + 80) |= 0x200u;
  v26 = v18;
  v27 = 1;
  v28 = v6;
  if ( (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(&v26, 0LL) )
  {
    v21 = v29;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v20,
        (_DWORD)gFullLog,
        4,
        12,
        25,
        (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
        v29);
    }
    if ( (v21 & 0xF) != 0 )
    {
      switch ( v21 & 0xF )
      {
        case 1:
          LOBYTE(v6) = -1;
          break;
        case 2:
          v22 = 17;
          if ( (_BYTE)v6 != 8 )
            v22 = 3;
          LOBYTE(v6) = v22;
          break;
        case 3:
          v15 = v30;
          LOBYTE(v6) = 21;
          break;
        default:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v9 = 0;
          }
          if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v25) = v6;
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v9,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              3u,
              0xCu,
              0x1Au,
              (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
              v25);
          }
          goto LABEL_45;
      }
    }
    if ( (v21 & 0x10) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v23 = 0;
      }
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v23,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          27LL,
          4u,
          0xCu,
          0x1Bu,
          (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
          *(_QWORD *)a2);
      *((_DWORD *)a2 + 80) |= 4u;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v24 = 0;
      }
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v24,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          28LL,
          4u,
          0xCu,
          0x1Cu,
          (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
          *(_QWORD *)a2);
      *((_DWORD *)a2 + 80) &= ~4u;
    }
    goto LABEL_87;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      3u,
      0xCu,
      0x18u,
      (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
      v25);
  }
LABEL_45:
  *(_DWORD *)a1 = 0;
LABEL_6:
  *(_BYTE *)(a1 + 4) = v6;
LABEL_7:
  *(_OWORD *)(a1 + 5) = 0LL;
  *(_WORD *)(a1 + 21) = 0;
  *(_BYTE *)(a1 + 23) = 0;
  return a1;
}
