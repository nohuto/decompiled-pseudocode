/*
 * XREFs of NvmeControllerUninitializeCQIoPolling @ 0x1400F5BD8
 * Callers:
 *     NvmeControllerInitializeCQIoPolling @ 0x1400F0530 (NvmeControllerInitializeCQIoPolling.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F1320 (NvmeControllerIoQueuesFreeResources.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeControllerUninitializeCQIoPolling(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _DWORD *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _KDPC *v8; // rcx

  v3 = a2;
  v4 = g_CpuInfo;
  if ( **(_BYTE **)(a1 + 1736) && *(_BYTE *)(a2 + 80) && *(_QWORD *)(a2 + 88) )
  {
    *(_DWORD *)(a2 + 84) = 0;
    v5 = 0LL;
    for ( *(_BYTE *)(a2 + 80) = 0; (unsigned int)v5 < v4[2]; v5 = (unsigned int)(v5 + 1) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v3 + 88) + 8 * v5);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 16);
        if ( v7 )
        {
          LOBYTE(a3) = 1;
          LOBYTE(a2) = 1;
          ExDeleteTimer(v7, a2, a3, 0LL);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 88) + 8 * v5) + 16LL) = 0LL;
        }
        v8 = *(struct _KDPC **)(*(_QWORD *)(*(_QWORD *)(v3 + 88) + 8 * v5) + 24LL);
        if ( v8 )
        {
          KeRemoveQueueDpc(v8);
          ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(v3 + 88) + 8 * v5) + 24LL), 0x51496152u);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 88) + 8 * v5) + 24LL) = 0LL;
        }
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v3 + 88) + 8 * v5), 0x51496152u);
        *(_QWORD *)(*(_QWORD *)(v3 + 88) + 8 * v5) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(v3 + 88), 0x51496152u);
    *(_QWORD *)(v3 + 88) = 0LL;
  }
}
