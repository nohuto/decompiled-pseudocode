/*
 * XREFs of rimHidP_GetCaps @ 0x1C0185088
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0192354 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     RIMIDECreateHIDDesc @ 0x1C019395C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimHidP_GetCaps(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 152) )
    return 3221225659LL;
  v10 = SGDGetUserSessionState(v7, v6, v8, v9);
  return (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 152))(a1, a2);
}
