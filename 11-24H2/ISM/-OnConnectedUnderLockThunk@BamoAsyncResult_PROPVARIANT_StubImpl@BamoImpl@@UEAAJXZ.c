/*
 * XREFs of ?OnConnectedUnderLockThunk@BamoAsyncResult_PROPVARIANT_StubImpl@BamoImpl@@UEAAJXZ @ 0x1800B78E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_PROPVARIANT_StubImpl::OnConnectedUnderLockThunk(
        BamoImpl::BamoAsyncResult_PROPVARIANT_StubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 56LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
