/*
 * XREFs of NVMeHwFindAdapter @ 0x140017CA0
 * Callers:
 *     <none>
 * Callees:
 *     GetControllerMaxTransferSize @ 0x1400065A0 (GetControllerMaxTransferSize.c)
 *     NVMeControllerStartFailureEventLog @ 0x14000D720 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x14000F830 (ControllerReset.c)
 *     ControllerAllocateUncachedExtension @ 0x1400174A0 (ControllerAllocateUncachedExtension.c)
 *     Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_IsEnabledDeviceUsageNoInline @ 0x14001772C (Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledDeviceUsageNoInline @ 0x140017780 (Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x1400177D4 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     FillControllerRuntimeLog @ 0x140017B10 (FillControllerRuntimeLog.c)
 *     IsIntelChatham @ 0x140017C70 (IsIntelChatham.c)
 *     NVMeLogEtwControllerInfo @ 0x14001890C (NVMeLogEtwControllerInfo.c)
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 *     NVMeControllerCreateLocalCommandPool @ 0x1400220FC (NVMeControllerCreateLocalCommandPool.c)
 *     NVMeControllerDeleteLocalCommandPool @ 0x140022178 (NVMeControllerDeleteLocalCommandPool.c)
 *     NVMeControllerDeleteTimestampSyncCommand @ 0x140022220 (NVMeControllerDeleteTimestampSyncCommand.c)
 *     NVMeControllerInitializeTimestampSyncCommand @ 0x140022354 (NVMeControllerInitializeTimestampSyncCommand.c)
 *     GetNVMeRegisterAddress @ 0x14002D6F4 (GetNVMeRegisterAddress.c)
 *     GetRegistrySettings @ 0x14002D764 (GetRegistrySettings.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  unsigned int v7; // esi
  int v8; // r12d
  __int64 v9; // r9
  char v10; // cl
  char v11; // cl
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *NVMeRegisterAddress; // rax
  char v18; // cl
  int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned __int16 v22; // r9
  unsigned int v23; // edx
  int v24; // eax
  bool v25; // zf
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // r8
  void **v29; // r12
  void *v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // eax
  char v33; // r8
  int v34; // edx
  __int64 v35; // r9
  int v36; // eax
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h]
  int v45; // [rsp+78h] [rbp-90h]
  _DWORD v46[24]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v47[5]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v48; // [rsp+138h] [rbp+30h] BYREF

  v48 = 0LL;
  v6 = *(_QWORD *)(a5 + 64);
  memset(v46, 0, 0x58uLL);
  v7 = 2;
  v8 = *(_DWORD *)(a1 + 24) & 2;
  v44 = 0LL;
  LOBYTE(v43) = 0;
  *(_QWORD *)((char *)&v48 + 1) = 0x101010101010101LL;
  *(_WORD *)((char *)&v48 + 9) = 257;
  BYTE12(v48) = 1;
  if ( !*(_BYTE *)(a5 + 197) )
    BYTE14(v48) = 1;
  StorPortExtendedFunction(103LL, a1, 16LL, &v48);
  if ( !v8 )
  {
    v10 = g_ControllerExtensionIndex;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v10 + 1) & 0xF;
  }
  v11 = *(_BYTE *)(a5 + 197);
  *(_BYTE *)(a1 + 20) = v11;
  if ( (*(_DWORD *)(a5 + 200) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 4064) |= 0x1000u;
    return 4LL;
  }
  if ( v11 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 28) = 2;
      goto LABEL_83;
    }
    StorPortExtendedFunction(45LL, a1, v6, 152LL);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(v6 + 8);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v6 + 64);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v6 + 80);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v6 + 96);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v6 + 112);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(v6 + 128);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(v6 + 144);
    v13 = *(_DWORD *)(v6 + 148);
    *(_DWORD *)(a1 + 56) |= 4u;
    *(_DWORD *)(a1 + 216) = v13;
  }
  else
  {
    memset(v47, 0, 0x40uLL);
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(a1 + 4340) = *(_DWORD *)(a5 + 4);
      *(_DWORD *)(a1 + 4344) = *(_DWORD *)(a5 + 100);
    }
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100), v47, 64) != 64 )
    {
      *(_DWORD *)(a1 + 28) = 3;
      v7 = 3;
      goto LABEL_83;
    }
    *(_DWORD *)(a1 + 4) = v47[0];
    *(_BYTE *)(a1 + 8) = BYTE8(v47[0]);
    if ( IsIntelChatham(a1) )
    {
      v14 = *((_QWORD *)&v47[1] + 1);
      v15 = 4294963200LL;
      v16 = HIDWORD(v47[1]);
    }
    else
    {
      v14 = *(_QWORD *)&v47[1];
      v15 = 4294950912LL;
      v16 = DWORD1(v47[1]);
    }
    *(_QWORD *)(a1 + 168) = v15 & v14 | (v16 << 32);
  }
  NVMeRegisterAddress = (_QWORD *)GetNVMeRegisterAddress(a1, a5);
  *(_QWORD *)(a1 + 176) = NVMeRegisterAddress;
  if ( NVMeRegisterAddress )
  {
    *(_QWORD *)(a1 + 192) = *NVMeRegisterAddress;
    v18 = HIDWORD(*(_QWORD *)(a1 + 192)) & 0xF;
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
    *(_DWORD *)(a1 + 200) = 4 << v18;
    if ( IsIntelChatham(a1) )
      *(_BYTE *)(a1 + 195) = 1;
    *(_DWORD *)(a1 + 204) = 500 * *(unsigned __int8 *)(a1 + 195);
    if ( !*(_BYTE *)(a1 + 20) && !v8 )
      GetRegistrySettings(a1);
    v19 = 3;
    if ( *(_DWORD *)(a5 + 20) != 1 )
      v19 = 1;
    *(_DWORD *)(a1 + 16) = v19;
    if ( (unsigned int)StorPortExtendedFunction(97LL, a1, 1LL, &v43) )
      *(_DWORD *)(a1 + 4064) &= ~0x10000u;
    else
      *(_DWORD *)(a1 + 4064) = ((_BYTE)v43 != 0 ? 0x10000 : 0) | *(_DWORD *)(a1 + 4064) & 0xFFFEFFFF;
    v9 = 32LL;
    v21 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 320) = 1048640;
    if ( *(_BYTE *)(a1 + 20) )
    {
      *(_WORD *)(a1 + 324) = 32;
      if ( v21 )
      {
        if ( v21 > 0x20 )
          LOWORD(v21) = 32;
      }
      else
      {
        LOWORD(v21) = 32;
      }
      *(_WORD *)(a1 + 326) = v21;
    }
    else
    {
      v22 = 256;
      v23 = 1024;
      *(_WORD *)(a1 + 324) = 256;
      v20 = 0xFFFFLL;
      if ( v21 )
      {
        v23 = v21;
        if ( v21 >= 0xFFFF )
          v22 = -1;
        else
          v22 = *(_WORD *)(a1 + 36);
      }
      if ( v23 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 192) + 1 )
        v23 = (unsigned __int16)*(_DWORD *)(a1 + 192) + 1;
      if ( v23 < 0xFFFF )
        v20 = v23;
      *(_WORD *)(a1 + 326) = v20;
      if ( (unsigned __int16)v20 > v22 )
        v22 = v20;
      LOWORD(v21) = v22;
      v9 = 32LL;
    }
    *(_WORD *)(a1 + 328) = v21;
    *(_DWORD *)(a5 + 48) = 3;
    *(_BYTE *)(a5 + 81) = 1;
    *(_BYTE *)(a5 + 145) = 0;
    *(_DWORD *)(a5 + 148) = 1;
    if ( *(_DWORD *)(a5 + 20) == 1 )
    {
      *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
      v24 = 2;
    }
    else
    {
      v24 = 1;
    }
    *(_DWORD *)(a5 + 160) = v24;
    v25 = *(_BYTE *)(a5 + 144) == 0x80;
    *(_DWORD *)(a5 + 216) = 0;
    if ( v25 )
      *(_BYTE *)(a5 + 144) = 2;
    v26 = *(_DWORD *)(a5 + 220) | 2;
    *(_BYTE *)(a5 + 147) = 0;
    v27 = v26 | 0xA9;
    *(_DWORD *)(a5 + 220) = v27;
    if ( (*(_DWORD *)(a1 + 56) & 2) == 0 )
    {
      v27 |= 4u;
      *(_DWORD *)(a5 + 220) = v27;
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x800000) == 0 )
      *(_DWORD *)(a5 + 220) = v27 | 0x80000000;
    *(_DWORD *)(a5 + 24) = 0x200000;
    if ( !v8 )
    {
      StorPortExtendedFunction(32LL, a1, a1 + 4272, 32LL);
      if ( !ControllerAllocateUncachedExtension(a1, a5) )
        goto LABEL_83;
      if ( !*(_BYTE *)(a1 + 20) )
      {
        v28 = *(unsigned int *)(a1 + 112);
        if ( (_DWORD)v28 )
        {
          v29 = (void **)(a1 + 3816);
          if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v28, 1701672526LL) )
          {
            v30 = *v29;
            if ( *v29 )
            {
              v31 = *(_DWORD *)(a1 + 112);
              if ( (v31 & 3) != 0 )
              {
                if ( v31 )
                  memset(v30, 0, *(unsigned int *)(a1 + 112));
              }
              else
              {
                v32 = v31 >> 2;
                if ( v32 )
                  memset(v30, 0, 4LL * v32);
              }
            }
          }
        }
        NVMeControllerCreateLocalCommandPool(a1);
        NVMeControllerInitializeTimestampSyncCommand(a1);
        if ( (unsigned int)Feature_NOPSPermissiveModeCommandRaceWithPowerTransitions__private_IsEnabledDeviceUsageNoInline() )
          *(_DWORD *)(a1 + 4336) |= 2u;
        if ( (unsigned int)Feature_FixModernStandbyDRIPSForMultipleSSDInStorNVMe__private_IsEnabledDeviceUsageNoInline() )
          *(_DWORD *)(a1 + 4336) |= 4u;
      }
    }
    if ( !(unsigned int)ControllerReset(a1, 1, v20, v9) && !(unsigned int)NVMeControllerInitPart1(a1) )
    {
      v33 = *(_BYTE *)(*(_QWORD *)(a1 + 1560) + 77LL);
      if ( v33 )
        v34 = (1 << v33) * (1 << ((*(_BYTE *)(a1 + 198) & 0xF) + 12));
      else
        v34 = -1;
      *(_DWORD *)(a1 + 208) = v34;
      *(_DWORD *)(a5 + 24) = GetControllerMaxTransferSize((_DWORD *)a1);
      *(_DWORD *)(a5 + 212) = 32;
      *(_DWORD *)(a5 + 204) = 32;
      *(_DWORD *)(a5 + 208) = 32;
      *(_DWORD *)(a5 + 28) = 513;
      *(_BYTE *)(a5 + 72) = 1;
      *(_BYTE *)(a5 + 97) = 1;
      *(_BYTE *)(a5 + 146) = -1;
      if ( !*(_BYTE *)(a1 + 20) )
      {
        v36 = *(_DWORD *)(v35 + 96);
        v47[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
        v47[1] = GUID_NVME_POWER_IDLE_TIMEOUT1;
        v47[2] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
        v47[3] = GUID_NVME_POWER_IDLE_TIMEOUT2;
        v37 = v36 & 2;
        if ( v37 )
          v47[4] = GUID_NVME_POWER_NOPPME;
        StorPortExtendedFunction(26LL, a1, (unsigned int)(v37 != 0) + 4, v47);
      }
      *(_DWORD *)(a1 + 24) &= ~2u;
      return 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 4;
    v7 = 3;
  }
LABEL_83:
  v38 = *(_QWORD *)(a1 + 4272);
  if ( v38 )
  {
    StorPortExtendedFunction(34LL, a1, v38, v9);
    *(_QWORD *)(a1 + 4272) = 0LL;
    *(_DWORD *)(a1 + 4280) = 0;
  }
  v39 = *(_QWORD *)(a1 + 3816);
  if ( v39 )
  {
    StorPortExtendedFunction(1LL, a1, v39, v9);
    *(_QWORD *)(a1 + 3816) = 0LL;
  }
  v40 = *(_QWORD *)(a1 + 360);
  if ( v40 )
  {
    StorPortExtendedFunction(1LL, a1, v40, v9);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  v41 = *(_QWORD *)(a1 + 368);
  if ( v41 )
  {
    StorPortExtendedFunction(1LL, a1, v41, v9);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
  v42 = *(_QWORD *)(a1 + 376);
  if ( v42 )
  {
    StorPortExtendedFunction(1LL, a1, v42, v9);
    *(_QWORD *)(a1 + 376) = 0LL;
  }
  NVMeControllerDeleteLocalCommandPool(a1);
  NVMeControllerDeleteTimestampSyncCommand(a1);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeControllerStartFailureEventLog(a1);
    NVMeLogEtwControllerInfo(a1);
    FillControllerRuntimeLog(a1, v46);
    v44 = *(unsigned int *)(a1 + 24);
    HIDWORD(v44) = *(_DWORD *)(a1 + 28);
    v45 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
  }
  return v7;
}
