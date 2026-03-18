/*
 * XREFs of ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x140054EE0
 * Callers:
 *     ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x1400540A4 (-VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 */

void __fastcall VidSchiSynchronouslyCancelPendingFlips(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  int v10; // esi
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // edx
  _DWORD *v15; // r14
  unsigned int v16; // edx
  char v17; // r9
  bool v18; // zf
  int v19; // eax
  char v20; // r11
  unsigned __int64 v21; // r10
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // eax
  int v25; // [rsp+88h] [rbp+20h] BYREF

  if ( a4 )
  {
    v6 = *((_DWORD *)a4 + 17);
    v10 = ((unsigned __int8)*((_DWORD *)a4 + 18) + 1) & 0x3F;
    v11 = *((_QWORD *)a2 + a3 + 429);
    while ( v6 != v10 )
    {
      v12 = 1400LL * v6;
      v13 = *(_DWORD *)((char *)a4 + v12 + 1172);
      if ( v13 > 0xC || (v14 = 4673, !_bittest(&v14, v13)) )
      {
        if ( v13 == 5 || v13 == 15 )
        {
          v15 = *(_DWORD **)((char *)a4 + v12 + 1312);
          if ( (*(_DWORD *)((_BYTE *)a4 + v12 + 1272) & 0x10) != 0 )
            v16 = ((unsigned __int16)*v15 | (unsigned __int16)(*v15 >> 10)) & 0x3FF;
          else
            v16 = (1 << *((_DWORD *)a2 + 38)) - 1;
          v25 = 0;
          v17 = -1;
          v18 = !_BitScanForward((unsigned int *)&v19, v16);
          if ( !v18 )
            v17 = v19;
          v20 = 0;
          while ( v16 )
          {
            v21 = *(_QWORD *)((char *)v15 + v20 * ((8 * v15[2] + 231) & 0xFFFFFFF8) + 24);
            v22 = 1 << v17;
            if ( v21 )
            {
              v23 = 304LL * v17;
              if ( (v22 & a5) == 0 || v21 < *(_QWORD *)(v23 + v11 + 408) || v21 > *(_QWORD *)(v23 + v11 + 416) )
                goto LABEL_22;
            }
            v25 = 0;
            v16 &= ~v22;
            v17 = -1;
            v18 = !_BitScanForward((unsigned int *)&v24, v16);
            if ( !v18 )
              v17 = v24;
            ++v20;
          }
          LOBYTE(v25) = 0;
          VidSchiCompleteFlipEntry(a1, (__int64)a2, a3, (__int64)a4, v6, v6, 9u, &v25);
        }
      }
LABEL_22:
      v6 = ((_BYTE)v6 + 1) & 0x3F;
    }
  }
}
