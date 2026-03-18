/*
 * XREFs of DxgkOpenKeyedMutexFromNtHandle @ 0x1401DDE30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1401EEA34 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403A1F60 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutexFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  const void *v8; // rdx
  DXGGLOBAL *v9; // rcx
  int v10; // r14d
  void *v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+50h] [rbp-68h] BYREF
  __int64 v19; // [rsp+58h] [rbp-60h]
  char v20; // [rsp+60h] [rbp-58h]
  void *v21[2]; // [rsp+68h] [rbp-50h] BYREF
  void *v22[2]; // [rsp+78h] [rbp-40h]
  unsigned int Src; // [rsp+C8h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v24; // [rsp+D0h] [rbp+18h] BYREF
  struct DXGPROCESS *v25; // [rsp+D8h] [rbp+20h]

  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2159;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2159);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2159);
  Current = DXGPROCESS::GetCurrent();
  v25 = Current;
  if ( Current )
  {
    *(_OWORD *)v21 = 0LL;
    *(_OWORD *)v22 = 0LL;
    v8 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v21, v8, 0x20uLL);
    v24 = 0LL;
    Src = 0;
    DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::OpenKeyedMutexFromNtHandle(v9, v21[0], &v24, &Src, v22[0], (unsigned int)v22[1]);
    if ( v10 >= 0 )
    {
      v11 = (void *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v11 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v11, &Src, 4uLL);
    }
    if ( v10 < 0 )
    {
      if ( Src )
        DXGKEYEDMUTEX::DestroyHandle(Src);
    }
    else
    {
      v12 = Src;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v13 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v13 < *((_DWORD *)Current + 74) )
      {
        v14 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
          && (*(_DWORD *)(v14 + 16 * v13 + 8) & 0x1F) != 0 )
        {
          v15 = 2 * ((v12 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v14 + 8 * v15 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v15 + 8) &= ~0x2000u;
        }
      }
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v18);
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2984;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v18);
    }
    return 3221225485LL;
  }
}
