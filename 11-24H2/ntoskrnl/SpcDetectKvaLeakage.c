/*
 * XREFs of SpcDetectKvaLeakage @ 0x140B659A8
 * Callers:
 *     KiDetectKvaLeakage @ 0x1405C0D00 (KiDetectKvaLeakage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     SpcIsFbClearSupported @ 0x1406A1B44 (SpcIsFbClearSupported.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406A1B6C (SpcIsHyperVCr3RspErrataPresent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlGetCpuMaxPhysicalBits @ 0x140B629AC (RtlGetCpuMaxPhysicalBits.c)
 *     RtlGetProcessorSignature @ 0x140B62B5C (RtlGetProcessorSignature.c)
 */

unsigned __int64 __fastcall SpcDetectKvaLeakage(ULONG_PTR BugCheckParameter2, int a2)
{
  char v2; // di
  ULONG_PTR v3; // rsi
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  char v14; // dl
  char v15; // dl
  char v16[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-2Ch] BYREF
  int v18; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+40h] [rbp-20h]

  v18 = 0;
  v17 = 0;
  v2 = a2;
  v3 = (unsigned int)BugCheckParameter2;
  v19 = a2;
  v16[0] = 0;
  result = RtlGetProcessorSignature(v16, &v18, (int *)&v17, 0LL);
  if ( v16[0] == 2 )
  {
    if ( v18 == 6 && v17 <= 0x36 )
    {
      result = v17;
      v5 = 0x6000C010000000LL;
      if ( _bittest64(&v5, v17) )
        goto LABEL_15;
    }
  }
  else if ( v16[0] != 3 || v18 == 6 && v17 == 13 )
  {
    goto LABEL_15;
  }
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)result < 7 )
    goto LABEL_33;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x20000000) == 0 || (result = __readmsr(0x10Au), (result & 1) == 0) )
  {
LABEL_33:
    if ( !(_DWORD)v3 )
    {
LABEL_25:
      if ( !SpcKvaLeakage )
        SpcKvaLeakage = 2;
      goto LABEL_27;
    }
LABEL_34:
    if ( !SpcKvaLeakage )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
    goto LABEL_27;
  }
  KiMicrocodeTrackerEnabled = 1;
  result = 3670016LL;
  v14 = (KeFeatureBits2 & 0x28) == 8;
  if ( (KeFeatureBits2 & 0x380000) != 0x380000 )
  {
    result = SpcIsFbClearSupported();
    v14 = result | v15;
  }
  if ( v14 )
  {
    if ( !(_DWORD)v3 )
    {
      SpcKvaLeakage = 1;
      goto LABEL_25;
    }
    goto LABEL_34;
  }
LABEL_15:
  if ( v2 )
  {
    SpcKvaLeakage = 1;
  }
  else if ( (_DWORD)v3 || (result = SpcIsHyperVCr3RspErrataPresent(), (_DWORD)result) || !*(_WORD *)((char *)&v19 + 1) )
  {
    if ( !SpcKvaLeakageSimulated )
      return result;
  }
  else
  {
    SpcKvaLeakageSimulated = 1;
  }
LABEL_27:
  if ( v16[0] != 2 || (KeFeatureBits2 & 0x10) != 0 )
  {
    if ( !(_DWORD)v3 )
      SpcImplementedPhysicalBits = -1;
  }
  else
  {
    result = RtlGetCpuMaxPhysicalBits();
    if ( (_DWORD)v3 )
    {
      if ( (_DWORD)result != SpcImplementedPhysicalBits && !SpcKvaLeakageSimulated )
        KeBugCheckEx(0x5Du, 0x4C315446uLL, v3, (int)result, SpcImplementedPhysicalBits);
    }
    else
    {
      SpcImplementedPhysicalBits = result;
    }
  }
  return result;
}
