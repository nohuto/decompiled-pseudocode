/*
 * XREFs of ??0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z @ 0x18006DC60
 * Callers:
 *     ?SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800F206C (-SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV-$unordered_set@KU-$hash@K@std@@.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 */

Win32kInterop::InputInteropMessageStorage *__fastcall Win32kInterop::InputInteropMessageStorage::InputInteropMessageStorage(
        Win32kInterop::InputInteropMessageStorage *this,
        int a2)
{
  size_t v2; // rbx
  void *v4; // rax

  v2 = a2;
  v4 = operator new[](a2);
  *(_QWORD *)this = v4;
  memset_0(v4, 0, v2);
  return this;
}
