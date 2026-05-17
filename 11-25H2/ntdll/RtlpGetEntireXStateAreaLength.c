/*
 * XREFs of RtlpGetEntireXStateAreaLength @ 0x180075A00
 * Callers:
 *     RtlGetExtendedContextLength @ 0x180074950 (RtlGetExtendedContextLength.c)
 *     RtlUnwind @ 0x180075300 (RtlUnwind.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1800754D0 (RtlWow64GetCpuAreaInfo.c)
 *     RtlWow64GetCurrentCpuArea @ 0x180075780 (RtlWow64GetCurrentCpuArea.c)
 *     RtlInitializeExtendedContext2 @ 0x1800768C0 (RtlInitializeExtendedContext2.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180077FE0 (RtlpWalkFrameChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetEntireXStateAreaLength(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r11d
  unsigned int i; // r9d
  __int64 v4; // rax

  if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
    return MEMORY[0x7FFE03E8];
  v1 = 4LL;
  v2 = 576;
  for ( i = 2; i < 0x40; i += 2 )
  {
    if ( (v1 & a1) != 0 )
    {
      if ( (v1 & MEMORY[0x7FFE05F8]) != 0 )
        v2 = (v2 + 63) & 0xFFFFFFC0;
      v2 += *(_DWORD *)(4LL * i + 0x7FFE0604);
    }
    v4 = __ROL8__(v1, 1);
    if ( (v4 & a1) != 0 )
    {
      if ( (v4 & MEMORY[0x7FFE05F8]) != 0 )
        v2 = (v2 + 63) & 0xFFFFFFC0;
      v2 += *(_DWORD *)(4LL * (i + 1) + 0x7FFE0604);
    }
    v1 = __ROL8__(v1, 2);
  }
  return v2;
}
