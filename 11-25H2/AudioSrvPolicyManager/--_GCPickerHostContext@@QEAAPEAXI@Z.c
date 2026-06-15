/*
 * XREFs of ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x18003CABC
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000AB30 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003CBE4 (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPickerHostContext@@QEAA@XZ @ 0x18003CA44 (--1CPickerHostContext@@QEAA@XZ.c)
 */

__int64 **__fastcall CPickerHostContext::`scalar deleting destructor'(__int64 **this)
{
  CPickerHostContext::~CPickerHostContext(this);
  operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
