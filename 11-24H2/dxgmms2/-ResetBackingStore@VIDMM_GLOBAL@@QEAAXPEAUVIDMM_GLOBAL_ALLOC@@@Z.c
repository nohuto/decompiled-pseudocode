/*
 * XREFs of ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C3430
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B1DE0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D7700 (-ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400ECFEC (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400FE1B0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pqtt_EtwWriteTransfer @ 0x14003F2D4 (McTemplateK0pqtt_EtwWriteTransfer.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004C558 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z @ 0x1400BFB9C (-VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1400F8430 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ResetBackingStore(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r8
  __int64 v4; // r13
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r14d
  unsigned __int8 v10; // r15
  void *v11; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-49h]
  __int64 v22; // [rsp+28h] [rbp-41h]
  __int64 v23; // [rsp+30h] [rbp-39h]
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+50h] [rbp-19h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-9h] BYREF

  v2 = *((_QWORD *)a2 + 6);
  v4 = *(_QWORD *)a2;
  if ( v2 )
  {
    if ( (*((_BYTE *)a2 + 36) & 1) != 0 )
    {
      *((_DWORD *)a2 + 6) |= 0x8000000u;
      return;
    }
    if ( (*((_DWORD *)a2 + 7) & 0x40000) != 0
      && ((v6 = *(_QWORD *)(v4 + 64)) != 0
       && (*(_DWORD *)(v6 + 104) & 0x1001) == 0
       && (unsigned int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL)
                                                                          + 8LL
                                                                          * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                            + 240LL))
                                                              + 152LL))
       || *(_WORD *)(*((_QWORD *)a2 + 49) + 8LL) == 3) )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v2 + 8), &ApcState);
      v7 = *((_QWORD *)a2 + 49);
      v8 = 4LL;
      v9 = 4;
      if ( *(_WORD *)(v7 + 8) == 3 )
      {
        if ( *((_DWORD *)a2 + 78) == 1 )
        {
          v9 = 3;
        }
        else if ( *((_DWORD *)a2 + 78) == 3 )
        {
          v9 = 5;
        }
      }
      else if ( !*(_QWORD *)(v4 + 64)
             || !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 8LL) + 16LL)
                                       + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                           + 164LL) )
      {
        v10 = 0;
        v9 = 4;
LABEL_18:
        if ( (*(_DWORD *)v7 & 0x20000000) != 0 )
        {
          if ( (*((_DWORD *)a2 + 7) & 0x80u) != 0 )
          {
            v11 = *(void **)(*((_QWORD *)a2 + 6) + 16LL);
            NumberOfBytesToUnlock = *(_QWORD *)(v4 + 16);
            BaseAddress = v11;
            VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
            v13 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, ULONG_PTR *, int, int))VirtualMemoryInterface)(
                    -1LL,
                    &BaseAddress,
                    0LL,
                    &NumberOfBytesToUnlock,
                    0x80000,
                    4);
            v14 = v13;
            if ( v13 >= 0 )
            {
              VidMmiSetPriorityForMemoryPages((__int64)BaseAddress, NumberOfBytesToUnlock, v9);
              if ( v10 )
                ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
            }
            else
            {
              WdLogSingleEntry1(2LL, v13);
              WdLogGlobalForLineNumber = 7092;
            }
            goto LABEL_30;
          }
          v14 = -1073741823;
        }
        else
        {
          LOBYTE(v8) = v10;
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)a2 + 30) + 112LL))(
                  *((_QWORD *)a2 + 30),
                  *((_QWORD *)a2 + 31),
                  v9,
                  v8);
          v14 = v15;
          if ( v15 >= 0 )
          {
LABEL_30:
            IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
            v20 = *(_QWORD *)(v4 + 16);
            if ( IsEnabledDeviceUsageNoInline )
            {
              _InterlockedIncrement((volatile signed __int32 *)this + 1834);
              _InterlockedAdd64((volatile signed __int64 *)this + 918, v20);
            }
            else
            {
              ++*((_DWORD *)this + 1834);
              *((_QWORD *)this + 918) += v20;
            }
            if ( (byte_140081241 & 1) != 0 )
            {
              LODWORD(v23) = v14 >= 0;
              LODWORD(v22) = v10;
              LODWORD(v21) = *(_QWORD *)(v4 + 16) >> 12;
              McTemplateK0pqtt_EtwWriteTransfer(*(_QWORD *)(v4 + 16) >> 12, v14 >= 0, v19, a2, v21, v22, v23);
            }
            KeUnstackDetachProcess(&ApcState);
            if ( v14 >= 0 )
              *((_DWORD *)a2 + 8) |= 8u;
            return;
          }
          if ( v15 != -1071775472 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7133;
            DxgkLogInternalTriageEvent(v16, 0x40000LL);
          }
          _InterlockedIncrement(&dword_140081708);
          WdLogSingleEntry0(6LL);
          HIDWORD(v23) = 0;
          HIDWORD(v22) = 0;
          WdLogGlobalForLineNumber = 7137;
          HIDWORD(v21) = 0;
          DxgkLogInternalTriageEvent(v17, 262145LL);
        }
        *((_DWORD *)a2 + 6) |= 0x8000000u;
        goto LABEL_30;
      }
      v10 = 1;
      goto LABEL_18;
    }
  }
}
