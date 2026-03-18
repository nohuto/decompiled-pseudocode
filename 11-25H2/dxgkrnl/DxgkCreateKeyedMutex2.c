/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1403C77A0
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
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402FF39C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403A1F60 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403C7E0C (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  int v6; // edi
  const void *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGKEYEDMUTEX *v11; // rsi
  DXGGLOBAL *Global; // rax
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF Value; // r15d
  char *v14; // r12
  unsigned int v15; // r9d
  DXGKEYEDMUTEX *v16; // r15
  void *v17; // rcx
  void *v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rsi
  int v23; // [rsp+60h] [rbp-78h] BYREF
  __int64 v24; // [rsp+68h] [rbp-70h]
  char v25; // [rsp+70h] [rbp-68h]
  unsigned __int64 v26[2]; // [rsp+78h] [rbp-60h] BYREF
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v27[4]; // [rsp+88h] [rbp-50h]
  unsigned int Src; // [rsp+E8h] [rbp+10h] BYREF
  int v29; // [rsp+F0h] [rbp+18h] BYREF
  DXGKEYEDMUTEX *v30; // [rsp+F8h] [rbp+20h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2066);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2066);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    *(_OWORD *)v26 = 0LL;
    *(_OWORD *)&v27[0].0 = 0LL;
    v7 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v26, v7, 0x20uLL);
    if ( (v27[3].Value & 0xFFFFFFFE) != 0 )
    {
      v6 = -1073741811;
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 3458;
    }
    else
    {
      v11 = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      Value = (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF)v27[2].Value;
      v14 = *(char **)&v27[0].0;
      Src = 0;
      v30 = 0LL;
      v6 = DXGGLOBAL::CreateKeyedMutex(Global, v26[0], v27[3], 0, &v30);
      if ( v6 >= 0 )
      {
        v15 = (unsigned int)Value;
        v16 = v30;
        v6 = DXGKEYEDMUTEX::Open(v30, &Src, v14, v15, 1);
        if ( v6 >= 0 )
          v11 = v16;
        else
          DXGKEYEDMUTEX::ReleaseReference(v16);
      }
      if ( v6 < 0 )
      {
        if ( Src )
          DXGKEYEDMUTEX::DestroyHandle(Src);
      }
      else
      {
        v17 = (void *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v17 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v17, &Src, 4uLL);
        v29 = *((_DWORD *)v11 + 8);
        v18 = (void *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v18 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v18, &v29, 4uLL);
        DXGKEYEDMUTEX::ReleaseReference(v11);
        v19 = Src;
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
        v20 = ((unsigned int)v19 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v20 < *((_DWORD *)Current + 74) )
        {
          v21 = *((_QWORD *)Current + 35);
          if ( (((unsigned int)v19 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
            && (*(_DWORD *)(v21 + 16 * v20 + 8) & 0x1F) != 0 )
          {
            v22 = 2 * ((v19 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v21 + 8 * v22 + 8) & 0x2000) == 0 )
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
            *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v22 + 8) &= ~0x2000u;
          }
        }
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)Current + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3435;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v23);
  return (unsigned int)v6;
}
