/*
 * XREFs of VidSchSubmitCommandToHwQueue @ 0x140048F00
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1400118C0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x14001DEC8 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400228C0 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140027598 (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z @ 0x1400547AC (-VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z.c)
 *     memmove @ 0x140056040 (memmove.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x1400D327C (VidSchiEnsureHwFlipQueueLog.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E4CE0 (VidSchiAllocateHwQueuePacket.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1400EAF40 (VidSchiEnsureRootPageTableUpdated.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchSubmitCommandToHwQueue(__int64 a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v2; // rbp
  _BYTE *v3; // r14
  __int64 v4; // r9
  __int64 v5; // r13
  __int64 v6; // rdi
  unsigned int v7; // esi
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // r8
  __int64 HwQueuePacket; // rbx
  unsigned __int32 v12; // r15d
  bool v13; // zf
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v16; // eax
  char v17; // cl
  int v18; // r12d
  __int64 v19; // r8
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // rcx
  void *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  v4 = a1;
  v30 = v2;
  v5 = *(_QWORD *)(v2 + 8);
  v6 = *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(v5 + 204) || (v7 = 0, _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0)) )
  {
    WdLogSingleEntry2(3LL, v5, -1071775232LL);
    result = 3223192064LL;
    WdLogGlobalForLineNumber = 5726;
    return result;
  }
  v32 = *(_QWORD *)a2;
  v8 = v32;
  if ( (v32 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v5, (struct _VIDSCH_SUBMIT_FLAGS *)&v32);
    if ( (int)result < 0 )
      return result;
    v8 = v32;
    v4 = a1;
  }
  if ( (v8 & 4) != 0 && (v8 & 0x800000) == 0 && *(_BYTE *)(v6 + 59) )
  {
    v10 = 600LL;
    if ( !v3[356] )
      v10 = 496LL;
    a2 = (struct VIDSCH_SUBMIT_DATA2 *)(*(_DWORD *)&v3[v10] & 0xFFF003FF | ((((unsigned __int16)(1 << *(_DWORD *)(v6 + 152))
                                                                            - 1) & 0x3FE) << 10));
    *(_DWORD *)&v3[v10] = (_DWORD)a2;
  }
  LOBYTE(a2) = 1;
  HwQueuePacket = VidSchiAllocateHwQueuePacket(v4, a2);
  v12 = 2;
  *(_DWORD *)HwQueuePacket = 895576406;
  v13 = (v32 & 0x40000) == 0;
  *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(HwQueuePacket + 52) = 2;
  *(_DWORD *)(HwQueuePacket + 64) = 0;
  if ( v13 )
  {
    if ( ((*((_DWORD *)v3 + 30) - 3) & 0xFFFFFFFD) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 48) = 0;
      VidSchiEnsureRootPageTableUpdated((void *)v2);
    }
    else
    {
      *(_DWORD *)(HwQueuePacket + 48) = 3;
      v14 = *((_DWORD *)v3 + 29);
      if ( v14 != -1 )
      {
        v15 = *((_DWORD *)v3 + 150);
        v2 = ((unsigned __int16)v15 | (unsigned __int16)(v15 >> 10)) & 0x3FF;
        if ( (((unsigned __int16)v15 | (unsigned __int16)(v15 >> 10)) & 0x3FF) != 0 )
        {
          while ( 1 )
          {
            v13 = !_BitScanForward((unsigned int *)&v16, v2);
            v17 = -1;
            if ( !v13 )
              v17 = v16;
            v12 = v17;
            if ( *(_BYTE *)(v6 + 59) )
            {
              v18 = VidSchiEnsureHwFlipQueueLog((struct _VIDSCH_GLOBAL *)v6, v14, v17);
              if ( v18 < 0 )
              {
                VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)a1, (struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
                return (unsigned int)v18;
              }
            }
            v19 = *((unsigned int *)v3 + 29);
            v20 = *(int *)(*(_QWORD *)(v6 + 8 * v19 + 3432) + 304LL * v12 + 188);
            if ( (int)v20 > -1 && *(_DWORD *)(160 * v20 + *(_QWORD *)(v6 + 3560) + 112) == 2 )
              break;
            v14 = *((_DWORD *)v3 + 29);
            v2 = ~(1 << v12) & (unsigned int)v2;
            if ( !(_DWORD)v2 )
            {
              v12 = 2;
              goto LABEL_26;
            }
          }
          g_DxgMmsBugcheckExportIndex = 1;
          LOBYTE(v21) = WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v12, v19, v6);
          WdLogGlobalForLineNumber = 906;
          goto LABEL_35;
        }
LABEL_26:
        v2 = v30;
      }
    }
  }
  else
  {
    *(_DWORD *)(HwQueuePacket + 48) = 7;
  }
  *(_QWORD *)(HwQueuePacket + 96) = a1;
  *(_QWORD *)(HwQueuePacket + 104) = KeGetCurrentThread();
  v21 = v32;
  *(_QWORD *)(HwQueuePacket + 72) = v32;
  *(_QWORD *)(HwQueuePacket + 152) = *((_QWORD *)v3 + 12);
  *(_QWORD *)(HwQueuePacket + 160) = *((_QWORD *)v3 + 13);
  *(_DWORD *)(HwQueuePacket + 168) = *((_DWORD *)v3 + 29);
  if ( (v21 & 4) == 0 )
  {
LABEL_35:
    if ( (v21 & 0x20) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 64) ^= ((unsigned __int8)*(_DWORD *)(HwQueuePacket + 64) ^ (unsigned __int8)(*(_DWORD *)(v6 + 2792) >> 5)) & 4;
    }
    else if ( *(_DWORD *)(HwQueuePacket + 48) != 7 )
    {
      *(_DWORD *)(HwQueuePacket + 64) |= 4u;
    }
    goto LABEL_39;
  }
  *(_DWORD *)(HwQueuePacket + 64) ^= ((unsigned __int8)*(_DWORD *)(HwQueuePacket + 64) ^ (unsigned __int8)(*(_DWORD *)(v6 + 2792) >> 4)) & 4;
  if ( ((*((_DWORD *)v3 + 30) - 3) & 0xFFFFFFFD) == 0 && ((v21 & 0x400) == 0 || (v21 & 0x800) != 0) )
  {
    v22 = *((unsigned int *)v3 + 29);
    *((_QWORD *)v3 + 16) = ++*(_QWORD *)(v5 + 8 * v22 + 248);
  }
LABEL_39:
  memmove((void *)(HwQueuePacket + 752), v3, *((unsigned int *)v3 + 139));
  if ( !*(_BYTE *)(v2 + 141) && *(_DWORD *)(v6 + 152) )
  {
    do
    {
      v23 = *(_QWORD *)(v7 * ((8 * *(_DWORD *)(HwQueuePacket + 1360) + 231) & 0xFFFFFFF8) + HwQueuePacket + 1552);
      if ( v23 )
        _InterlockedIncrement((volatile signed __int32 *)(v23 + 12));
      ++v7;
    }
    while ( v7 < *(_DWORD *)(v6 + 152) );
  }
  if ( *((_QWORD *)v3 + 4) )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(HwQueuePacket + 784) + 12LL));
  v24 = *(void **)(HwQueuePacket + 840);
  if ( v24 )
    ObfReferenceObject(v24);
  VidSchiAcquireFlipFencesReference(
    (struct _VIDSCH_GLOBAL *)v6,
    (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(HwQueuePacket + 1352));
  if ( *(_DWORD *)(HwQueuePacket + 952) )
  {
    v25 = *(_QWORD *)(v6 + 16);
    if ( *(_BYTE *)(v25 + 4976) )
    {
      if ( *(_DWORD *)(v25 + 296) == 1 )
      {
        v26 = *(unsigned int *)(HwQueuePacket + 168);
        if ( (unsigned int)v26 < *(_DWORD *)(v6 + 40) )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(v6 + 8 * v26 + 3432) + 16LL);
          if ( v27 )
          {
            if ( v27 != v5 )
              *(_DWORD *)(HwQueuePacket + 64) |= 0x80u;
          }
        }
      }
    }
  }
  v28 = *(_QWORD *)(HwQueuePacket + 760);
  if ( v28 && (*(_DWORD *)(HwQueuePacket + 752) & 0x8000000) != 0 && !*(_QWORD *)(HwQueuePacket + 792) )
    *(_QWORD *)(HwQueuePacket + 792) = *(_QWORD *)(v28 + 88);
  if ( (v32 & 0x20000000000LL) != 0 )
    VidSchiSuppressVSyncsForAllPresents((struct _VIDSCH_DEVICE *)v5, *(struct _LUID *)(v3 + 156));
  VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
  v29 = *((unsigned int *)v3 + 29);
  if ( (unsigned int)v29 < *(_DWORD *)(v6 + 40) && (*v3 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + 8 * v29 + 3432) + 78944LL), v12, 1);
  return 0LL;
}
