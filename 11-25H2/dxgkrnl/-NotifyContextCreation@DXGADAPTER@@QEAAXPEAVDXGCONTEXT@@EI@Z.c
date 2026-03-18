/*
 * XREFs of ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1400419DC
 * Callers:
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140335B54 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403367F0 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1403C6298 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1403C6678 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1400310E0 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003124C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x14003130C (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14003EB70 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGADAPTER::NotifyContextCreation(DXGADAPTER *this, struct DXGCONTEXT *a2, char a3, int a4)
{
  unsigned int i; // esi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // edx
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 **v22; // rcx
  char *v23; // rbx
  signed __int32 v24; // eax
  _BYTE v25[8]; // [rsp+20h] [rbp-48h] BYREF
  char *v26; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  char v28; // [rsp+48h] [rbp-20h]

  if ( *((_DWORD *)a2 + 36) != 2 && (*((_DWORD *)a2 + 98) & 8) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 842); ++i )
    {
      v9 = *((_QWORD *)this + 403) + 520LL * i;
      if ( !*(_DWORD *)(v9 + 208)
        && (a4 == *(_DWORD *)(v9 + 212) && *((_DWORD *)a2 + 97) == *(unsigned __int16 *)(v9 + 6) || *(_BYTE *)(v9 + 358)) )
      {
        v28 = 0;
        v26 = (char *)this + 3688;
        DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v25);
        v10 = *(_DWORD *)(v9 + 416);
        if ( a3 )
        {
          v11 = v10 + 1;
          *(_DWORD *)(v9 + 416) = v11;
          if ( v11 == 1 )
          {
            v12 = *(_DWORD *)(v9 + 4);
            *(_DWORD *)(v9 + 384) = 0;
            DXGADAPTER::SetPowerComponentLatencyCB(this, v12, **((_QWORD **)this + 439));
            if ( *(int *)(v9 + 388) > 0 )
            {
              v13 = MEMORY[0xFFFFF78000000320];
              *(_QWORD *)(v9 + 392) = MEMORY[0xFFFFF78000000320];
              *(_QWORD *)(v9 + 392) = v13 + *(_QWORD *)(*((_QWORD *)this + 439) + 8LL);
              v14 = (_QWORD *)(v9 + 400);
              if ( !*v14 )
              {
                v15 = (_QWORD *)((char *)this + 3672);
                v16 = *((_QWORD *)this + 459);
                if ( *(DXGADAPTER **)(v16 + 8) != (DXGADAPTER *)((char *)this + 3672) )
                  __fastfail(3u);
                *v14 = v16;
                v14[1] = v15;
                *(_QWORD *)(v16 + 8) = v14;
                *v15 = v14;
              }
              if ( !*((_BYTE *)this + 3660) )
              {
                v17 = *((_QWORD *)this + 391);
                *((_BYTE *)this + 3660) = 1;
                VIDMM_EXPORT::VidMmFreeFenceStorageSlot(
                  *(VIDMM_EXPORT **)(v17 + 736),
                  *(struct VIDMM_MONITORED_FENCE_STORAGE **)(v17 + 744),
                  1);
              }
            }
          }
        }
        else
        {
          v18 = v10 - 1;
          *(_DWORD *)(v9 + 416) = v18;
          if ( !v18 )
          {
            v19 = *(_DWORD *)(v9 + 4);
            *(_DWORD *)(v9 + 384) = 2;
            DXGADAPTER::SetPowerComponentLatencyCB(this, v19, *(_QWORD *)(*((_QWORD *)this + 439) + 32LL));
            v20 = (__int64 *)(v9 + 400);
            v21 = *v20;
            if ( *v20 )
            {
              if ( *(__int64 **)(v21 + 8) != v20 || (v22 = (__int64 **)v20[1], *v22 != v20) )
                __fastfail(3u);
              *v22 = (__int64 *)v21;
              *(_QWORD *)(v21 + 8) = v22;
              *v20 = 0LL;
            }
          }
        }
        if ( v28 )
        {
          v23 = v26;
          v28 = 0;
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          *((_QWORD *)v23 + 1) = 0LL;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
    }
    if ( a3 )
      v24 = _InterlockedIncrement((volatile signed __int32 *)this + 845);
    else
      v24 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 845, 0xFFFFFFFF);
    if ( v24 == 1 )
    {
      if ( *((_QWORD *)this + 404) )
        DXGADAPTER::UpdateLatencyTolerances(this);
    }
  }
}
