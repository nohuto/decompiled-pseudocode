/*
 * XREFs of HalGetAdapterV2 @ 0x1406FE298
 * Callers:
 *     HalpGetAdapter @ 0x1406FB11C (HalpGetAdapter.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     HalpDmaGetAdapterVersion @ 0x14038951C (HalpDmaGetAdapterVersion.c)
 *     ObReferenceObjectByPointer @ 0x140424A50 (ObReferenceObjectByPointer.c)
 *     HalpAddAdapterToList @ 0x14053B8B0 (HalpAddAdapterToList.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14053B96C (HalpDmaFindAdapterByDeviceObject.c)
 *     HalpDmaIsAutomaticDomain @ 0x14054EA38 (HalpDmaIsAutomaticDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpGetCacheCoherency @ 0x1406FB200 (HalpGetCacheCoherency.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1406FE6C0 (HalpDmaAllocateChildAdapterV2.c)
 */

__int64 __fastcall HalGetAdapterV2(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v4; // cc
  char v5; // r15
  char v6; // al
  unsigned int v7; // r13d
  int v8; // ebx
  char v9; // bp
  char v10; // r14
  char v11; // al
  unsigned int v12; // esi
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  __int64 v17; // r12
  __int64 v18; // rbx
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  __int64 *AdapterByDeviceObject; // rax
  __int64 **v23; // rbp
  int AdapterVersion; // ebx
  bool IsAutomaticDomain; // r15
  __int64 ChildAdapterV2; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  char v29; // cl
  char v31; // [rsp+40h] [rbp-58h]
  PMDL Mdl; // [rsp+48h] [rbp-50h]
  char v33; // [rsp+A0h] [rbp+8h]
  __int64 v34; // [rsp+A8h] [rbp+10h]
  unsigned int v36; // [rsp+B8h] [rbp+20h] BYREF

  v34 = a2;
  v4 = *(_DWORD *)a1 <= 2u;
  LOBYTE(v36) = 0;
  Mdl = 0LL;
  if ( !v4 )
    return 0LL;
  if ( !*(_BYTE *)(a1 + 4) || *(_DWORD *)(a1 + 20) == 1 && *(_DWORD *)(a1 + 16) <= 7u )
  {
    v5 = 1;
    v33 = 1;
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2) )
      return 0LL;
    a2 = v34;
  }
  else
  {
    v5 = 0;
    v33 = 0;
  }
  v6 = *(_BYTE *)(a1 + 4);
  v7 = *(_DWORD *)(a1 + 32) & 0x7FFFFFFF;
  if ( v6 && *(_BYTE *)(a1 + 5) )
    *(_BYTE *)(a1 + 8) = 1;
  if ( *(_BYTE *)(a1 + 11) )
    *(_BYTE *)(a1 + 8) = 1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v8 = 1;
LABEL_16:
    v9 = 1;
    goto LABEL_17;
  }
  v8 = 0;
  v9 = 0;
  if ( v6 )
    goto LABEL_16;
LABEL_17:
  v31 = v9;
  if ( !v5 && a2 )
  {
    HalpGetCacheCoherency(0LL, a2, &v36);
    v10 = v36;
    if ( (_BYTE)v36 )
      goto LABEL_22;
    return 0LL;
  }
  v10 = 1;
