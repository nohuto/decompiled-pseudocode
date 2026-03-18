/*
 * XREFs of ACPIInitStartDevice @ 0x140044BF4
 * Callers:
 *     ACPIEcStartDevice @ 0x14005FAE0 (ACPIEcStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x14009B960 (ACPIBusIrpStartDevice.c)
 *     ACPICMButtonStart @ 0x14009C064 (ACPICMButtonStart.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x14009EAB0 (ACPIInternalDeviceClockIrpStartDevice.c)
 *     ACPIProcessorContainerStartDevice @ 0x1400A2E80 (ACPIProcessorContainerStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1400BC6E0 (ACPIFilterIrpStartDevice.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_dqss @ 0x140033790 (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x14004541C (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x140045528 (ACPIThermalAcquireCoolingInterfaces.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     PnpCmResourcesToBiosResources @ 0x1400A5714 (PnpCmResourcesToBiosResources.c)
 */

__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  int v5; // edi
  int v6; // r14d
  __int64 DeviceExtension; // rax
  __int64 *v9; // r12
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 *v12; // r13
  _DWORD *v13; // r14
  _DWORD *v14; // rsi
  const char *v15; // rdi
  unsigned int v16; // edx
  __int64 i; // rcx
  size_t v18; // r15
  void *Pool2; // rax
  void *v20; // r14
  __int64 v21; // rax
  const char *v22; // rdx
  const char *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rax
  const char *v26; // rdx
  const char *v27; // rcx
  __int64 *v28; // rax
  int v29; // esi
  __int64 v30; // rcx
  const char *v31; // rax
  unsigned int v32; // esi
  void *v33; // rax
  void *v34; // r14
  __int64 v35; // rcx
  const char *v36; // rax
  char v37; // si
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rcx
  const char *v41; // rax
  __int64 v42; // rcx
  const char *v43; // rax
  KIRQL v44; // al
  void *v45; // rcx
  KIRQL v46; // di
  void *v47; // rcx
  __int64 v48; // rax
  const char *v49; // rcx
  __int64 v50; // rcx
  const char *v51; // rax
  unsigned int v53; // ebx
  size_t v54; // [rsp+50h] [rbp-30h]
  __int128 v55; // [rsp+58h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+68h] [rbp-18h]
  void *v57; // [rsp+78h] [rbp-8h]
  _DWORD *Src; // [rsp+C8h] [rbp+48h]

  v55 = 0LL;
  v57 = 0LL;
  v5 = a4;
  *(_OWORD *)Size = 0LL;
  v6 = (int)a3;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = 0LL;
  v10 = 0LL;
  v11 = DeviceExtension;
  v12 = *(__int64 **)(DeviceExtension + 760);
  if ( a2 )
  {
    v13 = *(_DWORD **)(a2 + 8);
    v14 = *(_DWORD **)(a2 + 16);
    Src = v13;
    if ( v13 && *v13 == 1 )
    {
      v15 = byte_140075488;
      if ( v14 && *v14 == 1 && _bittest64((const signed __int64 *)(DeviceExtension + 1120), 0x20u) )
      {
        v16 = v14[4];
        for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
        {
          if ( LOBYTE(v14[5 * i + 5]) == 2 && (v14[5 * i + 5] & 0x200000) != 0 )
          {
            v18 = 20 * (v16 + 1);
            Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v18, 1399874369LL);
            v20 = Pool2;
            if ( Pool2 )
            {
              memmove(Pool2, v14, v18);
              v24 = *(void **)(v11 + 680);
              if ( v24 )
                ExFreePoolWithTag(v24, 0);
              *(_QWORD *)(v11 + 680) = v20;
              v13 = Src;
            }
            else
            {
              v21 = *(_QWORD *)(v11 + 8);
              v22 = byte_140075488;
              v23 = byte_140075488;
              if ( (v21 & 0x200000000000LL) != 0 )
              {
                v22 = *(const char **)(v11 + 608);
                if ( (v21 & 0x400000000000LL) != 0 )
                  v23 = *(const char **)(v11 + 616);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Lqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0x15u,
                  (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
                  v18,
                  v11,
                  v22,
                  v23);
              v13 = Src;
            }
            goto LABEL_28;
          }
        }
        v25 = *(_QWORD *)(DeviceExtension + 8);
        v26 = byte_140075488;
        v27 = byte_140075488;
        if ( (v25 & 0x200000000000LL) != 0 )
        {
          v26 = *(const char **)(v11 + 608);
          if ( (v25 & 0x400000000000LL) != 0 )
            v27 = *(const char **)(v11 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x11u,
            0x14u,
            (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
            v11,
            v26,
            v27);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFEFFFFuLL);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 1120), 0xFFFFFFFEFFFFFFFFuLL);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 1120), 0xFFFFFFFFFFEFFFFFuLL);
      }
