/*
 * XREFs of ?GetConnectorProcessingMode@CSaDeviceProxy@@UEAA?BU_GUID@@XZ @ 0x180075ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CSaDeviceProxy::GetConnectorProcessingMode(
        CSaDeviceProxy *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = *(struct _GUID *)(*((_QWORD *)this + 5) + 48LL);
  return result;
}
