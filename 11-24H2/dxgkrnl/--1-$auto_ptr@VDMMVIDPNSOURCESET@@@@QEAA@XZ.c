/*
 * XREFs of ??1?$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAA@XZ @ 0x14000CECC
 * Callers:
 *     ??1DMMVIDPNSOURCE@@UEAA@XZ @ 0x14000CD34 (--1DMMVIDPNSOURCE@@UEAA@XZ.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1403A2CC8 (--1DMMVIDPN@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall auto_ptr<DMMVIDPNSOURCESET>::~auto_ptr<DMMVIDPNSOURCESET>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 16LL))(v1, 1LL);
  return result;
}
