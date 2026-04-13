/*
 * XREFs of ?Get@CHSTRINGResult@Internal@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800306E4
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180032BC0 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyncOpe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::CHSTRINGResult::Get(RTL_SRWLOCK *this, HSTRING *a2)
{
  RTL_SRWLOCK *v2; // rsi
  RTL_SRWLOCK *v3; // rbx

  v2 = this + 3;
  v3 = this;
  AcquireSRWLockShared(this + 3);
  LODWORD(v3) = WindowsDuplicateString((HSTRING)v3[2].Ptr, a2);
  ReleaseSRWLockShared(v2);
  return (unsigned int)v3;
}
