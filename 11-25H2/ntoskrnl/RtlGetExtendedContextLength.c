/*
 * XREFs of RtlGetExtendedContextLength @ 0x140261030
 * Callers:
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1402626C8 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KyRaiseException @ 0x140263BB0 (KyRaiseException.c)
 *     PspSetContextState @ 0x14076D62C (PspSetContextState.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspSetContextThreadInternal @ 0x1409095F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 *     PspGetSetContextInternal @ 0x1409A5700 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x140261E20 (RtlpGetEntireXStateAreaLength.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  char v4; // bp
  char v5; // r11
  NTSTATUS v6; // ebx
  bool v7; // cl
  __int64 v9; // r10
  bool v10; // cl
  int v11; // ecx
  int v12; // esi
  ULONG v13; // edx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // r10

  if ( (ContextFlags & 0x27FFFF80) == 0x10000
    || (ContextFlags & 0x7FFFF20) == 0x100000
    || (ContextFlags & 0x200000) != 0 && (ContextFlags & 0x7DFFFF0) == 0
    || (ContextFlags & 0x7FFFFC0) == 0x400000 )
  {
    v4 = 1;
    v5 = 1;
    v6 = 0;
    v7 = 0;
    if ( (ContextFlags & 0x400020) != 0x400020 )
      v7 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
    if ( !v7 )
    {
      if ( !MEMORY[0xFFFFF780000003D8] )
        return -1073741637;
      v5 = 3;
    }
    if ( !(_BYTE)KiKernelCetEnabled && (ContextFlags & 0x100080) == 0x100080 )
      return -1073741637;
    v9 = 0LL;
    if ( (v5 & 2) != 0 )
      v9 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    if ( (ContextFlags & 0x27FFFF80) != 0x10000
      && (ContextFlags & 0x7FFFF20) != 0x100000
      && ((ContextFlags & 0x200000) == 0 || (ContextFlags & 0x7DFFFF0) != 0)
      && (ContextFlags & 0x7FFFFC0) != 0x400000 )
    {
      return -1073741811;
    }
    v10 = 0;
    if ( (ContextFlags & 0x400020) != 0x400020 )
      v10 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
    if ( !v10 )
    {
      if ( !MEMORY[0xFFFFF780000003D8] )
        return -1073741637;
      v4 = 3;
    }
    if ( (ContextFlags & 0x100080) != 0x100080 )
      goto LABEL_24;
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v4 |= 4u;
LABEL_24:
      v11 = 0;
      v12 = 0;
      v13 = ContextFlags & 0x10000;
      if ( (ContextFlags & 0x10000) != 0 )
      {
        v11 = 716;
        v12 = 4;
      }
      else
      {
        if ( (ContextFlags & 0x100000) != 0 )
        {
          v11 = 1232;
        }
        else
        {
          if ( (ContextFlags & 0x200000) != 0 )
          {
            v11 = 416;
            v12 = 8;
            goto LABEL_28;
          }
          if ( (ContextFlags & 0x400000) == 0 )
            goto LABEL_28;
          v11 = 912;
          v13 = ContextFlags & 0x10000;
        }
        v12 = 16;
      }
LABEL_28:
      v14 = v11 + 32;
      if ( (v4 & 2) != 0 )
      {
        if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        {
          v16 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v9;
          if ( v13 )
          {
            v9 = v16 & 0x40000000000009FFLL;
          }
          else if ( (ContextFlags & 0x100000) != 0 )
          {
            v9 = v16 & 0x4000000000060DFFLL;
          }
          else if ( (ContextFlags & 0x400000) != 0 )
          {
            v9 = v16 & 4;
          }
          else
          {
            v9 = 0LL;
          }
        }
        v14 = RtlpGetEntireXStateAreaLength(v9) + (-v12 & (v14 + v12 - 1)) - v12 - 448;
      }
      v15 = v14 + 32;
      if ( (v4 & 4) == 0 )
        v15 = v14;
      *ContextLength = v12 - 1 + v15;
      return v6;
    }
    return -1073741637;
  }
  return -1073741811;
}
