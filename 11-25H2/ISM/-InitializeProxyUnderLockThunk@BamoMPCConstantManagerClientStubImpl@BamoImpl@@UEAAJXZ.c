/*
 * XREFs of ?InitializeProxyUnderLockThunk@BamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAAJXZ @ 0x1800B6640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientStubImpl::InitializeProxyUnderLockThunk(
        BamoImpl::BamoMPCConstantManagerClientStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 64LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
