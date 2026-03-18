/*
 * XREFs of HalGetAdapterV2 @ 0x140700658
 * Callers:
 *     HalpGetAdapter @ 0x1406FD4DC (HalpGetAdapter.c)
 * Callees:
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     HalpDmaGetAdapterVersion @ 0x14038FBDC (HalpDmaGetAdapterVersion.c)
 *     ObReferenceObjectByPointer @ 0x140432520 (ObReferenceObjectByPointer.c)
 *     HalpAddAdapterToList @ 0x14053DFB0 (HalpAddAdapterToList.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14053E06C (HalpDmaFindAdapterByDeviceObject.c)
 *     HalpDmaIsAutomaticDomain @ 0x1405510F8 (HalpDmaIsAutomaticDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpGetCacheCoherency @ 0x1406FD5C0 (HalpGetCacheCoherency.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140700A80 (HalpDmaAllocateChildAdapterV2.c)
 */

__int64 __fastcall HalGetAdapterV2(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  bool v5; // cc
  char v6; // r15
  char v7; // al
  unsigned int v8; // r13d
  int v9; // ebx
  char v10; // bp
  char v11; // r14
  char v12; // al
  unsigned int v13; // esi
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // r12
  __int64 v19; // rbx
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  __int64 *AdapterByDeviceObject; // rax
  __int64 **v24; // rbp
  int AdapterVersion; // ebx
  bool IsAutomaticDomain; // r15
  __int64 ChildAdapterV2; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  char v32; // cl
  char v34; // [rsp+40h] [rbp-58h]
  PMDL Mdl; // [rsp+48h] [rbp-50h]
  char v36; // [rsp+A0h] [rbp+8h]
  __int64 v37; // [rsp+A8h] [rbp+10h]
  unsigned int v39; // [rsp+B8h] [rbp+20h] BYREF

  v37 = a2;
  v5 = *(_DWORD *)a1 <= 2u;
  LOBYTE(v39) = 0;
  Mdl = 0LL;
  if ( !v5 )
    return 0LL;
  if ( !*(_BYTE *)(a1 + 4) || *(_DWORD *)(a1 + 20) == 1 && *(_DWORD *)(a1 + 16) <= 7u )
  {
    v6 = 1;
    v36 = 1;
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2, a3, a4) )
      return 0LL;
    a2 = v37;
  }
  else
  {
    v6 = 0;
    v36 = 0;
  }
  v7 = *(_BYTE *)(a1 + 4);
  v8 = *(_DWORD *)(a1 + 32) & 0x7FFFFFFF;
  if ( v7 && *(_BYTE *)(a1 + 5) )
    *(_BYTE *)(a1 + 8) = 1;
  if ( *(_BYTE *)(a1 + 11) )
    *(_BYTE *)(a1 + 8) = 1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v9 = 1;
LABEL_16:
    v10 = 1;
    goto LABEL_17;
  }
  v9 = 0;
  v10 = 0;
  if ( v7 )
    goto LABEL_16;
LABEL_17:
  v34 = v10;
  if ( !v6 && a2 )
  {
    HalpGetCacheCoherency(0LL, a2, &v39);
    v11 = v39;
    if ( (_BYTE)v39 )
      goto LABEL_22;
    return 0LL;
  }
  v11 = 1;
