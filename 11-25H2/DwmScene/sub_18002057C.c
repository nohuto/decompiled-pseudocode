/*
 * XREFs of sub_18002057C @ 0x18002057C
 * Callers:
 *     sub_18001FCD4 @ 0x18001FCD4 (sub_18001FCD4.c)
 * Callees:
 *     sub_1800013E0 @ 0x1800013E0 (sub_1800013E0.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180013818 @ 0x180013818 (sub_180013818.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180020210 @ 0x180020210 (sub_180020210.c)
 *     sub_1800204D0 @ 0x1800204D0 (sub_1800204D0.c)
 *     sub_1800204E4 @ 0x1800204E4 (sub_1800204E4.c)
 *     sub_1800208F8 @ 0x1800208F8 (sub_1800208F8.c)
 *     sub_180020FC0 @ 0x180020FC0 (sub_180020FC0.c)
 *     sub_180022CC0 @ 0x180022CC0 (sub_180022CC0.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18002057C(__int64 a1)
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
  sub_180020FC0(a1 + 8);
  sub_180020FC0(a1 + 16);
  sub_180020FC0(a1 + 24);
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
  sub_180013818(a1 + 48, v4, v3);
  v5 = sub_1800204E4(&v12);
  sub_180020210(a1 + 112, v5);
  sub_1800208F8(&v12);
  v6 = *(void **)v2;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v2 + 144LL), 0LL);
  sub_180022CC0(v6);
  if ( _InterlockedIncrement64(&qword_1801C3470) == 1 )
    sub_1800013E0((ULONGLONG *)&CallbackContext);
  v7 = sub_18001B098(40LL);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 12) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Utils::TelemTraceLoggerAttributes>::`vftable';
    sub_1800204D0((_QWORD *)(v7 + 16), a1 + 8, a1 + 16, a1 + 48);
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = v8 + 16;
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v8;
  if ( v9 )
    sub_18001050C(v9);
  return a1;
}
