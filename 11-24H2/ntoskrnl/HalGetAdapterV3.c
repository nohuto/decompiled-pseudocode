/*
 * XREFs of HalGetAdapterV3 @ 0x1407000B8
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
 *     HalpAddAdapterToSystemList @ 0x140552BA0 (HalpAddAdapterToSystemList.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x140552E34 (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpFindAdapterByRequestLine @ 0x140553020 (HalpFindAdapterByRequestLine.c)
 *     HalpFindDmaControllerByRequestLine @ 0x1405530D4 (HalpFindDmaControllerByRequestLine.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FCCC0 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpGetCacheCoherency @ 0x1406FD5C0 (HalpGetCacheCoherency.c)
 */

_QWORD *__fastcall HalGetAdapterV3(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v4; // r9
  bool v6; // cf
  bool v7; // zf
  unsigned int v8; // esi
  __int64 v9; // rbx
  _QWORD *AdapterByRequestLine; // rdi
  __int64 DmaControllerByRequestLine; // rax
  int v12; // ecx
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // al
  unsigned int v17; // r15d
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v20; // r13d
  unsigned __int64 v21; // rax
  bool v22; // al
  bool v23; // cl
  char v24; // dl
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // r8d
  unsigned int v28; // edx
  unsigned int v29; // edx
  __int64 v30; // r13
  __int64 *AdapterByDeviceObject; // rax
  __int64 *v32; // rsi
  unsigned int v33; // edi
  unsigned int v34; // ecx
  unsigned int v35; // eax
  char v37; // al
  int v38; // r15d
  char v39; // [rsp+70h] [rbp-19h] BYREF
  char v40; // [rsp+71h] [rbp-18h]
  char v41; // [rsp+72h] [rbp-17h]
  char v42; // [rsp+73h] [rbp-16h]
  unsigned int v43; // [rsp+74h] [rbp-15h]
  unsigned int v44; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v45; // [rsp+7Ch] [rbp-Dh]
  unsigned int v46; // [rsp+80h] [rbp-9h]
  __int64 v47; // [rsp+88h] [rbp-1h]
  PMDL Mdl; // [rsp+90h] [rbp+7h]
  char v49; // [rsp+F0h] [rbp+67h]
  int v51; // [rsp+100h] [rbp+77h]

  v4 = a2;
  v39 = 0;
  if ( HalpDmaCvmConfiguration )
    a3 = 0;
  Mdl = 0LL;
  v6 = *(_DWORD *)a1 < 3u;
  v7 = *(_DWORD *)a1 == 3;
  v8 = 64;
  v51 = a3;
  v41 = 0;
  if ( v7 )
  {
    v43 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    if ( !v6 || !a3 || !*(_BYTE *)(a1 + 4) )
      return 0LL;
    if ( *(_BYTE *)(a1 + 11) )
    {
      v43 = 64;
    }
    else if ( *(_BYTE *)(a1 + 8) || (v43 = 24, *(_BYTE *)(a1 + 5)) )
    {
      v43 = 32;
    }
  }
  if ( !a2 )
    return 0LL;
  v9 = 0LL;
  v45 = 0;
  AdapterByRequestLine = 0LL;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v42 = 0;
    v13 = 0LL;
    v47 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 56);
    v45 = *(_DWORD *)(a1 + 48);
    v42 = 1;
    DmaControllerByRequestLine = HalpFindDmaControllerByRequestLine(v45);
    v47 = DmaControllerByRequestLine;
    v13 = DmaControllerByRequestLine;
    if ( !DmaControllerByRequestLine )
      return 0LL;
    AdapterByRequestLine = HalpFindAdapterByRequestLine(DmaControllerByRequestLine, v12);
    if ( !AdapterByRequestLine && !HalpDmaControllerValidateRequestLineBinding(v13, a1, v14, v15) )
      return 0LL;
    v4 = a2;
  }
  v16 = *(_BYTE *)(a1 + 4);
  v17 = ((*(_DWORD *)(a1 + 32) & 0x7FFFFFFF) + 4095) & 0xFFFFF000;
  if ( v16 )
  {
    v18 = v43;
    v49 = *(_BYTE *)(a1 + 5);
    v46 = 0;
  }
  else
  {
    v19 = *(_DWORD *)(v13 + 48);
    v49 = 1;
    if ( v19 > 8 )
      v19 = 8;
    v18 = *(_DWORD *)(v13 + 76);
    v46 = v19;
    v43 = v18;
  }
  if ( v18 < 0x20 )
  {
    v40 = 0;
    v20 = 0;
    if ( !v16 )
      goto LABEL_29;
  }
  else
  {
    v20 = 1;
  }
  v40 = 1;
LABEL_29:
  HalpGetCacheCoherency(v47, v4, &v39);
  if ( v43 < 0x40 )
    v21 = (1LL << v43) - 1;
  else
    v21 = -1LL;
  v22 = v21 >= HalpMaximumPhysicalMemoryAddress;
  if ( HalpDmaCvmConfiguration )
  {
    v23 = 0;
  }
  else
  {
    v23 = v22;
    if ( v22 && v39 )
    {
      v24 = v49;
      if ( !v49 )
        goto LABEL_35;
      if ( !v51 || v51 == 2 )
      {
        v25 = 0;
        v44 = 0;
        v26 = 0;
        goto LABEL_54;
      }
    }
  }
  v24 = v49;
