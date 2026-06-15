/*
 * XREFs of ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x14003E5CC
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14003E590 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x14003E60C (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::EventTargetArray::~EventTargetArray(
        Microsoft::WRL::Details::EventTargetArray *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  if ( *((_QWORD *)this + 2) )
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'();
  operator delete(*((void **)this + 4));
  *((_DWORD *)this + 3) = -1073741823;
}
