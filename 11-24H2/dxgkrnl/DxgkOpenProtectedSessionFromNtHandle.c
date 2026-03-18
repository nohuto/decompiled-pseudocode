/*
 * XREFs of DxgkOpenProtectedSessionFromNtHandle @ 0x1401F1880
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x14018670C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401F0228 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // r13
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  const void *v9; // rdx
  NTSTATUS v10; // eax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGPROTECTEDSESSION **v14; // rsi
  int v15; // eax
  void *v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  HANDLE Handle[2]; // [rsp+50h] [rbp-48h] BYREF
  int v24; // [rsp+60h] [rbp-38h] BYREF
  __int64 v25; // [rsp+68h] [rbp-30h]
  char v26; // [rsp+70h] [rbp-28h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B0h] [rbp+18h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2152);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2152);
  HandleInformation = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 727;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"PsGetCurrentThreadPreviousMode() == UserMode",
      727LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 734;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v24);
    }
    return v5;
  }
  *(_OWORD *)Handle = 0LL;
  v9 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v9, 0x10uLL);
  LODWORD(Handle[1]) = 0;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v5 = v10;
  LODWORD(v11) = -1073741788;
  if ( v10 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 771;
LABEL_17:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v24);
    return (unsigned int)v11;
  }
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v10);
    WdLogGlobalForLineNumber = 778;
    goto LABEL_9;
  }
  v14 = (DXGPROTECTEDSESSION **)Object;
  if ( !*(_QWORD *)Object )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 789;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pSharedProtectedSessionObject->pProtectedSession",
      789LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = DXGPROTECTEDSESSION::Open(*v14, (unsigned int *)&Handle[1]);
  v11 = v15;
  if ( v15 < 0 )
  {
    if ( LODWORD(Handle[1]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 797;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"NULL == KMOpenProtectedSessionFromNtHandle.hHandle",
        797LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    WdLogSingleEntry2(3LL, Handle[0], v11);
    WdLogGlobalForLineNumber = 800;
    if ( LODWORD(Handle[1]) )
    {
      DXGPROTECTEDSESSION::DestroyProtectedSession(*v14, (unsigned int)Handle[1]);
      LODWORD(Handle[1]) = 0;
    }
    ObfDereferenceObject(v14);
    goto LABEL_17;
  }
  if ( !LODWORD(Handle[1]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 804;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"KMOpenProtectedSessionFromNtHandle.hHandle",
      804LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = (void *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v16 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v16, &Handle[1], 4uLL);
  ObfDereferenceObject(v14);
  v17 = LODWORD(Handle[1]);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v18 = ((unsigned int)v17 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 < *((_DWORD *)Current + 74) )
  {
    v19 = *((_QWORD *)Current + 35);
    if ( (((unsigned int)v17 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60)
      && (*(_DWORD *)(v19 + 16 * v18 + 8) & 0x1F) != 0 )
    {
      v20 = 2 * ((v17 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v19 + 8 * v20 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v20 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v24);
  return 0LL;
}
