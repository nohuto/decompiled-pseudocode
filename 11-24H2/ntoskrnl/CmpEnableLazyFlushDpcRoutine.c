/*
 * XREFs of CmpEnableLazyFlushDpcRoutine @ 0x140666670
 * Callers:
 *     <none>
 * Callees:
 *     CmpEnableLazyFlush @ 0x1404A7864 (CmpEnableLazyFlush.c)
 *     _local_unwind @ 0x1404FB730 (_local_unwind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine4 @ 0x1406B6900 (KiCustomAccessRoutine4.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall CmpEnableLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v8[32]; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v9[45]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v10; // [rsp+ADh] [rbp-5Bh]
  unsigned __int64 v11; // [rsp+D5h] [rbp-33h]
  _DWORD *v12; // [rsp+E0h] [rbp-28h]

  v12 = v8;
  memset_0(v9, 0, 0x5DuLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v8[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v11 = SystemArgument1;
    *(_QWORD *)&v9[37] = __ROL8__(DeferredContext, SystemArgument1);
    v10 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine4(DeferredContext);
  }
  CmpEnableLazyFlush(1);
}
