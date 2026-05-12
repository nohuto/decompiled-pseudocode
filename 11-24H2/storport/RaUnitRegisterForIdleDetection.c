/*
 * XREFs of RaUnitRegisterForIdleDetection @ 0x1401B9B4C
 * Callers:
 *     RaUnitStorageEnableIdlePower @ 0x1400399E0 (RaUnitStorageEnableIdlePower.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x14001DAA4 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x140030D64 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x1400713D4 (RaidUnitIsRegisteredForIdleDetection.c)
 *     McTemplateK0pquuudttqqttq_EtwWriteTransfer @ 0x140076108 (McTemplateK0pquuudttqqttq_EtwWriteTransfer.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1400781BC (RaidRegisterForRuntimePowerManagement.c)
 *     RaidSetD3Cold @ 0x140078A68 (RaidSetD3Cold.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitRegisterForIdleDetection(unsigned __int8 *Context, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // edi
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // r12d
  int v13; // esi
  int v14; // r13d
  __int64 v15; // r8
  __int64 *v16; // rcx
  unsigned __int8 v18; // al
  char v19; // di
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 Pool; // rax
  _QWORD *v23; // rsi
  int v24; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v25; // rcx
  int v26; // eax
  __int64 v27; // r8
  _DWORD *v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  PVOID *Handle; // [rsp+20h] [rbp-79h]
  unsigned int v33; // [rsp+48h] [rbp-51h]
  int v34; // [rsp+80h] [rbp-19h]
  int v35; // [rsp+84h] [rbp-15h]

  v2 = *((_QWORD *)Context + 3);
  v3 = 0;
  v35 = 0;
  v34 = -1;
  if ( RuntimePowerDisabled )
  {
    Context[507] |= 0x20u;
    goto LABEL_12;
  }
  if ( !v2 || (*(_BYTE *)(v2 + 108) & 8) != 0 || *((_DWORD *)Context + 486) == 1 )
    goto LABEL_24;
  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
  {
    if ( RaidUnitIsRegisteredForIdleDetection((__int64)Context) )
    {
      v3 = -1073741738;
      goto LABEL_12;
    }
    v18 = _interlockedbittestandset((volatile signed __int32 *)Context + 128, 0);
    v35 = v18;
    if ( !v18 )
    {
      Context[505] ^= (Context[505] ^ (4 * (*(_DWORD *)(a2 + 8) >> 1))) & 4;
      if ( RaidIsUnitControlSupported((__int64)Context, 4) )
        v3 = RaCallMiniportUnitControl(*((_QWORD *)Context + 3) + 376LL);
      if ( *((_QWORD *)Context + 234) )
      {
LABEL_49:
        if ( v3 >= 0 )
          goto LABEL_50;
LABEL_34:
        Context[505] &= ~4u;
LABEL_35:
        RaidSetD3Cold(*((struct _DEVICE_OBJECT **)Context + 1), (Context[505] & 4) != 0);
        goto LABEL_12;
      }
      if ( (*(_BYTE *)(v2 + 104) & 0x20) != 0 )
      {
        v19 = 0;
        v20 = 264LL;
        if ( (*(_BYTE *)(v2 + 110) & 0x40) == 0 )
          goto LABEL_40;
      }
      else
      {
        if ( (*(_BYTE *)(v2 + 110) & 0x40) == 0 )
        {
          v3 = -1073741637;
          goto LABEL_34;
        }
        v19 = 0;
      }
      v21 = *(_QWORD *)(v2 + 4960);
      v20 = 264LL;
      if ( v21 && (*(_DWORD *)(v21 + 20) & 0x100) == 0 )
      {
        v19 = 1;
        v20 = 296LL;
      }
LABEL_40:
      Pool = RaidAllocatePool(64LL, v20, 1330667858LL, *((_QWORD *)Context + 1));
      v23 = (_QWORD *)Pool;
      if ( Pool )
      {
        v24 = *(_DWORD *)(Pool + 32);
        *(_DWORD *)(Pool + 16) = 0;
        *(_DWORD *)(Pool + 32) = v24 & 0xFFFFFFF1 | 0xA;
        *(_QWORD *)(Pool + 88) = Pool + 80;
        *(_QWORD *)(Pool + 80) = Pool + 80;
        KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 96));
        v23[1] = v23 + 23;
        *((_DWORD *)v23 + 47) = 16;
        *((_DWORD *)v23 + 46) = 1;
        *((_DWORD *)v23 + 48) = 1;
        *((_DWORD *)v23 + 52) = 1;
        *((_DWORD *)v23 + 50) = 1;
        *((_DWORD *)v23 + 51) = 32;
        *(_OWORD *)(v23 + 27) = xmmword_140154638;
        *((_DWORD *)v23 + 58) = 1;
        *((_DWORD *)v23 + 59) = 32;
        v23[30] = 0LL;
        v23[31] = 0LL;
        *((_DWORD *)v23 + 64) = -1;
        if ( v19 )
        {
          *((_DWORD *)v23 + 49) |= 0x100u;
          *((_DWORD *)v23 + 52) = 2;
          *((_DWORD *)v23 + 66) = 1;
          *((_DWORD *)v23 + 67) = 32;
          v23[34] = 0LL;
          v23[35] = 0LL;
          *((_DWORD *)v23 + 72) = -1;
          *((_DWORD *)v23 + 8) |= 0x1000u;
        }
        v3 = RaidRegisterForRuntimePowerManagement(
               *((_QWORD *)Context + 1),
               (int *)v23 + 46,
               (__int64)Context,
               (__int64)v23);
        if ( v3 >= 0 )
        {
          if ( *v23 )
          {
            PoFxSetComponentLatency(*v23, 0LL, -1LL);
            PoFxSetComponentResidency(*v23, 0LL, -1LL);
            v25 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 233);
            *((_QWORD *)Context + 234) = v23;
            ExReInitializeRundownProtectionCacheAware(v25);
            Context[505] |= 0x80u;
LABEL_50:
            *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*((_QWORD *)Context
                                                                                                 + 234)
                                                                                               + 32LL)) & 1;
            v26 = *((_DWORD *)Context + 487);
            v27 = *((_QWORD *)Context + 234);
            if ( v26 != -1 )
              goto LABEL_58;
            v28 = *(_DWORD **)(v27 + 8);
            if ( *v28 < 2u )
              goto LABEL_57;
            v29 = v28[3];
            if ( (v29 & 0x10) != 0 )
            {
              v26 = v28[4];
              goto LABEL_58;
            }
            if ( *v28 >= 3u && (v29 & 0x20) != 0 )
              v26 = 0;
            else
LABEL_57:
              v26 = 300000;
LABEL_58:
            *(_DWORD *)(v27 + 24) = v26;
            *(_DWORD *)(*((_QWORD *)Context + 234) + 20LL) = *(_DWORD *)(a2 + 12);
            RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12), 1);
            PoFxStartDevicePowerManagement(**((_QWORD **)Context + 234));
            v31 = *((_QWORD *)Context + 234);
            if ( (*(_DWORD *)(v31 + 32) & 0x100) != 0 )
            {
              LOBYTE(v30) = 1;
              PoRegisterCoalescingCallback(RaidUnitIoCoalescingCallback, v30, v31 + 104, Context);
              PoRegisterPowerSettingCallback(
                *((PDEVICE_OBJECT *)Context + 1),
                &GUID_ACDC_POWER_SOURCE,
                (PPOWER_SETTING_CALLBACK)RaidUnitPowerSettingCallback,
                Context,
                (PVOID *)(*((_QWORD *)Context + 234) + 112LL));
              *(_QWORD *)(*((_QWORD *)Context + 234) + 120LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, Context, 0LL);
              *(_QWORD *)(*((_QWORD *)Context + 234) + 128LL) = ExAllocateTimer(
                                                                  RaidUnitEndMaintenanceTime,
                                                                  Context,
                                                                  0LL);
            }
            goto LABEL_35;
          }
          v3 = -1073741823;
        }
        ExFreePoolWithTag(v23, 0x4F506152u);
      }
      else
      {
        v3 = -1073741670;
      }
      goto LABEL_49;
    }
LABEL_24:
    v3 = -1073741823;
    goto LABEL_12;
  }
  v6 = *((_QWORD *)Context + 234);
  v7 = *(_DWORD *)(a2 + 12);
  if ( v7 != *(_DWORD *)(v6 + 20) )
  {
    *(_DWORD *)(v6 + 20) = v7;
    if ( _bittest((const signed __int32 *)(*((_QWORD *)Context + 234) + 32LL), 8u) )
      RaidUnitAdaptiveIdleTimeout((__int64)Context);
    else
      RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12), 0);
  }
  v8 = *((_QWORD *)Context + 234);
  v9 = *(_DWORD *)(v8 + 32);
  if ( (((unsigned __int8)v9 ^ *(_BYTE *)(a2 + 8)) & 1) != 0 )
    *(_DWORD *)(v8 + 32) = v9 ^ (v9 ^ *(_DWORD *)(a2 + 8)) & 1;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
LABEL_12:
  if ( StorEtwLoggingEnabled )
  {
    v10 = *((_QWORD *)Context + 3);
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    if ( v10 )
      v34 = *(_DWORD *)(v10 + 56);
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      v16 = (__int64 *)*((_QWORD *)Context + 234);
      v11 = *v16;
      v13 = v16[4] & 1;
      v14 = *((_DWORD *)v16 + 5);
      v12 = *(_DWORD *)(v16[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
    }
    if ( (byte_140171462 & 0x10) != 0 )
    {
      v33 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v34;
      McTemplateK0pquuudttqqttq_EtwWriteTransfer(
        *(_DWORD *)(a2 + 8) & 1,
        v33,
        v15,
        v11,
        Handle,
        Context[104],
        Context[105],
        Context[106],
        v3,
        v33,
        *(_DWORD *)(a2 + 8) & 1,
        *(_DWORD *)(a2 + 12),
        v12,
        (Context[505] >> 2) & 1,
        v13,
        v14);
    }
  }
  if ( !v35 )
    *((_DWORD *)Context + 128) &= ~1u;
  return (unsigned int)v3;
}