LABEL_22:
  v12 = *(_BYTE *)(a1 + 5);
  if ( v12 && v11 && ((unsigned __int64)HalpMaximumPhysicalMemoryAddress < 0x100000000LL || *(_BYTE *)(a1 + 11)) )
  {
    v13 = 0;
    v39 = 0;
    v14 = 0;
  }
  else
  {
    if ( v9 )
    {
      v15 = 64;
      if ( v12 )
        v15 = v11 != 0 ? 512 : 64;
    }
    else
    {
      v15 = 16;
    }
    v13 = (v8 >> 12) + ((v8 & 0xFFF) != 0) + 1;
    v39 = v13;
    v14 = v13;
    if ( v13 > v15 )
    {
      v13 = v15;
      v39 = v15;
      v14 = v15;
    }
    v16 = dword_140FC2E28;
    if ( !v9 )
      v16 = dword_140FC2D28;
    if ( !v10 )
    {
      v17 = v16 >> 13;
      if ( v14 > v17 )
      {
        v13 = v17;
        v39 = v17;
        v14 = v17;
      }
    }
  }
  if ( !v11 )
  {
    Mdl = IoAllocateMdl(0LL, v14 << 12, 0, 0, 0LL);
    if ( !Mdl )
      return 0LL;
  }
  v18 = *(unsigned int *)(a1 + 16);
  if ( v6 )
  {
    v19 = *(_QWORD *)(HalpDmaAdapters + 8 * v18);
    if ( v19 )
    {
      if ( v13 > *(_DWORD *)(v19 + 232) )
        *(_DWORD *)(v19 + 232) = v13;
      ObReferenceObjectByPointer((PVOID)v19, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_64;
    }
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  if ( v6 )
  {
    v19 = *(_QWORD *)(HalpDmaAdapters + 8 * v18);
    if ( v19 )
    {
      if ( v13 > *(_DWORD *)(v19 + 232) )
        *(_DWORD *)(v19 + 232) = v13;
      ObReferenceObjectByPointer((PVOID)v19, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_63;
    }
  }
  if ( v37 )
  {
    AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(v37);
    v24 = (__int64 **)AdapterByDeviceObject;
    if ( AdapterByDeviceObject )
    {
      AdapterVersion = HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject);
      IsAutomaticDomain = HalpDmaIsAutomaticDomain(v24[64]);
      ObfDereferenceObject(v24);
      if ( AdapterVersion != 2 && !IsAutomaticDomain )
        goto LABEL_70;
      v6 = v36;
    }
  }
  LOBYTE(v22) = *(_BYTE *)(a1 + 5);
  LOBYTE(v21) = *(_BYTE *)(a1 + 11);
  LOBYTE(v20) = *(_BYTE *)(a1 + 8);
  ChildAdapterV2 = HalpDmaAllocateChildAdapterV2(v13, v20, v21, v22, *(_BYTE *)(a1 + 4), v34, v11, (__int64)&v39);
  v19 = ChildAdapterV2;
  if ( !ChildAdapterV2 )
  {
LABEL_70:
    KeSetEvent(&HalpNewAdapter, 0, 0);
    return 0LL;
  }
  *(_BYTE *)(ChildAdapterV2 + 524) = 1;
  if ( v6 )
  {
    *(_QWORD *)(HalpDmaAdapters + 8 * v18) = ChildAdapterV2;
    v31 = guard_dispatch_icall_no_overrides(a1, v28, v29, v30);
    if ( v31 )
    {
      *(_QWORD *)(v19 + 432) = v31;
      ObReferenceObjectByPointer((PVOID)v19, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_59;
    }
    goto LABEL_70;
  }
LABEL_59:
  if ( v39 )
  {
    *(_DWORD *)(v19 + 232) = v39;
    v32 = 1;
  }
  else
  {
    *(_DWORD *)(v19 + 232) = (v8 >> 12) + ((v8 & 0xFFF) != 0) + 1;
    v32 = 0;
  }
  *(_BYTE *)(v19 + 440) = v32;
  *(_QWORD *)(v19 + 312) = 0LL;
LABEL_63:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_64:
  *(_BYTE *)(v19 + 444) = 0;
  if ( *(_DWORD *)a1 )
    *(_BYTE *)(v19 + 444) = *(_BYTE *)(a1 + 9);
  *a3 = *(_DWORD *)(v19 + 232);
  *(_QWORD *)(v19 + 304) = Mdl;
  if ( v6 )
  {
    *(_DWORD *)(v19 + 380) = v18;
  }
  else
  {
    *(_QWORD *)(v19 + 528) = v37;
    HalpAddAdapterToList(v19);
  }
  return v19;
}
