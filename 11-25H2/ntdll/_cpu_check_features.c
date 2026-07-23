/*
 * XREFs of _cpu_check_features @ 0x1800023C0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x180002C10 (RtlIsProcessorFeaturePresent.c)
 */

__int64 cpu_check_features()
{
  int v0; // edi
  __int64 result; // rax

  v0 = 1;
  _RAX = 1LL;
  __asm { cpuid }
  x86_cpu_enable_ssse3 = _RCX & 0x200;
  if ( (_RDX & 0x4000000) == 0 || (_RCX & 0x100000) == 0 || (_RCX & 2) == 0 )
    v0 = 0;
  x86_cpu_enable_simd = v0;
  result = RtlIsProcessorFeaturePresent(0x29u);
  x86_cpu_enable_avx512 = result;
  if ( (_BYTE)result && v0 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RCX & 0x400) == 0 )
      x86_cpu_enable_avx512 = 0;
  }
  return result;
}
