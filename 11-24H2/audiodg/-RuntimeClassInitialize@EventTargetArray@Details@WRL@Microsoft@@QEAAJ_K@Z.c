/*
 * XREFs of ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x140019D9C
 * Callers:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x14001955C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x14003C130 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 * Callees:
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x14003E60C (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400593D0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1400593DC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
        Microsoft::WRL::Details::EventTargetArray *this,
        unsigned __int64 a2)
{
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rcx

  v4 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (unsigned __int64 *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = a2;
    v8 = v7 + 1;
    `eh vector constructor iterator'(
      v7 + 1,
      8uLL,
      a2,
      std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>,
      (void (*)(void *))Microsoft::WRL::WeakRef::~WeakRef);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 2) = v8;
  v9 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 4) = v10;
  v11 = *((_QWORD *)this + 2);
  if ( v11 )
  {
    if ( v10 )
    {
      *((_QWORD *)this + 3) = v11;
      return 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'();
  }
  operator delete(*((void **)this + 4));
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  return 2147942414LL;
}
