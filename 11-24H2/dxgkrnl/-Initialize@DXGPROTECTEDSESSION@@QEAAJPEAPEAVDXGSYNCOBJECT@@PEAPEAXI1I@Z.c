/*
 * XREFs of ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1401EFFFC
 * Callers:
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1401EFB10 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x140076C78 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z @ 0x1401A32A4 (-DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Initialize(
        DXGPROTECTEDSESSION *this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        UINT a4,
        void **a5,
        unsigned int a6)
{
  _DWORD *v10; // rdi
  __int64 v11; // r8
  void *v12; // rax
  ADAPTER_DISPLAY *v13; // rcx
  __int64 v14; // rax
  int v15; // edi
  _DXGKARG_CREATEPROTECTEDSESSION v17; // [rsp+50h] [rbp-38h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 993;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsCoreResourceSharedOwner()",
      993LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 37) = 0;
  v10 = *a2;
  if ( *((_DWORD *)*a2 + 101) != 5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 443;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"D3DDDI_MONITORED_FENCE == GetSyncObjectType()",
      443LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_QWORD *)this + 16) = *((_QWORD *)v10 + 27);
  *((_QWORD *)this + 15) = *a2;
  *((_QWORD *)this + 11) = *a3;
  *((_DWORD *)this + 24) = a4;
  *((_QWORD *)this + 13) = *a5;
  *((_DWORD *)this + 28) = a6;
  *a2 = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  DXGPROTECTEDSESSION::AddReference(this, 1);
  v12 = (void *)*((_QWORD *)this + 11);
  v13 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 2);
  *(&v17.PrivateDriverDataSize + 1) = 0;
  v17.hProtectedSession = this;
  v17.pPrivateDriverData = v12;
  v17.PrivateDriverDataSize = a4;
  v14 = *((_QWORD *)v13 + 2);
  if ( *(_QWORD *)(v14 + 1240) && *(_QWORD *)(v14 + 1248) )
  {
    v15 = ADAPTER_DISPLAY::DdiCreateProtectedSession(v13, &v17, v11);
    if ( v15 >= 0 )
    {
      *((_QWORD *)this + 19) = v17.hProtectedSession;
      return (unsigned int)v15;
    }
  }
  else
  {
    v15 = -1073741637;
    WdLogSingleEntry1(3LL, -1073741637LL);
    WdLogGlobalForLineNumber = 1044;
  }
  *((_DWORD *)this + 6) = 3;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 20, 0xFFFFFFFF) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1061;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"c == 0", 1061LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v15;
}
