/*
 * XREFs of NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E2530
 * Callers:
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400E4750 (NvmeAdapterNvmeControllerBackgroundWork.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E2FFC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeControllerAddNvmeNamespaceToList @ 0x1400EA460 (NvmeControllerAddNvmeNamespaceToList.c)
 *     NvmeControllerGetNamespace @ 0x1400EEC74 (NvmeControllerGetNamespace.c)
 *     NvmeNamespaceIsInactive @ 0x1400F9ED8 (NvmeNamespaceIsInactive.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x1400FB03C (NvmeControllerDeleteNvmeNamespace.c)
 *     NvmeNamespaceProcessQueueRequests @ 0x140107114 (NvmeNamespaceProcessQueueRequests.c)
 *     NvmeNamespaceUnlockIoQueue @ 0x1401152B4 (NvmeNamespaceUnlockIoQueue.c)
 */

void __fastcall NvmeAdapterFabricControllerUpdateNamespace(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // edi
  __int64 v6; // r8
  __int64 v7; // rsi
  unsigned int v8; // eax
  char v9; // si
  int v10; // eax
  char *v11; // rdi
  int v12; // eax
  int ControllerIdentifyData; // eax
  __int64 *v14; // r14
  PVOID P[2]; // [rsp+A0h] [rbp-28h] BYREF
  __int64 Namespace; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a2;
  P[0] = 0LL;
  Namespace = NvmeControllerGetNamespace(a1, a2);
  v7 = Namespace;
  if ( Namespace )
  {
    ControllerIdentifyData = NvmeAdapterGetControllerIdentifyData(a1, v3, 0, 0, *(_BYTE *)(Namespace + 60), (__int64)P);
    v14 = (__int64 *)P[0];
    if ( ControllerIdentifyData < 0 || (unsigned __int8)NvmeNamespaceIsInactive(P[0]) )
    {
      *(_QWORD *)(v7 + 112) &= ~2uLL;
      NvmeNamespaceProcessQueueRequests(v7);
      *a3 = 1;
      StorEtwNvmeControllerEvent(
        a1,
        1,
        4,
        (__int64)L"UpdateNamespace - Namespace removed",
        L"NSID",
        v3,
        &word_140150F48,
        0,
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
    else
    {
      StorEtwNvmeControllerEvent(
        a1,
        1,
        4,
        (__int64)L"UpdateNamespace - Namespace updated",
        L"NSID",
        v3,
        L"Previous NSZE",
        **(_QWORD **)(v7 + 176),
        L"New NSZE",
        *v14,
        L"Previous NCAP",
        *(_QWORD *)(*(_QWORD *)(v7 + 176) + 8LL),
        L"New NCAP",
        v14[1],
        L"Previous NUSE",
        *(_QWORD *)(*(_QWORD *)(v7 + 176) + 16LL),
        L"New NUSE",
        v14[2],
        (void *)&word_140150F48,
        0);
      _InterlockedExchange64(*(volatile __int64 **)(v7 + 176), *v14);
      _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v7 + 176) + 8LL), v14[1]);
      _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v7 + 176) + 16LL), v14[2]);
      v14 = (__int64 *)P[0];
    }
    if ( v14 )
      ExFreePoolWithTag(v14, 0x52436152u);
  }
  else
  {
    v8 = *(unsigned __int16 *)(a1 + 24);
    v9 = v3;
    if ( v3 <= v8 )
    {
      v10 = NvmeControllerCreateNvmeNamespace(a1, v3, v6, &Namespace);
      if ( v10 >= 0 )
      {
        v11 = (char *)Namespace;
        v12 = NvmeControllerAddNvmeNamespaceToList(a1, Namespace);
        if ( v12 >= 0 )
        {
          NvmeNamespaceUnlockIoQueue(v11);
          StorEtwNvmeControllerEvent(
            a1,
            1,
            4,
            (__int64)L"UpdateNamespace - Namespace added",
            L"NSID",
            v9,
            L"PathId",
            v11[100],
            L"TargetId",
            v11[101],
            L"Lun",
            v11[102],
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0);
          *a3 = 1;
        }
        else
        {
          StorEtwNvmeControllerEvent(
            a1,
            1,
            3,
            (__int64)L"UpdateNamespace - Add namespace failure",
            L"NSID",
            v9,
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
          NvmeControllerDeleteNvmeNamespace(&Namespace);
        }
      }
      else
      {
        StorEtwNvmeControllerEvent(
          a1,
          1,
          3,
          (__int64)L"UpdateNamespace - Create namespace failure",
          L"NSID",
          v3,
          L"Status",
          v10,
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
    else
    {
      StorEtwNvmeControllerEvent(
        a1,
        1,
        3,
        (__int64)L"UpdateNamespace - Skip namespace",
        L"NN",
        *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
        L"NamespaceCount",
        v8,
        L"NSID",
        v3,
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