LABEL_22:
  v11 = *(_BYTE *)(a1 + 5);
  if ( v11 && v10 && ((unsigned __int64)HalpMaximumPhysicalMemoryAddress < 0x100000000LL || *(_BYTE *)(a1 + 11)) )
  {
    v12 = 0;
    v36 = 0;
    v13 = 0;
  }
  else
  {
    if ( v8 )
    {
      v14 = 64;
      if ( v11 )
        v14 = v10 != 0 ? 512 : 64;
    }
    else
    {
      v14 = 16;
    }
    v12 = (v7 >> 12) + ((v7 & 0xFFF) != 0) + 1;
    v36 = v12;
    v13 = v12;
    if ( v12 > v14 )
    {
      v12 = v14;
      v36 = v14;
      v13 = v14;
    }
    v15 = dword_140FC3088;
    if ( !v8 )
      v15 = dword_140FC2F88;
    if ( !v9 )
    {
      v16 = v15 >> 13;
      if ( v13 > v16 )
      {
        v12 = v16;
        v36 = v16;
        v13 = v16;
      }
    }
  }
  if ( !v10 )
  {
    Mdl = IoAllocateMdl(0LL, v13 << 12, 0, 0, 0LL);
    if ( !Mdl )
      return 0LL;
  }
  v17 = *(unsigned int *)(a1 + 16);
  if ( v5 )
  {
    v18 = *(_QWORD *)(HalpDmaAdapters + 8 * v17);
    if ( v18 )
    {
      if ( v12 > *(_DWORD *)(v18 + 232) )
        *(_DWORD *)(v18 + 232) = v12;
      ObReferenceObjectByPointer((PVOID)v18, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_64;
    }
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  if ( v5 )
  {
    v18 = *(_QWORD *)(HalpDmaAdapters + 8 * v17);
    if ( v18 )
    {
      if ( v12 > *(_DWORD *)(v18 + 232) )
        *(_DWORD *)(v18 + 232) = v12;
      ObReferenceObjectByPointer((PVOID)v18, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_63;
    }
  }
  if ( v34 )
  {
    AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(v34);
    v23 = (__int64 **)AdapterByDeviceObject;
    if ( AdapterByDeviceObject )
    {
      AdapterVersion = HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject);
      IsAutomaticDomain = HalpDmaIsAutomaticDomain(v23[64]);
      ObfDereferenceObject(v23);
      if ( AdapterVersion != 2 && !IsAutomaticDomain )
        goto LABEL_70;
      v5 = v33;
    }
  }
  LOBYTE(v21) = *(_BYTE *)(a1 + 5);
  LOBYTE(v20) = *(_BYTE *)(a1 + 11);
  LOBYTE(v19) = *(_BYTE *)(a1 + 8);
  ChildAdapterV2 = HalpDmaAllocateChildAdapterV2(v12, v19, v20, v21, *(_BYTE *)(a1 + 4), v31, v10, (__int64)&v36);
  v18 = ChildAdapterV2;
  if ( !ChildAdapterV2 )
  {
LABEL_70:
    KeSetEvent(&HalpNewAdapter, 0, 0);
    return 0LL;
  }
  *(_BYTE *)(ChildAdapterV2 + 524) = 1;
  if ( v5 )
  {
    *(_QWORD *)(HalpDmaAdapters + 8 * v17) = ChildAdapterV2;
    v28 = guard_dispatch_icall_no_overrides(a1, v27);
    if ( v28 )
    {
      *(_QWORD *)(v18 + 432) = v28;
      ObReferenceObjectByPointer((PVOID)v18, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_59;
    }
    goto LABEL_70;
  }
LABEL_59:
  if ( v36 )
  {
    *(_DWORD *)(v18 + 232) = v36;
    v29 = 1;
  }
  else
  {
    *(_DWORD *)(v18 + 232) = (v7 >> 12) + ((v7 & 0xFFF) != 0) + 1;
    v29 = 0;
  }
  *(_BYTE *)(v18 + 440) = v29;
  *(_QWORD *)(v18 + 312) = 0LL;
LABEL_63:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_64:
  *(_BYTE *)(v18 + 444) = 0;
  if ( *(_DWORD *)a1 )
    *(_BYTE *)(v18 + 444) = *(_BYTE *)(a1 + 9);
  *a3 = *(_DWORD *)(v18 + 232);
  *(_QWORD *)(v18 + 304) = Mdl;
  if ( v5 )
  {
    *(_DWORD *)(v18 + 380) = v17;
  }
  else
  {
    *(_QWORD *)(v18 + 528) = v34;
    HalpAddAdapterToList(v18);
  }
  return v18;
}
