/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x1402354D0
 * Callers:
 *     RtlUnwind @ 0x140230F50 (RtlUnwind.c)
 *     RtlDispatchException @ 0x140231750 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     RtlGetExtendedContextLength @ 0x1403D4E90 (RtlGetExtendedContextLength.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     RtlRaiseException @ 0x1405E5EE0 (RtlRaiseException.c)
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     NtCreateThreadEx @ 0x1408F8F00 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x140920BE8 (PspInitializeThunkContext.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 *     PspWow64SetupCpuArea @ 0x1409E0800 (PspWow64SetupCpuArea.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409E0A10 (RtlWow64GetCpuAreaInfo.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength2 @ 0x1405E7DB0 (RtlpGetEntireXStateAreaLength2.c)
 *     RtlpValidateContextFlags2 @ 0x1405E7E08 (RtlpValidateContextFlags2.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  NTSTATUS result; // eax
  int v7; // eax
  ULONG v8; // edx
  int v9; // r11d
  int v10; // eax
  int v11; // esi
  ULONG64 v12; // rbx
  int EntireXStateAreaLength2; // eax
  int v14; // ecx
  int v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0;
  result = RtlpValidateContextFlags2(ContextFlags, &v15, 0xFFFFF780000003D8uLL);
  if ( result < 0 )
    return result;
  v7 = 0;
  v8 = ContextFlags & 0x100000;
  v9 = 0;
  if ( (ContextFlags & 0x10000) == 0 )
  {
    if ( v8 )
    {
      v7 = 1232;
    }
    else
    {
      if ( (ContextFlags & 0x200000) != 0 )
      {
        v7 = 416;
        v9 = 8;
        goto LABEL_11;
      }
      if ( (ContextFlags & 0x400000) == 0 )
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
      v12 = (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8]) & EnabledExtendedFeatures;
      if ( (ContextFlags & 0x10000) != 0 )
      {
        EnabledExtendedFeatures = v12 & 0x40000000000009FFLL;
      }
      else if ( v8 )
      {
        EnabledExtendedFeatures = v12 & 0x4000000000060DFFLL;
      }
      else if ( (ContextFlags & 0x400000) != 0 )
      {
        EnabledExtendedFeatures = v12 & 4;
      }
      else
      {
        EnabledExtendedFeatures = 0LL;
      }
    }
    EntireXStateAreaLength2 = RtlpGetEntireXStateAreaLength2(EnabledExtendedFeatures, 0xFFFFF780000003D8uLL);
    v10 = v11 - v9 - 448 + EntireXStateAreaLength2;
  }
  v14 = v10 + 32;
  if ( (v15 & 4) == 0 )
    v14 = v10;
  *ContextLength = v9 + v14 - 1;
  return 0;
}
