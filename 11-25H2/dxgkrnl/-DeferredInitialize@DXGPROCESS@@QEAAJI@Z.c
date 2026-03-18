/*
 * XREFs of ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x140348F20
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1401CE15C (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1401E7C3C (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140348958 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x14005AEF0 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGPROCESS::DeferredInitialize(DXGPROCESS *this, unsigned int a2)
{
  VIDSCH_EXPORT *v2; // rbx
  __int64 v3; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  struct DXGGLOBAL *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  struct DXGGLOBAL *v11; // rax
  __int64 v12; // rbp
  const wchar_t *v14; // r9
  struct DXGGLOBAL *v15; // rax

  v2 = 0LL;
  v3 = a2;
  if ( a2 >= 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1760;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DXGMMSVersion < MAX_DXGMMS_VERSION",
      1760LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3 + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1765;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_pNonPagedData->m_pVidSchProcess[DXGMMSVersion] == NULL",
      1765LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v3 >= 2 )
  {
    v6 = 0LL;
  }
  else
  {
    _mm_lfence();
    v6 = *((_QWORD *)Global + v3 + 34);
  }
  v7 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v6 + 8) + 80LL))(this);
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * (unsigned int)(*(_DWORD *)v6 - 1) + 16) = v7;
  if ( !v7 )
  {
    WdLogSingleEntry1(6LL, this);
    v14 = L"DXGPROCESS (0x%I64x) failed to allocate m_pVidSchProcess";
    WdLogGlobalForLineNumber = 1769;
    goto LABEL_18;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1776;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_pNonPagedData->m_pVidMmProcess[DXGMMSVersion] == NULL",
      1776LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v3 >= 2 )
  {
    v9 = 0LL;
  }
  else
  {
    _mm_lfence();
    v9 = *((_QWORD *)v8 + v3 + 32);
  }
  v10 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v9 + 8) + 336LL))(this);
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * (unsigned int)(*(_DWORD *)v9 - 1)) = v10;
  if ( !v10 )
  {
    WdLogSingleEntry1(6LL, this);
    v14 = L"DXGPROCESS (0x%I64x) failed to allocate m_pVidMmProcess";
    WdLogGlobalForLineNumber = 1780;
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v14, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  v11 = DXGGLOBAL::GetGlobal();
  v12 = v3 + 34;
  if ( (unsigned int)v3 >= 2 || !*((_QWORD *)v11 + v12) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1788;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DXGGLOBAL::GetGlobal()->GetVidSchExport(DXGMMSVersion) != NULL",
      1788LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + 102) & 4) != 0 )
  {
    *(_BYTE *)(*((_QWORD *)this + 8) + 138LL) = 1;
    v15 = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)v3 < 2 )
      v2 = (VIDSCH_EXPORT *)*((_QWORD *)v15 + v12);
    VIDSCH_EXPORT::VidSchRegisterAsDwm(v2, this);
  }
  return 0LL;
}
