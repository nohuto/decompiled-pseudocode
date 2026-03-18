/*
 * XREFs of NtUserDefSetText @ 0x1C01CDB60
 * Callers:
 *     <none>
 * Callees:
 *     DefSetText @ 0x1C00703F0 (DefSetText.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserDefSetText(__int64 a1, __m128i *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  ULONG64 v10; // rdx
  ULONG64 v11; // rdx
  __m128i v13; // [rsp+38h] [rbp-20h] BYREF

  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (__m128i *)MmUserProbeAddress;
      v13 = *a2;
      v9 = _mm_srli_si128(v13, 8).m128i_u64[0];
      if ( v9 )
      {
        if ( v13.m128i_i32[0] > (v13.m128i_i32[1] & 0x7FFFFFFFu) )
          ExRaiseAccessViolation();
        if ( v13.m128i_i32[1] >= 0 )
        {
          if ( (v13.m128i_i8[8] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v11 = v9 + v13.m128i_u32[0] + 2LL;
          if ( v11 < v9 || v11 > MmUserProbeAddress )
            ExRaiseAccessViolation();
        }
        else
        {
          v10 = v9 + v13.m128i_u32[0] + 1LL;
          if ( v10 < v9 || v10 > MmUserProbeAddress )
            ExRaiseAccessViolation();
        }
      }
      else
      {
        v13.m128i_i32[0] = 0;
      }
      a2 = &v13;
    }
    v8 = DefSetText(v7, (unsigned int *)a2);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
