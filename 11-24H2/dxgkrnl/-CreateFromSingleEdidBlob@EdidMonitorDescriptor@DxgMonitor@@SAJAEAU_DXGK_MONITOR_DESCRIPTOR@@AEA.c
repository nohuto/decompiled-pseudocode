/*
 * XREFs of ?CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x14027F9B8
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042ED20 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033510 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C16C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140055CF8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140058BA0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400644D4 (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140186BB0 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::CreateFromSingleEdidBlob(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  int v2; // eax
  __int64 v3; // r13
  __int64 result; // rax
  int IsEDIDBaseBlock; // eax
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // r15
  unsigned int v12; // esi
  __int64 v13; // rax
  bool v14; // cf
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // r14d
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx

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
    v8 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock >= 0 )
    {
      v9 = (_QWORD *)operator new(0x20uLL, 0x4D677844u, 256LL);
      v10 = v9;
      if ( v9 )
      {
        v9[2] = 0LL;
        v9[3] = 0LL;
        *v9 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
        v11 = v9 + 3;
        v9[1] = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
        v12 = *(_DWORD *)(a1 + 4) >> 7;
        v13 = 8LL * v12;
        if ( !is_mul_ok(v12, 8uLL) )
          v13 = -1LL;
        v14 = __CFADD__(v13, 8LL);
        v15 = v13 + 8;
        if ( v14 )
          v15 = -1LL;
        v16 = operator new[](v15, 0x4D677844u, 256LL);
        if ( v16 )
        {
          v17 = v16 + 8;
          *(_QWORD *)v16 = v12;
          `vector constructor iterator'(
            (char *)(v16 + 8),
            8LL,
            v12,
            (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
        }
        else
        {
          v17 = 0LL;
        }
        wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
          v10 + 3,
          v17);
        if ( *v11 )
        {
          *((_DWORD *)v10 + 4) = v12;
          v18 = 0;
          if ( !v12 )
          {
LABEL_22:
            wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
              a2,
              (__int64 (__fastcall ***)(_QWORD, __int64))v10);
            return 0LL;
          }
          while ( 1 )
          {
            v19 = operator new(0x98uLL, 0x4D677844u, 256LL);
            v20 = (_QWORD *)v19;
            if ( !v19 )
              break;
            memset((void *)(v19 + 24), 0, 0x80uLL);
            v20[2] = 128LL;
            *v20 = 0LL;
            v20[1] = 0LL;
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
              (void **)(*v11 + 8LL * v18),
              v20);
            v21 = *(_QWORD *)(a1 + 8);
            v22 = v18++;
            v23 = (unsigned int)(v22 << 7);
            v24 = *(_QWORD *)(*v11 + v3);
            *(_OWORD *)(v24 + 24) = *(_OWORD *)(v23 + v21);
            *(_OWORD *)(v24 + 40) = *(_OWORD *)(v23 + v21 + 16);
            *(_OWORD *)(v24 + 56) = *(_OWORD *)(v23 + v21 + 32);
            *(_OWORD *)(v24 + 72) = *(_OWORD *)(v23 + v21 + 48);
            *(_OWORD *)(v24 + 88) = *(_OWORD *)(v23 + v21 + 64);
            *(_OWORD *)(v24 + 104) = *(_OWORD *)(v23 + v21 + 80);
            *(_OWORD *)(v24 + 120) = *(_OWORD *)(v23 + v21 + 96);
            *(_OWORD *)(v24 + 136) = *(_OWORD *)(v23 + v21 + 112);
            *(_DWORD *)(*(_QWORD *)(*v11 + v3) + 8LL) = 2;
            v25 = *(_QWORD *)(*v11 + v3);
            v3 += 8LL;
            *(_DWORD *)(v25 + 12) = 1;
            if ( v18 >= v12 )
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
        DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'((DxgMonitor::EdidMonitorDescriptor *)v10, 1);
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
      MonitorLogBadEDID(v8);
      return v8;
    }
  }
  return result;
}
