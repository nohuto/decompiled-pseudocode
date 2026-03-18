/*
 * XREFs of ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C0065AD0
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C0065550 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C0065B4C (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimati.c)
 */

__int64 __fastcall DirectComposition::CAnimationBinding::Create(
        struct DirectComposition::CResourceMarshaler *a1,
        unsigned __int64 a2,
        struct DirectComposition::CBaseAnimation *a3,
        struct DirectComposition::CAnimationBinding **a4)
{
  unsigned int v6; // ebp
  DirectComposition::CAnimationBinding *QuotaZInit; // rax
  struct DirectComposition::CAnimationBinding *v9; // rbx
  __int64 result; // rax

  v6 = a2;
  QuotaZInit = (DirectComposition::CAnimationBinding *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                         a1,
                                                         a2,
                                                         0x30uLL,
                                                         0x62614344u);
  v9 = QuotaZInit;
  if ( !QuotaZInit )
    return 3221225495LL;
  DirectComposition::CAnimationBinding::Initialize(QuotaZInit, a1, v6, a3);
  result = 0LL;
  *a4 = v9;
  return result;
}
