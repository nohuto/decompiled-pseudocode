/*
 * XREFs of ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C016E0C8
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C00C5B60 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     ?CreateCommon@CLeakTrackingAllocator@NSInstrumentation@@CAPEAV12@PEAX_N@Z @ 0x1C00C2BB0 (-CreateCommon@CLeakTrackingAllocator@NSInstrumentation@@CAPEAV12@PEAX_N@Z.c)
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00C5850 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C016EFEC (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 */

struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::CreateGeneralTrackingAllocator(
        void *a1)
{
  NSInstrumentation::CLeakTrackingAllocator::CreateCommon(a1);
  dword_1C0293E90 = 1;
  qword_1C0293E98 = (__int64)NSInstrumentation::CPointerHashTable::Create(0);
  if ( qword_1C0293E98 )
    return (struct NSInstrumentation::CLeakTrackingAllocator *)&dword_1C0293E90;
  NSInstrumentation::CLeakTrackingAllocator::Destroy((struct NSInstrumentation::CLeakTrackingAllocator *)&dword_1C0293E90);
  return 0LL;
}
