/*
 * XREFs of ??_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z @ 0x180011A30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180011AA8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitCha.c)
 *     ??3@YAXPEAX@Z @ 0x1800137FC (--3@YAXPEAX@Z.c)
 */

Windows::System::AppMemoryUsageLimitChangingEventArgs *__fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::`vector deleting destructor'(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
