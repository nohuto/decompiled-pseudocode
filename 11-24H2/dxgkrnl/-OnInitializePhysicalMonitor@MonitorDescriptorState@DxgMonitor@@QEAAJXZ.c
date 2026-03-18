/*
 * XREFs of ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042ED20
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140055C94 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140055CF8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x140091B50 (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x14027F9B8 (-CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEA.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140280488 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1403E4A48 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ @ 0x1403F8E30 (-AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ.c)
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1404001D0 (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInitializePhysicalMonitor(
        DxgMonitor::MonitorDescriptorState *this)
{
  unsigned int v2; // r14d
  __int64 v3; // rax
  _DWORD *v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void **v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r14d
  __int64 v27; // rax
  _DWORD *v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  int v42; // r14d
  __int64 v43; // rax
  int v44; // r15d
  void *v45; // rax
  void *v46; // rbx
  __int64 v47; // rax
  int v48; // eax
  __int64 (__fastcall ***v49)(_QWORD, __int64); // rax
  bool v50; // zf
  void **v51; // rcx
  void *v52; // rax
  void *v53; // rbx
  __int64 v54; // rax
  int v55; // eax
  __int64 (__fastcall ***v56)(_QWORD, __int64); // rax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  DxgMonitor::MultiMonitorDescriptor *v60; // rax
  __int64 v61; // rax
  void *v63; // [rsp+30h] [rbp-40h] BYREF
  void *v64; // [rsp+38h] [rbp-38h] BYREF
  void *v65; // [rsp+40h] [rbp-30h] BYREF
  void *v66; // [rsp+48h] [rbp-28h] BYREF
  void *v67; // [rsp+50h] [rbp-20h] BYREF
  void *v68[2]; // [rsp+58h] [rbp-18h] BYREF
  size_t Size; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v70; // [rsp+B8h] [rbp+48h] BYREF
  void *v71; // [rsp+C8h] [rbp+58h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 167;
  }
  v71 = 0LL;
  if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = operator new(0x98uLL, 0x4D677844u, 256LL);
      v4 = (_DWORD *)v3;
      if ( !v3 )
      {
        v63 = 0LL;
        WdLogSingleEntry0(2LL);
        v18 = &v63;
        WdLogGlobalForLineNumber = 341;
        goto LABEL_101;
      }
      memset((void *)(v3 + 24), 0, 0x80uLL);
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 2) = 128LL;
      v5 = *((_QWORD *)this + 14);
      v63 = v4;
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _DWORD *))(*(_QWORD *)v6 + 8LL))(
             v6,
             v2 << 7,
             128LL,
             v4 + 6);
      v12 = v7;
      if ( v7 == -1071841279 || v7 == -1071774719 )
        break;
      if ( v7 == -1071841272 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = v2;
        WdLogGlobalForLineNumber = 379;
        goto LABEL_17;
      }
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(2LL, v7);
        WdLogGlobalForLineNumber = 393;
        goto LABEL_17;
      }
      v4[2] = 2;
      v4[3] = v2 != 0 ? 255 : 1;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)v4,
        &v71);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        &v71,
        &v63);
      ++v2;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        &v63,
        0LL);
      if ( v2 > 0xFE )
        goto LABEL_18;
    }
    if ( v2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 365;
    }
    WdLogSingleEntry1(3LL, this);
    WdLogGlobalForLineNumber = 367;
LABEL_17:
    v12 = 0;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      &v63,
      0LL);
LABEL_18:
    if ( v71 )
    {
      if ( !v2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 426;
      }
      v13 = DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(
              (__int64 **)&v71,
              (__int64 (__fastcall ****)(_QWORD, __int64))this + 16);
      v12 = v13;
      if ( v13 != -1073741801 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = v13;
        v12 = 0;
        WdLogGlobalForLineNumber = 435;
        goto LABEL_49;
      }
    }
    goto LABEL_48;
  }
  v19 = *((_QWORD *)this + 14);
  *(_OWORD *)v68 = 0LL;
  LODWORD(v68[0]) = 1;
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
  if ( (*(unsigned int (__fastcall **)(__int64, void **))(*(_QWORD *)v20 + 16LL))(v20, v68) != -1073741822 )
  {
    v21 = DxgMonitor::EdidMonitorDescriptor::CreateFromSingleEdidBlob(
            (__int64)v68,
            (__int64 (__fastcall ****)(_QWORD, __int64))this + 16);
    v12 = v21;
    if ( v21 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = v21;
      v12 = 0;
      WdLogGlobalForLineNumber = 197;
    }
    if ( !v68[1] )
      goto LABEL_49;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v68[1]);
    v68[1] = 0LL;
    HIDWORD(v68[0]) = 0;
LABEL_48:
    if ( v12 < 0 )
      goto LABEL_102;
LABEL_49:
    v41 = *((_QWORD *)this + 14);
    v42 = v12;
    LODWORD(Size) = 0;
    v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 24LL))(v41);
    v44 = (*(__int64 (__fastcall **)(__int64, size_t *, _QWORD))(*(_QWORD *)v43 + 24LL))(v43, &Size, 0LL);
    if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v44 != -1073741789 )
        goto LABEL_82;
      if ( (unsigned int)(Size - 1) > 0xFFFF )
      {
        WdLogSingleEntry1(3LL, (unsigned int)Size);
        WdLogGlobalForLineNumber = 554;
        goto LABEL_82;
      }
      v45 = (void *)operator new[]((unsigned int)Size, 0x4D677844u, 256LL);
      v66 = v45;
      v46 = v45;
      if ( v45 )
      {
        memset(v45, 0, (unsigned int)Size);
        v47 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
        v48 = (*(__int64 (__fastcall **)(__int64, size_t *, void *))(*(_QWORD *)v47 + 24LL))(v47, &Size, v46);
        if ( v48 < 0 )
        {
          WdLogSingleEntry1(2LL, v48);
          WdLogGlobalForLineNumber = 542;
        }
        else
        {
          v49 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x48uLL, 0x4D677844u, 256LL);
          if ( v49 )
            v49 = (__int64 (__fastcall ***)(_QWORD, __int64))DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(
                                                               (__int64)v49,
                                                               &v66,
                                                               Size);
          wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))this + 17,
            v49);
          if ( !*((_QWORD *)this + 17) )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 528;
          }
          v50 = *((_QWORD *)this + 16) == 0LL;
          *((_BYTE *)this + 152) = 0;
          if ( v50 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 536;
          }
        }
        v12 = v42;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 547;
        v12 = -1073741801;
      }
      v51 = &v66;
      goto LABEL_64;
    }
    if ( (_DWORD)Size )
    {
      if ( (unsigned int)Size <= 0x10000 )
      {
        v52 = (void *)operator new[]((unsigned int)Size, 0x4D677844u, 256LL);
        v67 = v52;
        v53 = v52;
        if ( v52 )
        {
          memset(v52, 0, (unsigned int)Size);
          v54 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
          v55 = (*(__int64 (__fastcall **)(__int64, size_t *, void *))(*(_QWORD *)v54 + 24LL))(v54, &Size, v53);
          if ( v55 < 0 )
          {
            WdLogSingleEntry1(2LL, v55);
            WdLogGlobalForLineNumber = 487;
          }
          else
          {
            v56 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x48uLL, 0x4D677844u, 256LL);
            if ( v56 )
              v56 = (__int64 (__fastcall ***)(_QWORD, __int64))DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(
                                                                 (__int64)v56,
                                                                 &v67,
                                                                 Size);
            wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
              (__int64 (__fastcall ****)(_QWORD, __int64))this + 17,
              v56);
            if ( !*((_QWORD *)this + 17) )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 473;
            }
            v50 = *((_QWORD *)this + 16) == 0LL;
            *((_BYTE *)this + 152) = 0;
            if ( v50 )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 481;
            }
          }
          v12 = v42;
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 492;
          v12 = -1073741801;
        }
        v51 = &v67;
LABEL_64:
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(v51);
        goto LABEL_81;
      }
      WdLogSingleEntry1(3LL, (unsigned int)Size);
      WdLogGlobalForLineNumber = 499;
    }
LABEL_81:
    if ( v12 < 0 )
      goto LABEL_102;
LABEL_82:
    v57 = *((_QWORD *)this + 16);
    if ( !v57 || *((_QWORD *)this + 17) )
    {
LABEL_93:
      if ( *((_QWORD *)this + 16) )
      {
        v59 = *((_QWORD *)this + 17);
        if ( v59 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v59 + 48LL))(v59) == 2 )
          {
            v60 = (DxgMonitor::MultiMonitorDescriptor *)operator new(0x28uLL, 0x4D677844u, 256LL);
            if ( v60 )
              v60 = DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
                      v60,
                      *((struct DxgMonitor::IMonitorDescriptor **)this + 16),
                      *((struct DxgMonitor::IMonitorDescriptor **)this + 17));
            wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
              (__int64 (__fastcall ****)(_QWORD, __int64))this + 18,
              (__int64 (__fastcall ***)(_QWORD, __int64))v60);
            if ( !*((_QWORD *)this + 18) )
              v12 = -1073741801;
          }
        }
      }
      goto LABEL_102;
    }
    v70 = 0;
    (*(void (__fastcall **)(__int64, void **, unsigned int *))(*(_QWORD *)v57 + 232LL))(v57, &v65, &v70);
    if ( v65 )
    {
      v58 = DxgMonitor::DisplayIdMonitorDescriptor::ExtractFromEdid(
              (unsigned __int8 **)&v65,
              v70,
              (__int64 (__fastcall ****)(_QWORD, __int64))this + 17);
      if ( *((_QWORD *)this + 17) )
        *((_BYTE *)this + 152) = 1;
      if ( v58 >= 0 || v58 == -1073741275 )
      {
LABEL_92:
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v65);
        if ( v12 < 0 )
          goto LABEL_102;
        goto LABEL_93;
      }
    }
    else
    {
      v12 = -1073741801;
      v58 = -1073741801;
    }
    WdLogSingleEntry1(2LL, v58);
    WdLogGlobalForLineNumber = 584;
    goto LABEL_92;
  }
  v26 = 0;
  while ( 1 )
  {
    v27 = operator new(0x98uLL, 0x4D677844u, 256LL);
    v28 = (_DWORD *)v27;
    if ( !v27 )
      break;
    memset((void *)(v27 + 24), 0, 0x80uLL);
    *(_QWORD *)v28 = 0LL;
    *((_QWORD *)v28 + 1) = 0LL;
    *((_QWORD *)v28 + 2) = 128LL;
    v29 = *((_QWORD *)this + 14);
    v64 = v28;
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 24LL))(v29);
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _DWORD *))(*(_QWORD *)v30 + 8LL))(
            v30,
            v26 << 7,
            128LL,
            v28 + 6);
    v12 = v31;
    if ( v31 == -1071841279 || v31 == -1071774719 )
    {
      if ( v26 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 250;
      }
      WdLogSingleEntry1(3LL, this);
      WdLogGlobalForLineNumber = 252;
      goto LABEL_42;
    }
    if ( v31 == -1071841272 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v33, v32, v34, v35) + 24) = v26;
      WdLogGlobalForLineNumber = 264;
      goto LABEL_42;
    }
    if ( v31 < 0 )
    {
      WdLogSingleEntry1(2LL, v31);
      WdLogGlobalForLineNumber = 278;
LABEL_42:
      v12 = 0;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        &v64,
        0LL);
LABEL_43:
      if ( v71 )
      {
        if ( !v26 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 311;
        }
        v36 = DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(
                (__int64 **)&v71,
                (__int64 (__fastcall ****)(_QWORD, __int64))this + 16);
        v12 = v36;
        if ( v36 != -1073741801 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v38, v37, v39, v40) + 24) = v36;
          v12 = 0;
          WdLogGlobalForLineNumber = 320;
        }
      }
      goto LABEL_48;
    }
    v28[2] = 2;
    v28[3] = v26 != 0 ? 255 : 1;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      (void **)v28,
      &v71);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      &v71,
      &v64);
    ++v26;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      &v64,
      0LL);
    if ( v26 > 0xFE )
      goto LABEL_43;
  }
  v64 = 0LL;
  WdLogSingleEntry0(6LL);
  v18 = &v64;
  WdLogGlobalForLineNumber = 226;
LABEL_101:
  v12 = -1073741801;
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    v18,
    0LL);
LABEL_102:
  v61 = *((_QWORD *)this + 18);
  if ( v61 || (v61 = *((_QWORD *)this + 16)) != 0 || (v61 = *((_QWORD *)this + 17)) != 0 )
    *((_QWORD *)this + 20) = v61;
  DxgMonitor::MonitorDescriptorState::AddDescriptorsToCache(this);
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    &v71,
    0LL);
  return (unsigned int)v12;
}
