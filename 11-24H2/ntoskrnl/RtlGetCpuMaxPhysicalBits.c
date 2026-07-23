/*
 * XREFs of RtlGetCpuMaxPhysicalBits @ 0x140B629AC
 * Callers:
 *     SpcDetectKvaLeakage @ 0x140B659A8 (SpcDetectKvaLeakage.c)
 * Callees:
 *     HviGetImplementedPhysicalBits @ 0x1406624C0 (HviGetImplementedPhysicalBits.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlGetProcessorSignature @ 0x140B62B5C (RtlGetProcessorSignature.c)
 */

__int64 RtlGetCpuMaxPhysicalBits()
{
  int ProcessorSignature; // ebx
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ecx
  _BYTE v16[4]; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v17[5]; // [rsp+24h] [rbp-1Ch] BYREF

  v17[0] = 0;
  v16[0] = 0;
  ProcessorSignature = RtlGetProcessorSignature(v16, 0LL, 0LL, 0LL);
  if ( HviGetImplementedPhysicalBits((int *)v17) )
  {
    return v17[0];
  }
  else
  {
    LODWORD(v1) = 0;
    v2 = 0LL;
    v3 = 0LL;
    v4 = 46;
    while ( *(_DWORD *)((char *)KiCpuTable + v3) != v16[0]
         || *(_DWORD *)((char *)KiCpuTable + v3 + 4) != ProcessorSignature )
    {
      v1 = (unsigned int)(v1 + 1);
      v2 = (unsigned int)v1;
      v3 = 20 * v1;
      if ( *((_DWORD *)&KiCpuTable[1] + 5 * v1) == 19 )
        return v4;
    }
    v4 = *((_DWORD *)&KiCpuTable[1] + 5 * v2 + 1);
    if ( !v4 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX < 0x80000008 )
      {
        LOBYTE(_RAX) = 36;
      }
      else
      {
        _RAX = 2147483656LL;
        __asm { cpuid }
      }
      return (unsigned __int8)_RAX;
    }
  }
  return v4;
}
