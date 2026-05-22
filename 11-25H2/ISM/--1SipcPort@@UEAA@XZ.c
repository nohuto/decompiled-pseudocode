/*
 * XREFs of ??1SipcPort@@UEAA@XZ @ 0x180094C28
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x180084A10 (--1AlpcPort@@UEAA@XZ.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094CA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SipcPort::~SipcPort(SipcPort *this)
{
  _DWORD *i; // rbx
  _DWORD *v3; // rcx
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &SipcPort::`vftable';
  SipcWin32Handle::Reset((SipcPort *)((char *)this + 32));
  for ( i = (_DWORD *)((char *)this + 8); ; --i[4] )
  {
    v3 = *(_DWORD **)i;
    if ( *(_DWORD **)(*(_QWORD *)i + 8LL) != i || (v4 = *(_QWORD *)v3, *(_DWORD **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)i = v4;
    *(_QWORD *)(v4 + 8) = i;
    if ( v3 == i )
      break;
    v5 = (void (__fastcall ***)(_QWORD, __int64))((unsigned __int64)(v3 - 2) & -(__int64)(v3 != 0LL));
    if ( v5 )
      (**v5)(v5, 1LL);
  }
}
