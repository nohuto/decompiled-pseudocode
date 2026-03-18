/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64_&_ @ 0x1C002FCA0
 * Callers:
 *     NtUserToUnicodeEx @ 0x1C00026F0 (NtUserToUnicodeEx.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C002CAF0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     AllocAce @ 0x1C002CF10 (AllocAce.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C002D288 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C002FBB0 (Win32AllocPoolWithQuotaZInit.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba1200___ @ 0x1C002FC20 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba12.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00305A0 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     CreateSecurityDescriptor @ 0x1C0030840 (CreateSecurityDescriptor.c)
 *     AllocateWindowManagerSid @ 0x1C00309C0 (AllocateWindowManagerSid.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C0030B10 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     ?Create@CSystemResourceReference@CBatch@DirectComposition@@SAJVResourceHandle@@PEAVCApplicationChannel@3@PEAPEAV123@@Z @ 0x1C0030EE4 (-Create@CSystemResourceReference@CBatch@DirectComposition@@SAJVResourceHandle@@PEAVCApplicationC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = ExAllocatePool2(**(_QWORD **)a2 & 0xFFFFFFFFFFFFFFFCuLL | 1, *a3, **(unsigned int **)(a2 + 8));
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  return result;
}
