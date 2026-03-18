/*
 * XREFs of HMFreeObject @ 0x1C004F310
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0012434 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     HMDestroyObject @ 0x1C0064C30 (HMDestroyObject.c)
 *     DestroyMonitor @ 0x1C00A04C0 (DestroyMonitor.c)
 *     DestroyKL @ 0x1C00BFE78 (DestroyKL.c)
 *     DestroyKF @ 0x1C00BFF3C (DestroyKF.c)
 *     UserCreateBaseWindowHandle @ 0x1C014F150 (UserCreateBaseWindowHandle.c)
 * Callees:
 *     UnlockObjectAssignment @ 0x1C0038710 (UnlockObjectAssignment.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C004F94C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C004FDA8 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C00C3D50 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00DFA8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     HMCleanupGrantedHandle @ 0x1C012C928 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMFreeObject(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r14
  char *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int16 v15; // bp
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char EtwUserHandleType; // r12
  void **v21; // rcx
  char v22; // al
  __int16 v23; // ax
  __int64 v24; // rbx
  PVOID *v26; // r15
  unsigned int *v27; // r8
  PVOID *v28; // rcx
  void *v29; // r8
  void *v30; // rdx
  __int64 v31; // r8
  _DWORD *v32; // rax
  int v33; // r8d
  void *v34; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  v6 = 0LL;
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v8, v7, v9, v10)
     || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  v11 = gpKernelHandleTable;
  v12 = (char *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*a1;
  v13 = 3LL * (unsigned __int16)*a1;
  v14 = (unsigned __int8)v12[24];
  v15 = *((_WORD *)&unk_1C024292C + 12 * v14);
  if ( a1[2] )
  {
    if ( (unsigned int)v14 > 0xC )
    {
      if ( (unsigned int)v14 > 0x12 )
      {
        if ( (_DWORD)v14 == 19 )
        {
          v31 = 1863LL;
        }
        else
        {
          if ( (_DWORD)v14 != 22 )
            goto LABEL_57;
          v31 = 1872LL;
        }
      }
      else
      {
        if ( (_DWORD)v14 != 13 )
          goto LABEL_57;
        v31 = 1854LL;
      }
      LODWORD(v34) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v31);
    }
    else if ( (unsigned int)v14 > 5 || (_BYTE)v14 )
    {
LABEL_57:
      KeBugCheckEx(0x164u, 0x1CuLL, (ULONG_PTR)a1, a1[2], (unsigned __int8)v12[24]);
    }
    if ( !v12[24] )
      KeBugCheckEx(0x164u, 0x1BuLL, (ULONG_PTR)a1, 0LL, 0LL);
  }
  if ( v11[v13 + 2] )
  {
    LODWORD(v34) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1915LL);
  }
  if ( (v15 & 2) != 0 )
  {
    v16 = v11[v13 + 1];
  }
  else
  {
    if ( (v15 & 1) == 0 )
    {
      v16 = 0LL;
      goto LABEL_10;
    }
    v16 = *(_QWORD *)(v11[v13 + 1] + 424LL);
  }
  if ( v16 )
    --*(_DWORD *)(v16 + 68);
LABEL_10:
  --giheCount;
  if ( v16 )
    v4 = (unsigned __int8)PsGetProcessId(*(PEPROCESS *)v16) & 0xFC;
  LOBYTE(v16) = v12[24];
  EtwUserHandleType = GetEtwUserHandleType(v16);
  v21 = (void **)v11[v13];
  v34 = *v21;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    v32 = (_DWORD *)SGDGetUserSessionState(v21, v17, v18, v19);
    McTemplateK0pqqq_EtwWriteTransfer(
      *v32,
      (unsigned int)&UserDestroyHandle,
      v33,
      (_DWORD)v34,
      EtwUserHandleType,
      *v32,
      v4);
  }
  if ( (v12[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(*(_QWORD *)v11[v13]);
    v12[25] &= ~0x20u;
  }
  if ( (v15 & 0x10) == 0 )
  {
    if ( (v15 & 0x40) != 0 )
    {
      v29 = (void *)*((_QWORD *)a1 + 5);
      if ( v29 )
      {
        RtlFreeHeap(gpvSharedAlloc, 0, v29);
        HMFreeUserOrIsolatedType(v15, v12[24], a1);
      }
      else
      {
        RtlFreeHeap(gpvSharedAlloc, 0, a1);
      }
      goto LABEL_24;
    }
    v22 = v12[24];
    if ( v22 == 19 )
    {
      v28 = *(PVOID **)(v11[v13] + 32LL);
    }
    else
    {
      if ( v22 != 22 )
      {
        if ( (v15 & 0x100) != 0 )
        {
          v34 = (void *)*((_QWORD *)a1 + 3);
          UnlockObjectAssignment(&v34);
        }
        if ( (v15 & 0x200) != 0 )
          HMFreeIsolatedType(v12[24], a1);
        else
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
        goto LABEL_24;
      }
      v6 = *(_QWORD *)(v11[v13] + 16LL);
      v28 = *(PVOID **)(v6 + 32);
    }
LABEL_41:
    ObfDereferenceObject(v28);
    goto LABEL_24;
  }
  v26 = (PVOID *)*((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 3) = 0LL;
  if ( (v12[25] & 0x40) != 0 )
  {
    v30 = (void *)*((_QWORD *)a1 + 5);
    if ( v30 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v30);
    HMFreeUserOrIsolatedType(v15, v12[24], a1);
  }
  else
  {
    v27 = (unsigned int *)*((_QWORD *)a1 + 5);
    if ( !v27 || v27 == a1 )
    {
      RtlFreeHeap(v26[17], 0, a1);
    }
    else
    {
      RtlFreeHeap(v26[17], 0, v27);
      if ( (v15 & 0x200) != 0 )
        HMFreeIsolatedType(v12[24], a1);
      else
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
    }
  }
  if ( v26 )
  {
    v28 = v26;
    goto LABEL_41;
  }
LABEL_24:
  v23 = (*((_WORD *)v12 + 13) + 1) & 0x7FFF;
  if ( v23 == 0x7FFF )
    v23 = 1;
  *(_OWORD *)v12 = 0LL;
  *((_OWORD *)v12 + 1) = 0LL;
  *(_OWORD *)&v11[v13] = 0LL;
  v11[v13 + 2] = 0LL;
  *((_WORD *)v12 + 13) = v23;
  v24 = (v12 - (char *)qword_1C028FE68) >> 5;
  if ( (v24 & 1) != 0 )
  {
    v11[v13] = qword_1C028FDB0;
    qword_1C028FDB0 = v24;
  }
  else
  {
    v11[v13] = qword_1C028FDA8;
    qword_1C028FDA8 = v24;
  }
  if ( !gbInDestroyHandleTableObjects && v6 )
    HMUnlockObject(v6);
  return 1LL;
}
