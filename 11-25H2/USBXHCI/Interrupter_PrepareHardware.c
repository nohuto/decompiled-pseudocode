/*
 * XREFs of Interrupter_PrepareHardware @ 0x14007C634
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079ED0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     Interrupter_SetSecondaryInterrupterCount @ 0x140049340 (Interrupter_SetSecondaryInterrupterCount.c)
 *     WPP_RECORDER_SF_Dd @ 0x1400494C8 (WPP_RECORDER_SF_Dd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     Interrupter_CmResList_GetInterrupterCountAndType @ 0x14007B840 (Interrupter_CmResList_GetInterrupterCountAndType.c)
 *     Interrupter_CreateInterrupter @ 0x14007BA50 (Interrupter_CreateInterrupter.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x14007C528 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareInterrupter @ 0x140082C5C (Interrupter_PrepareInterrupter.c)
 */

__int64 __fastcall Interrupter_PrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v4; // r15
  unsigned int v6; // ebp
  int v8; // edx
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // ebx
  int v15; // r13d
  bool v16; // cc
  __int64 Pool2; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // edx
  int v21; // r9d
  _QWORD *v22; // rcx
  unsigned int i; // r14d
  _BYTE *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r15
  unsigned __int16 v30; // r9
  __int64 v31; // rbp
  __int64 v32; // r14
  int v34; // [rsp+20h] [rbp-58h]
  unsigned int v35; // [rsp+80h] [rbp+8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+10h]
  __int64 v37; // [rsp+98h] [rbp+20h] BYREF

  v36 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_DWORD *)(a1 + 16);
  v6 = 0;
  v37 = 0LL;
  v35 = 0;
  Interrupter_CmResList_GetInterrupterCountAndType(a1, a2, &v35, (int *)(a1 + 16));
  v9 = v35;
  if ( !v35 )
  {
    v10 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v11 = 17;
LABEL_4:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v8, 9, v11, (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
    return v10;
  }
  if ( *(_DWORD *)(v3 + 1044) == 1 )
  {
    v12 = (*(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) >> 8) & 0x7FF;
    if ( v12 < 2 )
    {
      v10 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v10;
      v11 = 18;
      goto LABEL_4;
    }
    if ( (*(_QWORD *)(v3 + 736) & 0x1000LL) != 0 )
    {
      v10 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v10;
      v11 = 19;
      goto LABEL_4;
    }
    v13 = *(_DWORD *)(a1 + 64);
    if ( v13 == -1 )
    {
      if ( g_ReservedMessageForOffloadMode == -1 )
        g_ReservedMessageForOffloadMode = ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) >> 8) & 0x7FF) - 1;
    }
    else if ( v13 >= v12 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(v3 + 72),
          2u,
          9u,
          0x14u,
          (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
          *(_DWORD *)(a1 + 64),
          (*(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) >> 8) & 0x7FF);
      *(_DWORD *)(v3 + 1044) = 0;
      return (unsigned int)-1073741823;
    }
    if ( g_ReservedMessageForOffloadMode >= ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) >> 8) & 0x7FFu) )
      g_ReservedMessageForOffloadMode = ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 84LL) >> 8) & 0x7FF) - 1;
    v14 = g_ReservedMessageForOffloadMode;
    v15 = 1;
    v9 = v35;
    v16 = v35 <= g_ReservedMessageForOffloadMode;
    *(_DWORD *)(a1 + 64) = g_ReservedMessageForOffloadMode;
    if ( !v16 )
      v14 = v9;
  }
  else
  {
    v14 = v35 - 1;
    v15 = 0;
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(8 * v14 + 8), 1229146200LL);
  *(_QWORD *)(a1 + 32) = Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v11 = 21;
    goto LABEL_4;
  }
  v19 = *(_QWORD *)(a1 + 40);
  LOBYTE(v18) = *v4 != 0;
  *(_DWORD *)(a1 + 92) = v14 + 1;
  v10 = Interrupter_PrepareInterrupter(a1, v19, v18);
  if ( (v10 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v21 = 22;
    goto LABEL_66;
  }
  v22 = *(_QWORD **)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v15 + 1;
  *v22 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(v3 + 736) & 0x1000LL) != 0 )
    Interrupter_SetSecondaryInterrupterCount(a1, 0);
  if ( *(_DWORD *)(a1 + 20) && v9 > 1 && *v4 == 2 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2432))(
                  WdfDriverGlobals,
                  a3) )
      {
        *(_DWORD *)(a1 + 24) += *(_DWORD *)(a1 + 20);
        break;
      }
      v24 = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2440))(
                       WdfDriverGlobals,
                       a3,
                       i);
      if ( *v24 == 2 && (v24[2] & 3) == 3 )
      {
        if ( v6 )
        {
          if ( v6 == *(_DWORD *)(a1 + 64) )
          {
            Debug_FreAssertMsg(
              (__int64)"Message number reserved for software offload mode is visible to Windows",
              0,
              (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
              534);
          }
          else
          {
            v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2440))(
                    WdfDriverGlobals,
                    a3,
                    i);
            v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2440))(
                    WdfDriverGlobals,
                    v36,
                    i);
            v10 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, v6, v26, v25, &v37, 0LL);
            if ( (v10 & 0x80000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v10;
              v30 = 23;
LABEL_53:
              WPP_RECORDER_SF_Dd(*(_QWORD *)(v3 + 72), v27, v28, v30, v34);
              return v10;
            }
            v29 = v37;
            LOBYTE(v28) = 1;
            v10 = Interrupter_PrepareInterrupter(a1, v37, v28);
            if ( (v10 & 0x80000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v10;
              v30 = 24;
              goto LABEL_53;
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v6) = v29;
          }
          ++v6;
        }
        else
        {
          v6 = 1;
        }
      }
    }
  }
  if ( v15 != 1 )
  {
LABEL_63:
    v10 = Interrupter_PopulateInterrupterLookupTable(a1);
    if ( (v10 & 0x80000000) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v21 = 27;
LABEL_66:
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), v20, 9, v21, (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids, v10);
    return v10;
  }
  v31 = *(unsigned int *)(a1 + 64);
  v10 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, *(_DWORD *)(a1 + 64), 0LL, 0LL, &v37, 0LL);
  if ( (v10 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = 25;
      goto LABEL_53;
    }
    return v10;
  }
  v32 = v37;
  LOBYTE(v28) = 1;
  v10 = Interrupter_PrepareInterrupter(a1, v37, v28);
  if ( (v10 & 0x80000000) == 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v31) = v32;
    *(_QWORD *)(a1 + 72) = v32;
    goto LABEL_63;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = 26;
    goto LABEL_53;
  }
  return v10;
}
