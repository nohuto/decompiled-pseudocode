/*
 * XREFs of KeFlushSingleTb @ 0x1405BA104
 * Callers:
 *     MiDbgCopyMemoryTarget @ 0x14067FB00 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1406802C0 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406803F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140680788 (MiDbgUnTranslatePhysicalAddress.c)
 * Callees:
 *     ExFlushTb @ 0x1402A1EA4 (ExFlushTb.c)
 *     VmFlushTb @ 0x1402A1F40 (VmFlushTb.c)
 *     KiPreprocessFlushTb @ 0x14039D3D0 (KiPreprocessFlushTb.c)
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     KiIsSecureFlushRequired @ 0x1403FC6BC (KiIsSecureFlushRequired.c)
 *     KiPrepareFlushParameters @ 0x1404356E0 (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14044321C (KiFlushAffinity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KxFlushSingleTb @ 0x1405C7048 (KxFlushSingleTb.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // si
  __int64 result; // rax
  __int64 v9; // r9
  volatile _KAFFINITY_EX *v10; // rax
  unsigned __int8 v11; // r9
  unsigned int v12; // r10d
  unsigned __int8 CurrentIrql; // bl
  char v14; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int8 v15[7]; // [rsp+41h] [rbp-3Fh] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h] BYREF
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
    v18 = 0LL;
    v14 = 0;
    KiPrepareFlushParameters(a2, (unsigned __int64 *)&v18, &v14);
    v16 = a1;
    v10 = KiFlushAffinity(a3);
    v16 &= 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v18, (__int64)v10, v14, v12, v11, 1u, (__int64 *)&v16);
    v4 |= result;
  }
  if ( !v4 )
    result = KxFlushSingleTb(a1, a2, a3, v9);
  if ( VmTbFlushEnabled )
  {
    v17 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = (__int64)VmFlushTb(1LL, (__int64)&v17, a2);
  }
  if ( ExTbFlushActive )
  {
    v17 = a1 & 0xFFFFFFFFFFFFF000uLL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExFlushTb(1u, (__int64)&v17, a2);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
