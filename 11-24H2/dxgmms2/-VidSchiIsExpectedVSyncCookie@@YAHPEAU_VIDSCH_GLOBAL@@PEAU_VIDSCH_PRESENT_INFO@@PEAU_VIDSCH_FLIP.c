/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1400379A4
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1400080A0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v8; // edx
  _DWORD *v9; // r9
  unsigned int v10; // r8d
  bool v11; // zf
  int v12; // eax
  char v13; // cl
  char v14; // r10
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  int v19; // r15d
  int v20; // ecx
  unsigned int v21; // edi
  unsigned int v22; // r15d
  int v23; // eax
  char v24; // cl
  char v25; // r8
  char v26; // dl
  _DWORD *v27; // r10
  int v28; // r12d
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  unsigned int v32; // [rsp+20h] [rbp-38h]
  _DWORD *v33; // [rsp+20h] [rbp-38h]
  char v34; // [rsp+68h] [rbp+10h]
  char v35; // [rsp+78h] [rbp+20h]

  v4 = *((_DWORD *)a4 + 29);
  v5 = 0;
  if ( v4 && v4 != *((_DWORD *)a3 + 270) )
    return 0LL;
  v8 = *((_DWORD *)a4 + 4);
  if ( v8 == 10 )
  {
    v9 = (_DWORD *)*((_QWORD *)a3 + 149);
    if ( (*((_DWORD *)a3 + 288) & 0x10) != 0 )
      v10 = (*v9 | (*v9 >> 10)) & 0x3FF;
    else
      v10 = (1 << *((_DWORD *)a1 + 38)) - 1;
    v11 = !_BitScanForward((unsigned int *)&v12, v10);
    v13 = -1;
    v14 = 0;
    if ( !v11 )
      v13 = v12;
    while ( v10 )
    {
      v16 = *(_QWORD *)((char *)v9 + v14 * ((8 * v9[2] + 231) & 0xFFFFFFF8) + 24);
      if ( v16 && v16 != *((_QWORD *)a4 + 2 * v13 + 16) )
        return v5;
      v17 = 1 << v13;
      v13 = -1;
      v10 &= ~v17;
      v11 = !_BitScanForward((unsigned int *)&v17, v10);
      if ( !v11 )
        v13 = v17;
      ++v14;
    }
    return 1;
  }
  v18 = *((_DWORD *)a3 + 288) & 0x10;
  if ( v8 == 3 )
  {
    if ( !v18 )
    {
      LOBYTE(v5) = *((_QWORD *)a4 + 16) == *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a3 + 149) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)a3 + 149) + 8LL) + 231) & 0xFFFFFFF8)
                                                     + *((_QWORD *)a3 + 149)
                                                     + 40LL);
      return v5;
    }
    return 0LL;
  }
  if ( v18 )
  {
    v19 = *((_DWORD *)a4 + 30);
    if ( (v19 & (**((_DWORD **)a3 + 149) >> 10) & 0x3FF) != 0 )
      return 0LL;
    v20 = **((_DWORD **)a3 + 149);
    if ( (v19 & v20 & 0x3FF) != (v20 & 0x3FF) )
      return 0LL;
    v21 = 1;
    if ( (v20 & 0x3FF) != 0 )
    {
      v22 = *((_DWORD *)a4 + 30) & 0x3FF;
      v34 = 0;
      v11 = !_BitScanForward((unsigned int *)&v23, v22);
      v24 = -1;
      v25 = 0;
      if ( !v11 )
        v24 = v23;
      v35 = 0;
      v26 = 0;
      while ( v22 )
      {
        v27 = (_DWORD *)*((_QWORD *)a3 + 149);
        v28 = 1 << v24;
        if ( (*v27 & (1 << v24) & 0x3FF) != 0 )
        {
          v32 = (8 * v27[2] + 231) & 0xFFFFFFF8;
          if ( *(_QWORD *)((char *)&v27[16 * (unsigned __int64)(unsigned int)v26 + 10] + v27[1] * v32) != __PAIR64__(*((_DWORD *)a4 + 10 * v34 + 33), *((_DWORD *)a4 + 10 * v25 + 32)) )
            return 0LL;
          v33 = (_DWORD *)((char *)v27 + v32 * v26 + 160);
          if ( RtlCompareMemory(v33, (char *)a4 + 40 * v34 + 136, 8uLL) != 8 )
            return 0LL;
          if ( RtlCompareMemory(v33 + 2, (char *)a4 + 32 * v34 + 8 * v34 + 144, 8uLL) != 8 )
            return 0LL;
          v25 = v34;
          v29 = *((_DWORD *)a4 + 10 * v34 + 40);
          v30 = v33[7];
          if ( (((unsigned __int8)v29 ^ *((_BYTE *)v33 + 28)) & 1) != 0
            || (((unsigned __int8)v29 ^ (unsigned __int8)v30) & 2) != 0
            || (((unsigned __int8)v29 ^ (unsigned __int8)v30) & 0x18) != 0 )
          {
            return 0LL;
          }
          v26 = ++v35;
        }
        v22 &= ~v28;
        v24 = -1;
        v11 = !_BitScanForward((unsigned int *)&v31, v22);
        if ( !v11 )
          v24 = v31;
        v34 = ++v25;
      }
    }
  }
  else
  {
    v21 = 1;
    if ( (*((_DWORD *)a4 + 30) & 0x3FF) != 1
      || *((_QWORD *)a4 + 16) != *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a3 + 149) + 4LL)
                                           * ((8 * *(_DWORD *)(*((_QWORD *)a3 + 149) + 8LL) + 231) & 0xFFFFFFF8)
                                           + *((_QWORD *)a3 + 149)
                                           + 40LL) )
    {
      return 0;
    }
  }
  return v21;
}
