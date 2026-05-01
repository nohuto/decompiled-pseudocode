/*
 * XREFs of ?HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z @ 0x180351358
 * Callers:
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18035559C (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180351968 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingOverlayExperienceManager::HandleButtonEvent(RTL_SRWLOCK *this, char a2, char a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int Ptr_high; // eax
  char v11; // [rsp+20h] [rbp-38h]
  __int128 v12; // [rsp+28h] [rbp-30h]
  RTL_SRWLOCK *v13; // [rsp+38h] [rbp-20h] BYREF

  v13 = 0LL;
  wil::AcquireSRWLockExclusive(&v13, this + 28);
  Ptr_high = HIDWORD(this[41].Ptr);
  if ( Ptr_high )
  {
    if ( Ptr_high == 2 )
    {
      LOBYTE(v9) = a2;
    }
    else
    {
      if ( Ptr_high != 1 )
        goto LABEL_12;
      LOBYTE(v9) = a3;
    }
    LOBYTE(v8) = v11;
    GamingOverlayExperienceManager::HandleTrackedButtonChange(this, v8, v9, a4);
    goto LABEL_12;
  }
  if ( a2 )
  {
    HIDWORD(this[41].Ptr) = 2;
LABEL_6:
    *(_QWORD *)&v12 = a4;
    BYTE8(v12) = 1;
    *(_OWORD *)&this[42].Ptr = v12;
    goto LABEL_12;
  }
  if ( a3 )
  {
    HIDWORD(this[41].Ptr) = 1;
    goto LABEL_6;
  }
LABEL_12:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
}
