/*
 * XREFs of NvmeNamespaceRegisterForIdleDetection @ 0x140134C3C
 * Callers:
 *     NvmeNamespaceEnableIdlePower @ 0x1400FF5A0 (NvmeNamespaceEnableIdlePower.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidSetD3Cold @ 0x140078A68 (RaidSetD3Cold.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespacePoFxSetDeviceIdleTimeout @ 0x140133B88 (NvmeNamespacePoFxSetDeviceIdleTimeout.c)
 *     NvmeRegisterForRuntimePowerManagement @ 0x140136338 (NvmeRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall NvmeNamespaceRegisterForIdleDetection(__int64 *a1, __int64 a2)
{
  _QWORD *Pool; // r14
  char v3; // r12
  int v6; // edi
  __int64 v7; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v8; // rcx
  _BYTE *v9; // rdx
  __int64 v11; // rax
  BOOLEAN v12; // al
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v22; // rcx
  int v23; // eax
  _QWORD *v24; // r10
  __int64 v25; // rax

  Pool = 0LL;
  v3 = 0;
  if ( RuntimePowerDisabled )
  {
LABEL_2:
    v6 = 0;
LABEL_12:
    v9 = (_BYTE *)a1[16];
    if ( v9[1] == 1 || **(_BYTE **)(*(_QWORD *)(a1[2] + 128) + 160LL) == 1 )
      *v9 = 0;
    return (unsigned int)v6;
  }
  v7 = *(_QWORD *)(a1[2] + 128);
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 400) + 184LL) & 0x40000000) == 0
    || (v11 = *(_QWORD *)(v7 + 160), *(_BYTE *)v11 == 1) && (*(_DWORD *)(v11 + 176) & 0x100) != 0 )
  {
    v6 = -1073741823;
    goto LABEL_5;
  }
  v12 = NvmeNamespaceCheckAndAcquirePoFx((__int64)a1);
  v13 = a1[16];
  if ( !v12 )
  {
    if ( *(_BYTE *)(v13 + 1) == 1 )
      return 3221225558LL;
    v18 = *(_DWORD *)(v13 + 136);
    if ( (v18 & 4) != 0 )
      v19 = v18 ^ (v18 ^ (*(_DWORD *)(a2 + 8) >> 1)) & 1;
    else
      v19 = v18 & 0xFFFFFFFE;
    *(_DWORD *)(v13 + 136) = v19;
    v20 = *(_QWORD *)(v7 + 160);
    v21 = 272LL;
    if ( (*(_DWORD *)(v20 + 176) & 0x20) != 0
      && *(_BYTE *)v20 == 1
      && (*(_DWORD *)(*(_QWORD *)(v20 + 8) + 20LL) & 0x80u) == 0 )
    {
      v3 = 1;
      v21 = 304LL;
    }
    Pool = (_QWORD *)RaidAllocatePool(72LL, v21, 1330667858LL, a1[1]);
    if ( Pool
      && (*(_QWORD *)(a1[16] + 40) = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x4F506152u),
          (v22 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1[16] + 40)) != 0LL) )
    {
      ExWaitForRundownProtectionReleaseCacheAware(v22);
      v23 = *((_DWORD *)Pool + 8);
      *((_DWORD *)Pool + 4) = 0;
      *((_DWORD *)Pool + 5) = -1;
      *((_DWORD *)Pool + 8) = v23 & 0xFFFFFFF9 | 4;
      Pool[11] = Pool + 10;
      Pool[10] = Pool + 10;
      *((_BYTE *)Pool + 64) = 1;
      KeInitializeSpinLock(Pool + 12);
      Pool[1] = Pool + 24;
      *((_DWORD *)Pool + 48) = 1;
      v24 = a1 + 1;
      *((_DWORD *)Pool + 49) = 16;
      *((_DWORD *)Pool + 50) = 1;
      *((_DWORD *)Pool + 53) = 32;
      *((_DWORD *)Pool + 52) = 1;
      *((_DWORD *)Pool + 54) = 1;
      *((_OWORD *)Pool + 14) = xmmword_14015C7F0;
      Pool[31] = 0LL;
      Pool[32] = 0LL;
      *((_DWORD *)Pool + 60) = 1;
      *((_DWORD *)Pool + 61) = 32;
      *((_DWORD *)Pool + 66) = -1;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 400) + 184LL) & 0x40000000) != 0 )
      {
        v25 = *(_QWORD *)(v7 + 160);
        if ( *(_BYTE *)v25 == 1 && (*(_DWORD *)(*(_QWORD *)(v25 + 8) + 20LL) & 0x200) != 0 )
        {
          *((_DWORD *)Pool + 51) |= 2u;
          v24 = a1 + 1;
        }
      }
      if ( v3 )
      {
        *((_DWORD *)Pool + 51) |= 0x100u;
        Pool[35] = 0LL;
        Pool[36] = 0LL;
        *((_DWORD *)Pool + 54) = 2;
        *((_DWORD *)Pool + 68) = 1;
        *((_DWORD *)Pool + 69) = 32;
        *((_DWORD *)Pool + 74) = -1;
        *((_DWORD *)Pool + 8) |= 0x200u;
      }
      v6 = NvmeRegisterForRuntimePowerManagement(*v24, Pool + 24, a1, Pool);
      if ( v6 >= 0 )
      {
        PoFxSetComponentLatency(*Pool, 0LL, -1LL);
        PoFxSetComponentResidency(*Pool, 0LL, -1LL);
        *(_QWORD *)(a1[16] + 8) = Pool;
        ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1[16] + 40));
        *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 32LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 32LL)) & 1;
        *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 24LL) = 0;
        if ( *((_DWORD *)Pool + 48) >= 2u && (*((_DWORD *)Pool + 51) & 0x10) != 0 )
          *((_DWORD *)Pool + 6) = *((_DWORD *)Pool + 52);
        if ( (*((_DWORD *)Pool + 51) & 2) != 0 )
          *((_DWORD *)Pool + 8) |= 0x400u;
        *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 20LL) = *(_DWORD *)(a2 + 12);
        NvmeNamespacePoFxSetDeviceIdleTimeout((__int64)a1, *(_DWORD *)(a2 + 12), 1);
        *(_BYTE *)(a1[16] + 1) = 1;
        if ( **(_BYTE **)(*(_QWORD *)(a1[2] + 128) + 160LL) == 1
          && !_InterlockedCompareExchange((volatile signed __int32 *)(a1[16] + 96), 1, 0) )
        {
          PoFxActivateComponent(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1[2] + 128) + 160LL) + 8LL), 0LL, 0LL);
        }
        PoFxStartDevicePowerManagement(**(_QWORD **)(a1[16] + 8));
        RaidSetD3Cold((struct _DEVICE_OBJECT *)a1[1], *(_BYTE *)(a1[16] + 136) & 1);
        goto LABEL_2;
      }
    }
    else
    {
      v6 = -1073741670;
    }
LABEL_5:
    v8 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1[16] + 40);
    if ( v8 )
    {
      ExFreeCacheAwareRundownProtection(v8);
      *(_QWORD *)(a1[16] + 40) = 0LL;
    }
    if ( Pool )
    {
      if ( *Pool )
        PoFxUnregisterDevice(*Pool);
      ExFreePoolWithTag(Pool, 0x4F506152u);
    }
    if ( v6 == -1073741738 )
      return (unsigned int)v6;
    goto LABEL_12;
  }
  v14 = *(_QWORD *)(v13 + 8);
  v15 = *(_DWORD *)(a2 + 12);
  if ( v15 != *(_DWORD *)(v14 + 20) )
  {
    *(_DWORD *)(v14 + 20) = v15;
    NvmeNamespacePoFxSetDeviceIdleTimeout((__int64)a1, *(_DWORD *)(a2 + 12), 0);
  }
  v16 = *(_QWORD *)(a1[16] + 8);
  v17 = *(_DWORD *)(v16 + 32);
  if ( (((unsigned __int8)v17 ^ *(_BYTE *)(a2 + 8)) & 1) != 0 )
    *(_DWORD *)(v16 + 32) = v17 ^ (v17 ^ *(_DWORD *)(a2 + 8)) & 1;
  NvmeNamespaceReleasePoFx((__int64)a1);
  return 0LL;
}
