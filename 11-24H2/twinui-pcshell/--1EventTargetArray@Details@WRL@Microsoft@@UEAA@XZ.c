/*
 * XREFs of ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801A8F7C
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801A8F40 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D4CD0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1802D4DA8 (--_V@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::WRL::Details::EventTargetArray::~EventTargetArray(
        Microsoft::WRL::Details::EventTargetArray *this,
        const struct std::nothrow_t *a2)
{
  char *v3; // rcx
  char *v4; // rbx

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v3 = (char *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = v3 - 8;
    `eh vector destructor iterator'(
      v3,
      8uLL,
      *((_QWORD *)v3 - 1),
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
    operator delete[](v4, 8LL * *(_QWORD *)v4 + 8);
  }
  operator delete(*((void **)this + 4), a2);
  *((_DWORD *)this + 3) = -1073741823;
}
