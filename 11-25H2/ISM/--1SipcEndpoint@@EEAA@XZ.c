/*
 * XREFs of ??1SipcEndpoint@@EEAA@XZ @ 0x18010AED8
 * Callers:
 *     ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x18010B070 (--_GSipcEndpoint@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094CA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SipcEndpoint::~SipcEndpoint(SipcEndpoint *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &SipcEndpoint::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v2 )
    (**v2)(v2, 1LL);
  SipcWin32Handle::Reset((void **)this + 4);
  SipcWin32Handle::Reset((void **)this + 3);
  *(_QWORD *)this = &SipcObjectBase<ISIPCEndpoint>::`vftable';
}
