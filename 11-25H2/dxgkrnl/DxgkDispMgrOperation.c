/*
 * XREFs of DxgkDispMgrOperation @ 0x1403F47A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsDispBrokerProcess@DXGPROCESS@@QEBAEXZ @ 0x14006E9B8 (-IsDispBrokerProcess@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403B80D0 (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x14041495C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkDispMgrOperation(_OWORD *a1)
{
  __int64 v1; // rsi
  NTSTATUS v2; // eax
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rbx
  __int64 v5; // rcx
  DXGPROCESS *Current; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // eax
  HANDLE Handle[2]; // [rsp+50h] [rbp-28h]
  HANDLE v16[2]; // [rsp+60h] [rbp-18h]
  PVOID v17; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *a1;
  *(_OWORD *)v16 = a1[1];
  Object = 0LL;
  LODWORD(v1) = ObReferenceObjectByHandleWithTag(
                  Handle[1],
                  0x20000u,
                  g_pDxgkDisplayManagerObjectType,
                  1,
                  0x4B677844u,
                  &Object,
                  0LL);
  if ( (int)v1 < 0 )
  {
    WdLogSingleEntry1(3LL, Handle[1]);
    WdLogGlobalForLineNumber = 909;
LABEL_20:
    NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
    return (unsigned int)v1;
  }
  if ( !*(_QWORD *)Object )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 915;
LABEL_8:
    LODWORD(v1) = -1073741811;
    goto LABEL_20;
  }
  if ( LODWORD(Handle[0]) != 1 )
    goto LABEL_8;
  v17 = 0LL;
  v2 = ObReferenceObjectByHandleWithTag(v16[0], 0x1F0001u, LpcPortObjectType, 1, 0x4B677844u, &v17, 0LL);
  LODWORD(v1) = v2;
  if ( v2 < 0 )
  {
    WdLogSingleEntry2(3LL, v16[0], v2);
    WdLogGlobalForLineNumber = 927;
LABEL_19:
    NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v17);
    goto LABEL_20;
  }
  if ( !LODWORD(v16[1]) )
    goto LABEL_19;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  Current = DXGPROCESS::GetCurrent(v5);
  if ( Current && SessionData && (DXGPROCESS::IsDispBrokerProcess(Current) || *((_BYTE *)SessionData + 18500)) )
  {
    v7 = DXGSESSIONDATA::ConnectSessionDisplayBroker(SessionData);
    v1 = v7;
    if ( v7 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v8);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      WdLogSingleEntry2(2LL, v1, ProcessSessionId);
      WdLogGlobalForLineNumber = 947;
      v12 = PsGetCurrentProcess(v11);
      v13 = PsGetProcessSessionId(v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to connect to session broker with status 0x%I64x in session 0x%I64x",
        v1,
        v13,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_19;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 939;
  if ( v17 )
  {
    ObfDereferenceObjectWithTag(v17, 0x4B677844u);
    v17 = 0LL;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x4B677844u);
  return 3221225506LL;
}
