/*
 * XREFs of NtUserDefSetText @ 0x1401E9520
 * Callers:
 *     <none>
 * Callees:
 *     DefSetText @ 0x140073730 (DefSetText.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserDefSetText(__int64 a1, __m128i *a2)
{
  __int64 v4; // rcx
  ULONG64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned __int64 v9; // xmm0_8
  ULONG64 v10; // rdx
  ULONG64 v11; // rdx
  __m128i v12; // [rsp+38h] [rbp-20h] BYREF

  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateReceivingHwnd(a1, 1LL);
  v7 = 0;
  if ( v6 )
  {
    if ( a2 )
    {
      v5 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (__m128i *)MmUserProbeAddress;
      v12 = *a2;
      v9 = _mm_srli_si128(v12, 8).m128i_u64[0];
      if ( v9 )
      {
        if ( v12.m128i_i32[0] > (v12.m128i_i32[1] & 0x7FFFFFFFu) )
          ExRaiseAccessViolation();
        if ( v12.m128i_i32[1] < 0 )
        {
          v11 = v9 + v12.m128i_u32[0] + 1LL;
          if ( v11 < v9 || v11 > MmUserProbeAddress )
            ExRaiseAccessViolation();
        }
        else
        {
          if ( (v9 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = v9 + v12.m128i_u32[0] + 2LL;
          if ( v10 < v9 || v10 > MmUserProbeAddress )
            ExRaiseAccessViolation();
        }
      }
      else
      {
        v12.m128i_i32[0] = 0;
      }
      a2 = &v12;
    }
    v7 = DefSetText(v6, (unsigned int *)a2, v5, v6);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v7;
}
