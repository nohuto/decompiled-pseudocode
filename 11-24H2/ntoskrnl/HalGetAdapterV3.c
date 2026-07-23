/*
 * XREFs of HalGetAdapterV3 @ 0x1406FDCF8
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
 *     HalpAddAdapterToSystemList @ 0x1405504E0 (HalpAddAdapterToSystemList.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x140550774 (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpFindAdapterByRequestLine @ 0x140550960 (HalpFindAdapterByRequestLine.c)
 *     HalpFindDmaControllerByRequestLine @ 0x140550A14 (HalpFindDmaControllerByRequestLine.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FA900 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpGetCacheCoherency @ 0x1406FB200 (HalpGetCacheCoherency.c)
 */

__int64 __fastcall HalGetAdapterV3(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v4; // r9
  bool v6; // cf
  bool v7; // zf
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 AdapterByRequestLine; // rdi
  __int64 DmaControllerByRequestLine; // rax
  int v12; // ecx
  __int64 v13; // r13
  char v14; // al
  unsigned int v15; // r15d
  unsigned int v16; // ecx
  unsigned int v17; // edx
  int v18; // r13d
  unsigned __int64 v19; // rax
  bool v20; // al
  bool v21; // cl
  char v22; // dl
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // edx
  unsigned int v27; // edx
  __int64 v28; // r13
  __int64 *AdapterByDeviceObject; // rax
  __int64 *v30; // rsi
  unsigned int v31; // edi
  unsigned int v32; // ecx
  unsigned int v33; // eax
  char v35; // al
  int v36; // r15d
  char v37; // [rsp+70h] [rbp-19h] BYREF
  char v38; // [rsp+71h] [rbp-18h]
  char v39; // [rsp+72h] [rbp-17h]
  char v40; // [rsp+73h] [rbp-16h]
  unsigned int v41; // [rsp+74h] [rbp-15h]
  unsigned int v42; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v43; // [rsp+7Ch] [rbp-Dh]
  unsigned int v44; // [rsp+80h] [rbp-9h]
  __int64 v45; // [rsp+88h] [rbp-1h]
  PMDL Mdl; // [rsp+90h] [rbp+7h]
  char v47; // [rsp+F0h] [rbp+67h]
  int v49; // [rsp+100h] [rbp+77h]

  v4 = a2;
  v37 = 0;
  if ( HalpDmaCvmConfiguration )
    a3 = 0;
  Mdl = 0LL;
  v6 = *(_DWORD *)a1 < 3u;
  v7 = *(_DWORD *)a1 == 3;
  v8 = 64;
  v49 = a3;
  v39 = 0;
  if ( v7 )
  {
    v41 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    if ( !v6 || !a3 || !*(_BYTE *)(a1 + 4) )
      return 0LL;
    if ( *(_BYTE *)(a1 + 11) )
    {
      v41 = 64;
    }
    else if ( *(_BYTE *)(a1 + 8) || (v41 = 24, *(_BYTE *)(a1 + 5)) )
    {
      v41 = 32;
    }
  }
  if ( !a2 )
    return 0LL;
  v9 = 0LL;
  v43 = 0;
  AdapterByRequestLine = 0LL;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v40 = 0;
    v13 = 0LL;
    v45 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 56);
    v43 = *(_DWORD *)(a1 + 48);
    v40 = 1;
    DmaControllerByRequestLine = HalpFindDmaControllerByRequestLine(v43);
    v45 = DmaControllerByRequestLine;
    v13 = DmaControllerByRequestLine;
    if ( !DmaControllerByRequestLine )
      return 0LL;
    AdapterByRequestLine = (__int64)HalpFindAdapterByRequestLine(DmaControllerByRequestLine, v12);
    if ( !AdapterByRequestLine && !HalpDmaControllerValidateRequestLineBinding(v13, a1) )
      return 0LL;
    v4 = a2;
  }
  v14 = *(_BYTE *)(a1 + 4);
  v15 = ((*(_DWORD *)(a1 + 32) & 0x7FFFFFFF) + 4095) & 0xFFFFF000;
  if ( v14 )
  {
    v16 = v41;
    v47 = *(_BYTE *)(a1 + 5);
    v44 = 0;
  }
  else
  {
    v17 = *(_DWORD *)(v13 + 48);
    v47 = 1;
    if ( v17 > 8 )
      v17 = 8;
    v16 = *(_DWORD *)(v13 + 76);
    v44 = v17;
    v41 = v16;
  }
  if ( v16 < 0x20 )
  {
    v38 = 0;
    v18 = 0;
    if ( !v14 )
      goto LABEL_29;
  }
  else
  {
    v18 = 1;
  }
  v38 = 1;
LABEL_29:
  HalpGetCacheCoherency(v45, v4, &v37);
  if ( v41 < 0x40 )
    v19 = (1LL << v41) - 1;
  else
    v19 = -1LL;
  v20 = v19 >= HalpMaximumPhysicalMemoryAddress;
  if ( HalpDmaCvmConfiguration )
  {
    v21 = 0;
  }
  else
  {
    v21 = v20;
    if ( v20 && v37 )
    {
      v22 = v47;
      if ( !v47 )
        goto LABEL_35;
      if ( !v49 || v49 == 2 )
      {
        v23 = 0;
        v42 = 0;
        v24 = 0;
        goto LABEL_54;
      }
    }
  }
  v22 = v47;
