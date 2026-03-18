/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1403E3FD4
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1403D1DF8 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013278 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1401E4F28 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1401E6AB0 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1401E6F34 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B5F28 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1402B72BC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1403E4450 (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1403E4574 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
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
  unsigned int v14; // ebp
  __int64 v15; // rax
  DXGDXGIKEYEDMUTEX *v16; // rdi
  int v17; // edi
  __int64 v18; // r8
  __int64 v19; // rax
  const wchar_t *v20; // r9
  const wchar_t *v21; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v23; // r8
  unsigned int i; // ebp
  DDAMetaData *v25; // rax
  DDAMetaData *v26; // rcx
  __int64 v27; // r14
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  __int64 VidPnSourceId; // [rsp+28h] [rbp-60h]
  __int128 v31; // [rsp+50h] [rbp-38h] BYREF
  __int64 v32; // [rsp+60h] [rbp-28h]
  char v33; // [rsp+A0h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    WdLogSingleEntry0(2LL);
    v6 = 1232LL;
    v7 = L"DXGSESSIONDATA is NULL";
LABEL_47:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
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
  v31 = 0LL;
  v32 = 0LL;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((ADAPTER_DISPLAY ***)this + 37), (__int64)&v33);
    v9 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v31;
    v11 = *AdapterLuid;
    LODWORD(v32) = *((_DWORD *)this + 4);
    *(_QWORD *)&v31 = *((_QWORD *)this + 4);
    *((_QWORD *)&v31 + 1) = v11;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v8, *((struct _EPROCESS **)this + 3), v9) )
    return 3221225643LL;
  *((_DWORD *)this + 76) = 1;
  v14 = 0;
  *((_DWORD *)this + 10) = a2->KeyedMutexCount;
  while ( v14 < *((_DWORD *)this + 10) )
  {
    v15 = operator new(0x90uLL, 0x674D444Fu, 256LL);
    v16 = (DXGDXGIKEYEDMUTEX *)v15;
    if ( v15 )
    {
      *(_QWORD *)v15 = 0LL;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 88) = 0LL;
      *(_DWORD *)(v15 + 96) = 0;
      *(_QWORD *)(v15 + 104) = 0LL;
      *(_QWORD *)(v15 + 112) = 0LL;
      *(_QWORD *)(v15 + 120) = 0LL;
      *(_DWORD *)(v15 + 128) = 0;
      memset((void *)(v15 + 16), 0, 0x48uLL);
    }
    else
    {
      v16 = 0LL;
    }
    *((_QWORD *)this + v14 + 6) = v16;
    if ( !v16 )
    {
      WdLogSingleEntry1(6LL, a2->VidPnSourceId);
      v21 = L"Failed to create Dxgi Keyed Mutex list for VidPn source 0x%I64x.";
      WdLogGlobalForLineNumber = 1276;
LABEL_23:
      DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, v21, a2->VidPnSourceId, 0LL, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
    v17 = DXGDXGIKEYEDMUTEX::Initialize(v16, a2->KeyedMutexs[v14].hSharedSurfaceNt);
    if ( v17 < 0 )
    {
      WdLogSingleEntry0(2LL);
      v19 = 1283LL;
      v20 = L"Failed to open surface NT handle for consumer process.";
      goto LABEL_21;
    }
    v17 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v14 + 6), 1, v18);
    if ( v17 < 0 )
    {
      WdLogSingleEntry0(2LL);
      v19 = 1290LL;
      v20 = L"Failed to open local keyed mutex for consumer process.";
LABEL_21:
      WdLogGlobalForLineNumber = v19;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v20, v19, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v17;
    }
    ++v14;
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
    v25 = (DDAMetaData *)operator new(0x50uLL, 0x674D444Fu, 256LL);
    if ( v25 )
      v26 = DDAMetaData::DDAMetaData(v25);
    else
      v26 = 0LL;
    v27 = 96LL * i;
    *(_QWORD *)((char *)this + v27 + 80) = v26;
    if ( !v26 )
    {
      WdLogSingleEntry1(6LL, a2->VidPnSourceId);
      v21 = L"Failed to allocate DDAMeta for VidPn source 0x%I64x.";
      WdLogGlobalForLineNumber = 1310;
      goto LABEL_23;
    }
    if ( !(unsigned int)DDAMetaData::Initialize(v26) )
    {
      WdLogSingleEntry1(6LL, a2->VidPnSourceId);
      v21 = L"Failed to Initialize DDAMeta for VidPn source 0x%I64x.";
      WdLogGlobalForLineNumber = 1315;
      goto LABEL_23;
    }
    v28 = (_QWORD *)operator new(0x10uLL, 0x674D444Fu, 256LL);
    v29 = v28;
    if ( v28 )
    {
      *v28 = 0LL;
      v28[1] = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v28, 0x4000u, 0);
    }
    else
    {
      v29 = 0LL;
    }
    *(_QWORD *)((char *)this + v27 + 160) = v29;
    if ( !v29 || !*v29 )
    {
      WdLogSingleEntry2(6LL, 0x4000LL, a2->VidPnSourceId);
      VidPnSourceId = a2->VidPnSourceId;
      WdLogGlobalForLineNumber = 1323;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
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
      v23,
      this,
      a2->hAdapter,
      a2->VidPnSourceId,
      a2->KeyedMutexCount);
  return 0LL;
}
