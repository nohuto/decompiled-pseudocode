/*
 * XREFs of ?HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x18007CB84
 * Callers:
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18007CAC8 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180246068 (-RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18007CC04 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

bool __fastcall UndockedSearchAppExperienceManager::HasRegisterViewCoordinatorEvents(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  bool v3; // bl
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 37;
  AcquireSRWLockShared(this + 37);
  v5 = 0LL;
  v3 = (unsigned __int8)winrt::Windows::Foundation::operator!=(&this[38], &v5) && (this[39].Ptr || this[40].Ptr);
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
