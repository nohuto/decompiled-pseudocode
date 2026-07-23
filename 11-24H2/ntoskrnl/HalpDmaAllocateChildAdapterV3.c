/*
 * XREFs of HalpDmaAllocateChildAdapterV3 @ 0x1406FA900
 * Callers:
 *     HalGetAdapterV3 @ 0x1406FDCF8 (HalGetAdapterV3.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectByPointer @ 0x140424A50 (ObReferenceObjectByPointer.c)
 *     HalpIommuCheckExceptionList @ 0x1404BF1E4 (HalpIommuCheckExceptionList.c)
 *     HalpDmaIsThinDmarCapable @ 0x1404CBF74 (HalpDmaIsThinDmarCapable.c)
 *     HalJoinDmaDomain @ 0x1404D20F0 (HalJoinDmaDomain.c)
 *     HalpIommuGetSecurityPolicy @ 0x1404F8380 (HalpIommuGetSecurityPolicy.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x140539DA0 (HalpDmaFindAdapterByDeviceId.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x140539F14 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpDmaGetIommuInterface @ 0x140539F74 (HalpDmaGetIommuInterface.c)
 *     HalpDmaIsThinDmaCapable @ 0x14054F080 (HalpDmaIsThinDmaCapable.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FD3A4 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FD694 (HalpDmaAllocateLocalScatterPool.c)
 *     IidCloneDeviceId @ 0x140817818 (IidCloneDeviceId.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 */

