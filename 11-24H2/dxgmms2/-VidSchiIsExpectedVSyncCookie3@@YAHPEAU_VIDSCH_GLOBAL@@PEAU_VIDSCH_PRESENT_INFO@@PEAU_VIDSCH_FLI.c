/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie3@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@QEAK@Z @ 0x14003BD30
 * Callers:
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x1400540EC (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie3(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        unsigned int *const a4)
{
  _DWORD *v5; // r14
  unsigned int v8; // r10d
  char v9; // r11
  bool v10; // zf
  int v11; // eax
  char i; // r15
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // r12d
  __int64 v19; // rbp
  __int64 v20; // rcx
  char v21; // cl
  int v22; // eax
  unsigned int j; // eax
  unsigned int v25; // edx

  v5 = (_DWORD *)*((_QWORD *)a3 + 149);
  if ( (*((_DWORD *)a3 + 288) & 0x10) != 0 )
    v8 = ((unsigned __int16)*v5 | (unsigned __int16)(*v5 >> 10)) & 0x3FF;
  else
    v8 = (1 << *((_DWORD *)a1 + 38)) - 1;
  v9 = -1;
  v10 = !_BitScanForward((unsigned int *)&v11, v8);
  if ( !v10 )
    v9 = v11;
  for ( i = 0; ; ++i )
  {
    if ( !v8 )
      return 1LL;
    v13 = *(_QWORD *)((char *)v5 + i * ((8 * v5[2] + 231) & 0xFFFFFFF8) + 24);
    if ( v13 )
      break;
LABEL_15:
    v21 = v9;
    v9 = -1;
    v8 &= ~(1 << v21);
    v10 = !_BitScanForward((unsigned int *)&v22, v8);
    if ( !v10 )
      v9 = v22;
  }
  v14 = 304LL * v9;
  if ( v13 <= *(_QWORD *)((char *)a2 + v14 + 400) )
  {
    v15 = *(_DWORD *)((char *)a2 + v14 + 372);
    v16 = a4[v9];
    if ( v16 != -1 )
    {
      v17 = (v16 + 1) % v15;
      v18 = ((v15 + *(_DWORD *)((char *)a2 + v14 + 376) - 1) % v15 + 1) % v15;
      while ( v17 != v18 )
      {
        v19 = *(_QWORD *)((char *)a2 + v14 + 448);
        if ( *(_QWORD *)(v19 + 16LL * v17) == v13 )
        {
          v20 = *(_QWORD *)(v19 + 16LL * v17 + 8);
          if ( !v20 )
          {
            for ( j = v17 + 1; ; j = v25 + 1 )
            {
              v25 = j % v15;
              if ( j % v15 == v18 )
                break;
              if ( *(_QWORD *)(v19 + 16LL * v25 + 8) )
              {
                v20 = *(_QWORD *)(v19 + 16LL * v25 + 8);
                break;
              }
            }
          }
          *((_QWORD *)a3 + 165) = v20;
          goto LABEL_15;
        }
        v17 = (v17 + 1) % v15;
      }
    }
    goto LABEL_15;
  }
  return 0LL;
}
