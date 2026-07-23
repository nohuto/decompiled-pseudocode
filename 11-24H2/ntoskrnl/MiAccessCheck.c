/*
 * XREFs of MiAccessCheck @ 0x1403071E0
 * Callers:
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiAllowGuardFault @ 0x14045D6F0 (MiAllowGuardFault.c)
 */

__int64 __fastcall MiAccessCheck(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r10
  ULONG_PTR v7; // rsi
  __int64 v8; // rbx
  char v9; // di
  __int64 HasShadow; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rbp

  v6 = a2;
  v7 = BugCheckParameter2;
  if ( (_BYTE)a3 == 1 )
  {
    BugCheckParameter2 = 0x3FFFFFFF78LL;
    if ( v7 > 0xFFFFF6BFFFFFFF78uLL || v7 < 0xFFFFF68000000000uLL )
      return 3221225477LL;
  }
  v8 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (v8 & 1) == 0 )
      goto LABEL_7;
    LOBYTE(BugCheckParameter2) = (v8 & 0x42) != 0;
    if ( ((unsigned __int8)BugCheckParameter2 & ((v8 & 0x20) != 0)) == 0 )
    {
      HasShadow = MiPteHasShadow(BugCheckParameter2, *(_QWORD *)v7, a3, a4);
      if ( HasShadow )
      {
        v13 = *(_QWORD *)(HasShadow + 1288);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v12 |= 0x20uLL;
          v8 = v12 | 0x42;
          if ( (v14 & 0x42) == 0 )
            v8 = v12;
        }
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    if ( !v6 || (v8 & 0xA00) != 0 )
      return 0LL;
    return 3221225477LL;
  }
LABEL_7:
  v9 = a4;
  if ( *((char *)MiReadWrite + (a4 & 7)) - (v6 != 0) < 10 )
    return 3221225477LL;
  if ( (a4 & 0xFFFFFFF8) != 0x10 || (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( !(unsigned int)MiAllowGuardFault() )
    return 3221225477LL;
  if ( (v8 & 0xC00) == 0x800 )
  {
    if ( a6 )
    {
      v15 = v8;
      if ( qword_140E2DCC0 && (v8 & 0x10) == 0 )
        v15 = v8 & ~qword_140E2DCC0;
      v16 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    else
    {
      v16 = MiLockTransitionLeafPageEx(v7, 0LL, 0);
      v8 = MI_READ_PTE_LOCK_FREE(v7);
      if ( v16 )
        *(_QWORD *)(v16 + 16) = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v9 & 0xF));
    }
    *(_QWORD *)v7 = v8 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v9 & 0xF));
    if ( !a6 )
    {
      if ( v16 )
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    *(_QWORD *)v7 = v8 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v9 & 0xF));
  }
  return 2147483649LL;
}
