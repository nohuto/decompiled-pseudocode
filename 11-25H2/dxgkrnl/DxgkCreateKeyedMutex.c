/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1401EF230
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400427F4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403A1F60 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1403C7D0C (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(DXGKEYEDMUTEX *a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  const void *v8; // rdx
  DXGGLOBAL *Global; // rax
  int v10; // r14d
  void *v11; // rcx
  DXGKEYEDMUTEX *v12; // r15
  void *v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int Src; // [rsp+50h] [rbp-78h] BYREF
  int v21; // [rsp+58h] [rbp-70h] BYREF
  __int64 v22; // [rsp+60h] [rbp-68h]
  char v23; // [rsp+68h] [rbp-60h]
  int v24; // [rsp+70h] [rbp-58h] BYREF
  DXGKEYEDMUTEX *v25[3]; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v26[2]; // [rsp+90h] [rbp-38h] BYREF

  v25[1] = a1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2051;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2051);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2051);
  Current = DXGPROCESS::GetCurrent();
  v25[2] = Current;
  if ( Current )
  {
    *(_OWORD *)v26 = 0LL;
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v26, v8, 0x10uLL);
    Src = 0;
    v25[0] = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v26[0], v25, &Src, 0LL, 0, 0);
    if ( v10 >= 0 )
    {
      v11 = (char *)a1 + 12;
      if ( (unsigned __int64)a1 + 12 >= MmUserProbeAddress )
        v11 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v11, &Src, 4uLL);
      v12 = v25[0];
      v24 = *((_DWORD *)v25[0] + 8);
      v13 = (char *)a1 + 8;
      if ( (unsigned __int64)a1 + 8 >= MmUserProbeAddress )
        v13 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v13, &v24, 4uLL);
      DXGKEYEDMUTEX::ReleaseReference(v12);
    }
    if ( v10 < 0 )
    {
      if ( Src )
        DXGKEYEDMUTEX::DestroyHandle(Src);
    }
    else
    {
      v14 = Src;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v15 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v15 < *((_DWORD *)Current + 74) )
      {
        v16 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
          && (*(_DWORD *)(v16 + 16 * v15 + 8) & 0x1F) != 0 )
        {
          v17 = 2 * ((v14 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v16 + 8 * v17 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v17 + 8) &= ~0x2000u;
        }
      }
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v21);
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3339;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v21);
    }
    return 3221225485LL;
  }
}
