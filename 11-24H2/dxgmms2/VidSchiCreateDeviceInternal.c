/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1400D3D40
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1400D380C (VidSchCreateSystemDevices.c)
 *     VidSchCreateDevice @ 0x1400D3CC0 (VidSchCreateDevice.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiInterlockedInsertTailList @ 0x140023690 (VidSchiInterlockedInsertTailList.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140023720 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1400358FC (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     VidSchiIncrementDeviceReference @ 0x14003E538 (VidSchiIncrementDeviceReference.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004A348 (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x14004B440 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     VidSchiReadDeviceConfiguration @ 0x1400D4150 (VidSchiReadDeviceConfiguration.c)
 *     VidSchSetQueuedPresentLimit @ 0x1400D4210 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1400D42D8 (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchTerminateDevice @ 0x1400D48E0 (VidSchTerminateDevice.c)
 *     VidSchControlVSyncDevice @ 0x1400D4B10 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchiCreateDeviceInternal(KSPIN_LOCK *a1, __int128 *a2, __int64 a3, __int64 *a4)
{
  struct DXGPROCESS *Current; // r15
  __int64 Pool2; // rax
  __int64 v10; // rbx
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  int v15; // eax
  int v16; // esi
  __int64 v17; // r8
  __int64 result; // rax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  unsigned int i; // edi
  int v23; // eax
  unsigned int v24; // edx
  void *KmdProcessHandle; // rax
  ADAPTER_RENDER *v26; // rcx
  bool v27; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v29; // rcx
  _DXGKARG_CREATEDEVICE v30; // [rsp+70h] [rbp-48h] BYREF

  *a4 = 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      WdLogSingleEntry0(3LL);
      result = 3221225485LL;
      WdLogGlobalForLineNumber = 3647;
      return result;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  Pool2 = ExAllocatePool2(64LL, 1976LL, 862021974LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 862021974;
    *(_QWORD *)(Pool2 + 8) = a3;
    ExInitializeResourceLite((PERESOURCE)(Pool2 + 1224));
    v11 = *a2;
    *(_DWORD *)(v10 + 504) = -1;
    v12 = *((_QWORD *)a2 + 2);
    *(_OWORD *)(v10 + 48) = v11;
    *(_QWORD *)(v10 + 32) = a1;
    *(_QWORD *)(v10 + 64) = v12;
    VidSchiReadDeviceConfiguration(v10);
    *(_QWORD *)(v10 + 80) = v10 + 72;
    *(_QWORD *)(v10 + 72) = v10 + 72;
    *(_QWORD *)(v10 + 96) = v10 + 88;
    *(_QWORD *)(v10 + 88) = v10 + 88;
    *(_QWORD *)(v10 + 1872) = v10 + 1864;
    *(_QWORD *)(v10 + 1864) = v10 + 1864;
    *(_QWORD *)(v10 + 128) = v10 + 120;
    *(_QWORD *)(v10 + 120) = v10 + 120;
    *(_QWORD *)(v10 + 144) = v10 + 136;
    *(_QWORD *)(v10 + 136) = v10 + 136;
    *(_QWORD *)(v10 + 160) = v10 + 152;
    *(_QWORD *)(v10 + 152) = v10 + 152;
    *(_QWORD *)(v10 + 176) = v10 + 168;
    *(_QWORD *)(v10 + 168) = v10 + 168;
    *(_QWORD *)(v10 + 1968) = 0LL;
    VidSchSetQueuedPresentLimit(v10, 0LL);
    memset64((void *)(v10 + 376), 1uLL, 0x10uLL);
    VidSchiIncrementDeviceReference(v10);
    VidSchiInterlockedInsertTailList(a1 + 248, (__int64)(a1 + 44), (_QWORD *)(v10 + 104), 0LL);
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      v13 = g_pVidSchSystemProcess;
    }
    else
    {
      v13 = *((_QWORD *)Current + 8);
      if ( v13 )
        v13 = *(_QWORD *)(v13 + 24);
    }
    v14 = *((unsigned int *)a1 + 1);
    *(_QWORD *)(v10 + 40) = v13;
    v15 = *(_DWORD *)(*(_QWORD *)(v13 + 2624) + 4 * (v14 >> 5));
    if ( _bittest(&v15, v14 & 0x1F) )
    {
      v16 = -1073741790;
      goto LABEL_9;
    }
    v16 = VidSchiOpenProcessAdapterInfo((struct _VIDSCH_PROCESS *)v13, (struct _VIDSCH_GLOBAL *)a1);
    if ( v16 < 0 )
    {
LABEL_9:
      VidSchTerminateDevice(v10);
      return (unsigned int)v16;
    }
    v19 = *(_DWORD *)a2;
    *(_BYTE *)(v10 + 240) = 1;
    if ( (v19 & 1) != 0 )
    {
      v24 = *((_DWORD *)a1 + 1);
      memset(&v30, 0, 24);
      v30.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 1;
      KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(Current, v24);
      v26 = (ADAPTER_RENDER *)a1[1];
      v30.hKmdProcess = KmdProcessHandle;
      v16 = ADAPTER_RENDER::DdiCreateDevice(v26, &v30);
      if ( v16 < 0 )
        goto LABEL_9;
      v27 = bTracingEnabled == 0;
      *(_QWORD *)(v10 + 16) = v30.hDevice;
      if ( !v27 )
      {
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (byte_140081241 & 8) != 0 )
          McTemplateK0ppqpttqpqp_EtwWriteTransfer(v29, &EventCreateDevice, v17, CurrentProcessId, a1[2]);
      }
    }
    else
    {
      *(_QWORD *)(v10 + 16) = *(_QWORD *)(a3 + 616);
    }
    if ( (*(_DWORD *)(v10 + 48) & 2) != 0 )
    {
      if ( *((_BYTE *)a1 + 2468) )
      {
        for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
        {
          if ( *(_DWORD *)(a1[i + 429] + 4) )
          {
            LOBYTE(v17) = 1;
            v23 = VidSchControlVSyncDevice(v10, 2LL, v17, i);
            v16 = v23;
            if ( v23 < 0 )
            {
              WdLogSingleEntry1(1LL, v23);
              WdLogGlobalForLineNumber = 3854;
              goto LABEL_27;
            }
          }
        }
      }
      else
      {
        LOBYTE(v17) = 1;
        v20 = VidSchControlVSyncDevice(v10, 2LL, v17, 4294967293LL);
        v16 = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry1(1LL, v20);
          WdLogGlobalForLineNumber = 3841;
LABEL_27:
          DxgkLogInternalTriageEvent(v21, 0x40000LL);
          goto LABEL_9;
        }
      }
    }
    *a4 = v10;
    return (unsigned int)v16;
  }
  WdLogSingleEntry0(3LL);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 3666;
  return result;
}
