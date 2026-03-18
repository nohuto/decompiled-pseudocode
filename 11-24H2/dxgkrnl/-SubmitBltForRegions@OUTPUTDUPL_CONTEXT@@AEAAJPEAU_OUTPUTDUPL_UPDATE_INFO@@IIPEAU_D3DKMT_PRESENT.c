/*
 * XREFs of ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402F467C
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402F4144 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqppqq_EtwWriteTransfer @ 0x1400525D0 (McTemplateK0pqppqq_EtwWriteTransfer.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1402B72BC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402F4884 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_RGNS *a5)
{
  struct _D3DKMT_PRESENT_RGNS *v5; // rbx
  __int64 v7; // r15
  __int64 v9; // r12
  UINT MoveRectCount; // edx
  unsigned int v11; // r13d
  const struct tagRECT *pDirtyRects; // rbp
  __int64 v13; // rax
  DXGCONTEXT **v14; // r8
  struct DXGHWQUEUE **v15; // rdx
  unsigned int v16; // ebx
  struct _D3DKMT_PRESENT_RGNS **v18; // rax
  struct _D3DKMT_PRESENT_RGNS *v19; // rcx
  UINT v20; // esi
  struct tagRECT *Buffer; // rax
  UINT v22; // r8d
  struct tagRECT *i; // rdx
  __int64 v24; // rax
  struct DXGCONTEXT **v25; // [rsp+20h] [rbp-58h]
  struct tagRECT *v26; // [rsp+38h] [rbp-40h]
  struct COREDEVICEACCESS *v27; // [rsp+40h] [rbp-38h]

  v5 = a5;
  v7 = a4;
  v9 = a3;
  if ( !a5 )
    return 0LL;
  MoveRectCount = a5->MoveRectCount;
  v11 = a5->DirtyRectCount + MoveRectCount;
  if ( MoveRectCount )
  {
    v20 = 16 * a5->DirtyRectCount;
    Buffer = (struct tagRECT *)AUTOEXPANDALLOCATION::GetBuffer(
                                 *((AUTOEXPANDALLOCATION **)a2 + 6),
                                 v20 + 16 * MoveRectCount,
                                 0);
    pDirtyRects = Buffer;
    if ( !Buffer )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1879;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to expand temp buffer for submitting presents.",
        1879LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    memmove(Buffer, v5->pDirtyRects, v20);
    v22 = 0;
    for ( i = (struct tagRECT *)&pDirtyRects[v5->DirtyRectCount]; v22 < v5->MoveRectCount; ++i )
    {
      v24 = v22++;
      *i = v5->pMoveRects[v24].DestRect;
    }
  }
  else
  {
    pDirtyRects = a5->pDirtyRects;
  }
  v13 = *((_QWORD *)a2 + 7);
  v14 = (DXGCONTEXT **)((char *)a2 + 8);
  a5 = 0LL;
  v15 = 0LL;
  if ( v13 )
  {
    v15 = *(struct DXGHWQUEUE ***)(v13 + 1504);
  }
  else if ( (*((_DWORD *)*v14 + 98) & 0x10) != 0 )
  {
    v18 = (struct _D3DKMT_PRESENT_RGNS **)((char *)*v14 + 400);
    v19 = 0LL;
    if ( *v18 != (struct _D3DKMT_PRESENT_RGNS *)v18 )
      v19 = *v18;
    v15 = (struct DXGHWQUEUE **)&a5;
    a5 = v19;
    if ( *((_DWORD *)a2 + 8) )
    {
      v16 = -1073741811;
      goto LABEL_7;
    }
  }
  v16 = DXGCONTEXT::Blt(
          *v14,
          v9,
          v7,
          *((_DWORD *)a2 + 8),
          *((struct DXGCONTEXT ***)a2 + 8),
          0LL,
          v11,
          pDirtyRects,
          0LL,
          v15);
LABEL_7:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v27) = v16;
    LODWORD(v26) = v11;
    LODWORD(v25) = *((_DWORD *)this + 11);
    McTemplateK0pqppqq_EtwWriteTransfer((unsigned int)v25, (__int64)v15, (__int64)v14, this, v25, v9, v7, v26, v27);
  }
  return v16;
}
