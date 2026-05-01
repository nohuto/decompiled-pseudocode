/*
 * XREFs of ??1CRefThread@@MEAA@XZ @ 0x1802C2CF8
 * Callers:
 *     ??1CDuiRefThread@@MEAA@XZ @ 0x1802C6464 (--1CDuiRefThread@@MEAA@XZ.c)
 *     ??_ECRefThread@@MEAAPEAXI@Z @ 0x1803EBC30 (--_ECRefThread@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRefThread::~CRefThread(CRefThread *this)
{
  CRefThread *v2; // rcx
  CRefThread *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CRefThread::`vftable';
  **((_DWORD **)this + 1) = 1000;
  v3 = 0LL;
  GetProcessReference(&v3);
  v2 = v3;
  if ( v3 == this )
  {
    SetProcessReference(0LL);
    v2 = v3;
  }
  if ( v2 )
    (*(void (__fastcall **)(CRefThread *))(*(_QWORD *)v2 + 16LL))(v2);
  **((_DWORD **)this + 1) = 0;
}
