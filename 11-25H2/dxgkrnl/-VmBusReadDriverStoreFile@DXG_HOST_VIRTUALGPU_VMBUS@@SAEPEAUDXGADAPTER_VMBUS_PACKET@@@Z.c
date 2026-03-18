/*
 * XREFs of ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220B40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B58 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z @ 0x1401C946C (-ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z.c)
 *     MapGpadl @ 0x14022B7C0 (MapGpadl.c)
 *     UnmapGpadl @ 0x14022B970 (UnmapGpadl.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReadDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  union _LARGE_INTEGER *v4; // rsi
  struct _KTHREAD **v5; // rdx
  union _LARGE_INTEGER *v6; // rcx
  LONG *p_HighPart; // rdx
  _QWORD *v8; // r11
  ULONG *v9; // r14
  PMDL v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  PVOID MappedSystemVa; // rdx
  PVOID v14; // rax
  _BYTE v15[24]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v16[24]; // [rsp+68h] [rbp-18h] BYREF
  int CurrentFile; // [rsp+B0h] [rbp+30h] BYREF
  PMDL MemoryDescriptorList; // [rsp+B8h] [rbp+38h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v15,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5923;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5923LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    return 0;
  }
  v4 = (union _LARGE_INTEGER *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( v4 )
  {
    v5 = (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 56LL);
    MemoryDescriptorList = 0LL;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, v5);
    if ( *(_QWORD *)(*((_QWORD *)a1 + 10) + 336LL) )
    {
      v9 = (ULONG *)&v4[4];
      CurrentFile = MapGpadl(*((_QWORD *)a1 + 12), (unsigned int)v4[4].HighPart, v4[4].LowPart, &MemoryDescriptorList);
      v6 = v4 + 4;
      p_HighPart = &v4[4].HighPart;
      v8 = (_QWORD *)((char *)a1 + 96);
      if ( CurrentFile >= 0 )
      {
        v10 = MemoryDescriptorList;
        v11 = *v9;
        if ( (unsigned int)v11 <= MemoryDescriptorList->ByteCount )
        {
          v12 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 336LL) + 1584LL);
          v6 = v4 + 4;
          if ( v11 <= v12 && v4[3].QuadPart <= v12 - v11 )
          {
            if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
            {
              MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
            }
            else
            {
              v14 = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
              v10 = MemoryDescriptorList;
              MappedSystemVa = v14;
            }
            if ( MappedSystemVa )
            {
              CurrentFile = CDriverStoreCopy::ReadCurrentFile(
                              *(const WCHAR **)(*((_QWORD *)a1 + 10) + 336LL),
                              MappedSystemVa,
                              v4[3],
                              *v9);
              v6 = v4 + 4;
              p_HighPart = &v4[4].HighPart;
              v8 = (_QWORD *)((char *)a1 + 96);
              goto LABEL_16;
            }
            CurrentFile = -1073741801;
            v6 = v4 + 4;
            p_HighPart = &v4[4].HighPart;
            v8 = (_QWORD *)((char *)a1 + 96);
          }
        }
LABEL_17:
        if ( v10 )
          UnmapGpadl(*v8, (unsigned int)*p_HighPart, v6->LowPart, v10);
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &CurrentFile, 4u);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
        v2 = 1;
        goto LABEL_20;
      }
    }
    else
    {
      CurrentFile = -1073741811;
      v6 = v4 + 4;
      p_HighPart = &v4[4].HighPart;
      v8 = (_QWORD *)((char *)a1 + 96);
    }
LABEL_16:
    v10 = MemoryDescriptorList;
    goto LABEL_17;
  }
LABEL_20:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  return v2;
}
