/*
 * XREFs of ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14002D730
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x14002D920 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1400461F0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x140027710 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 */

void __fastcall VidSchiIncrementPendingFlipsForFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3)
{
  struct _VIDSCH_PRESENT_INFO *v3; // r10
  unsigned int *v4; // rdx
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v5; // r11
  int v6; // edx
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  bool v10; // zf
  unsigned int v11; // r9d
  char v12; // dl
  int v13; // eax
  char v14; // cl
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  _QWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+30h] [rbp-20h]
  unsigned int v21; // [rsp+34h] [rbp-1Ch]
  int v22; // [rsp+38h] [rbp-18h]
  unsigned int v23; // [rsp+3Ch] [rbp-14h]
  unsigned int v24; // [rsp+40h] [rbp-10h]

  v3 = a2;
  v4 = (unsigned int *)*((_QWORD *)a3 + 149);
  v5 = a3;
  if ( *((_BYTE *)a1 + 59) )
  {
    v7 = *v4;
    v8 = *v4;
    v19[0] = a1;
    v9 = v8 & 0x3FF;
    v19[1] = v4;
    v10 = *((_BYTE *)a1 + 156) == 0;
    v20 = v9;
    if ( v10 )
      v11 = 0;
    else
      v11 = (v7 >> 10) & 0x3FF;
    v22 = 0;
    v12 = -1;
    v10 = !_BitScanForward((unsigned int *)&v13, v9);
    v14 = -1;
    v21 = v11;
    if ( !v10 )
      v14 = v13;
    v15 = v14;
    v10 = !_BitScanForward((unsigned int *)&v16, v11);
    v23 = v14;
    if ( !v10 )
      v12 = v16;
    v17 = v12;
    v24 = v12;
    while ( v9 || v11 )
    {
      if ( v15 < v17 )
        v17 = v15;
      v18 = 304LL * v17;
      ++*(_DWORD *)((char *)v3 + v18 + 200);
      if ( (*((_DWORD *)v5 + 288) & 0x20) != 0 )
        ++*(_DWORD *)((char *)v3 + v18 + 204);
      *((_DWORD *)v3 + 812) |= 1 << v17;
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v19);
      v17 = v24;
      v9 = v20;
      v15 = v23;
      v11 = v21;
    }
  }
  else
  {
    if ( (*((_DWORD *)a3 + 288) & 0x10) != 0 )
      v6 = (*v4 | (*v4 >> 10)) & 0x3FF;
    else
      v6 = (1 << *((_DWORD *)a1 + 38)) - 1;
    *((_DWORD *)v3 + 812) |= v6;
  }
}
