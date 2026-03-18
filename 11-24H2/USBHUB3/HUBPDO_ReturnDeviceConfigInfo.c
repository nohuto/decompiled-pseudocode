/*
 * XREFs of HUBPDO_ReturnDeviceConfigInfo @ 0x14001B7B0
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBID_BuildCompatibleID @ 0x14001E7F4 (HUBID_BuildCompatibleID.c)
 *     HUBID_BuildHardwareID @ 0x14001F1AC (HUBID_BuildHardwareID.c)
 *     HUBID_FreeID @ 0x14001F60C (HUBID_FreeID.c)
 *     memmove @ 0x140046600 (memmove.c)
 *     memset @ 0x140046900 (memset.c)
 */

__int64 __fastcall HUBPDO_ReturnDeviceConfigInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // r9d
  int v5; // edi
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  void *Pool2; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v4 = 19;
LABEL_4:
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      a2,
      5,
      v4,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)v3 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v4 = 20;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v3 + 4) != 204 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x15u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        *(_DWORD *)(v3 + 4),
        204);
    return (unsigned int)-1073741789;
  }
  memset((void *)(v3 + 12), 0, 0xC0uLL);
  *(_DWORD *)(v3 + 8) = 0;
  v6 = 0;
  *(_DWORD *)v3 = 1;
  *(_DWORD *)(v3 + 4) = 204;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 2512LL) & 2) != 0 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    v6 = 1;
  }
  if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2474LL) >= 0x200u )
  {
    *(_DWORD *)(v3 + 8) = 1;
    v6 = 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 40LL) & 2) != 0 )
  {
    v6 |= 8u;
    *(_DWORD *)(v3 + 8) = v6;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 40LL) & 2) != 0 )
  {
    v6 |= 4u;
    *(_DWORD *)(v3 + 8) = v6;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 256LL) == 2 )
  {
    v6 |= 2u;
    *(_DWORD *)(v3 + 8) = v6;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 40LL) & 0x100) != 0 )
  {
    v6 |= 0x20u;
    *(_DWORD *)(v3 + 8) = v6;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 240LL) )
  {
    v6 |= 0x10u;
    *(_DWORD *)(v3 + 8) = v6;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 92LL) == 100 )
    *(_DWORD *)(v3 + 8) = v6 | 0x40;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1640LL) & 1) != 0 )
  {
    *(_DWORD *)(v3 + 132) |= 1u;
    v7 = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(v3 + 136) = *(_OWORD *)(v7 + 1672);
    *(_OWORD *)(v3 + 152) = *(_OWORD *)(v7 + 1688);
    *(_OWORD *)(v3 + 168) = *(_OWORD *)(v7 + 1704);
    *(_OWORD *)(v3 + 184) = *(_OWORD *)(v7 + 1720);
    *(_DWORD *)(v3 + 200) = *(_DWORD *)(v7 + 1736);
  }
  v5 = HUBID_BuildCompatibleID(*(_QWORD *)(a1 + 24), 0LL, v3 + 28);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x16u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v5);
    v8 = v3 + 12;
LABEL_45:
    HUBID_FreeID(v3 + 28);
    HUBID_FreeID(v8);
    HUBID_FreeID(v3 + 44);
    return (unsigned int)v5;
  }
  v5 = HUBID_BuildHardwareID(*(_QWORD *)(a1 + 24), 0LL, v3 + 12);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x17u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v5);
    v8 = v3 + 12;
    goto LABEL_45;
  }
  v9 = *(_QWORD *)(a1 + 24) + 2168LL;
  v5 = 0;
  *(_OWORD *)(v3 + 44) = 0LL;
  if ( *(_QWORD *)(v9 + 8) && *(_DWORD *)(v9 + 4) )
  {
    *(_OWORD *)(v3 + 44) = *(_OWORD *)v9;
    Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned int *)(v9 + 4), 1681082453LL);
    *(_QWORD *)(v3 + 52) = Pool2;
    if ( Pool2 )
      memmove(Pool2, *(const void **)(v9 + 8), *(unsigned int *)(v9 + 4));
    else
      v5 = -1073741670;
  }
  v8 = v3 + 12;
  if ( v5 < 0 )
    goto LABEL_45;
  return (unsigned int)v5;
}
