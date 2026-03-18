/*
 * XREFs of ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1403E4A48
 * Callers:
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1403E4800 (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042ED20 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033510 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C16C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140055C94 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140055CF8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140058BA0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x14005983C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400644D4 (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140186BB0 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(
        __int64 **a1,
        __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // r10
  unsigned int v7; // esi
  int IsEDIDBaseBlock; // eax
  unsigned int v9; // edi
  _QWORD *v10; // r15
  __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 result; // rax
  void *v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = operator new(0x20uLL, 0x4D677844u, 256LL);
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 20) = 0;
    *(_QWORD *)v4 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
    *(_QWORD *)(v4 + 8) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
    *(_QWORD *)(v4 + 24) = 0LL;
    v6 = *a1;
    v7 = 0;
    while ( v6 )
    {
      if ( !*v6 )
      {
        IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((const unsigned __int8 *)v6 + 24);
        v9 = IsEDIDBaseBlock;
        if ( IsEDIDBaseBlock < 0 )
        {
          WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
          WdLogGlobalForLineNumber = 262;
          MonitorLogBadEDID(v9);
LABEL_19:
          DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'((DxgMonitor::EdidMonitorDescriptor *)v5, 1);
          return v9;
        }
      }
      v6 = (__int64 *)*v6;
      ++v7;
    }
    if ( !v7 )
    {
      v9 = -1071841279;
      goto LABEL_19;
    }
    v10 = (_QWORD *)(v5 + 24);
    v11 = 8LL * v7;
    if ( !is_mul_ok(v7, 8uLL) )
      v11 = -1LL;
    v12 = __CFADD__(v11, 8LL);
    v13 = v11 + 8;
    if ( v12 )
      v13 = -1LL;
    v14 = operator new[](v13, 0x4D677844u, 256LL);
    if ( v14 )
    {
      v15 = v14 + 8;
      *(_QWORD *)v14 = v7;
      `vector constructor iterator'(
        (char *)(v14 + 8),
        8LL,
        v7,
        (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    }
    else
    {
      v15 = 0LL;
    }
    wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
      (__int64 *)(v5 + 24),
      v15);
    if ( !*v10 )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 281;
      v9 = -1073741801;
      goto LABEL_19;
    }
    *(_DWORD *)(v5 + 16) = v7;
    do
    {
      if ( !*a1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 294;
      }
      wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
        (__int64)&v17,
        *a1);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)(*v10 + 8LL * --v7),
        (void **)a1);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)a1,
        &v17);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        &v17,
        0LL);
    }
    while ( v7 );
    if ( *a1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 301;
    }
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      a2,
      (__int64 (__fastcall ***)(_QWORD, __int64))v5);
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
