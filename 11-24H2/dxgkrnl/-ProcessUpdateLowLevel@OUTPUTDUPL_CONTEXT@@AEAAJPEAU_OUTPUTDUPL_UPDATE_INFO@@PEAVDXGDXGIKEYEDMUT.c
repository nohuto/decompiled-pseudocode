/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402F4144
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402B4404 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1402B72BC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1402F2B50 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1402F37B8 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1402F3A04 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402F467C (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
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
  int v12; // ecx
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rbx
  void *Buffer; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  struct _D3DKMT_PRESENT_RGNS *v20; // rcx
  struct _D3DKMT_PRESENT_RGNS *v21; // r12
  int v22; // eax
  const wchar_t *v23; // r9
  __int64 v25; // rax
  unsigned int v26; // edx
  const wchar_t *v27; // r9
  __int64 v28; // rax
  UINT *v29; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // [rsp+28h] [rbp-81h]
  union _LARGE_INTEGER v35; // [rsp+58h] [rbp-51h] BYREF
  struct DXGDXGIKEYEDMUTEX *v36; // [rsp+60h] [rbp-49h]
  __int128 v37; // [rsp+68h] [rbp-41h] BYREF
  __int128 v38; // [rsp+78h] [rbp-31h]
  struct _D3DKMT_PRESENT_RGNS v39; // [rsp+88h] [rbp-21h] BYREF
  struct tagRECT v40; // [rsp+A8h] [rbp-1h] BYREF

  v6 = 0;
  v36 = a3;
  LODWORD(v10) = 0;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_DWORD *)a2;
  v35 = PerformanceCounter;
  if ( v12 )
  {
    if ( (unsigned int)(v12 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v13 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v13;
      if ( *(_DWORD *)a2 == 2 )
      {
        v14 = *((_QWORD *)a2 + 3);
        v15 = (unsigned int)(*(_DWORD *)(v14 + 8) * *(_DWORD *)(v14 + 12));
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(
                   *((AUTOEXPANDALLOCATION **)a4 + 11),
                   *(_DWORD *)(v14 + 8) * *(_DWORD *)(v14 + 12),
                   0);
        v17 = *((_QWORD *)a2 + 3);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(v17 + 24), (unsigned int)v15);
          v18 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v18;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v18 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v18 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          WdLogSingleEntry2(6LL, v15, *(unsigned int *)(v17 + 16));
          v34 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL);
          WdLogGlobalForLineNumber = 1842;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate 0x%I64x bytes for new pointer shape on source 0x%I64x",
            v15,
            v34,
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = -1073741801;
        }
      }
    }
    return (unsigned int)v10;
  }
  v19 = *((unsigned int *)this + 10);
  v37 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  if ( (_DWORD)v19 != 1 || *((_DWORD *)this + 70) == 1 || (*((_DWORD *)a2 + 6) & 4) != 0 )
  {
    WdLogSingleEntry2(4LL, *((int *)this + 70), v19);
    v25 = *((_QWORD *)a2 + 1);
    v26 = *((_DWORD *)a2 + 7);
    WdLogGlobalForLineNumber = 1685;
    LODWORD(v10) = GetAllocationSize(*(struct DXGDEVICE **)(v25 + 16), v26, &v40);
    if ( (int)v10 < 0 )
    {
      WdLogSingleEntry0(2LL);
      v27 = L"Failed to find source surface size";
      v28 = 1691LL;
      goto LABEL_29;
    }
    *(_QWORD *)&v37 = 1LL;
    *((_DWORD *)this + 70) = 0;
    v38 = 0LL;
    *((_QWORD *)&v37 + 1) = &v40;
    v21 = (struct _D3DKMT_PRESENT_RGNS *)&v37;
  }
  else
  {
    v20 = (struct _D3DKMT_PRESENT_RGNS *)*((_QWORD *)a2 + 5);
    v21 = v20;
    if ( !v20->DirtyRectCount && !v20->MoveRectCount )
      v6 = 1;
  }
  if ( !v36 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1780;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
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
                            v21,
                            &v35,
                            *((_DWORD *)a2 + 6) & 1,
                            a6) )
      {
        WdLogSingleEntry0(2LL);
        v27 = L"Failed to combine present regions to metadata";
        v28 = 1792LL;
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
    || (unsigned int)DDAMetaData::CombineNewMetaData(*((DDAMetaData **)a4 + 1), v21, &v35, *((_DWORD *)a2 + 6) & 1, a6) )
  {
    if ( *((_DWORD *)a4 + 4) == 1 )
    {
      v29 = (UINT *)*((_QWORD *)a4 + 1);
      *(&v39.DirtyRectCount + 1) = 0;
      *(&v39.MoveRectCount + 1) = 0;
      v39.DirtyRectCount = v29[6];
      DirtyRectData = DDAMetaData::GetDirtyRectData((DDAMetaData *)v29, v39.DirtyRectCount);
      v31 = *((_QWORD *)a4 + 1);
      v39.pDirtyRects = DirtyRectData;
      v39.MoveRectCount = *(_DWORD *)(v31 + 44);
      v32 = *((unsigned int *)this + 11);
      v39.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v31 + 48);
      v33 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
              this,
              a2,
              *((_DWORD *)a2 + 7),
              *(_DWORD *)(*((_QWORD *)this + v32 + 6) + 92LL),
              &v39);
      v10 = v33;
      if ( v33 < 0 )
      {
        WdLogSingleEntry1(2LL, v33);
        v23 = L"Failed to copy pixel data from accumulated + new present rgns, Status 0x%I64x";
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
      v22 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
              this,
              a2,
              *((_DWORD *)a2 + 7),
              *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 92LL),
              v21);
      v10 = v22;
      if ( v22 < 0 )
      {
        WdLogSingleEntry1(2LL, v22);
        v23 = L"Failed to copy pixel data from new present rgns, Status 0x%I64x";
        WdLogGlobalForLineNumber = 1761;
LABEL_19:
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v23, v10, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)v10;
      }
    }
    *((_DWORD *)a4 + 4) = 2;
    return (unsigned int)v10;
  }
  WdLogSingleEntry0(2LL);
  v27 = L"Failed to combine present regions to metadata";
  v28 = 1724LL;
LABEL_29:
  WdLogGlobalForLineNumber = v28;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v27, v28, 0LL, 0LL, 0LL, 0LL);
  return 3221225473LL;
}
