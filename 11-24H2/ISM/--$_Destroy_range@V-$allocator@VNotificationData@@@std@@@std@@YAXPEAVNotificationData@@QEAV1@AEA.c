/*
 * XREFs of ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x18004BF68
 * Callers:
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x18004BCC8 (--$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@V.c)
 *     _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_unsigned___int64_&_tagINPUT_TRANSFORM_const_&__::_1_::catch$7 @ 0x1801D1BE3 (_std--vector_NotificationData_std--allocator_NotificationData___--_Emplace_reallocate_unsigned__.c)
 *     _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64_&_int__::_1_::catch$1 @ 0x1801D1F92 (_std--vector_NotificationData_std--allocator_NotificationData___--_Emplace_reallocate_enum_Notif.c)
 *     _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64_&_unsigned___int64_&__::_1_::catch$5 @ 0x1801D1FF5 (_std--vector_NotificationData_std--allocator_NotificationData___--_Emplace_realloca_ea_1801D1FF5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Destroy_range<std::allocator<NotificationData>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 16);
      result = v4 - 1;
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        result = NtCloseCompositionInputSink(v4, a2);
      v3 += 96LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
