/*
 * XREFs of ?CopyInstance@MonitorColorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorColorState@DxgMonitor@@U?$default_delete@VMonitorColorState@DxgMonitor@@@wistd@@@wistd@@AEAVIMonitorComponentParent@2@AEAVIMonitorRegistry@2@@Z @ 0x140273BA8
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140183B00 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x14006E13C (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z @ 0x1403572BC (--0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z.c)
 */

__int64 *__fastcall DxgMonitor::MonitorColorState::CopyInstance(
        __int64 a1,
        __int64 *a2,
        struct DxgMonitor::IMonitorComponentParent *a3,
        struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorColorState *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ecx
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm1
  int v17; // eax
  __int128 v18; // xmm1
  int v19; // eax
  __int128 v20; // xmm1
  int v21; // eax
  __int128 v22; // xmm1
  int v23; // eax
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  int v26; // eax
  __int64 v27; // xmm0_8

  v8 = (DxgMonitor::MonitorColorState *)operator new(0x220uLL, 0x4D677844u, 256LL, (__int64)a4);
  if ( v8 && (v9 = DxgMonitor::MonitorColorState::MonitorColorState(v8, a3, a4), (v10 = v9) != 0) )
  {
    v11 = *(_DWORD *)(a1 + 160);
    v12 = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(v9 + 128) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(v9 + 144) = v12;
    *(_DWORD *)(v9 + 160) = v11;
    v13 = *(_DWORD *)(a1 + 196);
    v14 = *(_OWORD *)(a1 + 180);
    *(_OWORD *)(v10 + 164) = *(_OWORD *)(a1 + 164);
    *(_OWORD *)(v10 + 180) = v14;
    *(_DWORD *)(v10 + 196) = v13;
    v15 = *(_DWORD *)(a1 + 232);
    v16 = *(_OWORD *)(a1 + 216);
    *(_OWORD *)(v10 + 200) = *(_OWORD *)(a1 + 200);
    *(_OWORD *)(v10 + 216) = v16;
    *(_DWORD *)(v10 + 232) = v15;
    v17 = *(_DWORD *)(a1 + 268);
    v18 = *(_OWORD *)(a1 + 252);
    *(_OWORD *)(v10 + 236) = *(_OWORD *)(a1 + 236);
    *(_OWORD *)(v10 + 252) = v18;
    *(_DWORD *)(v10 + 268) = v17;
    *(_DWORD *)(v10 + 272) = *(_DWORD *)(a1 + 272);
    v19 = *(_DWORD *)(a1 + 48);
    v20 = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v10 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v10 + 32) = v20;
    *(_DWORD *)(v10 + 48) = v19;
    v21 = *(_DWORD *)(a1 + 84);
    v22 = *(_OWORD *)(a1 + 68);
    *(_OWORD *)(v10 + 52) = *(_OWORD *)(a1 + 52);
    *(_OWORD *)(v10 + 68) = v22;
    *(_DWORD *)(v10 + 84) = v21;
    v23 = *(_DWORD *)(a1 + 120);
    v24 = *(_OWORD *)(a1 + 104);
    *(_OWORD *)(v10 + 88) = *(_OWORD *)(a1 + 88);
    *(_OWORD *)(v10 + 104) = v24;
    *(_DWORD *)(v10 + 120) = v23;
    *(_DWORD *)(v10 + 124) = *(_DWORD *)(a1 + 124);
    *(_OWORD *)(v10 + 312) = *(_OWORD *)(a1 + 312);
    *(_OWORD *)(v10 + 328) = *(_OWORD *)(a1 + 328);
    *(_OWORD *)(v10 + 344) = *(_OWORD *)(a1 + 344);
    *(_OWORD *)(v10 + 360) = *(_OWORD *)(a1 + 360);
    *(_OWORD *)(v10 + 376) = *(_OWORD *)(a1 + 376);
    *(_DWORD *)(v10 + 392) = *(_DWORD *)(a1 + 392);
    *(_BYTE *)(v10 + 412) = *(_BYTE *)(a1 + 412);
    *(_BYTE *)(v10 + 413) = *(_BYTE *)(a1 + 413);
    v25 = *(_OWORD *)(a1 + 432);
    *(_OWORD *)(v10 + 416) = *(_OWORD *)(a1 + 416);
    *(_OWORD *)(v10 + 432) = v25;
    *(_DWORD *)(v10 + 448) = *(_DWORD *)(a1 + 448);
    *(_DWORD *)(v10 + 452) = *(_DWORD *)(a1 + 452);
    *(_BYTE *)(v10 + 456) = *(_BYTE *)(a1 + 456);
    *(_BYTE *)(v10 + 457) = *(_BYTE *)(a1 + 457);
    *(_BYTE *)(v10 + 468) = *(_BYTE *)(a1 + 468);
    *(_DWORD *)(v10 + 472) = *(_DWORD *)(a1 + 472);
    *(_DWORD *)(v10 + 476) = *(_DWORD *)(a1 + 476);
    *(_DWORD *)(v10 + 480) = *(_DWORD *)(a1 + 480);
    v26 = *(_DWORD *)(a1 + 508);
    v27 = *(_QWORD *)(a1 + 500);
    *(_OWORD *)(v10 + 484) = *(_OWORD *)(a1 + 484);
    *(_QWORD *)(v10 + 500) = v27;
    *(_DWORD *)(v10 + 508) = v26;
    if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(v10 + 464) = *(_DWORD *)(a1 + 464);
      *(_DWORD *)(v10 + 460) = *(_DWORD *)(a1 + 460);
    }
    else
    {
      *(_BYTE *)(v10 + 512) = *(_BYTE *)(a1 + 512);
    }
    *(_BYTE *)(v10 + 513) = *(_BYTE *)(a1 + 513);
    *(_BYTE *)(v10 + 514) = *(_BYTE *)(a1 + 514);
    *(_BYTE *)(v10 + 515) = *(_BYTE *)(a1 + 515);
    *(_BYTE *)(v10 + 516) = *(_BYTE *)(a1 + 516);
    *(_DWORD *)(v10 + 520) = *(_DWORD *)(a1 + 520);
    *(_BYTE *)(v10 + 524) = *(_BYTE *)(a1 + 524);
    *(_DWORD *)(v10 + 528) = *(_DWORD *)(a1 + 528);
    *(_DWORD *)(v10 + 532) = *(_DWORD *)(a1 + 532);
    *(_BYTE *)(v10 + 536) = *(_BYTE *)(a1 + 536);
    *a2 = v10;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
