/*
 * XREFs of ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z @ 0x1401CFD88
 * Callers:
 *     Win32AllocPoolWithPriority @ 0x1401BEBA0 (Win32AllocPoolWithPriority.c)
 *     ?AllocatePoolWithPriority@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IW4_EX_POOL_PRIORITY@@PEAI@Z @ 0x1401BF37C (-AllocatePoolWithPriority@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___ @ 0x1401CF6D8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_0557cbb2832d1680ca92e9237d4136.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(
        NSInstrumentation::CLeakTrackingAllocator *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        enum _EX_POOL_PRIORITY a5)
{
  __m128i v6; // [rsp+20h] [rbp-28h] BYREF
  enum _EX_POOL_PRIORITY *v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a2;
  v6.m128i_i64[0] = (__int64)&v8;
  v6.m128i_i64[1] = (__int64)&v9;
  v7 = &a5;
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___(
           this,
           a3,
           a4,
           &v6);
}
