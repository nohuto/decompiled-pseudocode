/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800664E8
 * Callers:
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180057660 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180057780 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x18006643C (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___::_lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___ @ 0x1800A1D7C (wil--details--lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___--_lambda_call__lambda_f40a.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800AE9BC (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 *     ??0CSebNotifier@@QEAA@XZ @ 0x1801036DC (--0CSebNotifier@@QEAA@XZ.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180108BB4 (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 * Callees:
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x1800817BC (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  char *v4; // rcx
  __int64 result; // rax

  v4 = (char *)*a1;
  result = (__int64)(v4 - 1);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    result = wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(v4);
  *a1 = a2;
  return result;
}
