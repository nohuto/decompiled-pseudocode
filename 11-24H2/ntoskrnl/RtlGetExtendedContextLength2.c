/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x14027FF40
 * Callers:
 *     RtlUnwind @ 0x14027B9C0 (RtlUnwind.c)
 *     RtlDispatchException @ 0x14027C1C0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14027CD20 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x14027E270 (RtlpWalkFrameChain.c)
 *     RtlGetExtendedContextLength @ 0x1403E72F0 (RtlGetExtendedContextLength.c)
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     RtlRaiseException @ 0x1405E88F0 (RtlRaiseException.c)
 *     NtCreateThreadEx @ 0x1408A2B60 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x1408FE308 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 *     PspWow64SetupCpuArea @ 0x1409E5F70 (PspWow64SetupCpuArea.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409E6180 (RtlWow64GetCpuAreaInfo.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength2 @ 0x1405EA860 (RtlpGetEntireXStateAreaLength2.c)
 *     RtlpValidateContextFlags2 @ 0x1405EA8B8 (RtlpValidateContextFlags2.c)
 */

__int64 __fastcall RtlGetExtendedContextLength2(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v5; // edi
  __int64 result; // rax
  int v7; // eax
  int v8; // edx
  int v9; // r11d
  int v10; // eax
  int v11; // esi
  __int64 v12; // rbx
  int EntireXStateAreaLength2; // eax
  int v14; // ecx
  int v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0;
  v5 = a1;
  result = RtlpValidateContextFlags2(a1, &v15, 0xFFFFF780000003D8uLL);
  if ( (int)result < 0 )
    return result;
  v7 = 0;
  v8 = v5 & 0x100000;
  v9 = 0;
  if ( (v5 & 0x10000) == 0 )
  {
    if ( v8 )
    {
      v7 = 1232;
    }
    else
    {
      if ( (v5 & 0x200000) != 0 )
      {
        v7 = 416;
        v9 = 8;
        goto LABEL_11;
      }
      if ( (v5 & 0x400000) == 0 )
        goto LABEL_11;
      v7 = 912;
    }
    v9 = 16;
    goto LABEL_11;
  }
  v7 = 716;
  v9 = 4;
LABEL_11:
  v10 = v7 + 32;
  if ( (v15 & 2) != 0 )
  {
    v11 = -v9 & (v9 + v10 - 1);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v12 = (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8]) & a3;
      if ( (v5 & 0x10000) != 0 )
      {
        a3 = v12 & 0x40000000000009FFLL;
      }
      else if ( v8 )
      {
        a3 = v12 & 0x4000000000060DFFLL;
      }
      else if ( (v5 & 0x400000) != 0 )
      {
        a3 = v12 & 4;
      }
      else
      {
        a3 = 0LL;
      }
    }
    EntireXStateAreaLength2 = RtlpGetEntireXStateAreaLength2(a3, 0xFFFFF780000003D8uLL);
    v10 = v11 - v9 - 448 + EntireXStateAreaLength2;
  }
  v14 = v10 + 32;
  if ( (v15 & 4) == 0 )
    v14 = v10;
  *a2 = v9 + v14 - 1;
  return 0LL;
}
