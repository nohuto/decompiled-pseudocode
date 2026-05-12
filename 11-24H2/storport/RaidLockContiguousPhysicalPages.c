/*
 * XREFs of RaidLockContiguousPhysicalPages @ 0x14008D3E8
 * Callers:
 *     RaUnitGetContiguousPhysicalAddressIoctl @ 0x140093884 (RaUnitGetContiguousPhysicalAddressIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     McTemplateK0quuujjzssszpxqq_EtwWriteTransfer @ 0x140087180 (McTemplateK0quuujjzssszpxqq_EtwWriteTransfer.c)
 *     WPP_SF_DqiLq @ 0x140090214 (WPP_SF_DqiLq.c)
 *     WPP_SF_qqdqiqLq @ 0x1400902F8 (WPP_SF_qqdqiqLq.c)
 */

__int64 __fastcall RaidLockContiguousPhysicalPages(__int64 a1, PHYSICAL_ADDRESS a2, unsigned int a3)
{
  SIZE_T v3; // r15
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned int v8; // esi
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  void *v12; // r12
  __int64 v13; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v16; // r14
  __int64 Pool; // rax
  __int64 v18; // [rsp+90h] [rbp-68h]
  __int64 v19; // [rsp+B8h] [rbp-40h]
  union _SLIST_HEADER *ListHead; // [rsp+118h] [rbp+20h]

  v3 = a3;
  v18 = *(_QWORD *)(a1 + 8);
  v19 = a1 + 24;
  v6 = *(_QWORD *)(a1 + 24) + 288LL;
  ListHead = (union _SLIST_HEADER *)v6;
  v7 = 0LL;
  v8 = 0;
  v9 = MmMapIoSpace(a2, a3, MmCached);
  v12 = v9;
  if ( !v9 )
  {
    v8 = -1073741670;
LABEL_3:
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))WPP_SF_DqiLq)(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        v8,
        v6,
        (PHYSICAL_ADDRESS)a2.QuadPart,
        v3,
        v18);
    }
    goto LABEL_7;
  }
  Mdl = IoAllocateMdl(v9, v3, 0, 0, 0LL);
  v16 = Mdl;
  if ( !Mdl )
  {
LABEL_11:
    MmUnmapIoSpace(v12, v3);
    v8 = -1073741801;
    v6 = (__int64)ListHead;
    goto LABEL_3;
  }
  MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
  Pool = RaidAllocatePool(64LL, 48LL, 1347182930LL, v18);
  v7 = Pool;
  if ( !Pool )
  {
    MmUnlockPages(v16);
    IoFreeMdl(v16);
    goto LABEL_11;
  }
  *(_QWORD *)(Pool + 16) = v16;
  *(_QWORD *)(Pool + 24) = v12;
  *(_DWORD *)(Pool + 32) = v3;
  ExpInterlockedPushEntrySList(ListHead, (PSLIST_ENTRY)Pool);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))WPP_SF_qqdqiqLq)(
      WPP_GLOBAL_Control->AttachedDevice,
      (unsigned int)*(__int16 *)(*(_QWORD *)(v7 + 16) + 10LL),
      *(_QWORD *)(v7 + 16),
      v7,
      *(_QWORD *)(v7 + 16),
      *(__int16 *)(*(_QWORD *)(v7 + 16) + 10LL),
      ListHead,
      (PHYSICAL_ADDRESS)a2.QuadPart,
      *(_QWORD *)(v7 + 24),
      *(_DWORD *)(v7 + 32),
      v18);
  }
LABEL_7:
  if ( (byte_140171463 & 0x40) != 0 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)v19 + 4720LL);
    LOBYTE(v13) = *(_BYTE *)(a1 + 104);
    McTemplateK0quuujjzssszpxqq_EtwWriteTransfer(
      v13,
      a1 + 177,
      a1 + 168,
      *(_DWORD *)(*(_QWORD *)v19 + 56LL),
      v13,
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a1 + 2104,
      *(_QWORD *)v19 + 5064LL,
      *(const wchar_t **)(*(_QWORD *)v19 + 4720LL),
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      *(const wchar_t **)(*(_QWORD *)v19 + 5080LL),
      *(_QWORD *)(v7 + 24),
      a2.QuadPart,
      *(_DWORD *)(v7 + 32),
      v8);
  }
  return v8;
}
