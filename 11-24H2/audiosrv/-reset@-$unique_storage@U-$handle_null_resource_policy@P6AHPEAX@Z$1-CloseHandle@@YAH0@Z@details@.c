/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180059E78
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001EE5C (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18001FD90 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180059DCC (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___::_lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___ @ 0x18009E2DC (wil--details--lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___--_lambda_call__lambda_f40a.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800AB24C (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x1800B4148 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??0CSebNotifier@@QEAA@XZ @ 0x18010982C (--0CSebNotifier@@QEAA@XZ.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18010F338 (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 * Callees:
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x18006EFDC (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
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
