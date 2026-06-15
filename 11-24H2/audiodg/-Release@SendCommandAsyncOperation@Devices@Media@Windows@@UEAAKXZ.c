/*
 * XREFs of ?Release@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAKXZ @ 0x14007C8E0
 * Callers:
 *     ?Release@SendCommandAsyncOperation@Devices@Media@Windows@@W7EAAKXZ @ 0x14007C8F0 (-Release@SendCommandAsyncOperation@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@SendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14007C900 (-Release@SendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAKXZ.c)
 *     ?Release@SendCommandAsyncOperation@Devices@Media@Windows@@WGA@EAAKXZ @ 0x14007C910 (-Release@SendCommandAsyncOperation@Devices@Media@Windows@@WGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::Release(this);
}
