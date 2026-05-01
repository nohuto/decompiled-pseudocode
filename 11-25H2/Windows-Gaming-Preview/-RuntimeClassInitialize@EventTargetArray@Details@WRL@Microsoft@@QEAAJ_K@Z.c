/*
 * XREFs of ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800213C8
 * Callers:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18001744C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ??_V@YAXPEAX_K@Z @ 0x180001D24 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180001D30 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180002290 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
        Microsoft::WRL::Details::EventTargetArray *this,
        unsigned __int64 a2)
{
  __int64 v4; // rax
  bool v5; // cf
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rbx
  size_t v9; // rax
  void *v10; // rax
  const struct std::nothrow_t *v11; // rdx
  char *v12; // rcx
  char *v14; // rbx

  v4 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *(_QWORD *)v7 = a2;
    v8 = v7 + 8;
    `eh vector constructor iterator'(v7 + 8, 8LL, a2, (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
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
  v12 = (char *)*((_QWORD *)this + 2);
  if ( v12 )
  {
    if ( v10 )
    {
      *((_QWORD *)this + 3) = v12;
      return 0LL;
    }
    v14 = v12 - 8;
    `eh vector destructor iterator'(
      v12,
      8LL,
      *((_QWORD *)v12 - 1),
      (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
    operator delete[](v14, (const struct std::nothrow_t *)(8LL * *(_QWORD *)v14 + 8));
  }
  operator delete(*((void **)this + 4), v11);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  return 2147942414LL;
}
