/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x14034CE60
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402FD790 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x14034BC8C (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x14034C8F4 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x14034CB40 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x14034D398 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        struct DXGDXGIKEYEDMUTEX *a3,
        struct _PRODUCER_INFO *a4,
        int *a5,
        int *a6)
{
  int v6; // r13d
  __int64 v10; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // r8
  LARGE_INTEGER v13; // r9
  int v14; // ecx
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rbx
  void *Buffer; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  struct _D3DKMT_PRESENT_RGNS *v22; // rcx
  struct _D3DKMT_PRESENT_RGNS *v23; // r12
  int v24; // eax
  const wchar_t *v25; // r9
  __int64 v27; // rax
  unsigned int v28; // edx
  const wchar_t *v29; // r9
  __int64 v30; // rax
  UINT *v31; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // [rsp+28h] [rbp-81h]
  union _LARGE_INTEGER v37; // [rsp+58h] [rbp-51h] BYREF
  struct DXGDXGIKEYEDMUTEX *v38; // [rsp+60h] [rbp-49h]
  __int128 v39; // [rsp+68h] [rbp-41h] BYREF
  __int128 v40; // [rsp+78h] [rbp-31h]
  struct _D3DKMT_PRESENT_RGNS v41; // [rsp+88h] [rbp-21h] BYREF
  struct tagRECT v42; // [rsp+A8h] [rbp-1h] BYREF

  v6 = 0;
  v38 = a3;
  LODWORD(v10) = 0;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v14 = *(_DWORD *)a2;
  v37 = PerformanceCounter;
  if ( v14 )
  {
    if ( (unsigned int)(v14 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v15 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v15;
      if ( *(_DWORD *)a2 == 2 )
      {
        v16 = *((_QWORD *)a2 + 3);
        v17 = (unsigned int)(*(_DWORD *)(v16 + 8) * *(_DWORD *)(v16 + 12));
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(
                   *((AUTOEXPANDALLOCATION **)a4 + 11),
                   *(_DWORD *)(v16 + 8) * *(_DWORD *)(v16 + 12),
                   0,
                   v13.QuadPart);
        v19 = *((_QWORD *)a2 + 3);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(v19 + 24), (unsigned int)v17);
          v20 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v20;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v20 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v20 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          WdLogSingleEntry2(6LL, v17, *(unsigned int *)(v19 + 16));
          v36 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL);
          WdLogGlobalForLineNumber = 1842;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Failed to allocate 0x%I64x bytes for new pointer shape on source 0x%I64x",
            v17,
            v36,
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = -1073741801;
        }
      }
    }
    return (unsigned int)v10;
  }
  v21 = *((unsigned int *)this + 10);
  v39 = 0LL;
  v40 = 0LL;
  v42 = 0LL;
  if ( (_DWORD)v21 != 1 || *((_DWORD *)this + 70) == 1 || (*((_DWORD *)a2 + 6) & 4) != 0 )
  {
    WdLogSingleEntry2(4LL, *((int *)this + 70), v21);
    v27 = *((_QWORD *)a2 + 1);
    v28 = *((_DWORD *)a2 + 7);
    WdLogGlobalForLineNumber = 1685;
    LODWORD(v10) = GetAllocationSize(*(struct DXGDEVICE **)(v27 + 16), v28, &v42);
    if ( (int)v10 < 0 )
    {
      WdLogSingleEntry0(2LL);
      v29 = L"Failed to find source surface size";
      v30 = 1691LL;
      goto LABEL_29;
    }
    *(_QWORD *)&v39 = 1LL;
    *((_DWORD *)this + 70) = 0;
    v40 = 0LL;
    *((_QWORD *)&v39 + 1) = &v42;
    v23 = (struct _D3DKMT_PRESENT_RGNS *)&v39;
  }
  else
  {
    v22 = (struct _D3DKMT_PRESENT_RGNS *)*((_QWORD *)a2 + 5);
    v23 = v22;
    if ( !v22->DirtyRectCount && !v22->MoveRectCount )
      v6 = 1;
  }
  if ( !v38 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1780;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pFrameInfo->PresentUpdateStatus != PRODUCER_INFO_PRESENT_UPDATE_READY",
        1780LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !v6 )
    {
      if ( !(unsigned int)DDAMetaData::CombineNewMetaData(
                            *((DDAMetaData **)a4 + 1),
                            v23,
                            &v37,
                            *((_DWORD *)a2 + 6) & 1,
                            a6) )
      {
        WdLogSingleEntry0(2LL);
        v29 = L"Failed to combine present regions to metadata";
        v30 = 1792LL;
        goto LABEL_29;
      }
      *((_DWORD *)a4 + 4) = 1;
    }
    if ( *((_DWORD *)a4 + 4) == 1 )
      LODWORD(v10) = 259;
    if ( a5 )
      *a5 = 0;
    return (unsigned int)v10;
  }
  if ( v6
    || (unsigned int)DDAMetaData::CombineNewMetaData(*((DDAMetaData **)a4 + 1), v23, &v37, *((_DWORD *)a2 + 6) & 1, a6) )
  {
    if ( *((_DWORD *)a4 + 4) == 1 )
    {
      v31 = (UINT *)*((_QWORD *)a4 + 1);
      *(&v41.DirtyRectCount + 1) = 0;
      *(&v41.MoveRectCount + 1) = 0;
      v41.DirtyRectCount = v31[6];
      DirtyRectData = DDAMetaData::GetDirtyRectData((DDAMetaData *)v31, v41.DirtyRectCount, v12.QuadPart, v13.QuadPart);
      v33 = *((_QWORD *)a4 + 1);
      v41.pDirtyRects = DirtyRectData;
      v41.MoveRectCount = *(_DWORD *)(v33 + 44);
      v34 = *((unsigned int *)this + 11);
      v41.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v33 + 48);
      v35 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
              this,
              a2,
              *((_DWORD *)a2 + 7),
              *(_DWORD *)(*((_QWORD *)this + v34 + 6) + 92LL),
              &v41);
      v10 = v35;
      if ( v35 < 0 )
      {
        WdLogSingleEntry1(2LL, v35);
        v25 = L"Failed to copy pixel data from accumulated + new present rgns, Status 0x%I64x";
        WdLogGlobalForLineNumber = 1742;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v6 )
      {
        if ( a5 )
          *a5 = 0;
        return (unsigned int)v10;
      }
      v24 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
              this,
              a2,
              *((_DWORD *)a2 + 7),
              *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 92LL),
              v23);
      v10 = v24;
      if ( v24 < 0 )
      {
        WdLogSingleEntry1(2LL, v24);
        v25 = L"Failed to copy pixel data from new present rgns, Status 0x%I64x";
        WdLogGlobalForLineNumber = 1761;
LABEL_19:
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v25, v10, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)v10;
      }
    }
    *((_DWORD *)a4 + 4) = 2;
    return (unsigned int)v10;
  }
  WdLogSingleEntry0(2LL);
  v29 = L"Failed to combine present regions to metadata";
  v30 = 1724LL;
LABEL_29:
  WdLogGlobalForLineNumber = v30;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v29, v30, 0LL, 0LL, 0LL, 0LL);
  return 3221225473LL;
}
