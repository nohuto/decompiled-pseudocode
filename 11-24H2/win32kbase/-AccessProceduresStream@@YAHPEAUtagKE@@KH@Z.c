/*
 * XREFs of ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB410
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FAD40 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB230 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F57A0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F58D0 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F6080 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FB48C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AccessProceduresStream(struct tagKE *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, int); // rbx

  v3 = a3;
  for ( i = &off_140246C80[a3]; ; ++i )
  {
    if ( v3 >= 5 )
      return 1LL;
    ++v3;
    if ( !((unsigned int (__fastcall *)(struct tagKE *, _QWORD))*i)(a1, a2) )
      break;
  }
  InputTraceLogging::Keyboard::DropInput(10LL);
  return 0LL;
}
