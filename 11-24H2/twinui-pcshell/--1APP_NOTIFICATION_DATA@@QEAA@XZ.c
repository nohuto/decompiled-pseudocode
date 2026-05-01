/*
 * XREFs of ??1APP_NOTIFICATION_DATA@@QEAA@XZ @ 0x18009C028
 * Callers:
 *     ?Release@?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ @ 0x18009CDA0 (-Release@-$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall APP_NOTIFICATION_DATA::~APP_NOTIFICATION_DATA(
        APP_NOTIFICATION_DATA *this,
        const struct std::nothrow_t *a2)
{
  operator delete(*(void **)this, a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
