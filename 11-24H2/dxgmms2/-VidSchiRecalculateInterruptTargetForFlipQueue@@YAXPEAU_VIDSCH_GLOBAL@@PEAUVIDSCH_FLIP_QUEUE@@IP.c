/*
 * XREFs of ?VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IPEA_K@Z @ 0x14000A4E8
 * Callers:
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14000A0EC (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x140041F6C (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiRecalculateInterruptTargetForFlipQueue(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE *a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v5; // r10d
  int v6; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // edx
  unsigned int v12; // edx
  char v13; // si
  bool v14; // zf
  int v15; // eax
  char v16; // bp
  unsigned __int64 v17; // r8
  char v18; // cl
  int v19; // eax
  int v20; // edi
  _DWORD *v21; // r14

  if ( a2 )
  {
    v5 = *((_DWORD *)a2 + 17);
    v6 = ((unsigned __int8)*((_DWORD *)a2 + 18) + 1) & 0x3F;
    while ( v5 != v6 )
    {
      v9 = 1400LL * v5;
      v10 = *(_DWORD *)((char *)a2 + v9 + 1172);
      if ( v10 > 0xC || (v11 = 4673, !_bittest(&v11, v10)) )
      {
        if ( v10 == 15 || v10 == 5 )
        {
          v20 = *(_DWORD *)((char *)a2 + v9 + 1272);
          if ( (v20 & 0x80000) == 0 )
          {
            v21 = *(_DWORD **)((char *)a2 + v9 + 1312);
            v12 = (v20 & 0x10) != 0
                ? ((unsigned __int16)*v21 | (unsigned __int16)(*v21 >> 10)) & 0x3FF
                : (1 << *((_DWORD *)a1 + 38)) - 1;
            if ( _bittest((const int *)&v12, a3) )
            {
              v13 = -1;
              v14 = !_BitScanForward((unsigned int *)&v15, v12);
              if ( !v14 )
                v13 = v15;
              v16 = 0;
              while ( v12 )
              {
                v17 = *(_QWORD *)((char *)v21 + v16 * ((8 * v21[2] + 231) & 0xFFFFFFF8) + 24);
                if ( (v17 || (v20 & 0x1000) != 0) && v13 == a3 )
                {
                  if ( v17 < *a4 )
                    *a4 = v17;
                  return;
                }
                v18 = v13;
                v13 = -1;
                v12 &= ~(1 << v18);
                v14 = !_BitScanForward((unsigned int *)&v19, v12);
                if ( !v14 )
                  v13 = v19;
                ++v16;
              }
            }
          }
        }
      }
      v5 = ((_BYTE)v5 + 1) & 0x3F;
    }
  }
}
