/*
 * XREFs of sub_1800206DC @ 0x1800206DC
 * Callers:
 *     sub_18001FE34 @ 0x18001FE34 (sub_18001FE34.c)
 * Callees:
 *     sub_1800013E0 @ 0x1800013E0 (sub_1800013E0.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180013918 @ 0x180013918 (sub_180013918.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180020370 @ 0x180020370 (sub_180020370.c)
 *     sub_180020630 @ 0x180020630 (sub_180020630.c)
 *     sub_180020644 @ 0x180020644 (sub_180020644.c)
 *     sub_180020A58 @ 0x180020A58 (sub_180020A58.c)
 *     sub_180021120 @ 0x180021120 (sub_180021120.c)
 *     sub_180022E20 @ 0x180022E20 (sub_180022E20.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800206DC(__int64 a1)
{
  __int64 v2; // r14
  size_t v3; // r8
  const char *v4; // rdx
  __int64 *v5; // rax
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  sub_180021120(a1 + 8);
  sub_180021120(a1 + 16);
  sub_180021120(a1 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 15LL;
  *(_BYTE *)(a1 + 48) = 0;
  std::string::string((_QWORD *)(a1 + 80), "CanvasDefault");
  v2 = a1 + 112;
  *(_QWORD *)(a1 + 112) = 0LL;
  memset(&SystemInfo, 0, sizeof(SystemInfo));
  GetSystemInfo(&SystemInfo);
  v3 = 5LL;
  if ( SystemInfo.wProcessorArchitecture )
  {
    if ( SystemInfo.wProcessorArchitecture == 5 )
    {
      v4 = "ARM";
    }
    else
    {
      if ( SystemInfo.wProcessorArchitecture != 9 )
      {
        v4 = "UNKNOWN";
        v3 = 7LL;
        goto LABEL_9;
      }
      v4 = "x64";
    }
    v3 = 3LL;
  }
  else
  {
    v4 = "WIN32";
  }
LABEL_9:
  sub_180013918(a1 + 48, v4, v3);
  v5 = sub_180020644(&v12);
  sub_180020370(a1 + 112, v5);
  sub_180020A58(&v12);
  v6 = *(void **)v2;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v2 + 144LL), 0LL);
  sub_180022E20(v6);
  if ( _InterlockedIncrement64(&qword_1801C4480) == 1 )
    sub_1800013E0((ULONGLONG *)&CallbackContext);
  v7 = sub_18001B1F8(40LL);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 12) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Utils::TelemTraceLoggerAttributes>::`vftable';
    sub_180020630((_QWORD *)(v7 + 16), a1 + 8, a1 + 16, a1 + 48);
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = v8 + 16;
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v8;
  if ( v9 )
    sub_18001060C(v9);
  return a1;
}
