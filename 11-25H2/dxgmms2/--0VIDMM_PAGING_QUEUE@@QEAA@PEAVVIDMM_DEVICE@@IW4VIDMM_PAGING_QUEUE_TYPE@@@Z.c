/*
 * XREFs of ??0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1400F973C
 * Callers:
 *     ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F93F8 (-CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1400F94D8 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400274EC (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

__int64 __fastcall VIDMM_PAGING_QUEUE::VIDMM_PAGING_QUEUE(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  __int16 v8; // r8
  int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // ebx
  __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rax

  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 120) = &VIDMM_TASK::`vftable';
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 120) = &VIDMM_TASK_PAGING_QUEUE::`vftable';
  *(_BYTE *)(a1 + 196) = 2;
  v5 = *a2;
  v6 = *(_DWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 96) = a2;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(4 * *(_BYTE *)(v5 + 4568))) & 4;
  *(_DWORD *)(a1 + 112) = v7;
  *(_DWORD *)(a1 + 108) = dword_140081544;
  *(_DWORD *)(a1 + 112) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(8 * a4)) & 0x18;
  v12 = 1;
  if ( (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(v5 + 24)) > 1 )
  {
    v9 ^= ((unsigned __int16)v9 ^ (unsigned __int16)(32 * v8)) & 0x3E0;
    *(_DWORD *)(v10 + 112) = v9;
  }
  v13 = *(_QWORD *)(v11 + 24);
  if ( (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 96LL) & 2) == 0 || v13 && (*(_BYTE *)(v13 + 1901) & 0x10) != 0 )
    v12 = 0;
  v14 = v12 & 0xFFFFFFFD | v9 & 0xFFFFFFFC;
  *(_DWORD *)(v10 + 112) = v14;
  v15 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 32LL);
  if ( v15 )
    *(_DWORD *)(v10 + 112) = v14 | ((*(_DWORD *)(v15 + 408) & 5) != 0 ? 2 : 0);
  return v10;
}