LABEL_28:
      v9 = AMLIGetNamedChild(v12, 1397900127);
      v28 = AMLIGetNamedChild(v12, 1397904223);
      v10 = (__int64)v28;
      if ( v9 && v28 )
      {
        v29 = AMLIEvalNameSpaceObject(v9, (__int64)&v55, 0, 0LL);
        if ( v29 < 0 )
        {
          v30 = *(_QWORD *)(v11 + 8);
          v31 = byte_140075488;
          if ( (v30 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v11 + 608);
            if ( (v30 & 0x400000000000LL) != 0 )
              v31 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x17u,
              (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
              v29,
              v11,
              v15,
              v31);
          goto LABEL_82;
        }
        if ( WORD1(v55) != 3 || !LODWORD(Size[1]) || !v57 )
        {
          v48 = *(_QWORD *)(v11 + 8);
          v49 = byte_140075488;
          if ( (v48 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v11 + 608);
            if ( (v48 & 0x400000000000LL) != 0 )
              v49 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x18u,
              (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
              SBYTE2(v55),
              v11,
              v15,
              v49);
          dword_140089138 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v55, 1u);
          v29 = -1073741823;
          goto LABEL_82;
        }
        v32 = 20 * (v13[4] + 1);
        v54 = v32;
        v33 = (void *)ExAllocatePool2(256LL, v32, 1399874369LL);
        v34 = v33;
        if ( !v33 )
        {
          v35 = *(_QWORD *)(v11 + 8);
          v36 = byte_140075488;
          if ( (v35 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v11 + 608);
            if ( (v35 & 0x400000000000LL) != 0 )
              v36 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x19u,
              (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
              v32,
              v11,
              v15,
              v36);
          dword_140089138 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v55, 1u);
LABEL_46:
          v29 = -1073741670;
LABEL_82:
          a3(v11, a4, (unsigned int)v29);
          if ( v9 )
            AMLIDereferenceHandleEx((__int64)v9);
          if ( v10 )
            AMLIDereferenceHandleEx(v10);
          return (unsigned int)v29;
        }
        memmove(v33, Src, v32);
        v37 = LOBYTE(Size[1]) + 40;
        v38 = ExAllocatePool2(64LL, (unsigned int)(LODWORD(Size[1]) + 40), 1332765505LL);
        v39 = v38;
        if ( !v38 )
        {
          v40 = *(_QWORD *)(v11 + 8);
          v41 = byte_140075488;
          if ( (v40 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v11 + 608);
            if ( (v40 & 0x400000000000LL) != 0 )
              v41 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x1Au,
              (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
              v37,
              v11,
              v15,
              v41);
          dword_140089138 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v55, 1u);
          ExFreePoolWithTag(v34, 0);
          goto LABEL_46;
        }
        *(_OWORD *)v38 = v55;
        *(_OWORD *)(v38 + 16) = *(_OWORD *)Size;
        *(_QWORD *)(v38 + 32) = v38 + 40;
        memmove((void *)(v38 + 40), v57, LODWORD(Size[1]));
        dword_140089138 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)&v55, 1u);
        v29 = PnpCmResourcesToBiosResources(v11, v34, *(_QWORD *)(v39 + 32), *(unsigned int *)(v39 + 24));
        if ( v29 < 0 )
        {
          v42 = *(_QWORD *)(v11 + 8);
          v43 = byte_140075488;
          if ( (v42 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v11 + 608);
            if ( (v42 & 0x400000000000LL) != 0 )
              v43 = *(const char **)(v11 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x1Bu,
              (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
              v29,
              v11,
              v15,
              v43);
          ExFreePoolWithTag(v34, 0);
          ExFreePoolWithTag((PVOID)v39, 0);
          goto LABEL_82;
        }
        memmove(v34, Src, v54);
        v44 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v45 = *(void **)(v11 + 688);
        v46 = v44;
        if ( v45 )
          ExFreePoolWithTag(v45, 0);
        *(_QWORD *)(v11 + 688) = v39;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v46);
        v47 = *(void **)(v11 + 672);
        if ( v47 )
          ExFreePoolWithTag(v47, 0);
        *(_QWORD *)(v11 + 672) = v34;
      }
      else
      {
        v50 = *(_QWORD *)(v11 + 8);
        v51 = byte_140075488;
        if ( (v50 & 0x200000000000LL) != 0 )
        {
          v15 = *(const char **)(v11 + 608);
          if ( (v50 & 0x400000000000LL) != 0 )
            v51 = *(const char **)(v11 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x16u,
            (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
            v11,
            v15,
            v51);
      }
      v5 = a4;
    }
    v6 = (int)a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v11);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (*(_DWORD *)(v11 + 1120) & 0xC0000LL) == 0xC0000 && *(_DWORD *)(v11 + 384) == 1 )
  {
    v29 = 0;
    goto LABEL_82;
  }
  v53 = ACPIDeviceInternalDeviceRequest(v11, 1, v6, v5, 4);
  if ( v53 == -1073741802 )
    v53 = 259;
  if ( v9 )
    AMLIDereferenceHandleEx((__int64)v9);
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
  return v53;
}
