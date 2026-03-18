/*
 * XREFs of ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x14010F22C
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5F04 (-MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_L.c)
 * Callees:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x14010F48C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11,
        struct _DXGK_TRANSFERFLAGS a12)
{
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r14
  unsigned int v14; // r11d
  unsigned __int64 v15; // rsi
  LONGLONG QuadPart; // rdx
  LONGLONG v17; // r13
  char *v18; // rax
  char *v19; // rdi
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // r15
  struct VIDMM_GLOBAL_ALLOC *v27; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v28; // [rsp+D0h] [rbp+28h]

  v27 = a3;
  v12 = a5;
  v13 = 0LL;
  v14 = a2;
  v15 = a4 + a5;
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  v28 = QuadPart;
  if ( a10 )
    v17 = a10->QuadPart;
  else
    v17 = 0LL;
  v18 = (char *)a3 + 96;
  v19 = (char *)*((_QWORD *)a3 + 12);
  while ( v19 != v18 )
  {
    v20 = *((_QWORD *)v19 + 4);
    if ( v15 <= v20 )
      break;
    v21 = v20 + *((_QWORD *)v19 + 8) - *((_QWORD *)v19 + 7);
    if ( v12 < v21 )
    {
      v22 = v15;
      if ( v15 > v21 )
        v22 = v20 + *((_QWORD *)v19 + 8) - *((_QWORD *)v19 + 7);
      if ( v12 < v20 )
      {
        v23 = v20 - v12;
        VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
          this,
          v14,
          a3,
          v23,
          v12,
          a6,
          QuadPart,
          a8,
          a9,
          v17,
          a11,
          v13,
          a12,
          0LL);
        v12 = *((_QWORD *)v19 + 4);
        v13 += v23;
        a3 = v27;
        v20 = v12;
        v14 = a2;
      }
      v24 = v22 - v12;
      VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        this,
        v14,
        a3,
        v24,
        v20,
        a6,
        v28,
        a8,
        a9,
        v17,
        a11,
        v13,
        a12,
        *((_QWORD *)v19 + 5));
      if ( v15 <= v21 )
        return;
      a3 = v27;
      v13 += v24;
      v14 = a2;
      v12 = v21;
    }
    v19 = *(char **)v19;
    v18 = (char *)a3 + 96;
    QuadPart = v28;
  }
  VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
    this,
    v14,
    a3,
    v15 - v12,
    v12,
    a6,
    QuadPart,
    a8,
    a9,
    v17,
    a11,
    v13,
    a12,
    0LL);
}