__int64 __fastcall HalpDmaAllocateChildAdapterV3(
        unsigned int a1,
        int a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        char a12,
        _DWORD *a13)
{
  int SecurityPolicy; // eax
  size_t v14; // rbx
  unsigned int v15; // r13d
  int v16; // edi
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rax
  int LocalScatterPool; // eax
  int v21; // ecx
  BOOL DefaultRemappingDomainPolicy; // eax
  __int64 v23; // r13
  int v24; // r15d
  int v25; // edi
  int IsEnabledDeviceUsageNoInline; // eax
  int v27; // edi
  char v29; // [rsp+58h] [rbp-B0h]
  int v30; // [rsp+5Ch] [rbp-ACh]
  int v31; // [rsp+68h] [rbp-A0h]
  _QWORD Object[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v33; // [rsp+88h] [rbp-80h]
  _QWORD *v34; // [rsp+98h] [rbp-70h]
  HANDLE Handle; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v36[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-28h]

  v36[0] = 48LL;
  Handle = 0LL;
  v36[3] = 528LL;
  v29 = 0;
  *(_OWORD *)&Object[1] = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  memset_0(&v38, 0, 0x50uLL);
  v31 = 2;
  SecurityPolicy = HalpIommuGetSecurityPolicy();
  v14 = 648LL;
  v30 = SecurityPolicy;
  v15 = 0;
  v36[1] = 0LL;
  v37 = 0LL;
  v36[2] = 0LL;
  if ( !a5 )
  {
    v15 = 24 * (a8 + 1);
    v14 = v15 + 648LL;
  }
  v16 = a10;
  if ( !a11 && a10 )
  {
    if ( a10 == 2 )
    {
      v16 = 0;
    }
    else if ( SecurityPolicy == 1 )
    {
      return 0LL;
    }
  }
  if ( v16 && a11 )
  {
    if ( (int)HalpDmaGetIommuInterface(a11, &v38) < 0 )
    {
      if ( v16 == 2 )
      {
        v16 = 0;
      }
      else if ( v30 == 1 )
      {
        return 0LL;
      }
    }
    else
    {
      v29 = 1;
      guard_dispatch_icall_no_overrides(v39, 0LL);
      if ( v16 == 2 )
      {
        v16 = 0;
      }
      else if ( v30 == 1 )
      {
LABEL_29:
        guard_dispatch_icall_no_overrides(v39, v17);
        return 0LL;
      }
    }
  }
  if ( (int)ObCreateObjectEx(0, (_DWORD)HalpDmaAdapterObjectType, (unsigned int)v36, 0) >= 0 )
  {
    memset_0(0LL, 0, v14);
    if ( ObReferenceObjectByPointer(0LL, 0x20000u, HalpDmaAdapterObjectType, 0) >= 0
      && (int)ObInsertObjectEx(0LL, 0, 0LL, (__int64)&Handle) >= 0 )
    {
      ZwClose(Handle);
      MEMORY[0x80] = 0LL;
      MEMORY[0x88] = 0LL;
      v18 = &MasterAdapter24V3;
      MEMORY[8] = &HalpDmaOperationsV3;
      MEMORY[0x99] = a6;
      if ( a3 >= 0x20 )
        v18 = &MasterAdapterV3;
      MEMORY[0] = 42467329;
      MEMORY[0x10] = 1634550856;
      MEMORY[0x98] = 0;
      MEMORY[0xA0] = v18;
      if ( a3 < 0x40 )
        v19 = (1LL << a3) - 1;
      else
        v19 = -1LL;
      MEMORY[0x90] = v19;
      if ( v19 < v18[18] )
        goto LABEL_27;
      MEMORY[0x140] = 0LL;
      MEMORY[0x15A] = 0;
      MEMORY[0xC8] = 192LL;
      MEMORY[0xC0] = 192LL;
      MEMORY[0xB8] = 0LL;
      MEMORY[0xE0] = 0;
      MEMORY[0xE8] = a1;
      MEMORY[0x1BA] = a4;
      MEMORY[0x1BD] = a7;
      MEMORY[0x1C8] = a9;
      MEMORY[0x1B9] = a5;
      MEMORY[0x180] = -1;
      MEMORY[0x1C0] = a3;
      MEMORY[0x274] = v15;
      MEMORY[0x9C] = 3;
      MEMORY[0x270] = 0;
      MEMORY[0x238] = 0LL;
      MEMORY[0x248] = 576LL;
      MEMORY[0x240] = 576LL;
      MEMORY[0x250] = 0;
      MEMORY[0x268] = 0;
      MEMORY[0x1E0] = 0LL;
      MEMORY[0x1F0] = IoFreeAdapterChannelV3Passive;
      MEMORY[0x1F8] = 0LL;
      if ( a1 )
      {
        if ( a4 )
          LocalScatterPool = HalpDmaAllocateLocalScatterPool(0LL, a1, a3, 1LL);
        else
          LocalScatterPool = HalpDmaAllocateLocalContiguousPool(0LL, a1, a3, 1LL);
        if ( LocalScatterPool < 0 )
        {
LABEL_27:
          ObfDereferenceObject(0LL);
          goto LABEL_28;
        }
        v21 = MEMORY[0xE8];
        MEMORY[0x159] = 0;
      }
      else
      {
        MEMORY[0xE8] = 0;
        v21 = 0;
        MEMORY[0x159] = 1;
      }
      *a13 = v21;
      MEMORY[0xFC] = a2;
      MEMORY[0x208] = 0;
      MEMORY[0x210] = a11;
      if ( !v16 || !MEMORY[0x218] || HalpIommuCheckExceptionList(MEMORY[0x218]) )
        goto LABEL_60;
      if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
      {
        DefaultRemappingDomainPolicy = HalpDmaGetDefaultRemappingDomainPolicy(MEMORY[0x218]);
        v23 = a11;
        v31 = DefaultRemappingDomainPolicy;
        if ( a11 && DefaultRemappingDomainPolicy )
        {
          v33 = 3uLL;
          Object[2] = &Object[1];
          Object[1] = &Object[1];
          v34 = &Object[1];
        }
        v24 = v16;
      }
      else
      {
        v23 = a11;
        v24 = v16;
        if ( a11 && HalpDmaEnableNestedTranslation )
        {
          v33 = 3uLL;
          Object[2] = &Object[1];
          Object[1] = &Object[1];
          v34 = &Object[1];
        }
      }
      v25 = guard_dispatch_icall_no_overrides(MEMORY[0x210], v34);
      IsEnabledDeviceUsageNoInline = Feature_Test57481295__private_IsEnabledDeviceUsageNoInline();
      if ( v25 < 0 )
      {
        if ( !v23 )
          goto LABEL_56;
        if ( IsEnabledDeviceUsageNoInline )
        {
          if ( v31 != 1 )
            goto LABEL_56;
        }
        else if ( !HalpDmaEnableNestedTranslation )
        {
          goto LABEL_56;
        }
        if ( (int)guard_dispatch_icall_no_overrides(MEMORY[0x210], 0LL) < 0 )
        {
LABEL_56:
          if ( v24 != 2 )
          {
            v27 = v30;
            if ( v30 == 1 )
              goto LABEL_67;
            goto LABEL_61;
          }
LABEL_60:
          v27 = v30;
LABEL_61:
          MEMORY[0x200] = 0LL;
          if ( (int)HalJoinDmaDomain(0LL, (__int64 *)0xFFFFFFFFFFFFFFFFLL) >= 0 )
          {
LABEL_68:
            *(_QWORD *)(MEMORY[0x200] + 56LL) = 0LL;
            goto LABEL_28;
          }
          if ( MEMORY[0x208] )
          {
            if ( MEMORY[0x208] == 2 )
            {
              MEMORY[0x208] = 0;
              goto LABEL_66;
            }
            if ( v27 != 1 )
            {
LABEL_66:
              MEMORY[0x208] = 0;
              if ( (int)HalJoinDmaDomain(0LL, (__int64 *)0xFFFFFFFFFFFFFFFFLL) < 0 )
                goto LABEL_67;
              goto LABEL_68;
            }
          }
LABEL_67:
          ObfDereferenceObject(0LL);
          goto LABEL_28;
        }
      }
      MEMORY[0x208] = v24;
      goto LABEL_60;
    }
  }
LABEL_28:
  if ( v29 )
    goto LABEL_29;
  return 0LL;
}
