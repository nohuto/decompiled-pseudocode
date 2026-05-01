/*
 * XREFs of ??0?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D96C8
 * Callers:
 *     ??0FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAA@XZ @ 0x1800D9578 (--0FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 8));
  InitializeSRWLock((PSRWLOCK)(a1 + 16));
  *(_QWORD *)(a1 + 24) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1;
  *(_BYTE *)(a1 + 64) = 0;
  return result;
}
