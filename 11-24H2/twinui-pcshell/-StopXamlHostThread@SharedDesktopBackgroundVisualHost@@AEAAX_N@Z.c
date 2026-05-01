/*
 * XREFs of ?StopXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAAX_N@Z @ 0x18060DA48
 * Callers:
 *     ?Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x18060AB18 (-Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800634D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall SharedDesktopBackgroundVisualHost::StopXamlHostThread(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v2; // r14
  char v5; // di
  PVOID Ptr; // r15
  RTL_SRWLOCK *v7; // [rsp+60h] [rbp+8h] BYREF
  DWORD dwindex; // [rsp+68h] [rbp+10h] BYREF
  HANDLE pHandles; // [rsp+70h] [rbp+18h] BYREF

  v2 = this + 22;
  wil::AcquireSRWLockExclusive(&v7, this + 22);
  if ( (unsigned int)(LODWORD(this[23].Ptr) - 1) <= 1 )
  {
    v5 = 1;
    LODWORD(this[23].Ptr) = 3;
  }
  else
  {
    v5 = 0;
  }
  Ptr = this[29].Ptr;
  pHandles = this[31].Ptr;
  if ( a2 )
    BYTE2(this[26].Ptr) = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  if ( v5 )
  {
    SetEvent(Ptr);
    dwindex = 0;
    CoWaitForMultipleHandles(0x1Au, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
    wil::AcquireSRWLockExclusive(&v7, v2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &this[31].Ptr,
      0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  }
}
