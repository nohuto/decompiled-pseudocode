/*
 * XREFs of ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1403EB2C4
 * Callers:
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1403EB07C (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042CE30 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C7AC (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400564E4 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140056548 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400590E0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x140059E3C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400648B4 (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140184860 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(
        __int64 **a1,
        __int64 (__fastcall ****a2)(_QWORD, __int64),
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 *v9; // r10
  unsigned int v10; // esi
  int IsEDIDBaseBlock; // eax
  unsigned int v12; // edi
  _QWORD *v13; // r15
  __int64 v14; // rax
  bool v15; // cf
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 result; // rax
  void *v20; // [rsp+60h] [rbp+18h] BYREF

  v6 = operator new(0x20uLL, 0x4D677844u, 256LL, a4);
  v8 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 20) = 0;
    *(_QWORD *)v6 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
    *(_QWORD *)(v6 + 8) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
    *(_QWORD *)(v6 + 24) = 0LL;
    v9 = *a1;
    v10 = 0;
    while ( v9 )
    {
      if ( !*v9 )
      {
        IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((const unsigned __int8 *)v9 + 24);
        v12 = IsEDIDBaseBlock;
        if ( IsEDIDBaseBlock < 0 )
        {
          WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
          WdLogGlobalForLineNumber = 262;
          MonitorLogBadEDID(v12);
LABEL_19:
          DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'((DxgMonitor::EdidMonitorDescriptor *)v8, 1);
          return v12;
        }
      }
      v9 = (__int64 *)*v9;
      ++v10;
    }
    if ( !v10 )
    {
      v12 = -1071841279;
      goto LABEL_19;
    }
    v13 = (_QWORD *)(v8 + 24);
    v14 = 8LL * v10;
    if ( !is_mul_ok(v10, 8uLL) )
      v14 = -1LL;
    v15 = __CFADD__(v14, 8LL);
    v16 = v14 + 8;
    if ( v15 )
      v16 = -1LL;
    v17 = operator new[](v16, 0x4D677844u, 256LL, v7);
    if ( v17 )
    {
      v18 = v17 + 8;
      *(_QWORD *)v17 = v10;
      `vector constructor iterator'(
        (char *)(v17 + 8),
        8LL,
        v10,
        (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    }
    else
    {
      v18 = 0LL;
    }
    wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
      (__int64 *)(v8 + 24),
      v18);
    if ( !*v13 )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 281;
      v12 = -1073741801;
      goto LABEL_19;
    }
    *(_DWORD *)(v8 + 16) = v10;
    do
    {
      if ( !*a1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 294;
      }
      wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
        (__int64)&v20,
        *a1);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)(*v13 + 8LL * --v10),
        (void **)a1);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)a1,
        &v20);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        &v20,
        0LL);
    }
    while ( v10 );
    if ( *a1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 301;
    }
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      a2,
      (__int64 (__fastcall ***)(_QWORD, __int64))v8);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 247;
  }
  return result;
}
