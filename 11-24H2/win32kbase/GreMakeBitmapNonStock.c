/*
 * XREFs of GreMakeBitmapNonStock @ 0x140015630
 * Callers:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400351C0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x140015730 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgLockAndModifyHandleType @ 0x140016090 (HmgLockAndModifyHandleType.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     HmgLock @ 0x14002FF60 (HmgLock.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

unsigned __int64 __fastcall GreMakeBitmapNonStock(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r8

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v4 = HmgLock(a1, a2);
  v7 = *(_QWORD *)(W32GetSessionState(v6, v5) + 88);
  if ( v4 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection((SURFACE *)v4) || !*(_WORD *)(v4 + 100) && *(_DWORD *)(v4 + 216))
      && a1 != *(_QWORD *)(*(_QWORD *)(v7 + 3008) + 168LL)
      && (a1 & 0x800000) != 0 )
    {
      v2 = a1 & 0xFFFFFFFFFF7FFFFFuLL;
      if ( *(_DWORD *)(v4 + 168) )
      {
        if ( _bittest((const signed __int32 *)v4, 0x17u) )
          *(_WORD *)(v4 + 102) |= 0x400u;
      }
      else if ( (unsigned int)HmgLockAndModifyHandleType(v8, a1 & 0xFFFFFFFFFF7FFFFFuLL) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 4244));
        *(_QWORD *)(v4 + 32) = v2;
        *(_WORD *)(v4 + 102) &= ~0x200u;
        LOBYTE(v9) = 5;
        HmgSetOwner(a1 & 0xFFFFFFFFFF7FFFFFuLL, 2147483650LL, v9);
      }
      else
      {
        v2 = 0LL;
      }
    }
    OBJECT::InterlockedDecrementExclusiveLockCount((OBJECT *)v4);
  }
  return v2;
}
