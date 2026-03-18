/*
 * XREFs of MiIssueHardFaultIo @ 0x140398DC4
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1402AA4C8 (MiPfCoalesceAndIssueIOs.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiPfIssueCoalesceCandidates @ 0x14047E4E8 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1403990B0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiTransferFileExtent @ 0x1404BEE98 (MiTransferFileExtent.c)
 *     MiCopyImageExtentContents @ 0x1404CC4F4 (MiCopyImageExtentContents.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d
  int v7; // eax
  int v8; // ecx
  int v9; // r8d
  struct _KEVENT *v10; // rsi
  NTSTATUS *v11; // r14
  __int64 v12; // rax
  NTSTATUS v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // esi
  char v22; // bl
  _KPROCESS *Process; // rdx
  signed __int32 Value; // eax
  signed __int32 v25; // ett
  unsigned __int64 v26; // r10
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 192);
  if ( (v3 & 0x400) != 0 )
  {
    v7 = a1 + 272;
    v8 = (a1 + 272) | 1;
    if ( (v3 & 0x20) == 0 )
      v8 = v7;
    v9 = v8;
    if ( (a3 & 1) != 0 )
    {
      v26 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v26 == 1 && (*(_DWORD *)(v26 + 80) & 0x800) != 0 )
        v9 = v8 | 2;
    }
    v10 = (struct _KEVENT *)(a1 + 32);
    v11 = (NTSTATUS *)(a1 + 80);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 40LL) >> 43;
    v29 = *(_DWORD *)(a1 + 96);
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)qword_140E2FF88 + (v12 & 0x3FF)) + 184LL) + 24LL),
            (unsigned int)&v29,
            v9,
            (int)a1 + 32,
            a1 + 80);
LABEL_6:
    v14 = v13;
    if ( v13 < 0 )
    {
      *(_QWORD *)(a1 + 88) = 0LL;
      *v11 = v13;
      KeSetEvent(v10, 0, 0);
    }
    return v14;
  }
  if ( !a2 )
  {
    v16 = *(_QWORD *)(a1 + 248);
    if ( *(__int64 *)(v16 + 40) < 0 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      if ( (v17 & 0x400) != 0 )
      {
        if ( qword_140E2DB80 && (v17 & 0x10) == 0 )
          v17 &= ~qword_140E2DB80;
        v18 = v17 >> 16;
        if ( (*(_BYTE *)(*(_QWORD *)v18 + 62LL) & 0xC) == 8 )
        {
          v19 = *(_QWORD *)(a1 + 256);
          v20 = a1 + 272;
          if ( v19 )
            v20 = v19;
          MiTransferFileExtent(v20, v18, *(_QWORD *)(a1 + 96), 0LL, a1 + 80);
          KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
          return *(unsigned int *)(a1 + 80);
        }
      }
    }
LABEL_20:
    v21 = (v3 >> 3) & 4 | 1;
    if ( (v3 & 0x80000) == 0 )
      v21 = (v3 >> 3) & 4;
    if ( (v3 & 0x20) != 0 )
    {
      v22 = v21 | 2;
    }
    else
    {
      v22 = v21;
      if ( !a2 && (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 224)) == 7 )
        v22 = v21 | 2;
      Process = KeGetCurrentThread()->Process;
      Value = Process[3].StackCount.Value;
      while ( Value )
      {
        v25 = Value;
        Value = _InterlockedCompareExchange(&Process[3].StackCount.Value, Value - 1, Value);
        if ( v25 == Value )
        {
          v22 |= 8u;
          break;
        }
      }
    }
    v10 = (struct _KEVENT *)(a1 + 32);
    v11 = (NTSTATUS *)(a1 + 80);
    v13 = IoPageReadEx(*(PFILE_OBJECT *)(a1 + 200), a1 + 272, (_QWORD *)(a1 + 96), a1 + 32, a1 + 80, v22, 0LL);
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(**(_QWORD **)(a1 + 208) + 62LL) & 0xC) != 8 )
    goto LABEL_20;
  v27 = a1 + 272;
  if ( *(_QWORD *)(a1 + 256) )
    v27 = *(_QWORD *)(a1 + 256);
  MiCopyImageExtentContents(a1, v27);
  v28 = *(unsigned int *)(v27 + 40);
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = v28;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 0LL;
}
