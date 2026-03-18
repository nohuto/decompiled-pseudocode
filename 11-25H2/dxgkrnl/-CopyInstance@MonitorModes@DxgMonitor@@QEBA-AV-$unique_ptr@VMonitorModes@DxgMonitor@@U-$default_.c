/*
 * XREFs of ?CopyInstance@MonitorModes@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x14040C358
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140183B00 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x140059E3C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ?reset@?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorModes@DxgMonitor@@@Z @ 0x140063118 (-reset@-$unique_ptr@VMonitorModes@DxgMonitor@@U-$default_delete@VMonitorModes@DxgMonitor@@@wistd.c)
 *     ??0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1401845B8 (--0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z.c)
 */

_QWORD *__fastcall DxgMonitor::MonitorModes::CopyInstance(
        __int64 a1,
        _QWORD *a2,
        const struct DxgMonitor::IMonitorComponentParent *a3,
        const struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorModes *v8; // rax
  DxgMonitor::MonitorModes *v9; // rax
  __int64 v10; // r9
  DxgMonitor::MonitorModes *v11; // rsi
  __int64 i; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  DxgMonitor::MonitorModes *v15; // rcx
  DxgMonitor::MonitorModes **v16; // r8
  int v17; // eax
  _QWORD *v18; // rbp
  _QWORD *j; // rax
  _QWORD *v20; // rbx
  _OWORD *v21; // rax
  DxgMonitor::MonitorModes **v22; // rdx
  DxgMonitor::MonitorModes *v23; // rax
  DxgMonitor::MonitorModes *v25[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = (DxgMonitor::MonitorModes *)operator new(0xF8uLL, 0x4D677844u, 256LL, (__int64)a4);
  if ( v8 && (v9 = DxgMonitor::MonitorModes::MonitorModes(v8, a3, a4), v25[0] = v9, (v11 = v9) != 0LL) )
  {
    *((_BYTE *)v9 + 116) = *(_BYTE *)(a1 + 116);
    *((_DWORD *)v9 + 28) = *(_DWORD *)(a1 + 112);
    for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v13 + 96) )
    {
      if ( i == a1 + 128 )
      {
        v13 = 0LL;
      }
      else
      {
        v13 = i - 96;
        if ( !i )
          v13 = 0LL;
      }
      if ( !v13 )
        break;
      v14 = operator new(0x78uLL, 0x4D677844u, 256LL, v10);
      if ( !v14 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 79;
LABEL_15:
        *a2 = 0LL;
        goto LABEL_16;
      }
      v15 = (DxgMonitor::MonitorModes *)(v14 + 96);
      *(_OWORD *)v14 = *(_OWORD *)v13;
      *(_OWORD *)(v14 + 16) = *(_OWORD *)(v13 + 16);
      *(_OWORD *)(v14 + 32) = *(_OWORD *)(v13 + 32);
      *(_OWORD *)(v14 + 48) = *(_OWORD *)(v13 + 48);
      *(_OWORD *)(v14 + 64) = *(_OWORD *)(v13 + 64);
      *(_OWORD *)(v14 + 80) = *(_OWORD *)(v13 + 80);
      *(_OWORD *)(v14 + 96) = *(_OWORD *)(v13 + 96);
      *(_QWORD *)(v14 + 112) = *(_QWORD *)(v13 + 112);
      v16 = (DxgMonitor::MonitorModes **)*((_QWORD *)v11 + 17);
      if ( *v16 != (DxgMonitor::MonitorModes *)((char *)v11 + 128) )
LABEL_26:
        __fastfail(3u);
      *(_QWORD *)v15 = (char *)v11 + 128;
      *(_QWORD *)(v14 + 104) = v16;
      *v16 = v15;
      *((_QWORD *)v11 + 17) = v15;
      ++*((_DWORD *)v11 + 30);
      if ( v13 == *(_QWORD *)(a1 + 144) )
        *((_QWORD *)v11 + 18) = v14;
    }
    v17 = *(_DWORD *)(a1 + 124);
    v18 = (_QWORD *)(a1 + 176);
    *((_DWORD *)v11 + 31) = v17;
    for ( j = (_QWORD *)*v18; ; j = (_QWORD *)v20[6] )
    {
      if ( j == v18 )
      {
        v20 = 0LL;
      }
      else
      {
        v20 = j - 6;
        if ( !j )
          v20 = 0LL;
      }
      if ( !v20 )
        break;
      v21 = (_OWORD *)operator new(0x40uLL, 0x4D677844u, 256LL, v10);
      if ( !v21 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 127;
        goto LABEL_15;
      }
      *v21 = *(_OWORD *)v20;
      v21[1] = *((_OWORD *)v20 + 1);
      v21[2] = *((_OWORD *)v20 + 2);
      v21[3] = *((_OWORD *)v20 + 3);
      v22 = (DxgMonitor::MonitorModes **)*((_QWORD *)v11 + 23);
      v23 = (DxgMonitor::MonitorModes *)(v21 + 3);
      if ( *v22 != (DxgMonitor::MonitorModes *)((char *)v11 + 176) )
        goto LABEL_26;
      *(_QWORD *)v23 = (char *)v11 + 176;
      *((_QWORD *)v23 + 1) = v22;
      *v22 = v23;
      *((_QWORD *)v11 + 23) = v23;
      ++*((_DWORD *)v11 + 42);
    }
    wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
      (__int64)a2,
      (__int64 *)v25);
LABEL_16:
    wistd::unique_ptr<DxgMonitor::MonitorModes,wistd::default_delete<DxgMonitor::MonitorModes>>::reset(v25, 0LL);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
