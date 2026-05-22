/*
 * XREFs of ??1InputDestTarget@@UEAA@XZ @ 0x1800F5B24
 * Callers:
 *     ??_GInputDestTarget@@UEAAPEAXI@Z @ 0x1800F5B90 (--_GInputDestTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InputDestTarget::~InputDestTarget(InputDestTarget *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_DWORD *)this + 7) = -1073741823;
}