LABEL_35:
  if ( v18 )
  {
    if ( v22 && (v37 || !v21) )
      v8 = 512;
  }
  else
  {
    v8 = 16;
  }
  v23 = (v15 >> 12) + 1;
  v42 = v23;
  v25 = v23;
  if ( v23 > v8 )
  {
    v23 = v8;
    v25 = v8;
    v42 = v8;
  }
  v26 = dword_140FC3288;
  v24 = v25;
  if ( !v18 )
    v26 = dword_140FC3188;
  if ( !v38 )
  {
    v27 = v26 >> 13;
    if ( v25 > v27 )
    {
      v23 = v27;
      v42 = v27;
      v24 = v27;
    }
  }
LABEL_54:
  if ( v37 )
    goto LABEL_57;
  Mdl = IoAllocateMdl(0LL, v24 << 12, 0, 0, 0LL);
  if ( !Mdl )
    return 0LL;
  v23 = v42;
LABEL_57:
  if ( AdapterByRequestLine )
  {
    if ( v23 > *(_DWORD *)(AdapterByRequestLine + 232) )
      *(_DWORD *)(AdapterByRequestLine + 232) = v23;
    *(_QWORD *)(AdapterByRequestLine + 456) = *(_QWORD *)(a1 + 56);
    ObReferenceObjectByPointer((PVOID)AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
    goto LABEL_96;
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  v28 = v45;
  if ( v40 )
  {
    AdapterByRequestLine = (__int64)HalpFindAdapterByRequestLine(v45, v43);
    if ( AdapterByRequestLine )
    {
      if ( v42 > *(_DWORD *)(AdapterByRequestLine + 232) )
        *(_DWORD *)(AdapterByRequestLine + 232) = v42;
      *(_QWORD *)(AdapterByRequestLine + 456) = *(_QWORD *)(a1 + 56);
      ObReferenceObjectByPointer((PVOID)AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_95;
    }
  }
  AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(a2);
  v30 = AdapterByDeviceObject;
  if ( !AdapterByDeviceObject )
    goto LABEL_69;
  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject) != 3 )
  {
    ObfDereferenceObject(v30);
    v39 = 1;
LABEL_69:
    v31 = v41;
    goto LABEL_70;
  }
  v31 = v41;
  if ( *(_BYTE *)(a1 + 4)
    && *(_BYTE *)(a1 + 5) == *((_BYTE *)v30 + 442)
    && *(_BYTE *)(a1 + 9) == *((_BYTE *)v30 + 444)
    && v41 == *((_DWORD *)v30 + 112) )
  {
    AdapterByRequestLine = (__int64)v30;
    if ( !*((_BYTE *)v30 + 440) )
    {
      v33 = (v15 >> 12) + 1;
      v42 = v33;
      if ( v33 > *((_DWORD *)v30 + 58) )
        *((_DWORD *)v30 + 58) = v33;
    }
    goto LABEL_95;
  }
  if ( !HalpDmaIsAutomaticDomain((__int64 *)v30[64]) || *((_DWORD *)v30 + 130) == 3 || v49 == 3 )
  {
    ObfDereferenceObject(v30);
LABEL_88:
    KeSetEvent(&HalpNewAdapter, 0, 0);
    return 0LL;
  }
  *((_BYTE *)v30 + 524) = 1;
  ObfDereferenceObject(v30);
  v39 = 1;
LABEL_70:
  v32 = v42;
  if ( HalpDmaCvmConfiguration && v42 < dword_140FC0D44 )
  {
    v32 = dword_140FC0D44;
    v42 = dword_140FC0D44;
  }
  AdapterByRequestLine = HalpDmaAllocateChildAdapterV3(
                           v32,
                           v15,
                           v31,
                           v47,
                           *(_BYTE *)(a1 + 4),
                           v38,
                           v37,
                           v44,
                           v9,
                           v49,
                           a2,
                           0,
                           &v42);
  if ( !AdapterByRequestLine )
    goto LABEL_88;
  v7 = v40 == 0;
  *(_BYTE *)(AdapterByRequestLine + 524) = v39;
  if ( v7 )
  {
    *(_QWORD *)(AdapterByRequestLine + 528) = a2;
    HalpAddAdapterToList(AdapterByRequestLine);
  }
  else
  {
    HalpAddAdapterToSystemList(v28, AdapterByRequestLine);
    *(_DWORD *)(AdapterByRequestLine + 384) = v43;
    *(_DWORD *)(AdapterByRequestLine + 380) = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(AdapterByRequestLine + 368) = v28;
    *(_DWORD *)(AdapterByRequestLine + 452) = *(_DWORD *)(a1 + 24);
    ObReferenceObjectByPointer((PVOID)AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
  }
  if ( v42 )
  {
    *(_DWORD *)(AdapterByRequestLine + 232) = v42;
    v35 = 1;
  }
  else
  {
    *(_DWORD *)(AdapterByRequestLine + 232) = (v15 >> 12) + 1;
    v35 = 0;
  }
  *(_BYTE *)(AdapterByRequestLine + 440) = v35;
  *(_QWORD *)(AdapterByRequestLine + 312) = 0LL;
LABEL_95:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_96:
  *(_BYTE *)(AdapterByRequestLine + 443) = *(_BYTE *)(a1 + 7);
  *(_BYTE *)(AdapterByRequestLine + 444) = 0;
  if ( *(_DWORD *)a1 )
    *(_BYTE *)(AdapterByRequestLine + 444) = *(_BYTE *)(a1 + 9);
  if ( v49 != 2 || *(_BYTE *)(AdapterByRequestLine + 440) )
    v36 = *(_DWORD *)(AdapterByRequestLine + 232);
  else
    v36 = (v15 >> 12) + 1;
  *a4 = v36;
  *(_QWORD *)(AdapterByRequestLine + 304) = Mdl;
  return AdapterByRequestLine;
}
