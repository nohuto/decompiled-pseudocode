/*
 * XREFs of ??1AppLayoutData@TabletModeTraceLogging@@QEAA@XZ @ 0x180517D40
 * Callers:
 *     ??1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ @ 0x180517D68 (--1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall TabletModeTraceLogging::AppLayoutData::~AppLayoutData(TabletModeTraceLogging::AppLayoutData *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 80);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 40);
}
