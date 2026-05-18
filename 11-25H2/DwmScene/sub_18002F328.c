/*
 * XREFs of sub_18002F328 @ 0x18002F328
 * Callers:
 *     sub_18005E6C0 @ 0x18005E6C0 (sub_18005E6C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 *     sub_1800283E0 @ 0x1800283E0 (sub_1800283E0.c)
 *     sub_18002E5E0 @ 0x18002E5E0 (sub_18002E5E0.c)
 *     sub_18002E9B4 @ 0x18002E9B4 (sub_18002E9B4.c)
 *     sub_18002ECF4 @ 0x18002ECF4 (sub_18002ECF4.c)
 *     sub_18002F7FC @ 0x18002F7FC (sub_18002F7FC.c)
 *     sub_18002F87C @ 0x18002F87C (sub_18002F87C.c)
 *     sub_18002F8CC @ 0x18002F8CC (sub_18002F8CC.c)
 *     sub_180030FDC @ 0x180030FDC (sub_180030FDC.c)
 *     sub_18004D35C @ 0x18004D35C (sub_18004D35C.c)
 *     sub_18006D4AC @ 0x18006D4AC (sub_18006D4AC.c)
 */

// Hidden C++ exception states: #wind=33
__int64 __fastcall sub_18002F328(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rax
  HANDLE CurrentProcess; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v23[5]; // [rsp+20h] [rbp-81h] BYREF
  __int64 v24; // [rsp+48h] [rbp-59h] BYREF
  __int64 v25; // [rsp+50h] [rbp-51h] BYREF
  __int64 v26; // [rsp+58h] [rbp-49h]
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+60h] [rbp-41h] BYREF

  v23[1] = a1;
  v23[2] = a3;
  v23[3] = a4;
  v23[4] = a5;
  sub_1800283E0(a1 + 8, a2);
  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  sub_1800283E0(a1 + 112, a2);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v9 = v9;
  v9[1] = v9;
  *(_QWORD *)(a1 + 168) = v9;
  v23[0] = a1 + 184;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *(_QWORD *)v10 = v10;
  *(_QWORD *)(v10 + 8) = v10;
  *(_QWORD *)(v10 + 16) = v10;
  *(_WORD *)(v10 + 24) = 257;
  *(_QWORD *)(a1 + 184) = v10;
  *(_DWORD *)(a1 + 200) = -1082130432;
  *(_DWORD *)(a1 + 204) = -1082130432;
  *(_QWORD *)(a1 + 208) = 2LL;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = -1082130432;
  *(_DWORD *)(a1 + 224) = -1082130432;
  *(_QWORD *)(a1 + 228) = 2LL;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 2;
  *(_DWORD *)(a1 + 248) = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 248), 0);
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  sub_1800283E0(a1 + 312, a2);
  sub_18006D4AC(a1 + 368);
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 464) = *a3;
  *(_QWORD *)(a1 + 472) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 480) = *a4;
  *(_QWORD *)(a1 + 488) = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 496) = *a5;
  *(_QWORD *)(a1 + 504) = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  sub_18002F7FC(a1 + 528);
  *(_DWORD *)(a1 + 696) = v11;
  *(_QWORD *)(a1 + 704) = v11;
  *(_QWORD *)(a1 + 712) = v11;
  *(_QWORD *)(a1 + 720) = v11;
  *(_QWORD *)(a1 + 728) = v11;
  *(_QWORD *)(a1 + 736) = v11;
  v12 = sub_18001B098((unsigned int)(v11 + 72));
  *(_QWORD *)v12 = v12;
  *(_QWORD *)(v12 + 8) = v12;
  *(_QWORD *)(v12 + 16) = v12;
  *(_WORD *)(v12 + 24) = 257;
  *(_QWORD *)(a1 + 728) = v12;
  *(_BYTE *)(a1 + 744) = 1;
  *(_OWORD *)(a1 + 748) = 0LL;
  *(_OWORD *)(a1 + 764) = 0LL;
  *(_OWORD *)(a1 + 780) = 0LL;
  *(_QWORD *)(a1 + 796) = 0LL;
  *(_DWORD *)(a1 + 804) = 0;
  sub_1800283E0(a1 + 808, a2);
  *(_QWORD *)(a1 + 864) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = 0LL;
  *(_QWORD *)(a1 + 920) = 0LL;
  *(_QWORD *)(a1 + 928) = 0x8000000000000000uLL;
  *(_DWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 944) = 1LL;
  *(_DWORD *)(a1 + 952) = 2139095039;
  *(_QWORD *)(a1 + 956) = 1023960469LL;
  sub_18002E5E0((_QWORD *)(a1 + 968));
  sub_18002ECF4((_QWORD *)(a1 + 984));
  *(_QWORD *)(a1 + 1072) = 0LL;
  *(_QWORD *)(a1 + 1080) = 0LL;
  *(_QWORD *)(a1 + 1088) = 0LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v13 = v13;
  *(_QWORD *)(v13 + 8) = v13;
  *(_QWORD *)(v13 + 16) = v13;
  *(_WORD *)(v13 + 24) = 257;
  *(_QWORD *)(a1 + 1080) = v13;
  *(_DWORD *)(a1 + 1096) = 1;
  sub_1800283E0(a1 + 1104, a2);
  *(_BYTE *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1176) = 0LL;
  *(_OWORD *)(a1 + 1184) = 0LL;
  *(_DWORD *)(a1 + 1200) = 60;
  Cnd_init_in_situ((_Cnd_t)(a1 + 1208));
  sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 1280));
  sub_18002F8CC(a1 + 1320, v14, v15, v16, a1 + 1320);
  sub_18002F87C(a1 + 1376);
  sub_180030FDC(a1);
  v23[0] = a1;
  v17 = sub_18002E9B4(&v25, v23);
  sub_180011010((_QWORD *)(a1 + 512), v17);
  if ( v26 )
    sub_18001050C(v26);
  sub_18004D35C(*(_QWORD *)(a1 + 512));
  *(_QWORD *)(a1 + 1176) = *sub_180011B8C(&v24);
  memset(&ppsmemCounters, 0, sizeof(ppsmemCounters));
  CurrentProcess = GetCurrentProcess();
  K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
  *(_QWORD *)(a1 + 1168) = ppsmemCounters.PeakWorkingSetSize;
  v19 = a3[1];
  if ( v19 )
    sub_18001050C(v19);
  v20 = a4[1];
  if ( v20 )
    sub_18001050C(v20);
  v21 = a5[1];
  if ( v21 )
    sub_18001050C(v21);
  return a1;
}
