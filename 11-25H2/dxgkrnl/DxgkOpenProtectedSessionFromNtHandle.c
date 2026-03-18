/*
 * XREFs of DxgkOpenProtectedSessionFromNtHandle @ 0x1401EBE70
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1401843BC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401EA820 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  const void *v8; // rdx
  NTSTATUS v9; // eax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGPROTECTEDSESSION **v13; // rsi
  int v14; // eax
  void *v15; // rcx
  unsigned __int64 v16; // rsi
  struct DXGPROCESS *v17; // r13
  char *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  HANDLE Handle[2]; // [rsp+50h] [rbp-58h] BYREF
  int v25; // [rsp+60h] [rbp-48h] BYREF
  __int64 v26; // [rsp+68h] [rbp-40h]
  char v27; // [rsp+70h] [rbp-38h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGPROCESS *Current; // [rsp+C8h] [rbp+20h]

  v25 = -1;
  v26 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2152);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2152);
  HandleInformation = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 727;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
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
    v4 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 734;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v25);
    }
    return v4;
  }
  *(_OWORD *)Handle = 0LL;
  v8 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v8, 0x10uLL);
  LODWORD(Handle[1]) = 0;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(
         Handle[0],
         0x20000u,
         g_pDxgkSharedProtectedSessionObjectType,
         1,
         &Object,
         &HandleInformation);
  v4 = v9;
  LODWORD(v10) = -1073741788;
  if ( v9 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 771;
LABEL_17:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v25);
    return (unsigned int)v10;
  }
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v9);
    WdLogGlobalForLineNumber = 778;
    goto LABEL_9;
  }
  v13 = (DXGPROTECTEDSESSION **)Object;
  if ( !*(_QWORD *)Object )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 789;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pSharedProtectedSessionObject->pProtectedSession",
      789LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = DXGPROTECTEDSESSION::Open(*v13, (unsigned int *)&Handle[1]);
  v10 = v14;
  if ( v14 < 0 )
  {
    if ( LODWORD(Handle[1]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 797;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"NULL == KMOpenProtectedSessionFromNtHandle.hHandle",
        797LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    WdLogSingleEntry2(3LL, Handle[0], v10);
    WdLogGlobalForLineNumber = 800;
    if ( LODWORD(Handle[1]) )
    {
      DXGPROTECTEDSESSION::DestroyProtectedSession(*v13, (unsigned int)Handle[1]);
      LODWORD(Handle[1]) = 0;
    }
    ObfDereferenceObject(v13);
    goto LABEL_17;
  }
  if ( !LODWORD(Handle[1]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 804;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"KMOpenProtectedSessionFromNtHandle.hHandle",
      804LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = (void *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v15 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v15, &Handle[1], 4uLL);
  ObfDereferenceObject(v13);
  v16 = LODWORD(Handle[1]);
  v17 = Current;
  v18 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v19 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 < *((_DWORD *)v17 + 74) )
  {
    v20 = *((_QWORD *)v17 + 35);
    if ( (((unsigned int)v16 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
      && (*(_DWORD *)(v20 + 16 * v19 + 8) & 0x1F) != 0 )
    {
      v21 = 2 * ((v16 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v20 + 8 * v21 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)v17 + 35) + 8 * v21 + 8) &= ~0x2000u;
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v18 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v18, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v25);
  return 0LL;
}
