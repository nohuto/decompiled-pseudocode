/*
 * XREFs of HalpDmaAllocateChildAdapterV3 @ 0x1406FCCC0
 * Callers:
 *     HalGetAdapterV3 @ 0x1407000B8 (HalGetAdapterV3.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObReferenceObjectByPointer @ 0x140432520 (ObReferenceObjectByPointer.c)
 *     HalpIommuCheckExceptionList @ 0x1404C3CB4 (HalpIommuCheckExceptionList.c)
 *     HalpDmaIsThinDmarCapable @ 0x1404D2DB4 (HalpDmaIsThinDmarCapable.c)
 *     HalJoinDmaDomain @ 0x1404D8CA0 (HalJoinDmaDomain.c)
 *     HalpIommuGetSecurityPolicy @ 0x1404FAAA0 (HalpIommuGetSecurityPolicy.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x14053C514 (HalpDmaFindAdapterByDeviceId.c)
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x14053C688 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     HalpDmaGetIommuInterface @ 0x14053C6E8 (HalpDmaGetIommuInterface.c)
 *     HalpDmaIsThinDmaCapable @ 0x140551740 (HalpDmaIsThinDmaCapable.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FF764 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FFA54 (HalpDmaAllocateLocalScatterPool.c)
 *     IidCloneDeviceId @ 0x1408170D8 (IidCloneDeviceId.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 */

