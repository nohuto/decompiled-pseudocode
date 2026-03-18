/*
 * XREFs of DirectComposition::Memory::Allocate_0 @ 0x1C00E782A
 * Callers:
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0030DF0 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002C184 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::Memory::Allocate_0(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(a1, 260LL, (unsigned __int64)a1, 0x6D654344u);
}
