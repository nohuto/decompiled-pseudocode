/*
 * XREFs of ??1TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ @ 0x1800429E0
 * Callers:
 *     ??_GTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x180042CE0 (--_GTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::~TargetedContentTriggerImpl(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this)
{
  volatile int *v2; // rdx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 24);
  WindowsDeleteString(*((HSTRING *)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 18));
  *((_QWORD *)this + 18) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 16));
  *((_QWORD *)this + 16) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 15));
  *((_QWORD *)this + 15) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 14));
  *((_QWORD *)this + 14) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 13));
  *((_QWORD *)this + 13) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v2);
}
