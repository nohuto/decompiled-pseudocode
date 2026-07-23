/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x1408B7B08
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     PiDmGetCachedKeyIndex @ 0x1408B7F40 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataFree @ 0x1408B8C20 (PiDmCacheDataFree.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     PiDmCacheDataDecode @ 0x1408C7520 (PiDmCacheDataDecode.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 *     PiDmCacheDataEncode @ 0x140A483AC (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140A58968 (PiDmGetReferencedObjectFromProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectProcessPropertyChange(
        unsigned int a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  char *v6; // r13
  int Object; // esi
  _BYTE *v8; // r15
  int v9; // r12d
  char *v10; // rbx
  unsigned int v11; // ecx
  DEVPROPKEY **v12; // rdi
  __int64 v13; // rdx
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // r14
  unsigned int v16; // edx
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int i; // edx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rdi
  int ReferencedObjectFromProperty; // eax
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // r14
  char *v28; // r13
  int v29; // eax
  unsigned int v30; // esi
  void *Pool2; // rax
  bool v32; // zf
  PVOID v33; // r13
  __int128 v34; // [rsp+68h] [rbp-29h] BYREF
  __int64 v35; // [rsp+78h] [rbp-19h] BYREF
  PVOID P; // [rsp+80h] [rbp-11h]
  __int64 v37; // [rsp+88h] [rbp-9h] BYREF
  PVOID v38[9]; // [rsp+90h] [rbp-1h] BYREF
  PVOID v41; // [rsp+F8h] [rbp+67h] BYREF
  char v42; // [rsp+100h] [rbp+6Fh]

  v41 = a3;
  *((_QWORD *)&v34 + 1) = 0LL;
  v6 = a3;
  Object = 0;
  LODWORD(v35) = 0;
  v8 = 0LL;
  *a6 = 0;
  v9 = 0;
  v42 = 0;
  v10 = 0LL;
  P = 0LL;
  v37 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  v38[0] = 0LL;
  if ( a4 )
    return;
  v11 = a1 - 1;
  if ( v11 )
  {
    v17 = v11 - 2;
    if ( v17 )
    {
      if ( v17 != 2 )
        return;
      v12 = &PiDmCachedDeviceContainerKeys;
      v13 = 3LL;
    }
    else
    {
      v12 = &PiDmCachedDeviceInterfaceKeys;
      v13 = 1LL;
    }
  }
  else
  {
    v12 = &PiDmCachedDeviceKeys;
    v13 = 10LL;
  }
  CachedKeyIndex = PiDmGetCachedKeyIndex(v12, v13, a5);
  v15 = CachedKeyIndex;
  if ( CachedKeyIndex >= v16 )
    return;
  if ( !v6 )
  {
    Object = PiDmGetObject(a1, a2, &v41);
    if ( Object < 0 )
      return;
    v6 = (char *)v41;
    v42 = 1;
  }
  v27 = 3 * v15;
  if ( LODWORD(v12[v27 + 2]) == 1 )
  {
    Object = PnpGetObjectProperty(0x5A706E50u, 0LL, 0LL, a5, (__int64)&v34, (__int64)&v37, (__int64)&v35, 0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      LODWORD(v34) = 0;
      HIDWORD(v34) = 0;
    }
    else
    {
      HIDWORD(v34) = v35;
    }
    v8 = (_BYTE *)v37;
  }
  KsepCacheLock(v6);
  v28 = &v6[8 * v27 + 112];
  if ( !*(_DWORD *)v28 )
  {
    if ( !LODWORD(v12[v27 + 2]) )
      goto LABEL_63;
    goto LABEL_67;
  }
  if ( *(_DWORD *)v28 == 1 || Object < 0 || !LODWORD(v12[v27 + 2]) )
    goto LABEL_67;
  v29 = PiDmCacheDataDecode(v28, (char *)&v34 + 4, 0LL, 0LL, (char *)&v34 + 8);
  Object = v29;
  if ( v29 != -1073741275 )
  {
    if ( (int)(v29 + 0x80000000) >= 0 && v29 != -1073741789 )
      goto LABEL_66;
    v30 = DWORD2(v34);
    if ( DWORD2(v34) )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL, DWORD2(v34), 0x5A706E50u);
      P = Pool2;
      if ( !Pool2 )
      {
        Object = -1073741670;
        goto LABEL_66;
      }
    }
    else
    {
      Pool2 = 0LL;
    }
    Object = PiDmCacheDataDecode(v28, (char *)&v34 + 4, Pool2, v30, (char *)&v34 + 8);
    if ( Object >= 0 )
    {
      v9 = DWORD1(v34);
      if ( *(_QWORD *)((char *)&v34 + 4) != __PAIR64__(HIDWORD(v34), v34) )
        goto LABEL_67;
      if ( !DWORD2(v34) )
      {
LABEL_62:
        *a6 = 1;
        goto LABEL_63;
      }
      v32 = memcmp(P, v8, DWORD2(v34)) == 0;
      goto LABEL_61;
    }
LABEL_66:
    v9 = DWORD1(v34);
    goto LABEL_67;
  }
  Object = 0;
  v32 = (_DWORD)v34 == 0;
LABEL_61:
  if ( v32 )
    goto LABEL_62;
LABEL_67:
  PiDmCacheDataFree(v28);
  if ( Object >= 0 && LODWORD(v12[v27 + 2]) == 1 && !HIDWORD(v12[v27 + 1]) )
    Object = PiDmCacheDataEncode((unsigned int)v34, v8, HIDWORD(v34), LODWORD(v12[v27 + 1]), 0, v28);
LABEL_63:
  v33 = v41;
  PiDmObjectReleaseLock((ULONG_PTR)v41);
  if ( LODWORD(v12[v27 + 2]) && !*a6 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 3 )
        goto LABEL_15;
      v20 = 7LL * i;
      v21 = PiDmAggregatedBooleanDefs[v20 + 1];
      if ( *(_DWORD *)(v21 + 16) == *(_DWORD *)(a5 + 16) )
      {
        v22 = *(_QWORD *)v21 - *(_QWORD *)a5;
        if ( *(_QWORD *)v21 == *(_QWORD *)a5 )
          v22 = *(_QWORD *)(v21 + 8) - *(_QWORD *)(a5 + 8);
        if ( !v22 )
        {
          v23 = &PiDmAggregatedBooleanDefs[v20];
          if ( a1 == LODWORD(PiDmAggregatedBooleanDefs[v20]) )
            break;
        }
      }
    }
    if ( v23 )
    {
      ReferencedObjectFromProperty = PiDmGetReferencedObjectFromProperty(
                                       a1,
                                       a2,
                                       (_DWORD)v33,
                                       v20 * 8,
                                       v23[2],
                                       *((_DWORD *)v23 + 6),
                                       (__int64)v38);
      v10 = (char *)v38[0];
      if ( ReferencedObjectFromProperty >= 0 )
      {
        v25 = v23[6];
        KsepCacheLock(v38[0]);
        if ( Object < 0 || (v26 = *(_DWORD *)&v10[v25], v26 == 0x80000000) )
        {
          *(_DWORD *)&v10[v25] = 0x80000000;
          goto LABEL_14;
        }
        if ( v9 == 17 )
        {
          if ( *(_BYTE *)P == 0xFF )
          {
            if ( (_DWORD)v34 == 17 && *v8 )
              goto LABEL_14;
            v18 = v26 - 1;
LABEL_13:
            *(_DWORD *)&v10[v25] = v18;
LABEL_14:
            PiDmObjectReleaseLock((ULONG_PTR)v10);
            goto LABEL_15;
          }
          if ( *(_BYTE *)P )
            goto LABEL_14;
        }
        if ( (_DWORD)v34 != 17 || *v8 != 0xFF )
          goto LABEL_14;
        v18 = v26 + 1;
        goto LABEL_13;
      }
    }
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0x5A706E50u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x5A706E50u);
  if ( v10 )
    PiDmObjectRelease(v10);
  if ( v42 )
    PiDmObjectRelease(v33);
}
