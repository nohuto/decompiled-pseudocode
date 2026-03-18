/*
 * XREFs of KeFlushSingleTb @ 0x1405B8C34
 * Callers:
 *     MiDbgCopyMemoryTarget @ 0x1406730E0 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1406738A0 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406739D0 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140673D68 (MiDbgUnTranslatePhysicalAddress.c)
 * Callees:
 *     HvlFlushRangeListTb @ 0x14032CB20 (HvlFlushRangeListTb.c)
 *     VmFlushTb @ 0x14032CFB0 (VmFlushTb.c)
 *     KiIsSecureFlushRequired @ 0x1403FA058 (KiIsSecureFlushRequired.c)
 *     ExFlushTb @ 0x1403FA11C (ExFlushTb.c)
 *     KiPreprocessFlushTb @ 0x140403650 (KiPreprocessFlushTb.c)
 *     KiPrepareFlushParameters @ 0x14043FAD0 (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14044CF34 (KiFlushAffinity.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxFlushSingleTb @ 0x1405C52F8 (KxFlushSingleTb.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406A0110 (KiSetUserTbFlushPending.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // si
  __int64 result; // rax
  __int64 v9; // r9
  volatile _KAFFINITY_EX *v10; // rax
  unsigned __int8 v11; // r9
  int v12; // r10d
  unsigned __int8 CurrentIrql; // bl
  char v14; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int8 v15[7]; // [rsp+41h] [rbp-3Fh] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-28h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h]

  v14 = 0;
  v15[0] = 0;
  v4 = 0;
  if ( KiPreprocessFlushTb(0, a2, a3, &v14, v15) )
  {
    if ( a2 - 1 <= 1 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
    {
      if ( (KiFlushPcid & 2) != 0 )
      {
        *(_QWORD *)&v19 = 1LL;
        *((_QWORD *)&v19 + 1) = a1;
        _EAX = 0;
        __asm { invpcid eax, [rbp+var_20] }
      }
      else
      {
        KiSetUserTbFlushPending();
      }
    }
    __invlpg((void *)a1);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15[0]);
    __writecr8(v15[0]);
    v4 = 1;
  }
  result = KiIsSecureFlushRequired(a1, a2, 0);
  LOBYTE(v9) = v14;
  if ( (_DWORD)result || v14 )
  {
    v17 = 0LL;
    v14 = 0;
    KiPrepareFlushParameters(a2, (unsigned __int64 *)&v17, &v14);
    v10 = KiFlushAffinity(a3);
    v18 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v17, (__int64)v10, v14, v12, v11, 1u, (__int64 *)&v18);
    v4 |= result;
  }
  if ( !v4 )
    result = KxFlushSingleTb(a1, a2, a3, v9);
  if ( VmTbFlushEnabled )
  {
    v16 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = (__int64)VmFlushTb(1LL, (__int64)&v16, a2);
  }
  if ( ExTbFlushActive )
  {
    v16 = a1 & 0xFFFFFFFFFFFFF000uLL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExFlushTb(1u, (__int64)&v16, a2);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
