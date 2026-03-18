/*
 * XREFs of KiMaskInterruptInternal @ 0x14049C998
 * Callers:
 *     KeMaskInterrupt @ 0x1403B748C (KeMaskInterrupt.c)
 *     ?KiMaskInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405BD100 (-KiMaskInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiMaskInterruptInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v9; // rcx

  v4 = a2;
  v5 = KeGetCurrentPrcb()->InterruptObject[(unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2, a3, a4)];
  if ( !v5 )
    return 2147483685LL;
  if ( *((__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v5
       + 10) == KiChainedDispatch )
  {
    v9 = v5 + 2;
    while ( (v9[24] & 1) != 0 )
    {
      v9 = *(_DWORD **)v9;
      if ( v9 == v5 + 2 )
        return guard_dispatch_icall_no_overrides(v4, 0LL, v6, v7);
    }
  }
  else if ( (v5[26] & 1) != 0 )
  {
    return guard_dispatch_icall_no_overrides(v4, 0LL, v6, v7);
  }
  return 296LL;
}
