/*
 * XREFs of RtlpInitFunctionOverrideCapabilities @ 0x14078D5E8
 * Callers:
 *     RtlInitFunctionOverrideCapabilities @ 0x140787CF4 (RtlInitFunctionOverrideCapabilities.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     HviGetEnlightenmentInformation @ 0x14066234C (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpSetFunctionOverrideCapability @ 0x140787D38 (RtlpSetFunctionOverrideCapability.c)
 *     RtlpSetUserKernelFunctionOverrideCapability @ 0x140787D78 (RtlpSetUserKernelFunctionOverrideCapability.c)
 *     RtlGetProcessorSignature @ 0x140B62B5C (RtlGetProcessorSignature.c)
 */

char __fastcall RtlpInitFunctionOverrideCapabilities(__int64 a1)
{
  __int64 *v2; // r14
  unsigned int v8; // edi
  int v14; // r11d
  unsigned int v15; // r13d
  unsigned int v16; // r15d
  __int64 v17; // r12
  __int128 v18; // xmm0
  char v24; // bl
  unsigned int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  _BYTE v38[4]; // [rsp+20h] [rbp-40h] BYREF
  unsigned int ProcessorSignature; // [rsp+24h] [rbp-3Ch]
  __int128 v40; // [rsp+28h] [rbp-38h] BYREF
  __int128 v41; // [rsp+38h] [rbp-28h] BYREF
  __int128 v42; // [rsp+48h] [rbp-18h]

  v38[0] = 0;
  v40 = 0LL;
  ProcessorSignature = RtlGetProcessorSignature(v38, 0LL, 0LL, 0LL);
  v2 = RtlpCpuFeatureTable;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v8 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v14 = 0;
  *(_QWORD *)&v40 = __PAIR64__(_RBX, _RAX);
  v15 = _RAX;
  *((_QWORD *)&v40 + 1) = __PAIR64__(_RDX, _RCX);
  v16 = 10;
  v17 = 10LL;
  do
  {
    v18 = *((_OWORD *)v2 + 1);
    v41 = *(_OWORD *)v2;
    v42 = v18;
    if ( (_DWORD)v41 != v14 )
    {
      v14 = v41;
      if ( ((unsigned int)v41 < 0x80000000 || (unsigned int)v41 > v8) && (unsigned int)v41 > v15 )
      {
        v40 = 0LL;
      }
      else
      {
        _RAX = (unsigned int)v41;
        __asm { cpuid }
        *(_QWORD *)&v40 = __PAIR64__(_RBX, _RAX);
        *((_QWORD *)&v40 + 1) = __PAIR64__(_RDX, _RCX);
      }
    }
    if ( ((unsigned int)v42 & *((_DWORD *)&v40 + SDWORD1(v42))) != 0
      && (*((_QWORD *)&v41 + 1) & MEMORY[0xFFFFF780000003D8]) == *((_QWORD *)&v41 + 1) )
    {
      v24 = BYTE8(v42);
      if ( (BYTE8(v42) & 1) != 0 )
        RtlpSetFunctionOverrideCapability(HIDWORD(v42), a1, 0);
      if ( (v24 & 2) != 0 )
        RtlpSetFunctionOverrideCapability(HIDWORD(v42), a1, 1);
    }
    v2 += 4;
    --v17;
  }
  while ( v17 );
  v25 = ProcessorSignature;
  switch ( v38[0] )
  {
    case 0:
      break;
    case 1:
      v16 = 9;
      goto LABEL_22;
    case 2:
      v16 = 8;
LABEL_22:
      RtlpSetUserKernelFunctionOverrideCapability(v16, a1);
      RtlpSetUserKernelFunctionOverrideCapability(7u, v26);
      break;
    case 3:
      goto LABEL_22;
  }
  RtlpSetUserKernelFunctionOverrideCapability(((unsigned __int8)v25 >> 4) + 11, a1);
  RtlpSetUserKernelFunctionOverrideCapability((HIWORD(v25) & 0xF) + 27, v27);
  RtlpSetUserKernelFunctionOverrideCapability(((v25 >> 8) & 0xF) + 43, v28);
  RtlpSetUserKernelFunctionOverrideCapability((unsigned __int8)(v25 >> 20) + 59, v29);
  RtlpSetFunctionOverrideCapability(5u, v30, 0);
  RtlpSetFunctionOverrideCapability(6u, v31, 1);
  RtlpSetFunctionOverrideCapability(0x141u, v32, 0);
  RtlpSetUserKernelFunctionOverrideCapability(0x142u, v33);
  RtlpSetFunctionOverrideCapability(0x146u, v34, 1);
  if ( !HviIsAnyHypervisorPresent()
    || (v41 = 0LL, v40 = 0LL, HviGetHypervisorFeatures(&v40), (v40 & 0x100000000000LL) != 0)
    && (HviGetEnlightenmentInformation(&v41), (v41 & 0x1000) == 0) )
  {
    RtlpSetUserKernelFunctionOverrideCapability(0x147u, a1);
  }
  RtlpSetUserKernelFunctionOverrideCapability(0x13Bu, a1);
  RtlpSetUserKernelFunctionOverrideCapability(0x13Fu, v35);
  return RtlpSetUserKernelFunctionOverrideCapability(0x140u, v36);
}
