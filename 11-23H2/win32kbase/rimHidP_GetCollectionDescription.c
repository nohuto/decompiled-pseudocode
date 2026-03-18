/*
 * XREFs of rimHidP_GetCollectionDescription @ 0x1C01850E8
 * Callers:
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C019814C (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C0198D40 (RIMIDE_CreateGenericHidDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimHidP_GetCollectionDescription(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax

  v5 = a2;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 144) )
    return 3221225659LL;
  v11 = SGDGetUserSessionState(v8, v7, v9, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v11 + 144))(a1, v5, 1LL, a4);
}
