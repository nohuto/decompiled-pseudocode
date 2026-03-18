/*
 * XREFs of ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1401115C4
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x140111210 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x140111640 (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimati.c)
 */

__int64 __fastcall DirectComposition::CAnimationBinding::Create(
        struct DirectComposition::CResourceMarshaler *a1,
        unsigned int a2,
        struct DirectComposition::CBaseAnimation *a3,
        struct DirectComposition::CAnimationBinding **a4)
{
  DirectComposition::CAnimationBinding *v8; // rax
  struct DirectComposition::CAnimationBinding *v9; // rbx
  __int64 result; // rax

  v8 = (DirectComposition::CAnimationBinding *)Win32AllocPoolWithQuotaZInitImpl((__int64)a1, 0x30uLL, 0x62614344u);
  v9 = v8;
  if ( !v8 )
    return 3221225495LL;
  DirectComposition::CAnimationBinding::Initialize(v8, a1, a2, a3);
  result = 0LL;
  *a4 = v9;
  return result;
}
