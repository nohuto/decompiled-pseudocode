/*
 * XREFs of GetPciAddressWorker @ 0x1400150D0
 * Callers:
 *     GetPciAddress @ 0x140015038 (GetPciAddress.c)
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     GetPciAddress @ 0x140015038 (GetPciAddress.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIIsEqualHandle @ 0x140015F98 (AMLIIsEqualHandle.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     GetCachedBBNResult @ 0x140015FE8 (GetCachedBBNResult.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetPciAddressWorker(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  volatile signed __int32 *v5; // r14
  unsigned int CachedBBNResult; // edi
  int v8; // eax
  char *v9; // rbx
  KIRQL v10; // al
  __int64 **v11; // rcx
  __int64 *i; // rbx
  KIRQL v13; // al
  __int64 **v14; // rcx
  __int64 *j; // rbx
  __int64 v16; // rcx
  int v17; // eax
  KIRQL v18; // al
  __int64 **v19; // rcx
  __int64 *k; // rbx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edi
  KIRQL v25; // al
  __int64 *v26; // r8
  KIRQL v27; // bl
  __int64 **v28; // r8
  KIRQL v29; // al
  __int64 **v30; // rcx
  __int64 *m; // rbx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  int v36; // eax
  int PciAddress; // eax
  ULONG BusDataByOffset; // eax
  int v39; // ecx
  __int64 v40; // rcx
  __int64 Pool2; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  _BYTE Buffer[64]; // [rsp+60h] [rbp-88h] BYREF

  v5 = 0LL;
  CachedBBNResult = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 12);
  if ( a2 < 0 )
    goto LABEL_47;
  v8 = *((_DWORD *)a4 + 8);
  v9 = (char *)a4 + 36;
  if ( (v8 & 8) == 0 )
  {
    v16 = *a4;
    *((_DWORD *)a4 + 8) = v8 | 8;
    v17 = ACPIGet(v16, 1380204895, -1543240702, 0, 0, (__int64)GetPciAddressWorker, (__int64)a4, (__int64)a4 + 36, 0LL);
    CachedBBNResult = v17;
    if ( v17 == 259 )
      return CachedBBNResult;
    if ( v17 < 0 )
      goto LABEL_47;
  }
  if ( (a4[4] & 0x100) == 0 )
  {
    *(_DWORD *)a4[2] ^= ((unsigned __int8)*(_DWORD *)a4[2] ^ (unsigned __int8)(32 * *(_DWORD *)v9)) & 0xE0;
    *(_DWORD *)a4[2] ^= ((unsigned __int8)*(_DWORD *)a4[2] ^ (unsigned __int8)*((_WORD *)v9 + 1)) & 0x1F;
    *((_DWORD *)a4 + 8) |= 0x100u;
  }
  *(_DWORD *)a4[1] = 0;
  v5 = (volatile signed __int32 *)*a4;
  dword_140089138 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v5 + 2);
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = (__int64 **)(*(_QWORD *)v5 + 24LL);
  for ( i = *v11; ; i = (__int64 *)*i )
  {
    if ( v11 == (__int64 **)i )
    {
      ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
      goto LABEL_12;
    }
    if ( *((_DWORD *)i + 10) == 1145653343 )
      break;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( i )
    goto LABEL_21;
LABEL_12:
  AMLIDereferenceHandleEx((__int64)v5);
  v5 = (volatile signed __int32 *)AMLIGetParent(*a4);
  if ( !v5 )
  {
    CachedBBNResult = -1073741661;
    goto LABEL_47;
  }
  v13 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v14 = (__int64 **)(*(_QWORD *)v5 + 24LL);
  for ( j = *v14; ; j = (__int64 *)*j )
  {
    if ( v14 == (__int64 **)j )
    {
      ExReleaseSpinLockShared(&ACPINamespaceLock, v13);
      goto LABEL_64;
    }
    if ( *((_DWORD *)j + 10) == 1145653343 )
      break;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v13);
  if ( !j )
  {
LABEL_64:
    v36 = *((_DWORD *)a4 + 8);
    if ( (v36 & 0x20) == 0 )
    {
      *((_DWORD *)a4 + 8) = v36 | 0x20;
      PciAddress = GetPciAddress(
                     (__int64)v5,
                     (__int64)GetPciAddressWorker,
                     (__int64)a4,
                     (__int64)(a4 + 3),
                     (__int64)a4 + 28);
      CachedBBNResult = PciAddress;
      if ( PciAddress == 259 )
        goto LABEL_56;
      if ( PciAddress < 0 )
        goto LABEL_47;
    }
    BusDataByOffset = HalGetBusDataByOffset(
                        PCIConfiguration,
                        *((_DWORD *)a4 + 6),
                        *((_DWORD *)a4 + 7),
                        Buffer,
                        0,
                        0x1Au);
    v39 = a4[3] & 0xFFFF00;
    if ( BusDataByOffset )
    {
      if ( (Buffer[14] & 0x7Fu) - 1 > 1 )
      {
        *(_DWORD *)a4[1] = v39;
      }
      else
      {
        *(_DWORD *)a4[1] = Buffer[25] | v39;
        (*(void (__fastcall **)(_QWORD))(PmHalDispatchTable + 72))(*(unsigned int *)a4[1]);
      }
    }
    else
    {
      *(_DWORD *)a4[1] = v39;
    }
LABEL_69:
    CachedBBNResult = 0;
    goto LABEL_47;
  }
LABEL_21:
  v18 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v19 = (__int64 **)(*(_QWORD *)v5 + 24LL);
  for ( k = *v19; ; k = (__int64 *)*k )
  {
    if ( v19 == (__int64 **)k )
    {
      ExReleaseSpinLockShared(&ACPINamespaceLock, v18);
      goto LABEL_26;
    }
    if ( *((_DWORD *)k + 10) == 1312965215 )
      break;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v18);
  if ( !k )
  {
LABEL_26:
    if ( (AcpiOverrideAttributes & 0x1000) != 0 || !(unsigned __int8)AMLIIsNamedChildPresent(v5, 1195725663LL) )
      goto LABEL_69;
    v21 = *((_DWORD *)a4 + 8);
    if ( (v21 & 0x4000) != 0 )
      goto LABEL_31;
    *((_DWORD *)a4 + 8) = v21 | 0x4000;
    v22 = ACPIGet(
            (_DWORD)v5,
            1195725663,
            604241922,
            0,
            0,
            (__int64)GetPciAddressWorker,
            (__int64)a4,
            (__int64)(a4 + 5),
            0LL);
    CachedBBNResult = v22;
    if ( v22 == 259 )
      goto LABEL_55;
    if ( v22 >= 0 )
    {
LABEL_31:
      *(_DWORD *)a4[1] = (unsigned __int16)*((_DWORD *)a4 + 10) << 8;
      goto LABEL_69;
    }
    goto LABEL_47;
  }
  v23 = *((_DWORD *)a4 + 8);
  if ( (v23 & 0x2000) != 0 )
    goto LABEL_34;
  *((_DWORD *)a4 + 8) = v23 | 0x2000;
  CachedBBNResult = GetCachedBBNResult(v5, (char *)a4 + 44);
  if ( CachedBBNResult != 0x40000000 )
    CachedBBNResult = ACPIGet(
                        (_DWORD)v5,
                        1312965215,
                        604241922,
                        0,
                        0,
                        (__int64)GetPciAddressWorker,
                        (__int64)a4,
                        (__int64)a4 + 44,
                        0LL);
  if ( CachedBBNResult != 259 )
  {
    if ( (CachedBBNResult & 0x80000000) != 0 )
      goto LABEL_47;
LABEL_34:
    if ( CachedBBNResult != 0x40000000 )
    {
      v24 = *((_DWORD *)a4 + 11);
      v25 = KeAcquireSpinLockRaiseToDpc(&gBBNResultCacheLock);
      v26 = (__int64 *)gBBNResultCacheListHead;
      v27 = v25;
      while ( v26 != &gBBNResultCacheListHead )
      {
        if ( (unsigned __int8)AMLIIsEqualHandle(v26[2], v5) )
          goto LABEL_38;
        v26 = *v28;
      }
      Pool2 = ExAllocatePool2(64LL, 32LL, 1768973121LL);
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = v5;
        AMLIReferenceHandleEx(v5);
        *(_DWORD *)(v42 + 24) = v24;
        v43 = gBBNResultCacheListHead;
        if ( *(__int64 **)(gBBNResultCacheListHead + 8) != &gBBNResultCacheListHead )
          __fastfail(3u);
        *(_QWORD *)v42 = gBBNResultCacheListHead;
        *(_QWORD *)(v42 + 8) = &gBBNResultCacheListHead;
        *(_QWORD *)(v43 + 8) = v42;
        gBBNResultCacheListHead = v42;
      }
LABEL_38:
      KeReleaseSpinLock(&gBBNResultCacheLock, v27);
    }
    if ( (AcpiOverrideAttributes & 0x1000) != 0 )
      goto LABEL_45;
    v29 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    v30 = (__int64 **)(*(_QWORD *)v5 + 24LL);
    for ( m = *v30; ; m = (__int64 *)*m )
    {
      if ( v30 == (__int64 **)m )
      {
        ExReleaseSpinLockShared(&ACPINamespaceLock, v29);
        goto LABEL_45;
      }
      if ( *((_DWORD *)m + 10) == 1195725663 )
        break;
    }
    ExReleaseSpinLockShared(&ACPINamespaceLock, v29);
    if ( !m )
    {
LABEL_45:
      (*(void (__fastcall **)(_QWORD))(PmHalDispatchTable + 72))(*((unsigned int *)a4 + 11));
      CachedBBNResult = 0;
      *(_DWORD *)a4[1] = *((_DWORD *)a4 + 11);
      v32 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
      if ( v32 )
      {
        _InterlockedOr64((volatile signed __int64 *)(v32 + 8), 0x2000000uLL);
        _InterlockedOr((volatile signed __int32 *)(v32 + 184), 1u);
      }
      goto LABEL_47;
    }
    v33 = *((_DWORD *)a4 + 8);
    if ( (v33 & 0x4000) != 0 )
      goto LABEL_72;
    *((_DWORD *)a4 + 8) = v33 | 0x4000;
    v34 = ACPIGet(
            (_DWORD)v5,
            1195725663,
            604241922,
            0,
            0,
            (__int64)GetPciAddressWorker,
            (__int64)a4,
            (__int64)(a4 + 5),
            0LL);
    CachedBBNResult = v34;
    if ( v34 == 259 )
      goto LABEL_55;
    if ( v34 >= 0 )
    {
LABEL_72:
      *((_DWORD *)a4 + 11) |= (unsigned __int16)*((_DWORD *)a4 + 10) << 8;
      goto LABEL_45;
    }
LABEL_47:
    if ( *((_DWORD *)a4 + 12) )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))a4[7])(a1, CachedBBNResult, 0LL, a4[8]);
    if ( *a4 )
    {
      AMLIDereferenceHandleEx(*a4);
      *a4 = 0LL;
    }
    ExFreePoolWithTag(a4, 0);
  }
LABEL_55:
  if ( v5 )
  {
LABEL_56:
    dword_140089138 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      v40 = *(_QWORD *)v5;
      if ( v5 == (volatile signed __int32 *)(*(_QWORD *)v5 + 120LL) )
      {
        DereferenceObjectEx(v40);
      }
      else
      {
        DereferenceObjectEx(v40);
        HeapFree(v5);
      }
    }
  }
  return CachedBBNResult;
}
