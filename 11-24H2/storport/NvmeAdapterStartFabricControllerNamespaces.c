/*
 * XREFs of NvmeAdapterStartFabricControllerNamespaces @ 0x1400E7E14
 * Callers:
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400E4750 (NvmeAdapterNvmeControllerBackgroundWork.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E2FFC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeControllerAddNvmeNamespaceToList @ 0x1400EA460 (NvmeControllerAddNvmeNamespaceToList.c)
 *     NvmeControllerGetNamespace @ 0x1400EEC74 (NvmeControllerGetNamespace.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x1400FB03C (NvmeControllerDeleteNvmeNamespace.c)
 *     NvmeNamespaceUnlockIoQueue @ 0x1401152B4 (NvmeNamespaceUnlockIoQueue.c)
 */

void __fastcall NvmeAdapterStartFabricControllerNamespaces(__int64 a1)
{
  unsigned __int16 v2; // r14
  unsigned int v3; // edi
  int ControllerIdentifyData; // eax
  _DWORD *v5; // rsi
  unsigned __int16 i; // cx
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  char *v13; // r13
  int v14; // eax
  char v15; // r9
  char v16; // [rsp+F0h] [rbp+8h]
  char v17; // [rsp+F8h] [rbp+10h]
  char *v18; // [rsp+100h] [rbp+18h] BYREF
  PVOID P; // [rsp+108h] [rbp+20h] BYREF

  P = 0LL;
  v18 = 0LL;
  v2 = 0;
  v16 = 0;
  v3 = 0;
  v17 = 0;
  ControllerIdentifyData = NvmeAdapterGetControllerIdentifyData(a1, 0, 2, 0, 0, &P);
  v5 = P;
  if ( ControllerIdentifyData >= 0 )
  {
    for ( i = 0; i < 0x400u; ++i )
    {
      v7 = *((_DWORD *)P + i);
      if ( !v7 )
        break;
      if ( v7 <= v3 || v7 > *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL) )
      {
        *(_QWORD *)(a1 + 136) = *(_QWORD *)(a1 + 136) & 0xFFFFFFFFFFFAFFFFuLL | 0x40000;
        StorEtwNvmeControllerEvent(
          a1,
          1,
          2,
          (__int64)L"StartNamespaces - Invalid ids list",
          L"NN",
          *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
          L"CurrentMaxNSID",
          v3,
          L"NSID",
          v5[i],
          &word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0);
        goto LABEL_26;
      }
      v17 = v7;
      v3 = v7;
    }
    v8 = *(_QWORD *)(a1 + 136);
    if ( i )
    {
      *(_QWORD *)(a1 + 136) = v8 & 0xFFFFFFFFFFFDFFFFuLL;
      do
      {
        v9 = (unsigned int)v5[v2];
        if ( !(_DWORD)v9 )
          break;
        v10 = *(unsigned __int16 *)(a1 + 24);
        if ( (unsigned int)v9 <= v10 )
        {
          if ( !NvmeControllerGetNamespace(a1, v9) )
          {
            v12 = NvmeControllerCreateNvmeNamespace(a1, (unsigned int)v5[v2], v11, &v18);
            if ( v12 >= 0 )
            {
              v13 = v18;
              v14 = NvmeControllerAddNvmeNamespaceToList(a1, v18);
              if ( v14 >= 0 )
              {
                NvmeNamespaceUnlockIoQueue(v13);
                StorEtwNvmeControllerEvent(
                  a1,
                  1,
                  4,
                  (__int64)L"StartNamespaces - Namespace added",
                  L"NSID",
                  v5[v2],
                  L"PathId",
                  v13[100],
                  L"TargetId",
                  v13[101],
                  L"Lun",
                  v13[102],
                  (void *)&word_140150F48,
                  v15,
                  (void *)&word_140150F48,
                  v15,
                  (void *)&word_140150F48,
                  v15,
                  (void *)&word_140150F48,
                  v15);
                v18 = 0LL;
                ++v16;
              }
              else
              {
                StorEtwNvmeControllerEvent(
                  a1,
                  1,
                  3,
                  (__int64)L"StartNamespaces - Add namespace failure",
                  L"NSID",
                  v5[v2],
                  L"Status",
                  v14,
                  &word_140150F48,
                  0,
                  &word_140150F48,
                  0,
                  (void *)&word_140150F48,
                  0,
                  (void *)&word_140150F48,
                  0,
                  (void *)&word_140150F48,
                  0,
                  (void *)&word_140150F48,
                  0);
                NvmeControllerDeleteNvmeNamespace(&v18);
              }
            }
            else
            {
              StorEtwNvmeControllerEvent(
                a1,
                1,
                3,
                (__int64)L"StartNamespaces - Create namespace failure",
                L"NSID",
                v5[v2],
                L"Status",
                v12,
                &word_140150F48,
                0,
                &word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0);
            }
          }
        }
        else
        {
          StorEtwNvmeControllerEvent(
            a1,
            1,
            3,
            (__int64)L"StartNamespaces - Skip namespace",
            L"NN",
            *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
            L"NamespaceCount",
            v10,
            L"NSID",
            v9,
            &word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0);
        }
        ++v2;
      }
      while ( v2 < 0x400u );
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 32LL), BusRelations);
      LOBYTE(v2) = v16;
    }
    else
    {
      *(_QWORD *)(a1 + 136) = v8 | 0x20000;
    }
    StorEtwNvmeControllerEvent(
      a1,
      1,
      4,
      (__int64)L"StartNamespaces completed",
      L"NN",
      *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
      L"MaxNSID",
      v17,
      L"Count",
      v2,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
    *(_QWORD *)(a1 + 136) &= ~0x10000uLL;
  }
  else
  {
    StorEtwNvmeControllerEvent(
      a1,
      1,
      3,
      (__int64)L"StartNamespaces - getting active namespace ids failed",
      L"NtStatus",
      ControllerIdentifyData,
      L"NN",
      *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
  }
LABEL_26:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x52436152u);
}