__int64 *__fastcall HalpDmaAllocateChildAdapterV3(
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
  unsigned __int64 *v13; // r14
  char v14; // r15
  __int64 *v15; // rsi
  int SecurityPolicy; // eax
  __int64 v17; // rbx
  unsigned int v18; // r13d
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  size_t v23; // rbx
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rax
  int LocalScatterPool; // eax
  int v29; // ecx
  __int64 *v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  char v33; // r12
  __int64 v34; // r9
  BOOL DefaultRemappingDomainPolicy; // eax
  __int64 v36; // r13
  int v37; // r15d
  unsigned __int64 *AdapterByDeviceId; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 *v41; // rsi
  _QWORD *v42; // rax
  _QWORD *v43; // r15
  int v44; // edi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v46; // r9
  int v47; // edi
  int v48; // eax
  char v49; // cl
  char v51; // [rsp+58h] [rbp-B0h]
  int v52; // [rsp+5Ch] [rbp-ACh]
  __int64 v53; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-A0h]
  void *Object[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v56; // [rsp+88h] [rbp-80h]
  void **v57; // [rsp+98h] [rbp-70h]
  HANDLE Handle; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v59[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v60; // [rsp+C8h] [rbp-40h]
  __int64 v61; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-28h]
  char v67; // [rsp+1D0h] [rbp+C8h]

  v59[0] = 48LL;
  Handle = 0LL;
  v59[3] = 528LL;
  v67 = 0;
  v51 = 0;
  v13 = 0LL;
  v14 = 0;
  v56 = 0LL;
  v15 = 0LL;
  memset(Object, 0, sizeof(Object));
  v57 = 0LL;
  memset_0(&v61, 0, 0x50uLL);
  LODWORD(v54) = 2;
  SecurityPolicy = HalpIommuGetSecurityPolicy();
  v17 = 648LL;
  v52 = SecurityPolicy;
  v18 = 0;
  v59[1] = 0LL;
  v60 = 0LL;
  v59[2] = 0LL;
  if ( !a5 )
  {
    v18 = 3 * (a8 + 1);
    v17 = v18 * 8 + 648LL;
  }
  v19 = a10;
  if ( !a11 && a10 )
  {
    if ( a10 == 2 )
    {
      v19 = 0;
    }
    else if ( SecurityPolicy == 1 )
    {
      return v15;
    }
  }
  v53 = 0LL;
  if ( !v19 || !a11 )
  {
LABEL_20:
    v23 = v53 + v17;
    if ( (int)ObCreateObjectEx(0, (_DWORD)HalpDmaAdapterObjectType, (unsigned int)v59, 0) < 0 )
      goto LABEL_30;
    v15 = (__int64 *)Object[0];
    memset_0(Object[0], 0, v23);
    if ( ObReferenceObjectByPointer(v15, 0x20000u, HalpDmaAdapterObjectType, 0) < 0
      || (int)ObInsertObjectEx(v15, 0, 0LL, (__int64)&Handle) < 0 )
    {
      goto LABEL_30;
    }
    ZwClose(Handle);
    v15[16] = 0LL;
    v15[17] = 0LL;
    v24 = &MasterAdapter24V3;
    v15[1] = (__int64)&HalpDmaOperationsV3;
    *((_BYTE *)v15 + 153) = a6;
    if ( a3 >= 0x20 )
      v24 = &MasterAdapterV3;
    *(_DWORD *)v15 = 42467329;
    *((_DWORD *)v15 + 4) = 1634550856;
    *((_BYTE *)v15 + 152) = 0;
    v15[20] = (__int64)v24;
    if ( a3 < 0x40 )
      v25 = (1LL << a3) - 1;
    else
      v25 = -1LL;
    v15[18] = v25;
    if ( v25 < v24[18] )
    {
LABEL_29:
      ObfDereferenceObject(v15);
LABEL_30:
      v15 = 0LL;
      goto LABEL_31;
    }
    v15[40] = 0LL;
    *((_BYTE *)v15 + 346) = 0;
    v15[25] = (__int64)(v15 + 24);
    v15[24] = (__int64)(v15 + 24);
    v15[23] = 0LL;
    *((_BYTE *)v15 + 224) = 0;
    *((_DWORD *)v15 + 58) = a1;
    *((_BYTE *)v15 + 442) = a4;
    *((_BYTE *)v15 + 445) = a7;
    v15[57] = a9;
    *((_BYTE *)v15 + 441) = a5;
    *((_DWORD *)v15 + 96) = -1;
    *((_DWORD *)v15 + 112) = a3;
    *((_DWORD *)v15 + 157) = v18 * 8;
    *((_DWORD *)v15 + 39) = 3;
    *((_DWORD *)v15 + 156) = 0;
    v15[71] = 0LL;
    v15[73] = (__int64)(v15 + 72);
    v15[72] = (__int64)(v15 + 72);
    *((_BYTE *)v15 + 592) = 0;
    *((_DWORD *)v15 + 154) = 0;
    v15[60] = 0LL;
    v15[62] = (__int64)IoFreeAdapterChannelV3Passive;
    v15[63] = (__int64)v15;
    if ( a1 )
    {
      if ( a4 )
        LocalScatterPool = HalpDmaAllocateLocalScatterPool(v15, a1, a3, 1LL);
      else
        LocalScatterPool = HalpDmaAllocateLocalContiguousPool(v15, a1, a3, 1LL);
      if ( LocalScatterPool < 0 )
        goto LABEL_29;
      v29 = *((_DWORD *)v15 + 58);
      *((_BYTE *)v15 + 345) = 0;
    }
    else
    {
      *((_DWORD *)v15 + 58) = 0;
      v29 = 0;
      *((_BYTE *)v15 + 345) = 1;
    }
    *a13 = v29;
    *((_DWORD *)v15 + 63) = a2;
    *((_DWORD *)v15 + 130) = 0;
    v15[66] = a11;
    if ( v53 )
    {
      v30 = &v15[v18 + 81];
      v15[67] = (__int64)v30;
      if ( v51 )
        v31 = guard_dispatch_icall_no_overrides(v62, v53, &v15[v18 + 81], 0LL);
      else
        v31 = IidCloneDeviceId(0LL, v30);
      if ( v31 >= 0 )
      {
        AdapterByDeviceId = (unsigned __int64 *)HalpDmaFindAdapterByDeviceId(v15[67]);
        v13 = AdapterByDeviceId;
        if ( AdapterByDeviceId )
        {
          if ( AdapterByDeviceId[66] == a11 )
          {
            ObfDereferenceObject(AdapterByDeviceId);
          }
          else
          {
            v41 = AdapterByDeviceId + 40;
            v42 = KeAbPreAcquire((__int64)(AdapterByDeviceId + 40), 0LL);
            v43 = v42;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v41, 0LL) )
              ExfAcquirePushLockExclusiveEx(v41, (__int64)v42, (__int64)v41);
            if ( v43 )
              *((_BYTE *)v43 + 10) = 1;
            v15 = (__int64 *)Object[0];
            v14 = 1;
            v67 = 1;
          }
        }
        if ( !v19 || !(unsigned __int8)guard_dispatch_icall_no_overrides(v15[67], 0LL, v39, v40) )
          goto LABEL_83;
        goto LABEL_51;
      }
      v15[67] = 0LL;
      if ( v19 == 2 )
        goto LABEL_83;
      if ( v52 == 1 )
        goto LABEL_31;
    }
    if ( !v19 )
      goto LABEL_83;
