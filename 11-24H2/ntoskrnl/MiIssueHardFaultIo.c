/*
 * XREFs of MiIssueHardFaultIo @ 0x140351514
 * Callers:
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiPfCoalesceAndIssueIOs @ 0x140352778 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfIssueCoalesceCandidates @ 0x1403DAED4 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 *     SmPageRead @ 0x1402F6388 (SmPageRead.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiTransferFileExtent @ 0x1404BA3CC (MiTransferFileExtent.c)
 *     MiCopyImageExtentContents @ 0x1404C5964 (MiCopyImageExtentContents.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // esi
  char v16; // bl
  _KPROCESS *Process; // rdx
  signed __int32 Value; // eax
  signed __int32 v19; // ett
  struct _KEVENT *v20; // rsi
  int *v21; // r14
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // r8d
  unsigned __int64 v26; // r10
  unsigned int v27; // ebx

  v3 = *(_DWORD *)(a1 + 192);
  if ( (v3 & 0x400) != 0 )
  {
    v23 = a1 + 272;
    v24 = (a1 + 272) | 1;
    if ( (v3 & 0x20) == 0 )
      v24 = v23;
    v25 = v24;
    if ( (a3 & 1) != 0 )
    {
      v26 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v26 == 1 && (*(_DWORD *)(v26 + 80) & 0x800) != 0 )
        v25 = v24 | 2;
    }
    v20 = (struct _KEVENT *)(a1 + 32);
    v21 = (int *)(a1 + 80);
    v22 = SmPageRead(
            *(_QWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(*(_QWORD *)(a1 + 248) + 40LL) >> 43) & 0x3FFLL))
                      + 184LL),
            (int *)(a1 + 96),
            v25,
            (int)a1 + 32,
            a1 + 80);
LABEL_36:
    v27 = v22;
    if ( v22 < 0 )
    {
      *(_QWORD *)(a1 + 88) = 0LL;
      *v21 = v22;
      KeSetEvent(v20, 0, 0);
    }
    return v27;
  }
  if ( a2 )
  {
    if ( (*(_BYTE *)(**(_QWORD **)(a1 + 208) + 62LL) & 0xC) == 8 )
    {
      v7 = a1 + 272;
      if ( *(_QWORD *)(a1 + 256) )
        v7 = *(_QWORD *)(a1 + 256);
      MiCopyImageExtentContents(a1, v7, a2);
      v8 = *(unsigned int *)(v7 + 40);
      *(_DWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 88) = v8;
      KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
      return 0LL;
    }
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(a1 + 248);
  if ( *(__int64 *)(v10 + 40) >= 0 )
    goto LABEL_16;
  v11 = *(_QWORD *)(v10 + 16);
  if ( (v11 & 0x400) == 0 )
    goto LABEL_16;
  if ( qword_140E2DCC0 && (v11 & 0x10) == 0 )
    v11 &= ~qword_140E2DCC0;
  v12 = v11 >> 16;
  if ( (*(_BYTE *)(*(_QWORD *)v12 + 62LL) & 0xC) != 8 )
  {
LABEL_16:
    v15 = (v3 >> 3) & 4 | 1;
    if ( (v3 & 0x80000) == 0 )
      v15 = (v3 >> 3) & 4;
    if ( (v3 & 0x20) != 0 )
    {
      v16 = v15 | 2;
    }
    else
    {
      v16 = v15;
      if ( !a2 && (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 224)) == 7 )
        v16 = v15 | 2;
      Process = KeGetCurrentThread()->Process;
      Value = Process[3].StackCount.Value;
      while ( Value )
      {
        v19 = Value;
        Value = _InterlockedCompareExchange(&Process[3].StackCount.Value, Value - 1, Value);
        if ( v19 == Value )
        {
          v16 |= 8u;
          break;
        }
      }
    }
    v20 = (struct _KEVENT *)(a1 + 32);
    v21 = (int *)(a1 + 80);
    v22 = IoPageReadEx(*(PFILE_OBJECT *)(a1 + 200), a1 + 272, (_QWORD *)(a1 + 96), a1 + 32, a1 + 80, v16, 0LL);
    goto LABEL_36;
  }
  v13 = *(_QWORD *)(a1 + 256);
  v14 = a1 + 272;
  if ( v13 )
    v14 = v13;
  MiTransferFileExtent(v14, v12, *(_QWORD *)(a1 + 96), 0LL, a1 + 80);
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return *(unsigned int *)(a1 + 80);
}
