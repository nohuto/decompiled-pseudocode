/*
 * XREFs of ?AllocateDriverObjectExtensionAndStoreFxDriver@FxDriver@@QEAAJXZ @ 0x140040EA4
 * Callers:
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140040EF4 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxDriver::AllocateDriverObjectExtensionAndStoreFxDriver(FxDriver *this)
{
  NTSTATUS result; // eax
  FxDriver **ppDriver; // [rsp+30h] [rbp+8h] BYREF

  ppDriver = 0LL;
  result = IoAllocateDriverObjectExtension(
             this->m_DriverObject.m_DriverObject,
             FxDriver::GetFxDriver,
             8u,
             (PVOID *)&ppDriver);
  if ( result >= 0 )
  {
    *ppDriver = this;
    return 0;
  }
  return result;
}
