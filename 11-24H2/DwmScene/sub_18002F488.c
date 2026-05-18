/*
 * XREFs of sub_18002F488 @ 0x18002F488
 * Callers:
 *     sub_18005E820 @ 0x18005E820 (sub_18005E820.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_180028540 @ 0x180028540 (sub_180028540.c)
 *     sub_18002E740 @ 0x18002E740 (sub_18002E740.c)
 *     sub_18002EB14 @ 0x18002EB14 (sub_18002EB14.c)
 *     sub_18002EE54 @ 0x18002EE54 (sub_18002EE54.c)
 *     sub_18002F95C @ 0x18002F95C (sub_18002F95C.c)
 *     sub_18002F9DC @ 0x18002F9DC (sub_18002F9DC.c)
 *     sub_18002FA2C @ 0x18002FA2C (sub_18002FA2C.c)
 *     sub_18003113C @ 0x18003113C (sub_18003113C.c)
 *     sub_18004D4BC @ 0x18004D4BC (sub_18004D4BC.c)
 *     sub_18006D60C @ 0x18006D60C (sub_18006D60C.c)
 */

// Hidden C++ exception states: #wind=33
__int64 __fastcall sub_18002F488(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
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
  sub_180028540(a1 + 8, a2);
  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  sub_180028540(a1 + 112, a2);
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
  sub_180028540(a1 + 312, a2);
  sub_18006D60C(a1 + 368);
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
  sub_18002F95C(a1 + 528);
  *(_DWORD *)(a1 + 696) = v11;
  *(_QWORD *)(a1 + 704) = v11;
  *(_QWORD *)(a1 + 712) = v11;
  *(_QWORD *)(a1 + 720) = v11;
  *(_QWORD *)(a1 + 728) = v11;
  *(_QWORD *)(a1 + 736) = v11;
  v12 = sub_18001B1F8((unsigned int)(v11 + 72));
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
  sub_180028540(a1 + 808, a2);
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
  sub_18002E740((_QWORD *)(a1 + 968));
  sub_18002EE54((_QWORD *)(a1 + 984));
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
  sub_180028540(a1 + 1104, a2);
  *(_BYTE *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1176) = 0LL;
  *(_OWORD *)(a1 + 1184) = 0LL;
  *(_DWORD *)(a1 + 1200) = 60;
  Cnd_init_in_situ((_Cnd_t)(a1 + 1208));
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 1280));
  sub_18002FA2C(a1 + 1320, v14, v15, v16, a1 + 1320);
  sub_18002F9DC(a1 + 1376);
  sub_18003113C(a1);
  v23[0] = a1;
  v17 = sub_18002EB14(&v25, v23);
  sub_180011110((_QWORD *)(a1 + 512), v17);
  if ( v26 )
    sub_18001060C(v26);
  sub_18004D4BC(*(_QWORD *)(a1 + 512));
  *(_QWORD *)(a1 + 1176) = *sub_180011C8C(&v24);
  memset(&ppsmemCounters, 0, sizeof(ppsmemCounters));
  CurrentProcess = GetCurrentProcess();
  K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
  *(_QWORD *)(a1 + 1168) = ppsmemCounters.PeakWorkingSetSize;
  v19 = a3[1];
  if ( v19 )
    sub_18001060C(v19);
  v20 = a4[1];
  if ( v20 )
    sub_18001060C(v20);
  v21 = a5[1];
  if ( v21 )
    sub_18001060C(v21);
  return a1;
}
