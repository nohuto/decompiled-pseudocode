/*
 * XREFs of IsUMPDGetThreadClientPIDSupported @ 0x140147F24
 * Callers:
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsUMPDGetThreadClientPIDSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1544LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
