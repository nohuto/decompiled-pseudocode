/*
 * XREFs of NvmeAdapterSendControlAddNvmeController @ 0x14019E704
 * Callers:
 *     NvmeAdapterConnectControllerInternal @ 0x1400CD9D0 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterCreateAddNvmeController @ 0x1400CDD60 (NvmeAdapterCreateAddNvmeController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeCallMiniportAdapterControlSafe @ 0x1400716E8 (NvmeCallMiniportAdapterControlSafe.c)
 *     McTemplateK0qjzqsdqs_EtwWriteTransfer @ 0x1400CBAC4 (McTemplateK0qjzqsdqs_EtwWriteTransfer.c)
 *     NvmeAdapterInitializeControllerQueue @ 0x1400E3FF4 (NvmeAdapterInitializeControllerQueue.c)
 */

__int64 __fastcall NvmeAdapterSendControlAddNvmeController(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 Pool; // rax
  __int64 v5; // rdi
  int v6; // ebp
  unsigned __int16 v7; // si
  __int64 v8; // rdx
  int v9; // edx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // ax
  int v12; // ecx
  unsigned int v13; // eax
  ULONG ActiveProcessorCount; // eax
  unsigned __int16 v15; // ax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // eax

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_QWORD *)(a1 + 96);
  Pool = RaidAllocatePool(256LL, 166LL, 1179541842LL, *(_QWORD *)(v1 + 8));
  v5 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 10878977;
    *(_DWORD *)(Pool + 8) = 3;
    *(_DWORD *)(Pool + 12) = 65688;
    *(_WORD *)(Pool + 16) = 152;
    v7 = 32;
    *(_QWORD *)(Pool + 22) = *(_QWORD *)(v2 + 48);
    *(_QWORD *)(Pool + 30) = a1;
    *(_WORD *)(Pool + 46) = *(_WORD *)(a1 + 4);
    *(_DWORD *)(Pool + 54) = *(_DWORD *)(a1 + 36);
    *(_WORD *)(Pool + 48) = 32;
    if ( *(_DWORD *)(a1 + 572) == 1 )
      *(_DWORD *)(Pool + 50) = 65538;
    *(_OWORD *)(Pool + 66) = *(_OWORD *)(a1 + 760);
    *(_OWORD *)(Pool + 82) = *(_OWORD *)(a1 + 776);
    v6 = NvmeCallMiniportAdapterControlSafe(v1 + 168);
    if ( v6 < 0 )
    {
      if ( (byte_14017146A & 4) != 0 )
        McTemplateK0qjzqsdqs_EtwWriteTransfer(
          v2 + 60,
          v8,
          v1 + 1032,
          *(_DWORD *)(v1 + 56),
          v1 + 1032,
          *(const wchar_t **)(v1 + 1016),
          3,
          (const char *)(v2 + 60),
          v6,
          *(_DWORD *)(v5 + 98),
          (const char *)(v5 + 102));
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 572);
      *(_QWORD *)(a1 + 560) = *(_QWORD *)(v5 + 38);
      v10 = *(_WORD *)(v2 + 6);
      if ( !v10 )
      {
        v10 = 64;
        if ( v9 != 1 )
          v10 = 32;
      }
      *(_WORD *)(a1 + 6) = v10;
      v11 = *(_WORD *)(v5 + 48);
      if ( v11 )
      {
        if ( v11 >= v10 )
          v11 = v10;
        *(_WORD *)(a1 + 6) = v11;
      }
      if ( v9 == 1 )
      {
        v12 = 1024;
        *(_DWORD *)(a1 + 8) = 1024;
        v13 = *(unsigned __int16 *)(v5 + 50);
        if ( (_WORD)v13 )
        {
          if ( v13 < 0x400 )
            v12 = *(unsigned __int16 *)(v5 + 50);
          *(_DWORD *)(a1 + 8) = v12;
        }
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        if ( ActiveProcessorCount < 0x20 )
          v7 = ActiveProcessorCount;
        *(_WORD *)(a1 + 20) = v7;
        v15 = *(_WORD *)(v5 + 52);
        if ( v15 )
        {
          if ( v7 >= v15 )
            v7 = *(_WORD *)(v5 + 52);
          *(_WORD *)(a1 + 20) = v7;
        }
      }
      *(_DWORD *)(a1 + 1076) = 0;
      if ( (*(_DWORD *)(v5 + 18) & 1) != 0 )
      {
        v16 = *(_DWORD *)(*(_QWORD *)(v1 + 592) + 160LL);
        if ( v16 == -1 )
          v16 = NvmeKeepAliveTimeoutDefaultMillisecs;
        *(_DWORD *)(a1 + 1076) = v16;
        v17 = v16;
        v18 = *(_DWORD *)(v5 + 58);
        if ( v18 && v16 < v18 )
        {
          *(_DWORD *)(a1 + 1076) = v18;
          v17 = v18;
        }
        v19 = *(_DWORD *)(v5 + 62);
        if ( v19 && v17 > v19 )
          *(_DWORD *)(a1 + 1076) = v19;
      }
    }
    ExFreePoolWithTag((PVOID)v5, 0x464E6152u);
    if ( v6 >= 0 )
      NvmeAdapterInitializeControllerQueue(a1, 0, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
