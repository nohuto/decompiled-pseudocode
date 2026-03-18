/*
 * XREFs of ?CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x1402784B8
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042CE30 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C7AC (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140056548 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400590E0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400648B4 (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140184860 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::CreateFromSingleEdidBlob(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  int v2; // eax
  __int64 v3; // r13
  __int64 result; // rax
  int IsEDIDBaseBlock; // eax
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rbx
  _QWORD *v13; // r15
  unsigned int v14; // esi
  __int64 v15; // rax
  bool v16; // cf
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r9
  unsigned int v21; // r14d
  __int64 v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0LL;
  if ( !v2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 185;
    return 0LL;
  }
  if ( (v2 & 0x7F) != 0 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 192;
  }
  else
  {
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(*(const unsigned __int8 **)(a1 + 8));
    v9 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock >= 0 )
    {
      v10 = (_QWORD *)operator new(0x20uLL, 0x4D677844u, 256LL, v8);
      v12 = v10;
      if ( v10 )
      {
        v10[2] = 0LL;
        v10[3] = 0LL;
        *v10 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
        v13 = v10 + 3;
        v10[1] = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
        v14 = *(_DWORD *)(a1 + 4) >> 7;
        v15 = 8LL * v14;
        if ( !is_mul_ok(v14, 8uLL) )
          v15 = -1LL;
        v16 = __CFADD__(v15, 8LL);
        v17 = v15 + 8;
        if ( v16 )
          v17 = -1LL;
        v18 = operator new[](v17, 0x4D677844u, 256LL, v11);
        if ( v18 )
        {
          v19 = v18 + 8;
          *(_QWORD *)v18 = v14;
          `vector constructor iterator'(
            (char *)(v18 + 8),
            8LL,
            v14,
            (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
        }
        else
        {
          v19 = 0LL;
        }
        wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
          v12 + 3,
          v19);
        if ( *v13 )
        {
          *((_DWORD *)v12 + 4) = v14;
          v21 = 0;
          if ( !v14 )
          {
LABEL_22:
            wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
              a2,
              (__int64 (__fastcall ***)(_QWORD, __int64))v12);
            return 0LL;
          }
          while ( 1 )
          {
            v22 = operator new(0x98uLL, 0x4D677844u, 256LL, v20);
            v23 = (_QWORD *)v22;
            if ( !v22 )
              break;
            memset((void *)(v22 + 24), 0, 0x80uLL);
            v23[2] = 128LL;
            *v23 = 0LL;
            v23[1] = 0LL;
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
              (void **)(*v13 + 8LL * v21),
              v23);
            v24 = *(_QWORD *)(a1 + 8);
            v25 = v21++;
            v26 = (unsigned int)(v25 << 7);
            v27 = *(_QWORD *)(*v13 + v3);
            *(_OWORD *)(v27 + 24) = *(_OWORD *)(v26 + v24);
            *(_OWORD *)(v27 + 40) = *(_OWORD *)(v26 + v24 + 16);
            *(_OWORD *)(v27 + 56) = *(_OWORD *)(v26 + v24 + 32);
            *(_OWORD *)(v27 + 72) = *(_OWORD *)(v26 + v24 + 48);
            *(_OWORD *)(v27 + 88) = *(_OWORD *)(v26 + v24 + 64);
            *(_OWORD *)(v27 + 104) = *(_OWORD *)(v26 + v24 + 80);
            *(_OWORD *)(v27 + 120) = *(_OWORD *)(v26 + v24 + 96);
            *(_OWORD *)(v27 + 136) = *(_OWORD *)(v26 + v24 + 112);
            *(_DWORD *)(*(_QWORD *)(*v13 + v3) + 8LL) = 2;
            v28 = *(_QWORD *)(*v13 + v3);
            v3 += 8LL;
            *(_DWORD *)(v28 + 12) = 1;
            if ( v21 >= v14 )
              goto LABEL_22;
          }
          WdLogSingleEntry1(2LL, -1073741801LL);
          WdLogGlobalForLineNumber = 221;
        }
        else
        {
          WdLogSingleEntry1(2LL, -1073741801LL);
          WdLogGlobalForLineNumber = 213;
        }
        DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'((DxgMonitor::EdidMonitorDescriptor *)v12, 1);
      }
      else
      {
        WdLogSingleEntry1(2LL, -1073741801LL);
        WdLogGlobalForLineNumber = 207;
      }
      return 3221225495LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
      WdLogGlobalForLineNumber = 200;
      MonitorLogBadEDID(v9);
      return v9;
    }
  }
  return result;
}
