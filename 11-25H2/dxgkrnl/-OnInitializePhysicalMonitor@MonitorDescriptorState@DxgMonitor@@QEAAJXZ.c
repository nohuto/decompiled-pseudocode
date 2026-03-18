/*
 * XREFs of ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042CE30
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400564E4 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140056548 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x140090804 (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x1402784B8 (-CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEA.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140278F98 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1403EB2C4 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ @ 0x1403FEE44 (-AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ.c)
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1404078C0 (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInitializePhysicalMonitor(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // r9
  unsigned int v3; // r14d
  __int64 v4; // rax
  _DWORD *v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void **v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r14d
  __int64 v30; // rax
  _DWORD *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  int v46; // r14d
  __int64 v47; // rax
  int v48; // r15d
  __int64 v49; // r9
  void *v50; // rax
  void *v51; // rbx
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // r9
  __int64 (__fastcall ***v55)(_QWORD, __int64); // rax
  bool v56; // zf
  void **v57; // rcx
  void *v58; // rax
  void *v59; // rbx
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // r9
  __int64 (__fastcall ***v63)(_QWORD, __int64); // rax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // r9
  DxgMonitor::MultiMonitorDescriptor *v68; // rax
  __int64 v69; // rax
  void *v71; // [rsp+30h] [rbp-40h] BYREF
  void *v72; // [rsp+38h] [rbp-38h] BYREF
  void *v73; // [rsp+40h] [rbp-30h] BYREF
  void *v74; // [rsp+48h] [rbp-28h] BYREF
  void *v75; // [rsp+50h] [rbp-20h] BYREF
  void *v76[2]; // [rsp+58h] [rbp-18h] BYREF
  size_t Size; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v78; // [rsp+B8h] [rbp+48h] BYREF
  void *v79; // [rsp+C8h] [rbp+58h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 167;
  }
  v79 = 0LL;
  if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = operator new(0x98uLL, 0x4D677844u, 256LL, v2);
      v5 = (_DWORD *)v4;
      if ( !v4 )
      {
        v71 = 0LL;
        WdLogSingleEntry0(2LL);
        v20 = &v71;
        WdLogGlobalForLineNumber = 341;
        goto LABEL_101;
      }
      memset((void *)(v4 + 24), 0, 0x80uLL);
      *(_QWORD *)v5 = 0LL;
      *((_QWORD *)v5 + 1) = 0LL;
      *((_QWORD *)v5 + 2) = 128LL;
      v6 = *((_QWORD *)this + 14);
      v71 = v5;
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _DWORD *))(*(_QWORD *)v7 + 8LL))(
             v7,
             v3 << 7,
             128LL,
             v5 + 6);
      v13 = v8;
      if ( v8 == -1071841279 || v8 == -1071774719 )
        break;
      if ( v8 == -1071841272 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = v3;
        WdLogGlobalForLineNumber = 379;
        goto LABEL_17;
      }
      if ( v8 < 0 )
      {
        WdLogSingleEntry1(2LL, v8);
        WdLogGlobalForLineNumber = 393;
        goto LABEL_17;
      }
      v5[2] = 2;
      v5[3] = v3 != 0 ? 255 : 1;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)v5,
        &v79);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        &v79,
        &v71);
      ++v3;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        &v71,
        0LL);
      if ( v3 > 0xFE )
        goto LABEL_18;
    }
    if ( v3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 365;
    }
    WdLogSingleEntry1(3LL, this);
    WdLogGlobalForLineNumber = 367;
LABEL_17:
    v13 = 0;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      &v71,
      0LL);
LABEL_18:
    if ( v79 )
    {
      if ( !v3 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 426;
      }
      v15 = DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(
              (__int64 **)&v79,
              (__int64 (__fastcall ****)(_QWORD, __int64))this + 16,
              v14,
              v2);
      v13 = v15;
      if ( v15 != -1073741801 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = v15;
        v13 = 0;
        WdLogGlobalForLineNumber = 435;
        goto LABEL_49;
      }
    }
    goto LABEL_48;
  }
  v21 = *((_QWORD *)this + 14);
  *(_OWORD *)v76 = 0LL;
  LODWORD(v76[0]) = 1;
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
  if ( (*(unsigned int (__fastcall **)(__int64, void **))(*(_QWORD *)v22 + 16LL))(v22, v76) != -1073741822 )
  {
    v24 = DxgMonitor::EdidMonitorDescriptor::CreateFromSingleEdidBlob(
            (__int64)v76,
            (__int64 (__fastcall ****)(_QWORD, __int64))this + 16);
    v13 = v24;
    if ( v24 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, v25, v27, v28) + 24) = v24;
      v13 = 0;
      WdLogGlobalForLineNumber = 197;
    }
    if ( !v76[1] )
      goto LABEL_49;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v76[1]);
    v76[1] = 0LL;
    HIDWORD(v76[0]) = 0;
LABEL_48:
    if ( v13 < 0 )
      goto LABEL_102;
LABEL_49:
    v45 = *((_QWORD *)this + 14);
    v46 = v13;
    LODWORD(Size) = 0;
    v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 24LL))(v45);
    v48 = (*(__int64 (__fastcall **)(__int64, size_t *, _QWORD))(*(_QWORD *)v47 + 24LL))(v47, &Size, 0LL);
    if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v48 != -1073741789 )
        goto LABEL_82;
      if ( (unsigned int)(Size - 1) > 0xFFFF )
      {
        WdLogSingleEntry1(3LL, (unsigned int)Size);
        WdLogGlobalForLineNumber = 554;
        goto LABEL_82;
      }
      v50 = (void *)operator new[]((unsigned int)Size, 0x4D677844u, 256LL, v49);
      v74 = v50;
      v51 = v50;
      if ( v50 )
      {
        memset(v50, 0, (unsigned int)Size);
        v52 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
        v53 = (*(__int64 (__fastcall **)(__int64, size_t *, void *))(*(_QWORD *)v52 + 24LL))(v52, &Size, v51);
        if ( v53 < 0 )
        {
          WdLogSingleEntry1(2LL, v53);
          WdLogGlobalForLineNumber = 542;
        }
        else
        {
          v55 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x40uLL, 0x4D677844u, 256LL, v54);
          if ( v55 )
            v55 = (__int64 (__fastcall ***)(_QWORD, __int64))DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(
                                                               (__int64)v55,
                                                               &v74,
                                                               Size);
          wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))this + 17,
            v55);
          if ( !*((_QWORD *)this + 17) )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 528;
          }
          v56 = *((_QWORD *)this + 16) == 0LL;
          *((_BYTE *)this + 152) = 0;
          if ( v56 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 536;
          }
        }
        v13 = v46;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 547;
        v13 = -1073741801;
      }
      v57 = &v74;
      goto LABEL_64;
    }
    if ( (_DWORD)Size )
    {
      if ( (unsigned int)Size <= 0x10000 )
      {
        v58 = (void *)operator new[]((unsigned int)Size, 0x4D677844u, 256LL, v49);
        v75 = v58;
        v59 = v58;
        if ( v58 )
        {
          memset(v58, 0, (unsigned int)Size);
          v60 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
          v61 = (*(__int64 (__fastcall **)(__int64, size_t *, void *))(*(_QWORD *)v60 + 24LL))(v60, &Size, v59);
          if ( v61 < 0 )
          {
            WdLogSingleEntry1(2LL, v61);
            WdLogGlobalForLineNumber = 487;
          }
          else
          {
            v63 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x40uLL, 0x4D677844u, 256LL, v62);
            if ( v63 )
              v63 = (__int64 (__fastcall ***)(_QWORD, __int64))DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(
                                                                 (__int64)v63,
                                                                 &v75,
                                                                 Size);
            wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
              (__int64 (__fastcall ****)(_QWORD, __int64))this + 17,
              v63);
            if ( !*((_QWORD *)this + 17) )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 473;
            }
            v56 = *((_QWORD *)this + 16) == 0LL;
            *((_BYTE *)this + 152) = 0;
            if ( v56 )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 481;
            }
          }
          v13 = v46;
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 492;
          v13 = -1073741801;
        }
        v57 = &v75;
LABEL_64:
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(v57);
        goto LABEL_81;
      }
      WdLogSingleEntry1(3LL, (unsigned int)Size);
      WdLogGlobalForLineNumber = 499;
    }
LABEL_81:
    if ( v13 < 0 )
      goto LABEL_102;
LABEL_82:
    v64 = *((_QWORD *)this + 16);
    if ( !v64 || *((_QWORD *)this + 17) )
    {
LABEL_93:
      if ( *((_QWORD *)this + 16) )
      {
        v66 = *((_QWORD *)this + 17);
        if ( v66 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v66 + 48LL))(v66) == 2 )
          {
            v68 = (DxgMonitor::MultiMonitorDescriptor *)operator new(0x28uLL, 0x4D677844u, 256LL, v67);
            if ( v68 )
              v68 = DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
                      v68,
                      *((struct DxgMonitor::IMonitorDescriptor **)this + 16),
                      *((struct DxgMonitor::IMonitorDescriptor **)this + 17));
            wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
              (__int64 (__fastcall ****)(_QWORD, __int64))this + 18,
              (__int64 (__fastcall ***)(_QWORD, __int64))v68);
            if ( !*((_QWORD *)this + 18) )
              v13 = -1073741801;
          }
        }
      }
      goto LABEL_102;
    }
    v78 = 0;
    (*(void (__fastcall **)(__int64, void **, unsigned int *))(*(_QWORD *)v64 + 232LL))(v64, &v73, &v78);
    if ( v73 )
    {
      v65 = DxgMonitor::DisplayIdMonitorDescriptor::ExtractFromEdid(
              (unsigned __int8 **)&v73,
              v78,
              (__int64 (__fastcall ****)(_QWORD, __int64))this + 17);
      if ( *((_QWORD *)this + 17) )
        *((_BYTE *)this + 152) = 1;
      if ( v65 >= 0 || v65 == -1073741275 )
      {
LABEL_92:
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v73);
        if ( v13 < 0 )
          goto LABEL_102;
        goto LABEL_93;
      }
    }
    else
    {
      v13 = -1073741801;
      v65 = -1073741801;
    }
    WdLogSingleEntry1(2LL, v65);
    WdLogGlobalForLineNumber = 584;
    goto LABEL_92;
  }
  v29 = 0;
  while ( 1 )
  {
    v30 = operator new(0x98uLL, 0x4D677844u, 256LL, v23);
    v31 = (_DWORD *)v30;
    if ( !v30 )
      break;
    memset((void *)(v30 + 24), 0, 0x80uLL);
    *(_QWORD *)v31 = 0LL;
    *((_QWORD *)v31 + 1) = 0LL;
    *((_QWORD *)v31 + 2) = 128LL;
    v32 = *((_QWORD *)this + 14);
    v72 = v31;
    v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 24LL))(v32);
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _DWORD *))(*(_QWORD *)v33 + 8LL))(
            v33,
            v29 << 7,
            128LL,
            v31 + 6);
    v13 = v34;
    if ( v34 == -1071841279 || v34 == -1071774719 )
    {
      if ( v29 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 250;
      }
      WdLogSingleEntry1(3LL, this);
      WdLogGlobalForLineNumber = 252;
      goto LABEL_42;
    }
    if ( v34 == -1071841272 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v36, v35, v37, v38) + 24) = v29;
      WdLogGlobalForLineNumber = 264;
      goto LABEL_42;
    }
    if ( v34 < 0 )
    {
      WdLogSingleEntry1(2LL, v34);
      WdLogGlobalForLineNumber = 278;
LABEL_42:
      v13 = 0;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        &v72,
        0LL);
LABEL_43:
      if ( v79 )
      {
        if ( !v29 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 311;
        }
        v40 = DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(
                (__int64 **)&v79,
                (__int64 (__fastcall ****)(_QWORD, __int64))this + 16,
                v39,
                v23);
        v13 = v40;
        if ( v40 != -1073741801 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v42, v41, v43, v44) + 24) = v40;
          v13 = 0;
          WdLogGlobalForLineNumber = 320;
        }
      }
      goto LABEL_48;
    }
    v31[2] = 2;
    v31[3] = v29 != 0 ? 255 : 1;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      (void **)v31,
      &v79);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      &v79,
      &v72);
    ++v29;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      &v72,
      0LL);
    if ( v29 > 0xFE )
      goto LABEL_43;
  }
  v72 = 0LL;
  WdLogSingleEntry0(6LL);
  v20 = &v72;
  WdLogGlobalForLineNumber = 226;
LABEL_101:
  v13 = -1073741801;
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    v20,
    0LL);
LABEL_102:
  v69 = *((_QWORD *)this + 18);
  if ( v69 || (v69 = *((_QWORD *)this + 16)) != 0 || (v69 = *((_QWORD *)this + 17)) != 0 )
    *((_QWORD *)this + 20) = v69;
  DxgMonitor::MonitorDescriptorState::AddDescriptorsToCache(this);
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    &v79,
    0LL);
  return (unsigned int)v13;
}
