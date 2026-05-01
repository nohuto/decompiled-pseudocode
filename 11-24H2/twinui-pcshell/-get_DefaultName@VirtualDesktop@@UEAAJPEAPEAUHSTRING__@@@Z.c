/*
 * XREFs of ?get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802AFDD0
 * Callers:
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180164F10 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetDefaultVirtualDesktopName @ 0x1801E538C (_anonymous_namespace_--GetDefaultVirtualDesktopName.c)
 */

__int64 __fastcall VirtualDesktop::get_DefaultName(RTL_SRWLOCK *this, HSTRING *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 Ptr; // rbx
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 35;
  AcquireSRWLockShared(this + 35);
  Ptr = (__int64)this[18].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  anonymous_namespace_::GetDefaultVirtualDesktopName(&string, Ptr);
  *a2 = string;
  return 0LL;
}