LABEL_51:
    v32 = v15[67];
    v33 = v14;
    if ( !v32 || HalpIommuCheckExceptionList(v32) )
      goto LABEL_83;
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    {
      DefaultRemappingDomainPolicy = HalpDmaGetDefaultRemappingDomainPolicy(v15[67]);
      v36 = a11;
      LODWORD(v54) = DefaultRemappingDomainPolicy;
      if ( a11 && DefaultRemappingDomainPolicy )
      {
        v56 = 3uLL;
        Object[2] = &Object[1];
        Object[1] = &Object[1];
        v57 = &Object[1];
      }
      v67 = v14;
      v37 = v19;
    }
    else
    {
      v36 = a11;
      v37 = v19;
      v67 = v33;
      if ( a11 )
      {
        v67 = v33;
        if ( HalpDmaEnableNestedTranslation )
        {
          v56 = 3uLL;
          Object[2] = &Object[1];
          Object[1] = &Object[1];
          v57 = &Object[1];
          v67 = v33;
        }
      }
    }
    v44 = guard_dispatch_icall_no_overrides(v15[66], v57, v15 + 68, v34);
    IsEnabledDeviceUsageNoInline = Feature_Test57481295__private_IsEnabledDeviceUsageNoInline();
    if ( v44 < 0 )
    {
      if ( !v36 )
        goto LABEL_79;
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( (_DWORD)v54 != 1 )
          goto LABEL_79;
      }
      else if ( !HalpDmaEnableNestedTranslation )
      {
        goto LABEL_79;
      }
      if ( (int)guard_dispatch_icall_no_overrides(v15[66], 0LL, v15 + 68, v46) < 0 )
      {
LABEL_79:
        if ( v37 != 2 )
        {
          v47 = v52;
          if ( v52 == 1 )
            goto LABEL_90;
          goto LABEL_84;
        }
LABEL_83:
        v47 = v52;
LABEL_84:
        v15[64] = 0LL;
        if ( (int)HalJoinDmaDomain((__int64)v15, (__int64 *)0xFFFFFFFFFFFFFFFFLL) >= 0 )
          goto LABEL_91;
        v48 = *((_DWORD *)v15 + 130);
        if ( v48 )
        {
          if ( v48 == 2 )
          {
            *((_DWORD *)v15 + 130) = 0;
            goto LABEL_89;
          }
          if ( v47 != 1 )
          {
LABEL_89:
            *((_DWORD *)v15 + 130) = 0;
            if ( (int)HalJoinDmaDomain((__int64)v15, (__int64 *)0xFFFFFFFFFFFFFFFFLL) < 0 )
              goto LABEL_90;
LABEL_91:
            v49 = v67;
            if ( v13 && v67 )
              *((_BYTE *)v13 + 346) = 1;
            *(_QWORD *)(v15[64] + 56) = v15;
            goto LABEL_95;
          }
        }
LABEL_90:
        ObfDereferenceObject(v15);
        v49 = v67;
        v15 = 0LL;
        Object[0] = 0LL;
LABEL_95:
        if ( v49 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v13 + 40);
          KeAbPostRelease((ULONG_PTR)(v13 + 40));
          ObfDereferenceObject(v13);
          v15 = (__int64 *)Object[0];
        }
LABEL_31:
        if ( !v51 )
          goto LABEL_33;
        goto LABEL_32;
      }
    }
    *((_DWORD *)v15 + 130) = v37;
    goto LABEL_83;
  }
  if ( (int)HalpDmaGetIommuInterface(a11, &v61) < 0 )
  {
    if ( v19 == 2 )
    {
      v19 = 0;
    }
    else if ( v52 == 1 )
    {
      return v15;
    }
    goto LABEL_20;
  }
  v51 = 1;
  if ( (unsigned int)guard_dispatch_icall_no_overrides(v62, 0LL, 0LL, &v53) == -1073741789 && v53 )
    goto LABEL_20;
  if ( v19 == 2 )
  {
    v19 = 0;
LABEL_16:
    v53 = 0LL;
    goto LABEL_20;
  }
  if ( v52 != 1 )
    goto LABEL_16;
LABEL_32:
  guard_dispatch_icall_no_overrides(v62, v20, v21, v22);
LABEL_33:
  if ( v15 )
  {
    if ( HalpDmaIsThinDmarCapable((__int64)v15) )
    {
      v27 = &HalpDmaOperationsThinRemap;
LABEL_101:
      v15[1] = (__int64)v27;
      return v15;
    }
    if ( HalpDmaIsThinDmaCapable(v26) )
    {
      v27 = &HalpDmaOperationsThin;
      goto LABEL_101;
    }
  }
  return v15;
}
