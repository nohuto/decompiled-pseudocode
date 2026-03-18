/*
 * XREFs of MiAccessCheck @ 0x1403E1820
 * Callers:
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     MiAllowGuardFault @ 0x1403E1AB0 (MiAllowGuardFault.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 */

__int64 __fastcall MiAccessCheck(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, int a4, __int64 a5, char a6)
{
  __int64 v6; // r10
  __int64 v8; // rbx
  char v9; // di
  _KPROCESS *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rbp

  v6 = a2;
  if ( a3 == 1 && (BugCheckParameter2 > 0xFFFFF6BFFFFFFF78uLL || BugCheckParameter2 < 0xFFFFF68000000000uLL) )
    return 3221225477LL;
  v8 = *(_QWORD *)BugCheckParameter2;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (v8 & 1) == 0 )
      goto LABEL_4;
    if ( (v8 & 0x42) == 0 || (v8 & 0x20) == 0 )
    {
      v11 = MiPteHasShadow();
      if ( v11 )
      {
        KernelWaitTime = v11[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v14 = *(_QWORD *)(KernelWaitTime + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
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
LABEL_4:
  v9 = a4;
  if ( *((char *)&MiReadWrite + (a4 & 7)) - (v6 != 0) < 10 )
    return 3221225477LL;
  if ( (a4 & 0xFFFFFFF8) != 0x10 || (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( !(unsigned int)MiAllowGuardFault(a5) )
    return 3221225477LL;
  if ( (v8 & 0xC00) == 0x800 )
  {
    if ( a6 )
    {
      v15 = v8;
      if ( qword_140E2D940 && (v8 & 0x10) == 0 )
        v15 = v8 & ~qword_140E2D940;
      v16 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    else
    {
      v16 = MiLockTransitionLeafPageEx(BugCheckParameter2);
      v8 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      if ( v16 )
        *(_QWORD *)(v16 + 16) = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v9 & 0xF));
    }
    *(_QWORD *)BugCheckParameter2 = v8 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v9 & 0xF));
    if ( !a6 )
    {
      if ( v16 )
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    *(_QWORD *)BugCheckParameter2 = v8 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v9 & 0xF));
  }
  return 2147483649LL;
}
