/*
 * XREFs of KeFlushSingleCurrentTb @ 0x1405B9F1C
 * Callers:
 *     MiDbgReleaseAddress @ 0x1406802C0 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406803F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140680788 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x140680874 (MiDbgWriteCheck.c)
 * Callees:
 *     ExFlushTb @ 0x1402A1EA4 (ExFlushTb.c)
 *     VmFlushTb @ 0x1402A1F40 (VmFlushTb.c)
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     KiIsSecureFlushRequired @ 0x1403FC6BC (KiIsSecureFlushRequired.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1403FC724 (KiPrepareFlushCurrentAffinity.c)
 *     KiPrepareFlushParameters @ 0x1404356E0 (KiPrepareFlushParameters.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, int a2)
{
  unsigned int IsSecureFlushRequired; // eax
  unsigned int v5; // r15d
  unsigned __int8 v6; // bl
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  char v10[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+60h] [rbp-A0h]
  _BYTE v15[272]; // [rsp+70h] [rbp-90h] BYREF

  IsSecureFlushRequired = KiIsSecureFlushRequired(a1, a2, 0);
  v5 = IsSecureFlushRequired;
  v6 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !IsSecureFlushRequired && !v6 )
    goto LABEL_7;
  v12 = 0LL;
  memset_0(v15, 0, 0x108uLL);
  v10[0] = 0;
  KiPrepareFlushParameters(a2, (unsigned __int64 *)&v12, v10);
  KiPrepareFlushCurrentAffinity((__int64)v15);
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v13 = a1 & 0xFFFFFFFFFFFFF000uLL;
  result = HvlFlushRangeListTb(v12, (__int64)v15, v10[0], v5, v6, 1u, (__int64 *)&v13);
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
            *(_QWORD *)&v14 = 1LL;
            *((_QWORD *)&v14 + 1) = a1;
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
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( VmTbFlushEnabled )
  {
    v11 = v7;
    result = (__int64)VmFlushTb(1LL, (__int64)&v11, a2);
  }
  if ( ExTbFlushActive )
  {
    v11 = v7;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExFlushTb(1u, (__int64)&v11, a2);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
