/*
 * XREFs of VidSchiProcessVsyncCompletedFlipEntry @ 0x140008C10
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1400080A0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x14005451C (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14000BF58 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14000C610 (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14003A8E8 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 */

_BYTE *__fastcall VidSchiProcessVsyncCompletedFlipEntry(
        struct HwQueueStagingList *a1,
        __int64 *a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6)
{
  int v6; // r11d
  struct HwQueueStagingList *v7; // r12
  _DWORD *v8; // rdi
  __int64 v9; // r13
  __int64 v11; // rbx
  int v12; // ecx
  unsigned int v13; // esi
  __int64 v14; // r15
  unsigned int v15; // ebp
  __int64 v16; // rdi
  unsigned int v17; // eax
  int v18; // edx
  unsigned int v19; // r8d
  int v20; // r10d
  int v21; // ebp
  _BYTE *result; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r15
  struct _VIDSCH_GLOBAL *v30; // rdx
  unsigned __int16 v31; // r9
  __int64 v32; // rax
  int v33; // ecx
  unsigned int v34; // eax
  int v35; // edx
  unsigned int v36; // [rsp+50h] [rbp-68h]
  __int64 v37; // [rsp+58h] [rbp-60h]
  __int64 v38; // [rsp+60h] [rbp-58h]
  int v40; // [rsp+C8h] [rbp+10h]

  v6 = *((_DWORD *)a2 + 8);
  v7 = a1;
  v8 = a4;
  v9 = *a2;
  v11 = a2[3];
  v12 = 4673;
  v38 = 0LL;
  v13 = ((_BYTE)v6 + 1) & 0x3F;
  v36 = *((_DWORD *)a2 + 4);
  v14 = *(_QWORD *)(*a2 + 8LL * v36 + 3432);
  v15 = *(_DWORD *)(v11 + 68);
  v40 = v6;
  v37 = v14;
  if ( v15 != v13 )
  {
    do
    {
      v16 = 1400LL * v15 + v11 + 120;
      v17 = *(_DWORD *)(v16 + 1052);
      if ( v17 > 0xC || !_bittest(&v12, v17) )
      {
        v24 = *(_QWORD *)(v16 + 1320);
        v25 = a2[8];
        *(_QWORD *)(v16 + 1128) = a2[5];
        *(_QWORD *)(v16 + 1144) = a2[7];
        v26 = v24;
        *(_DWORD *)(v16 + 1052) = 11;
        if ( !v24 )
          v26 = a2[6];
        *(_QWORD *)(v16 + 1112) = v26;
        v27 = v24;
        if ( !v24 )
          v27 = v25;
        *(_QWORD *)(v16 + 1136) = v27;
        if ( *(_BYTE *)(v9 + 59) )
        {
          v28 = a2[6];
          v29 = *(_QWORD *)(v16 + 1104);
          if ( v29 > v28 || v29 > v24 )
          {
            ++g_HwFlipQueueScheduleErrorCount;
            if ( g_BreakOnHwFlipQueueScheduleErrors && !KdRefreshDebuggerNotPresent() )
            {
              DbgPrintEx(
                0x65u,
                0,
                "\n"
                "The GPU Scheduler detected driver completing flip request prior to its TargetFlipTime.\n"
                "We broke into the debugger to allow a chance for debugging this issue.\n"
                "TargetFlipTime            = 0x%I64x.\n"
                "LogReportedCompletionTime = 0x%I64x.\n"
                "DpcFrameTime              = 0x%I64x.\n"
                "We broke into the debugger to allow a chance for debugging this issue.\n"
                "Run \"!dxgkdx.flipentry 0x%p 0n%d\" command to display the flip entry.\n"
                "To disable debug breaks on these failures, run \"?? dxgmms2!g_BreakOnHwFlipQueueScheduleErrors=0\" comma"
                "nd,\n"
                "or \"ed 0x%p 0\"\n"
                "\n",
                v29,
                *(_QWORD *)(1400LL * v15 + v11 + 1440),
                v28,
                (const void *)v11,
                v15,
                (const void *)&g_BreakOnHwFlipQueueScheduleErrors);
              __debugbreak();
            }
          }
          v7 = a1;
          v14 = v37;
        }
        *(_QWORD *)(v16 + 1120) = a2[9];
        LODWORD(v38) = VidSchiDecrementPendingFlipsForFlipEntry(
                         (struct _VIDSCH_GLOBAL *)v9,
                         (struct _VIDSCH_PRESENT_INFO *)v14,
                         (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(1400LL * v15 + v11 + 120));
        HIDWORD(v38) = *(_DWORD *)(v16 + 1048);
        if ( (*(_DWORD *)(v16 + 1152) & 0x10) != 0 )
          v31 = *(_WORD *)(v14 + 44296) & (**(_WORD **)(v16 + 1192) | (**(_DWORD **)(v16 + 1192) >> 10)) & 0x3FF;
        else
          v31 = *(_WORD *)(v14 + 44296);
        VidSchiUnreferenceDisplayingAllocations(v7, v30, (struct _VIDSCH_PRESENT_INFO *)v14, v31);
        VidSchiReferenceDisplayingAllocationsForThisEntry(v7);
        v12 = 4673;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 16) + 444LL) & 0x200) != 0 && *(_QWORD *)(v11 + 48) == v16 )
        {
          *(_DWORD *)(v11 + 44) = 0;
          *(_QWORD *)(v11 + 48) = 0LL;
        }
      }
      v15 = ((_BYTE)v15 + 1) & 0x3F;
    }
    while ( v15 != v13 );
    v8 = a4;
    v6 = v40;
  }
  v18 = *(_DWORD *)(v11 + 72);
  v19 = v13;
  v20 = *(_DWORD *)(v11 + 68);
  v21 = 4673;
  while ( v13 != (((_BYTE)v18 + 1) & 0x3F) )
  {
    v34 = *(_DWORD *)(1400LL * v13 + v11 + 1172);
    if ( v34 > 0xC || !_bittest(&v21, v34) )
    {
      v19 = v13;
      break;
    }
    v13 = ((_BYTE)v13 + 1) & 0x3F;
  }
  *(_DWORD *)(v11 + 68) = v19;
  if ( v18 == v6 )
  {
    *(_DWORD *)(v11 + 72) = v19;
    LOBYTE(v18) = v19;
  }
  if ( !*(_BYTE *)(v9 + 59) && v19 != (((_BYTE)v18 + 1) & 0x3F) )
  {
    do
    {
      v32 = 1400LL * v19;
      v33 = *(_DWORD *)(v32 + v11 + 1172);
      if ( v33 == 15 || v33 == 5 )
      {
        if ( (*(_DWORD *)(v32 + v11 + 1272) & 0x10) != 0 )
          v35 = (**(_DWORD **)(v32 + v11 + 1312) | (**(_DWORD **)(v32 + v11 + 1312) >> 10)) & 0x3FF;
        else
          v35 = (1 << *(_DWORD *)(v9 + 152)) - 1;
        *(_DWORD *)(v14 + 3248) |= v35;
      }
      v19 = ((_BYTE)v19 + 1) & 0x3F;
    }
    while ( v19 != (((unsigned __int8)*(_DWORD *)(v11 + 72) + 1) & 0x3F) );
    v8 = a4;
  }
  result = (_BYTE *)VidSchiCompleteFlipEntry(v7, v9, v36, v11, v20, v6, 0, 0LL);
  *a5 = (_DWORD)result;
  if ( (_DWORD)result )
  {
    v23 = (unsigned int)*v8;
    *(_QWORD *)(a3 + 8 * v23) = v38;
    *v8 = v23 + 1;
    result = a6;
    *a6 = 1;
  }
  return result;
}
