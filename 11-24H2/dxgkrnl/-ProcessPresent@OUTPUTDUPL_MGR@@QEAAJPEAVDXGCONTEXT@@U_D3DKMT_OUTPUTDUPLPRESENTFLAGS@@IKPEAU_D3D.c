/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402B67F4
 * Callers:
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1402B7698 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1402D5328 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14028F114 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1402B40FC (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B5C6C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAUVIDMM_DMA_BUFFER@@@Z @ 0x1402B6C18 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1402B6DD8 (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x1402B7164 (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS a3,
        unsigned int a4,
        unsigned int a5,
        struct _D3DKMT_PRESENT_RGNS *a6,
        const struct DXGK_PRESENT_PARAMS *a7,
        unsigned int a8,
        struct DXGCONTEXT **a9,
        struct COREDEVICEACCESS *a10)
{
  unsigned int v13; // ebp
  struct DXGFASTMUTEX *v14; // rdi
  int v15; // edi
  __int64 v16; // rsi
  int v17; // edx
  unsigned int v18; // eax
  OUTPUTDUPL_CONTEXT **v19; // r13
  OUTPUTDUPL_MGR *v20; // rcx
  OUTPUTDUPL_MGR *v21; // rcx
  int v22; // eax
  const wchar_t *v24; // r9
  int v25; // [rsp+50h] [rbp-138h]
  unsigned int v26; // [rsp+54h] [rbp-134h]
  _BYTE v29[16]; // [rsp+90h] [rbp-F8h] BYREF
  _BYTE v30[16]; // [rsp+A0h] [rbp-E8h] BYREF
  struct VIDMM_DMA_BUFFER *v31[16]; // [rsp+B0h] [rbp-D8h] BYREF

  v13 = 0;
  memset(v31, 0, sizeof(v31));
  v14 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a8);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, v14, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  LODWORD(v14) = *((_DWORD *)v14 + 16);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
  v15 = DXGCONTEXT::ReserveDmaBuffersForBlts(a2, a10, (unsigned int)v14, v31);
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 1082;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire DMA buffer for context = 0x%I64x",
      (__int64)a2,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v15;
  }
  v16 = *((_QWORD *)this + 2) + 72LL * a8;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)v16, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  v17 = 1;
  v18 = 0;
  v19 = *(OUTPUTDUPL_CONTEXT ***)(v16 + 48);
  v20 = this;
  v25 = 1;
  while ( 1 )
  {
    v26 = v18;
    if ( v18 >= *((_DWORD *)v20 + 2) )
      break;
    if ( *v19 && *((_DWORD *)*v19 + 79) )
    {
      if ( v17 )
      {
        if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v20) )
        {
          v15 = OUTPUTDUPL_MGR::LogPresentParams(v21, a3, a6, a8, *(struct AUTOEXPANDALLOCATION **)(v16 + 56));
          if ( v15 < 0 )
          {
            WdLogSingleEntry1(2LL, a2);
            v24 = L"Failed to log diag packet 0x%I64x";
            WdLogGlobalForLineNumber = 1106;
LABEL_19:
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v24, (__int64)a2, 0LL, 0LL, 0LL, 0LL);
            break;
          }
        }
        v25 = 0;
      }
      v22 = OUTPUTDUPL_CONTEXT::ProcessPresent(
              *v19,
              a2,
              a3.Value,
              a4,
              a5,
              a6,
              a7,
              *(struct AUTOEXPANDALLOCATION **)(v16 + 56),
              a9);
      v15 = v22;
      if ( v22 == -1071775486 )
      {
        v15 = 259;
        *((_DWORD *)*v19 + 70) = 1;
      }
      else
      {
        if ( v22 < 0 )
        {
          v13 = v22;
          WdLogSingleEntry1(2LL, a2);
          v24 = L"Process present failed for context 0x%I64x";
          WdLogGlobalForLineNumber = 1135;
          goto LABEL_19;
        }
        if ( v22 != 259 )
          goto LABEL_14;
      }
      v13 = 259;
LABEL_14:
      v17 = v25;
      v20 = this;
    }
    v18 = v26 + 1;
    ++v19;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL, a8);
    WdLogGlobalForLineNumber = 1153;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"As we failed to process the present we will mark all the contexts on VidPnSource 0x%I64x for destroy",
      a8,
      0LL,
      0LL,
      0LL,
      0LL);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((__int64)this, a8, 0LL, 0, 0, 7);
    if ( v13 != v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1156;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"RetStatus == Status", 1156LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v13 != -1073741130 )
      v13 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v13;
}
