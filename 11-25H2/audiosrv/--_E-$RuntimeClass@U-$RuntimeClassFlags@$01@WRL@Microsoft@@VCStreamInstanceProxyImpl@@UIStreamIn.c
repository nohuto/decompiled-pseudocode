/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCStreamInstanceProxyImpl@@UIStreamInstanceProxy@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800B8340
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStreamInstanceProxyImpl@@QEAA@XZ @ 0x1800619EC (--1CStreamInstanceProxyImpl@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CStreamInstanceProxyImpl *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CStreamInstanceProxyImpl,IStreamInstanceProxy>::`vector deleting destructor'(
        CStreamInstanceProxyImpl *a1,
        char a2)
{
  *((_DWORD *)a1 + 13) = -1073741823;
  CStreamInstanceProxyImpl::~CStreamInstanceProxyImpl(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
