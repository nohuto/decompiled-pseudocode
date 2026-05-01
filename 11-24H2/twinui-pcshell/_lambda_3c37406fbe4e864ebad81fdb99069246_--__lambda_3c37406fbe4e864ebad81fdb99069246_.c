/*
 * XREFs of _lambda_3c37406fbe4e864ebad81fdb99069246_::__lambda_3c37406fbe4e864ebad81fdb99069246_ @ 0x1804EBD08
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c37406fbe4e864ebad81fdb99069246___::_CTaskWrapper__lambda_3c37406fbe4e864ebad81fdb99069246___ @ 0x1804EBD60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c37406fbe4e864ebad81fdb99069246___--_CTask.c)
 *     _lambda_de87d9780560173c9d125f808a86f278_::operator() @ 0x1804EC130 (_lambda_de87d9780560173c9d125f808a86f278_--operator().c)
 *     _lambda_2ab4781663b1c98e73026fa5a544de84_::operator() @ 0x1804F97F4 (_lambda_2ab4781663b1c98e73026fa5a544de84_--operator().c)
 *     _lambda_5e0c83d06204f2c38ba237214f8d2681_::operator() @ 0x1804F9CF4 (_lambda_5e0c83d06204f2c38ba237214f8d2681_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall lambda_3c37406fbe4e864ebad81fdb99069246_::__lambda_3c37406fbe4e864ebad81fdb99069246_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
