/*
 * XREFs of KeFlushSingleCurrentTb @ 0x1405BC8EC
 * Callers:
 *     MiDbgReleaseAddress @ 0x14067F0C0 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14067F1F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x14067F588 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x14067F674 (MiDbgWriteCheck.c)
 * Callees:
 *     ExFlushTb @ 0x1402922A4 (ExFlushTb.c)
 *     VmFlushTb @ 0x140292340 (VmFlushTb.c)
 *     HvlFlushRangeListTb @ 0x1403AEEF0 (HvlFlushRangeListTb.c)
 *     KiIsSecureFlushRequired @ 0x14040213C (KiIsSecureFlushRequired.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1404021A4 (KiPrepareFlushCurrentAffinity.c)
 *     KiPrepareFlushParameters @ 0x14043F5B0 (KiPrepareFlushParameters.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AB3E0 (KiSetUserTbFlushPending.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, int a2)
{
  unsigned int IsSecureFlushRequired; // eax
  __int64 v5; // r9
  unsigned int v6; // r15d
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  char v11[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+60h] [rbp-A0h]
  _BYTE v16[272]; // [rsp+70h] [rbp-90h] BYREF

  IsSecureFlushRequired = KiIsSecureFlushRequired(a1, a2, 0);
  v6 = IsSecureFlushRequired;
  v7 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !IsSecureFlushRequired && !v7 )
    goto LABEL_7;
  v13 = 0LL;
  memset_0(v16, 0, 0x108uLL);
  v11[0] = 0;
  KiPrepareFlushParameters(a2, (unsigned __int64 *)&v13, v11);
  KiPrepareFlushCurrentAffinity((__int64)v16);
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v14 = a1 & 0xFFFFFFFFFFFFF000uLL;
  result = HvlFlushRangeListTb(v13, (__int64)v16, v11[0], v6, v7, 1u, (__int64 *)&v14);
  if ( !(_BYTE)result )
  {
LABEL_7:
    result = (unsigned int)(a2 - 1);
    if ( (unsigned int)result <= 1 )
    {
      if ( KiFlushPcid )
      {
        result = (__int64)KeGetCurrentThread();
        if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 352LL) )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v15 = 1LL;
            *((_QWORD *)&v15 + 1) = a1;
            result = 0LL;
            __asm { invpcid eax, [rsp+1B0h+var_150] }
          }
          else
          {
            result = KiSetUserTbFlushPending();
          }
        }
      }
    }
    __invlpg((void *)a1);
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( VmTbFlushEnabled )
  {
    v12 = v8;
    result = (__int64)VmFlushTb(1LL, (__int64)&v12, a2);
  }
  if ( ExTbFlushActive )
  {
    v12 = v8;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExFlushTb(1u, (__int64)&v12, a2, v5);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
