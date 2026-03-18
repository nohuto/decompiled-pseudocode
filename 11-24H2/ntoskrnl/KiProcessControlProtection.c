/*
 * XREFs of KiProcessControlProtection @ 0x14043E670
 * Callers:
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 * Callees:
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x14043E9F0 (KiLogControlProtectionUserModeReturnMismatch.c)
 *     KiProcessControlProtectionFromKernelMode @ 0x14043EA4C (KiProcessControlProtectionFromKernelMode.c)
 *     KiFixupControlProtectionUserModeReturnMismatch @ 0x1404834E8 (KiFixupControlProtectionUserModeReturnMismatch.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KiCheckUserAddressCetCompat @ 0x140837728 (KiCheckUserAddressCetCompat.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiProcessControlProtection(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // r15d
  volatile signed __int32 *UserCetLogging; // r13
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r8

  if ( *(_WORD *)(a1 + 368) == 16 )
    return KiProcessControlProtectionFromKernelMode();
  v2 = *(_QWORD *)(a1 + 360);
  v3 = 2;
  UserCetLogging = (volatile signed __int32 *)KeGetCurrentThread()->ApcState.Process->UserCetLogging;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v6 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v6, 1LL);
  }
  if ( *(_WORD *)(a1 + 368) == 51 && *(_QWORD *)(a1 + 352) == 1LL )
  {
    v7 = __readmsr(0x6A7u);
    if ( (v7 & 7) == 0 )
    {
      v8 = *(__int64 **)(a1 + 384);
      if ( ((unsigned __int8)v8 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = *v8;
      if ( (unsigned __int64)(v9 - 0x10000) <= 0x7FFFFFFDFFFFLL && (unsigned __int64)(v2 - 0x10000) <= 0x7FFFFFFDFFFFLL )
      {
        if ( v9 == qword_140FC64C0 )
        {
          *v8 = *(_QWORD *)v7;
          v3 = 3;
          _InterlockedIncrement(UserCetLogging + 21);
        }
        else
        {
          while ( 1 )
          {
            v7 += 8LL;
            if ( *(_QWORD *)v7 < 0x10000uLL )
              break;
            if ( *(_QWORD *)v7 == v9 )
            {
              __writemsr(0x6A7u, v7);
              v3 = 1;
              _InterlockedIncrement(UserCetLogging + 20);
              break;
            }
            if ( (v7 & 0xFFF) == 0 )
            {
              if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
                break;
              v9 = *v8;
            }
          }
        }
      }
    }
  }
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
    __writecr8(0LL);
  }
  return v3;
}
