/*
 * XREFs of DxgkOpenKeyedMutex2 @ 0x1403B7B10
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
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403A1F60 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1403BDF5C (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  const void *v9; // rdx
  DXGGLOBAL *v10; // rcx
  int v11; // r14d
  void *v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+50h] [rbp-58h] BYREF
  __int64 v20; // [rsp+58h] [rbp-50h]
  char v21; // [rsp+60h] [rbp-48h]
  void *v22[2]; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v23[12]; // [rsp+78h] [rbp-30h]
  unsigned int Src; // [rsp+B8h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v25; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGPROCESS *v26; // [rsp+C8h] [rbp+20h]

  v19 = -1;
  v20 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2067;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2067);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2067);
  Current = DXGPROCESS::GetCurrent(v4);
  v26 = Current;
  if ( Current )
  {
    *(_OWORD *)v22 = 0LL;
    *(_QWORD *)v23 = 0LL;
    v9 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v22, v9, 0x18uLL);
    v25 = 0LL;
    Src = 0;
    DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::OpenKeyedMutex(v10, (unsigned int)v22[0], &v25, &Src, v22[1], v23[0]);
    if ( v11 >= 0 )
    {
      v12 = (void *)(a1 + 4);
      if ( a1 + 4 >= MmUserProbeAddress )
        v12 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v12, &Src, 4uLL);
    }
    if ( v11 < 0 )
    {
      if ( Src )
        DXGKEYEDMUTEX::DestroyHandle(Src);
    }
    else
    {
      v13 = Src;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v14 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v14 < *((_DWORD *)Current + 74) )
      {
        v15 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
          && (*(_DWORD *)(v15 + 16 * v14 + 8) & 0x1F) != 0 )
        {
          v16 = 2 * ((v13 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v15 + 8 * v16 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v16 + 8) &= ~0x2000u;
        }
      }
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v19);
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3621;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v19);
    }
    return 3221225485LL;
  }
}