LABEL_35:
  if ( v20 )
  {
    if ( v24 && (v39 || !v23) )
      v8 = 512;
  }
  else
  {
    v8 = 16;
  }
  v25 = (v17 >> 12) + 1;
  v44 = v25;
  v27 = v25;
  if ( v25 > v8 )
  {
    v25 = v8;
    v27 = v8;
    v44 = v8;
  }
  v28 = dword_140FC3028;
  v26 = v27;
  if ( !v20 )
    v28 = dword_140FC2F28;
  if ( !v40 )
  {
    v29 = v28 >> 13;
    if ( v27 > v29 )
    {
      v25 = v29;
      v44 = v29;
      v26 = v29;
    }
  }
LABEL_54:
  if ( v39 )
    goto LABEL_57;
  Mdl = IoAllocateMdl(0LL, v26 << 12, 0, 0, 0LL);
  if ( !Mdl )
    return 0LL;
  v25 = v44;
LABEL_57:
  if ( AdapterByRequestLine )
  {
    if ( v25 > *((_DWORD *)AdapterByRequestLine + 58) )
      *((_DWORD *)AdapterByRequestLine + 58) = v25;
    AdapterByRequestLine[57] = *(_QWORD *)(a1 + 56);
    ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
    goto LABEL_96;
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  v30 = v47;
  if ( v42 )
  {
    AdapterByRequestLine = HalpFindAdapterByRequestLine(v47, v45);
    if ( AdapterByRequestLine )
    {
      if ( v44 > *((_DWORD *)AdapterByRequestLine + 58) )
        *((_DWORD *)AdapterByRequestLine + 58) = v44;
      AdapterByRequestLine[57] = *(_QWORD *)(a1 + 56);
      ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_95;
    }
  }
  AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(a2);
  v32 = AdapterByDeviceObject;
  if ( !AdapterByDeviceObject )
    goto LABEL_69;
  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject) != 3 )
  {
    ObfDereferenceObject(v32);
    v41 = 1;
LABEL_69:
    v33 = v43;
    goto LABEL_70;
  }
  v33 = v43;
  if ( *(_BYTE *)(a1 + 4)
    && *(_BYTE *)(a1 + 5) == *((_BYTE *)v32 + 442)
    && *(_BYTE *)(a1 + 9) == *((_BYTE *)v32 + 444)
    && v43 == *((_DWORD *)v32 + 112) )
  {
    AdapterByRequestLine = v32;
    if ( !*((_BYTE *)v32 + 440) )
    {
      v35 = (v17 >> 12) + 1;
      v44 = v35;
      if ( v35 > *((_DWORD *)v32 + 58) )
        *((_DWORD *)v32 + 58) = v35;
    }
    goto LABEL_95;
  }
  if ( !HalpDmaIsAutomaticDomain((__int64 *)v32[64]) || *((_DWORD *)v32 + 130) == 3 || v51 == 3 )
  {
    ObfDereferenceObject(v32);
LABEL_88:
    KeSetEvent(&HalpNewAdapter, 0, 0);
    return 0LL;
  }
  *((_BYTE *)v32 + 524) = 1;
  ObfDereferenceObject(v32);
  v41 = 1;
LABEL_70:
  v34 = v44;
  if ( HalpDmaCvmConfiguration && v44 < dword_140FC0AE4 )
  {
    v34 = dword_140FC0AE4;
    v44 = dword_140FC0AE4;
  }
  AdapterByRequestLine = HalpDmaAllocateChildAdapterV3(
                           v34,
                           v17,
                           v33,
                           v49,
                           *(_BYTE *)(a1 + 4),
                           v40,
                           v39,
                           v46,
                           v9,
                           v51,
                           a2,
                           0,
                           &v44);
  if ( !AdapterByRequestLine )
    goto LABEL_88;
  v7 = v42 == 0;
  *((_BYTE *)AdapterByRequestLine + 524) = v41;
  if ( v7 )
  {
    AdapterByRequestLine[66] = a2;
    HalpAddAdapterToList((__int64)AdapterByRequestLine);
  }
  else
  {
    HalpAddAdapterToSystemList(v30, (__int64)AdapterByRequestLine);
    *((_DWORD *)AdapterByRequestLine + 96) = v45;
    *((_DWORD *)AdapterByRequestLine + 95) = *(_DWORD *)(a1 + 16);
    AdapterByRequestLine[46] = v30;
    *((_DWORD *)AdapterByRequestLine + 113) = *(_DWORD *)(a1 + 24);
    ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
  }
  if ( v44 )
  {
    *((_DWORD *)AdapterByRequestLine + 58) = v44;
    v37 = 1;
  }
  else
  {
    *((_DWORD *)AdapterByRequestLine + 58) = (v17 >> 12) + 1;
    v37 = 0;
  }
  *((_BYTE *)AdapterByRequestLine + 440) = v37;
  AdapterByRequestLine[39] = 0LL;
LABEL_95:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_96:
  *((_BYTE *)AdapterByRequestLine + 443) = *(_BYTE *)(a1 + 7);
  *((_BYTE *)AdapterByRequestLine + 444) = 0;
  if ( *(_DWORD *)a1 )
    *((_BYTE *)AdapterByRequestLine + 444) = *(_BYTE *)(a1 + 9);
  if ( v51 != 2 || *((_BYTE *)AdapterByRequestLine + 440) )
    v38 = *((_DWORD *)AdapterByRequestLine + 58);
  else
    v38 = (v17 >> 12) + 1;
  *a4 = v38;
  AdapterByRequestLine[38] = Mdl;
  return AdapterByRequestLine;
}
