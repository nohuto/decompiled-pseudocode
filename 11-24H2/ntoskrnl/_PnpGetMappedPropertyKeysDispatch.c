/*
 * XREFs of _PnpGetMappedPropertyKeysDispatch @ 0x14097D050
 * Callers:
 *     _PnpGetObjectPropertyKeysWorker @ 0x14097CED0 (_PnpGetObjectPropertyKeysWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PnpGetMappedPropertyKeysDispatch(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v10; // rbx
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  char v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+50h] [rbp-28h]
  __int64 v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+60h] [rbp-18h]

  v10 = a3;
  memset_0(v14, 0, 0x40uLL);
  if ( (unsigned int)(v10 - 1) > 0xA )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 8 * v10 + 296) )
    return 3221225474LL;
  v19 = 0;
  v14[1] = a5;
  v16 = a7;
  v15 = a6;
  v17 = a8;
  v18 = a9;
  v14[0] = a4;
  return guard_dispatch_icall_no_overrides(a1, a2);
}
