/*
 * XREFs of DxgkGetAdapter @ 0x1401D70C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x140034510 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1400739F0 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1401D39A4 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetAdapter(_QWORD *a1, struct _LUID *a2, PDEVICE_OBJECT *a3, _QWORD *a4, _BYTE *a5)
{
  unsigned int *v9; // rbx
  DXGPROCESS *Current; // rax
  bool IsRemoteConnection; // al
  unsigned int *v12; // rcx
  int DefaultRenderAdapterForSession; // ebx
  __int64 v14; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  __int64 v18; // rdx
  unsigned __int8 v20; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v21[12]; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h]
  _BYTE v23[24]; // [rsp+68h] [rbp-18h] BYREF

  *(_DWORD *)&v21[8] = 0;
  v20 = 0;
  *(_QWORD *)v21 = (unsigned int)PsGetCurrentProcessSessionId();
  v9 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current);
    v12 = (unsigned int *)v21;
    if ( !IsRemoteConnection )
      v12 = 0LL;
    v9 = v12;
  }
  DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(
                                     a2,
                                     (struct DXGADAPTER_REFERENCE *)&v21[4],
                                     v9,
                                     (bool *)&v20);
  if ( DefaultRenderAdapterForSession < 0 )
    goto LABEL_20;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v23,
    *(struct DXGADAPTER **)&v21[4],
    1);
  if ( *(_DWORD *)(*(_QWORD *)&v21[4] + 200LL) != 1
    || (v14 = *(_QWORD *)&v21[4], *(_BYTE *)(*(_QWORD *)&v21[4] + 3017LL)) )
  {
    DefaultRenderAdapterForSession = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 4800;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DxgkGetAdapter(): Aadapter found is not active, returning 0x%I64x.",
      -1073741275LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
LABEL_20:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v21[4], 0LL);
    return (unsigned int)DefaultRenderAdapterForSession;
  }
  *a2 = *(struct _LUID *)(*(_QWORD *)&v21[4] + 412LL);
  if ( a1 )
  {
    if ( !a4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4811;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"(NULL != pReferenceCookie)", 4811LL, 0LL, 0LL, 0LL, 0LL);
      v14 = *(_QWORD *)&v21[4];
    }
    if ( !a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4812;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(NULL != ppPhysicalDeviceHandle)",
        4812LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v14 = *(_QWORD *)&v21[4];
    }
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v14 + 216));
    *a3 = DeviceAttachmentBaseRef;
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
      DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionData, *(struct DXGADAPTER **)&v21[4]);
    v18 = *(_QWORD *)&v21[4];
    if ( a5 )
      *a5 = *(_BYTE *)(*(_QWORD *)&v21[4] + 209LL);
    *a4 = v22;
    *a1 = v18;
    *(_QWORD *)&v21[4] = 0LL;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v21[4], 0LL);
  return 0LL;
}
