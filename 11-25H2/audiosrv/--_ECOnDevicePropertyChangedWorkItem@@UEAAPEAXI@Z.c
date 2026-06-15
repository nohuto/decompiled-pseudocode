/*
 * XREFs of ??_ECOnDevicePropertyChangedWorkItem@@UEAAPEAXI@Z @ 0x1800660E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

COnDevicePropertyChangedWorkItem *__fastcall COnDevicePropertyChangedWorkItem::`vector deleting destructor'(
        COnDevicePropertyChangedWorkItem *this,
        char a2)
{
  volatile signed __int32 *v4; // rdx

  v4 = (volatile signed __int32 *)(*((_QWORD *)this + 1) - 24LL);
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
