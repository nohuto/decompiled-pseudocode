/*
 * XREFs of wWinMain @ 0x14004AF94
 * Callers:
 *     __scrt_common_main_seh @ 0x140058C30 (__scrt_common_main_seh.c)
 * Callees:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x14001D644 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 *     WppInitUm @ 0x14004B108 (WppInitUm.c)
 *     WppCleanupUm @ 0x140057E9C (WppCleanupUm.c)
 *     McGenEventRegister_EtwEventRegister @ 0x140058574 (McGenEventRegister_EtwEventRegister.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     WPP_SF_S @ 0x140065AB0 (WPP_SF_S.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140076BA0 (-AERTMemoryShutdown@@YAJXZ.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // ebx
  LPVOID Context; // [rsp+20h] [rbp-18h] BYREF

  byte_1400C46C0 = 0;
  qword_1400C45E8 = 0LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  qword_1400C45F0 = 1LL;
  WppInitUm(hInstance, hPrevInstance);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, lpCmdLine);
  }
  HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  McGenEventRegister_EtwEventRegister();
  Context = 0LL;
  if ( gMaxSize )
  {
    v8 = -2147023649;
  }
  else
  {
    gInitialSize = 0x200000LL;
    gMinSize = 4LL;
    gMaxSize = 0x8000LL;
    if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context) )
    {
      v8 = ATL::CAtlExeModuleT<CAudioDGModule>::WinMain((CAudioDGModule *)&_AtlModule);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
      }
      AERTMemoryShutdown();
    }
    else
    {
      v8 = -2147024882;
    }
  }
  WppCleanupUm(v7);
  return v8;
}
