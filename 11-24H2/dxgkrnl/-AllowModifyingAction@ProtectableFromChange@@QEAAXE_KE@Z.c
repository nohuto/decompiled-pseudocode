/*
 * XREFs of ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x140391FDC
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

void __fastcall ProtectableFromChange::AllowModifyingAction(ProtectableFromChange *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi

  v3 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  LOBYTE(a2) = v3;
  (*(void (__fastcall **)(ProtectableFromChange *, __int64, __int64, __int64, char))(*(_QWORD *)this + 24LL))(
    this,
    a2,
    1LL,
    a3,
    -1);
  if ( (_BYTE)v3 == 0xFF )
  {
    if ( a3 != 255 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 78;
    }
    *((_WORD *)this + 11) |= (2 << *((_BYTE *)this + 20)) - 1;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
  }
  else
  {
    *((_WORD *)this + 11) |= 1 << v3;
    if ( v3 >= *((_QWORD *)this + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 82;
    }
    *(_BYTE *)(*((_QWORD *)this + 6) + v3) &= 0xF0u;
    if ( v3 >= *((_QWORD *)this + 10) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 82;
    }
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v3) = a3;
  }
}
