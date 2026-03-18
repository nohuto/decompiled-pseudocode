/*
 * XREFs of ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1401989C8
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1402324E0 (DxgkHandleVideoParameters.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1400391A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x140061BD8 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x140067178 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x140198F48 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140380B64 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCopyProtection(DXGADAPTER **this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v5; // rbp
  struct _KTHREAD **Current; // rdi
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  DXGCOPYPROTECTION *v8; // rbx
  DXGCOPYPROTECTION *v10; // rcx
  DXGCOPYPROTECTION **v11; // rax
  _BYTE v12[16]; // [rsp+50h] [rbp-28h] BYREF

  v3 = a3;
  v5 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5813;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 5813LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5816;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcess != NULL", 5816LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( Current[48] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5817;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pProcess->IsCopyProtectionMutexOwner()",
      5817LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v5, v3, (struct DXGPROCESS *)Current);
  v8 = CopyProtection;
  if ( CopyProtection )
  {
    DXGPROCESS::RemoveCopyProtection(Current, (__int64)CopyProtection);
    v10 = *(DXGCOPYPROTECTION **)v8;
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v8 + 8LL) != v8
      || (v11 = (DXGCOPYPROTECTION **)*((_QWORD *)v8 + 1), *v11 != v8) )
    {
      __fastfail(3u);
    }
    *v11 = v10;
    *((_QWORD *)v10 + 1) = v11;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v8);
    ADAPTER_DISPLAY::SetCopyProtection((ADAPTER_DISPLAY *)this, v5);
    DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry4(3LL, v3, Current, v5, -1073741811LL);
    WdLogGlobalForLineNumber = 5835;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
    return 3221225485LL;
  }
}
