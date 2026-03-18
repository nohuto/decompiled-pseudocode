/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1403EA850
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1402FBF18 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140016478 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1401DFD24 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1401E1880 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1401E1D04 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402FF2A8 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1403EACCC (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1403EADF0 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v6; // rax
  const wchar_t *v7; // r9
  OUTPUTDUPL_SESSION_MGR *v8; // rdi
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v9; // r8
  __int64 *AdapterLuid; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int v15; // ebp
  __int64 v16; // rax
  DXGDXGIKEYEDMUTEX *v17; // rdi
  int v18; // edi
  __int64 v19; // r8
  __int64 v20; // rax
  const wchar_t *v21; // r9
  const wchar_t *v22; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int i; // ebp
  DDAMetaData *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  DDAMetaData *v31; // rcx
  __int64 v32; // r14
  __int64 v33; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rdi
  __int64 VidPnSourceId; // [rsp+28h] [rbp-60h]
  __int128 v37; // [rsp+50h] [rbp-38h] BYREF
  __int64 v38; // [rsp+60h] [rbp-28h]
  char v39; // [rsp+A0h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    WdLogSingleEntry0(2LL);
    v6 = 1232LL;
    v7 = L"DXGSESSIONDATA is NULL";
LABEL_47:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v8 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
  if ( !v8 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 1239LL;
    v7 = L"OUTPUTDUPL_SESSION_MGR is NULL";
    goto LABEL_47;
  }
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  v9 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((ADAPTER_DISPLAY ***)this + 37), (__int64)&v39);
    v9 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v37;
    v11 = *AdapterLuid;
    LODWORD(v38) = *((_DWORD *)this + 4);
    *(_QWORD *)&v37 = *((_QWORD *)this + 4);
    *((_QWORD *)&v37 + 1) = v11;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v8, *((struct _EPROCESS **)this + 3), v9) )
    return 3221225643LL;
  *((_DWORD *)this + 76) = 1;
  v15 = 0;
  *((_DWORD *)this + 10) = a2->KeyedMutexCount;
  while ( v15 < *((_DWORD *)this + 10) )
  {
    v16 = operator new(0x90uLL, 0x674D444Fu, 256LL, v13);
    v17 = (DXGDXGIKEYEDMUTEX *)v16;
    if ( v16 )
    {
      *(_QWORD *)v16 = 0LL;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 88) = 0LL;
      *(_DWORD *)(v16 + 96) = 0;
      *(_QWORD *)(v16 + 104) = 0LL;
      *(_QWORD *)(v16 + 112) = 0LL;
      *(_QWORD *)(v16 + 120) = 0LL;
      *(_DWORD *)(v16 + 128) = 0;
      memset((void *)(v16 + 16), 0, 0x48uLL);
    }
    else
    {
      v17 = 0LL;
    }
    *((_QWORD *)this + v15 + 6) = v17;
    if ( !v17 )
    {
      WdLogSingleEntry1(6LL, a2->VidPnSourceId);
      v22 = L"Failed to create Dxgi Keyed Mutex list for VidPn source 0x%I64x.";
      WdLogGlobalForLineNumber = 1276;
LABEL_23:
      DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v22, a2->VidPnSourceId, 0LL, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
    v18 = DXGDXGIKEYEDMUTEX::Initialize(v17, a2->KeyedMutexs[v15].hSharedSurfaceNt);
    if ( v18 < 0 )
    {
      WdLogSingleEntry0(2LL);
      v20 = 1283LL;
      v21 = L"Failed to open surface NT handle for consumer process.";
      goto LABEL_21;
    }
    v18 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v15 + 6), 1, v19);
    if ( v18 < 0 )
    {
      WdLogSingleEntry0(2LL);
      v20 = 1290LL;
      v21 = L"Failed to open local keyed mutex for consumer process.";
LABEL_21:
      WdLogGlobalForLineNumber = v20;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v21, v20, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v18;
    }
    ++v15;
  }
  Current = DXGPROCESS::GetCurrent(v12);
  if ( !Current || !*((_QWORD *)Current + 11) )
  {
    WdLogSingleEntry0(2LL);
    v6 = 1299LL;
    v7 = L"Could not get Win32k functions!!";
    goto LABEL_47;
  }
  for ( i = 0; i < 2; ++i )
  {
    v27 = (DDAMetaData *)operator new(0x50uLL, 0x674D444Fu, 256LL, v25);
    if ( v27 )
      v31 = DDAMetaData::DDAMetaData(v27);
    else
      v31 = 0LL;
    v32 = 96LL * i;
    *(_QWORD *)((char *)this + v32 + 80) = v31;
    if ( !v31 )
    {
      WdLogSingleEntry1(6LL, a2->VidPnSourceId);
      v22 = L"Failed to allocate DDAMeta for VidPn source 0x%I64x.";
      WdLogGlobalForLineNumber = 1310;
      goto LABEL_23;
    }
    if ( !(unsigned int)DDAMetaData::Initialize(v31, v28, v29, v30) )
    {
      WdLogSingleEntry1(6LL, a2->VidPnSourceId);
      v22 = L"Failed to Initialize DDAMeta for VidPn source 0x%I64x.";
      WdLogGlobalForLineNumber = 1315;
      goto LABEL_23;
    }
    v34 = (_QWORD *)operator new(0x10uLL, 0x674D444Fu, 256LL, v33);
    v35 = v34;
    if ( v34 )
    {
      *v34 = 0LL;
      v34[1] = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v34, 0x4000u, 0, v25);
    }
    else
    {
      v35 = 0LL;
    }
    *(_QWORD *)((char *)this + v32 + 160) = v35;
    if ( !v35 || !*v35 )
    {
      WdLogSingleEntry2(6LL, 0x4000LL, a2->VidPnSourceId);
      VidPnSourceId = a2->VidPnSourceId;
      WdLogGlobalForLineNumber = 1323;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate 0x%I64x bytes for new pointer shape on source 0x%I64x at initialization",
        0x4000LL,
        VidPnSourceId,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pxqt_EtwWriteTransfer(
      a2->hAdapter,
      &EventOutputDuplicationCreate,
      v24,
      this,
      a2->hAdapter,
      a2->VidPnSourceId,
      a2->KeyedMutexCount);
  return 0LL;
}
