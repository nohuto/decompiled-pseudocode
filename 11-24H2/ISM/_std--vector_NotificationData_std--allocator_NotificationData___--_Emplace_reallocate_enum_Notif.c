/*
 * XREFs of _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64_&_int__::_1_::catch$1 @ 0x1801D1F92
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x18004BF68 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEA.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64___int__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<NotificationData>>(*(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(char **)(a2 + 40), (const struct std::nothrow_t *)(96LL * *(_QWORD *)(a2 + 120)));
  throw;
}
