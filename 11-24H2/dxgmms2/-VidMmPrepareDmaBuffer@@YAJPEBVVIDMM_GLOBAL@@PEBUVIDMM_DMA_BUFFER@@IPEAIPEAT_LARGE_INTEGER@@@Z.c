/*
 * XREFs of ?VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z @ 0x1400B8180
 * Callers:
 *     VidSchiSubmitRenderCommand @ 0x1400B7268 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ReferenceAllocationForSubmission @ 0x1400B82BC (ReferenceAllocationForSubmission.c)
 *     VerifyAllocationForSubmissionPhysical @ 0x1400B82EC (VerifyAllocationForSubmissionPhysical.c)
 */

__int64 __fastcall VidMmPrepareDmaBuffer(
        const struct VIDMM_GLOBAL *a1,
        const struct VIDMM_DMA_BUFFER *a2,
        unsigned int a3,
        unsigned int *a4,
        union _LARGE_INTEGER *a5)
{
  __int64 v5; // rax
  unsigned int v7; // r8d
  __int64 v8; // r10
  LONGLONG v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  char v17; // dl
  __int64 v18; // r10
  __int64 v19; // rcx
  VIDMM_SEGMENT *v20; // [rsp+40h] [rbp+8h]
  VIDMM_SEGMENT *v21; // [rsp+40h] [rbp+8h]

  v5 = *((_QWORD *)a2 + 7);
  if ( v5 )
  {
    v20 = *(VIDMM_SEGMENT **)(***(_QWORD ***)v5 + 64LL);
    if ( v20 )
    {
      v7 = VIDMM_SEGMENT::DriverId(v20);
      v9 = *(_QWORD *)(v8 + 72) + *((_QWORD *)v20 + 6);
    }
    else
    {
      v9 = 0LL;
      v7 = 0;
    }
    *a4 = v7;
  }
  else
  {
    *a4 = 0;
    v9 = *((_QWORD *)a2 + 10);
  }
  v10 = 0LL;
  a5->QuadPart = v9;
  v11 = *((_QWORD *)a2 + 13);
  v12 = *((_QWORD *)a2 + 12);
  while ( (unsigned int)v10 < a3 )
  {
    if ( *(_QWORD *)(v12 + 8 * v10) )
    {
      result = VerifyAllocationForSubmissionPhysical();
      if ( (int)result < 0 )
        return result;
      LOBYTE(v14) = (*(_BYTE *)(v11 + 24 * v10 + 8) & 1) == 0;
      ReferenceAllocationForSubmission(***(_QWORD ***)(v12 + 8 * v10), *(_QWORD *)(v12 + 8 * v10), v14);
      v21 = *(VIDMM_SEGMENT **)(v16 + 64);
      if ( v21 )
      {
        v17 = VIDMM_SEGMENT::DriverId(v21);
        v19 = *(_QWORD *)(v18 + 72) + *((_QWORD *)v21 + 6);
      }
      else
      {
        v17 = 0;
        v19 = 0LL;
      }
      *(_QWORD *)(v11 + 8 * v15 + 16) = v19;
      *(_DWORD *)(v11 + 8 * v15 + 8) ^= ((unsigned __int8)*(_DWORD *)(v11 + 8 * v15 + 8) ^ (unsigned __int8)(2 * v17)) & 0x3E;
    }
    v10 = (unsigned int)(v10 + 1);
  }
  return 0LL;
}
