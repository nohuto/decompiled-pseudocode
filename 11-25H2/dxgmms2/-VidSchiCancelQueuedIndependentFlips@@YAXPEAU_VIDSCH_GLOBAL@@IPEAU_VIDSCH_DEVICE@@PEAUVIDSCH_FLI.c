/*
 * XREFs of ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x14002FEC4
 * Callers:
 *     VidSchCancelPresentAtFlips @ 0x140049030 (VidSchCancelPresentAtFlips.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14001D710 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiCancelIndependentFlips @ 0x14002FDF8 (VidSchiCancelIndependentFlips.c)
 *     ?VidSchiAbortSoftwarePacket@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@_K@Z @ 0x140030194 (-VidSchiAbortSoftwarePacket@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@_K@Z.c)
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x1400301B8 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 */

void __fastcall VidSchiCancelQueuedIndependentFlips(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct _VIDSCH_DEVICE *a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned int *a9)
{
  char *v9; // rdi
  char *i; // r10
  _QWORD *v15; // r9
  _QWORD *k; // r8
  char *v17; // rdi
  char *m; // r8
  unsigned int *v19; // rdx
  int v20; // r9d
  int v21; // r10d
  unsigned int kk; // ecx
  __int64 v23; // r8
  unsigned int v24; // eax
  _QWORD *v25; // r9
  _QWORD *j; // r8
  _QWORD *v27; // r8
  _DWORD *v28; // r11
  unsigned int v29; // r8d
  _QWORD *v30; // r8
  _DWORD *v31; // r11
  _QWORD *v32; // rsi
  _QWORD *n; // r9
  _QWORD *v34; // r14
  _QWORD *ii; // r10
  _QWORD *v36; // r10
  _DWORD *v37; // r11
  unsigned int jj; // ecx
  __int64 v39; // r8
  unsigned int v40; // eax
  unsigned int *v41; // rax
  unsigned int v42; // [rsp+30h] [rbp-30h]
  struct _VIDSCH_GLOBAL *v43; // [rsp+40h] [rbp-20h] BYREF
  __int64 v44; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v45; // [rsp+50h] [rbp-10h]
  char v46; // [rsp+58h] [rbp-8h]
  int v47; // [rsp+5Ch] [rbp-4h]
  bool v48; // [rsp+A0h] [rbp+40h] BYREF

  v9 = (char *)a3 + 72;
  for ( i = (char *)*((_QWORD *)a3 + 9); i != v9; i = *(char **)i )
  {
    v25 = i + 640;
    for ( j = (_QWORD *)*((_QWORD *)i + 80); j != v25; j = (_QWORD *)*v27 )
    {
      if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(j - 4), a5) )
        ++*v28;
    }
    v15 = i + 656;
    for ( k = (_QWORD *)*((_QWORD *)i + 82); k != v15; k = (_QWORD *)*v30 )
    {
      if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(k - 4), a5) )
        ++*v31;
    }
  }
  v17 = (char *)a3 + 88;
  for ( m = (char *)*((_QWORD *)a3 + 11); m != v17; m = *(char **)m )
  {
    v32 = m + 32;
    for ( n = (_QWORD *)*((_QWORD *)m + 4); n != v32; n = (_QWORD *)*n )
    {
      v34 = n + 19;
      for ( ii = (_QWORD *)n[19]; ii != v34; ii = (_QWORD *)*v36 )
      {
        if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(ii - 4), a5) )
          ++*v37;
      }
    }
  }
  if ( a4 )
  {
    v19 = a8;
    v20 = 4673;
    v21 = *((_DWORD *)a4 + 14);
    *a8 = -1;
    if ( *((_BYTE *)a1 + 59) )
    {
      for ( jj = *((_DWORD *)a4 + 17); jj != v21; jj = ((_BYTE)jj + 1) & 0x3F )
      {
        v39 = 1400LL * jj;
        v40 = *(_DWORD *)((char *)a4 + v39 + 1172);
        if ( (v40 > 0xC || !_bittest(&v20, v40)) && v40 != 13 && *(unsigned int *)((char *)a4 + v39 + 1176) >= a5 )
        {
          v41 = a9;
          *v19 = jj;
          v43 = a1;
          *v41 = ((_BYTE)v21 - 1) & 0x3F;
          v45 = &v44;
          v44 = (__int64)&v44;
          v46 = 0;
          v47 = 2;
          v48 = 0;
          VidSchiCancelIndependentFlipsHwQueue(
            (struct HwQueueStagingList *)&v43,
            a1,
            a2,
            a4,
            &v48,
            v19,
            ((_BYTE)v21 - 1) & 0x3F,
            1u);
          *a6 = *((_DWORD *)a4 + 16);
          HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v43);
          return;
        }
      }
    }
    else
    {
      for ( kk = *((_DWORD *)a4 + 16); kk != v21; kk = ((_BYTE)kk + 1) & 0x3F )
      {
        v23 = 1400LL * kk;
        v24 = *(_DWORD *)((char *)a4 + v23 + 1172);
        if ( (v24 > 0xC || !_bittest(&v20, v24))
          && v24 != 15
          && v24 != 5
          && v24 != 13
          && *(unsigned int *)((char *)a4 + v23 + 1176) >= a5 )
        {
          *v19 = kk;
          break;
        }
      }
      v29 = *v19;
      if ( *v19 != -1 )
      {
        v43 = a1;
        v46 = 0;
        v42 = ((_BYTE)v21 - 1) & 0x3F;
        v45 = &v44;
        v47 = 2;
        v44 = (__int64)&v44;
        v48 = 0;
        *a9 = v42;
        VidSchiCancelIndependentFlips((struct HwQueueStagingList *)&v43, (__int64)a1, a2, (__int64)a4, &v48, v29, v42);
        *a6 = *((_DWORD *)a4 + 16);
        if ( !v46 )
        {
          if ( v47 )
            HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v43, 0LL);
        }
      }
    }
  }
}
