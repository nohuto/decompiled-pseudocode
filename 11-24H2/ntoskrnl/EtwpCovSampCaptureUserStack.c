/*
 * XREFs of EtwpCovSampCaptureUserStack @ 0x140923160
 * Callers:
 *     EtwpCovSampCaptureUserAddresses @ 0x140922CA4 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     EtwpCovSampCaptureBufferOptimizeIP @ 0x14044D044 (EtwpCovSampCaptureBufferOptimizeIP.c)
 */

__int64 __fastcall EtwpCovSampCaptureUserStack(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v4; // rcx
  int v5; // eax
  ULONG v6; // eax

  v1 = 0;
  if ( KeGetCurrentThread()->ApcState.Process[3].Padding[5] )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v4 = *(unsigned __int16 *)(a1 + 62);
    v5 = *(unsigned __int16 *)(a1 + 60);
    if ( (unsigned __int16)v5 < (unsigned __int16)v4 )
    {
      return (unsigned int)-1073741595;
    }
    else
    {
      v6 = RtlWalkFrameChain((PVOID *)(a1 + 8 * (v4 + 8)), v5 - v4, 1u);
      if ( v6 )
      {
        *(_WORD *)(a1 + 62) += v6;
        *(_DWORD *)(a1 + 56) |= 2u;
        EtwpCovSampCaptureBufferOptimizeIP(a1);
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
  }
  return v1;
}
