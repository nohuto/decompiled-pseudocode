/*
 * XREFs of ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1403ADE18
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403B1998 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14006CA44 (-InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DXGDEVICE::DXGDEVICE(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        char a9,
        char a10)
{
  int v13; // eax
  char v14; // cl
  char v15; // dl
  char v16; // al
  char v17; // cl
  __int64 v18; // rax
  __int64 v19; // rax
  DXGK_VIRTUAL_GPU_PARAV *v20; // rcx

  *(_QWORD *)(a1 + 16) = a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 40) = a6;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 1LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 26;
  *(_DWORD *)(a1 + 104) = -1;
  *(_QWORD *)(a1 + 112) = a3;
  *(_QWORD *)(a1 + 136) = 0LL;
  v13 = 56;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 56;
  if ( a7 != 2 )
    v13 = 62;
  *(_DWORD *)(a1 + 164) = v13;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 1;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 75;
  *(_DWORD *)(a1 + 232) = 41;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 75;
  *(_DWORD *)(a1 + 264) = 55;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = 20;
  *(_DWORD *)(a1 + 296) = -1;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_DWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 324) = 1;
  *(_DWORD *)(a1 + 328) = 57;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_DWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 356) = 11;
  *(_DWORD *)(a1 + 360) = 58;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 1;
  *(_DWORD *)(a1 + 392) = -1;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_DWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 420) = 1;
  *(_DWORD *)(a1 + 424) = -1;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_DWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 452) = 23;
  *(_DWORD *)(a1 + 456) = -1;
  *(_DWORD *)(a1 + 464) = a7;
  *(_DWORD *)(a1 + 488) = a5;
  *(_QWORD *)(a1 + 468) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 504) = a1 + 496;
  *(_QWORD *)(a1 + 496) = a1 + 496;
  *(_QWORD *)(a1 + 520) = a1 + 512;
  *(_QWORD *)(a1 + 512) = a1 + 512;
  *(_QWORD *)(a1 + 536) = a1 + 528;
  *(_QWORD *)(a1 + 528) = a1 + 528;
  *(_QWORD *)(a1 + 552) = a1 + 544;
  *(_QWORD *)(a1 + 544) = a1 + 544;
  *(_QWORD *)(a1 + 568) = a1 + 560;
  *(_QWORD *)(a1 + 560) = a1 + 560;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_DWORD *)(a1 + 592) = 0;
  *(_DWORD *)(a1 + 596) = 1;
  *(_DWORD *)(a1 + 600) = -1;
  *(_DWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_QWORD *)(a1 + 792) = 0LL;
  *(_QWORD *)(a1 + 800) = 0LL;
  *(_DWORD *)(a1 + 828) = 75;
  *(_QWORD *)(a1 + 808) = 0LL;
  *(_QWORD *)(a1 + 816) = 0LL;
  *(_DWORD *)(a1 + 824) = 0;
  *(_DWORD *)(a1 + 832) = -1;
  v14 = *(_BYTE *)(a1 + 1901);
  *(_QWORD *)(a1 + 1880) = a8;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_DWORD *)(a1 + 1896) = 0x1000000;
  v15 = v14 ^ (*(_BYTE *)(*(_QWORD *)(a2 + 16) + 209LL) ^ v14) & 1;
  *(_BYTE *)(a1 + 1901) = v15;
  v16 = 2 * (BYTE1(*(_DWORD *)(a6 + 408)) & 1);
  *(_WORD *)(a1 + 1902) = 0;
  *(_DWORD *)(a1 + 1904) = 0;
  *(_QWORD *)(a1 + 1912) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_QWORD *)(a1 + 1928) = 1LL;
  v17 = (v15 & 0xFD ^ v16) & 0xFB ^ ((v15 & 0xFD ^ v16) & 0xFB ^ (8 * a9)) & 8;
  *(_WORD *)(a1 + 1936) = 0;
  *(_BYTE *)(a1 + 1938) = 0;
  *(_QWORD *)(a1 + 1944) = 0LL;
  *(_BYTE *)(a1 + 1901) = v17 ^ (v17 ^ (16 * a10)) & 0x10;
  *(_OWORD *)(a1 + 624) = 0LL;
  *(_QWORD *)(a1 + 640) = 0LL;
  memset((void *)(a1 + 664), 0, 0x80uLL);
  *(_OWORD *)(a1 + 648) = 0LL;
  memset((void *)(a1 + 856), 0, 0x80uLL);
  memset((void *)(a1 + 984), 0, 0x40uLL);
  memset((void *)(a1 + 1048), 0, 0x80uLL);
  memset((void *)(a1 + 1176), 0, 0x40uLL);
  memset((void *)(a1 + 1240), 0, 0x40uLL);
  memset((void *)(a1 + 1304), 0, 0x80uLL);
  memset((void *)(a1 + 1432), 0, 0x40uLL);
  memset((void *)(a1 + 1496), 0, 0x40uLL);
  *(_OWORD *)(a1 + 120) = 0LL;
  memset((void *)(a1 + 1560), 0, 0x80uLL);
  memset((void *)(a1 + 1688), 0, 0x80uLL);
  memset((void *)(a1 + 1816), 0, 0x40uLL);
  if ( (*(_BYTE *)(a1 + 1901) & 1) == 0 && a4 )
  {
    *(_QWORD *)(a1 + 480) = *a4;
    *a4 = 0LL;
  }
  *(_QWORD *)(a1 + 848) = a1 + 840;
  *(_QWORD *)(a1 + 840) = a1 + 840;
  v18 = *(_QWORD *)(a1 + 1880);
  if ( v18 || (v18 = *(_QWORD *)(a2 + 16), *(_QWORD *)(v18 + 3120)) && (*(_QWORD *)(a1 + 1880) = v18) != 0LL )
  {
    if ( !*(_QWORD *)(v18 + 3120) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 647;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_pDisplayAdapter->IsDisplayAdapter()",
        647LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 1880)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 648;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_pDisplayAdapter->IsCoreResourceSharedOwner()",
        648LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1880) + 24LL));
    *(_DWORD *)(a1 + 1888) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 3120LL) + 96LL);
  }
  *(_BYTE *)(a1 + 1900) = (*(_DWORD *)(a6 + 408) & 4) != 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 3043LL) )
  {
    v19 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 1903) = 1;
    *(_BYTE *)(v19 + 337) = 1;
  }
  v20 = *(DXGK_VIRTUAL_GPU_PARAV **)(a1 + 112);
  if ( v20 )
    DXGK_VIRTUAL_GPU_PARAV::InsertDxgDevice(v20, (struct _LIST_ENTRY *)(a1 + 120));
  return a1;
}
