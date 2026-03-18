/*
 * XREFs of ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011550
 * Callers:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400112F0 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011A80 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?VidMmCheckPrimaryAllocationReferences@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_PRIMARIES_REFERENCES@@_N@Z @ 0x140034E50 (-VidMmCheckPrimaryAllocationReferences@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_PRIMARIES_REFERENCES@@_N@.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140034F40 (McTemplateK0pp_EtwWriteTransfer.c)
 *     ?VidSchiHwQueueFull@@YA_NPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140036188 (-VidSchiHwQueueFull@@YA_NPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

bool __fastcall VidSchiPacketBlockedOnWaitCondition(struct _VIDSCH_QUEUE_PACKET *a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx

  v1 = (_QWORD *)*((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1[5] + 8LL);
  v4 = *(_QWORD *)(v3 + 32);
  if ( *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0)
    || *(_DWORD *)(v4 + 3244) )
  {
    v16 = v1[3];
    v17 = v1 + 3;
    if ( !v16 )
      return 0;
    if ( *(_QWORD **)(v16 + 8) == v17 )
    {
      v18 = (_QWORD *)v1[4];
      if ( (_QWORD *)*v18 == v17 )
      {
        *v18 = v16;
        *(_QWORD *)(v16 + 8) = v18;
        *v17 = 0LL;
        v1[4] = 0LL;
        return 0;
      }
    }
    goto LABEL_33;
  }
  v5 = *((_DWORD *)a1 + 12);
  if ( v5 )
  {
    if ( v5 == 4 )
      return (*((_BYTE *)a1 + 752) & 1) == 0;
    return v5 == 8 && VidSchiHwQueueFull(*((struct VIDSCH_HW_QUEUE **)a1 + 12));
  }
  if ( (*((_DWORD *)a1 + 16) & 8) != 0 )
    return VidSchiHwQueueFull(*((struct VIDSCH_HW_QUEUE **)a1 + 12));
  if ( (unsigned int)VidMmCheckPrimaryAllocationReferences(
                       *(const struct VIDMM_GLOBAL **)(*(_QWORD *)(v4 + 8) + 768LL),
                       (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 952),
                       *(_DWORD *)(v3 + 1832) == 0) != -1071775486 )
  {
LABEL_19:
    v10 = v1[3];
    v11 = v1 + 3;
    if ( !v10 )
    {
LABEL_23:
      *((_DWORD *)a1 + 16) |= 8u;
      return VidSchiHwQueueFull(*((struct VIDSCH_HW_QUEUE **)a1 + 12));
    }
    if ( *(_QWORD **)(v10 + 8) == v11 )
    {
      v12 = (_QWORD *)v1[4];
      if ( (_QWORD *)*v12 == v11 )
      {
        *v12 = v10;
        *(_QWORD *)(v10 + 8) = v12;
        *v11 = 0LL;
        v1[4] = 0LL;
        goto LABEL_23;
      }
    }
LABEL_33:
    __fastfail(3u);
  }
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 2632LL) && !*(_DWORD *)(v3 + 1832) )
  {
    if ( (byte_140081241 & 1) != 0 )
    {
      v9 = *(_QWORD *)(v3 + 8);
      if ( !v9 )
        v9 = v3;
      McTemplateK0pp_EtwWriteTransfer(v7, &EventFrontBufferRenderingAllowed, v8, *(_QWORD *)(v4 + 16), v9);
    }
    ++*(_QWORD *)(v4 + 7080);
    goto LABEL_19;
  }
  if ( v1[4] )
    return 1;
  v13 = v1 + 3;
  v14 = *(_QWORD *)(*(_QWORD *)(v1[5] + 16LL) + 24LL) + 3768LL;
  v15 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(v1[5] + 16LL) + 24LL) + 3776LL);
  if ( *v15 != (__int64 *)v14 )
    goto LABEL_33;
  *v13 = v14;
  v1[4] = v15;
  *v15 = v13;
  *(_QWORD *)(v14 + 8) = v13;
  return 1;
}
