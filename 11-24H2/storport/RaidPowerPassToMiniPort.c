/*
 * XREFs of RaidPowerPassToMiniPort @ 0x14001018C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000F240 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x140034A30 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     RaAdapterStartPowerIo @ 0x1400104F4 (RaAdapterStartPowerIo.c)
 *     RaSrbSetMiniportContext @ 0x140010610 (RaSrbSetMiniportContext.c)
 *     RaInitializePower @ 0x14005352C (RaInitializePower.c)
 *     WPP_SF_qqq @ 0x140067F40 (WPP_SF_qqq.c)
 *     WPP_SF_qqqq @ 0x140071338 (WPP_SF_qqqq.c)
 *     WPP_SF_qqqD @ 0x14007AA40 (WPP_SF_qqqD.c)
 */

__int64 __fastcall RaidPowerPassToMiniPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v7; // r14d
  __int64 v8; // rcx
  _WORD *v9; // rbx
  bool v10; // cf
  int v11; // ecx
  __int64 v12; // rax
  char *v13; // rcx
  _QWORD *v14; // r11
  unsigned int started; // eax
  unsigned int v16; // ebp
  _QWORD *v18; // r8
  _QWORD v19[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 184);
  v19[0] = 0LL;
  v7 = a1;
  if ( *(_DWORD *)v3 == 1431193940 )
    v3 = *(_QWORD *)(v3 + 24);
  v8 = *(_QWORD *)(v3 + 4552);
  v9 = (_WORD *)(v3 + 4384);
  if ( v8 )
    goto LABEL_4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      59LL,
      &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
      a2,
      v3 + 4384,
      v3);
  }
  RaInitializePower(v3);
  v8 = *(_QWORD *)(v3 + 4552);
  if ( v8 )
  {
LABEL_4:
    v19[2] = v8 + 48;
    *(_BYTE *)(v3 + 4560) = 1;
    v19[3] = v8 + 928;
    v10 = *(_BYTE *)(v3 + 4561) != 0;
    v19[1] = v8 + 1184;
    v11 = v10 ? 2304 : 256;
    if ( *(_DWORD *)v3 == 1314275652 )
    {
      v12 = v3 + 274;
    }
    else
    {
      v12 = v3 + 482;
      if ( *(_DWORD *)v3 != 1094997074 )
        v12 = 98LL;
    }
    if ( *(_BYTE *)v12 == 1 )
    {
      *(_DWORD *)(v3 + 4408) = v11;
      *(_QWORD *)(v3 + 4480) = 0LL;
      *(_QWORD *)(v3 + 4464) = a2;
      *v9 = 8;
      *(_BYTE *)(v3 + 4386) = 40;
      *(_DWORD *)(v3 + 4392) = 1397899864;
      *(_DWORD *)(v3 + 4396) = 1;
      *(_DWORD *)(v3 + 4400) = 168;
      *(_DWORD *)(v3 + 4404) = 36;
      *(_WORD *)(v3 + 4420) = 2;
      *(_DWORD *)(v3 + 4424) = *(_DWORD *)(v3 + 5608);
      *(_DWORD *)(v3 + 4504) = 144;
      *(_DWORD *)(v3 + 4436) = 128;
      *(_QWORD *)(v3 + 4448) = 0LL;
      *(_DWORD *)(v3 + 4444) = 0;
      *(_DWORD *)(v3 + 4440) = 1;
      *(_WORD *)(v3 + 4512) = 1;
      *(_DWORD *)(v3 + 4516) = 4;
      *(_WORD *)(v3 + 4514) = *(_WORD *)(v3 + 56);
      *(_WORD *)(v3 + 4520) = 0;
      *(_BYTE *)(v3 + 4522) = 0;
      v13 = (char *)v9 + *(unsigned int *)(v3 + 4504);
      *(_DWORD *)v13 = 97;
      *((_DWORD *)v13 + 1) = 12;
      *((_DWORD *)v13 + 4) = *(_DWORD *)(v4 + 32);
      *((_DWORD *)v13 + 3) = *(_DWORD *)(v4 + 24);
      v13[8] = 1;
    }
    else
    {
      *(_QWORD *)(v3 + 4432) = 0LL;
      *(_BYTE *)(v3 + 4386) = 36;
      *(_QWORD *)(v3 + 4408) = 0LL;
      *(_DWORD *)(v3 + 4400) = 0;
      *v9 = 88;
      *(_DWORD *)(v3 + 4448) = *(_DWORD *)(v4 + 32);
      *(_DWORD *)(v3 + 4392) = *(_DWORD *)(v4 + 24);
      *(_DWORD *)(v3 + 4396) = v11;
      *(_DWORD *)(v3 + 4404) = *(_DWORD *)(v3 + 5608);
      *(_DWORD *)(v3 + 4388) = 1;
    }
    RaSrbSetMiniportContext(v3, v3 + 4384);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v18 = (_QWORD *)(v3 + 4488);
      if ( *(_BYTE *)(v3 + 4386) != 40 )
        v18 = v14;
      WPP_SF_qqqq(
        WPP_GLOBAL_Control->AttachedDevice,
        61LL,
        &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
        a2,
        v3 + 4384,
        *v18,
        v3);
    }
    started = RaAdapterStartPowerIo(v7, a2, (int)v3 + 4384, (unsigned int)v19, a3);
    v16 = started;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqqD(
        WPP_GLOBAL_Control->AttachedDevice,
        62LL,
        &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
        a2,
        v3 + 4384,
        v3,
        started);
    }
    return v16;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
        a2,
        v3 + 4384,
        v3);
    }
    return 3221225495LL;
  }
}
