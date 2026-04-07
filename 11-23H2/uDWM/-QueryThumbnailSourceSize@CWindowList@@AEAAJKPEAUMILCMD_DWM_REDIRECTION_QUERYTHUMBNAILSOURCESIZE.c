/*
 * XREFs of ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x18006EF10
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001AF70 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18000553C (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18000D57C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::QueryThumbnailSourceSize(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  struct CThumbnailData *v7; // rsi
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  unsigned __int64 v11; // xmm0_8
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct CSecondaryWindowRepresentation *v17; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+68h] [rbp+20h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  v7 = ThumbnailData;
  v8 = 0;
  if ( !ThumbnailData || a2 != *((_DWORD *)a3 + 2) )
  {
    v10 = -2147024809;
    goto LABEL_23;
  }
  if ( *((_BYTE *)ThumbnailData + 34) && *((_DWORD *)ThumbnailData + 30) == 2 )
  {
    v9 = (*(__int64 (__fastcall **)(struct CThumbnailData *))(*(_QWORD *)ThumbnailData + 8LL))(ThumbnailData);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x13A0u);
      goto LABEL_23;
    }
    v11 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)v7 + 14) + 328LL), 8).m128i_u64[0];
    v12 = *(_QWORD *)(*((_QWORD *)v7 + 14) + 328LL);
    v13 = 0;
    if ( (int)v11 - (int)v12 >= 0 )
      v13 = v11 - v12;
    if ( HIDWORD(v11) - HIDWORD(v12) >= 0 )
      v8 = HIDWORD(v11) - HIDWORD(v12);
  }
  else
  {
    v17 = 0LL;
    v14 = (*(__int64 (__fastcall **)(struct CThumbnailData *))(*(_QWORD *)ThumbnailData + 8LL))(ThumbnailData);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x13A9u);
      goto LABEL_23;
    }
    v15 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(*((CThumbnailVisual **)v7 + 11), &v17);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x13AAu);
      goto LABEL_23;
    }
    v13 = 0;
    if ( *((_DWORD *)v17 + 20) - *((_DWORD *)v17 + 23) - *((_DWORD *)v17 + 22) >= 0 )
      v13 = *((_DWORD *)v17 + 20) - *((_DWORD *)v17 + 23) - *((_DWORD *)v17 + 22);
    if ( *((_DWORD *)v17 + 21) - *((_DWORD *)v17 + 24) - *((_DWORD *)v17 + 25) >= 0 )
      v8 = *((_DWORD *)v17 + 21) - *((_DWORD *)v17 + 24) - *((_DWORD *)v17 + 25);
  }
  *((_DWORD *)a3 + 3) = v13;
  *((_DWORD *)a3 + 4) = v8;
LABEL_23:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v10;
}
