/*
 * XREFs of ?OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C0092A50
 * Callers:
 *     ?OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00928D8 (-OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00315DC (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B74C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedReadResource(
        DirectComposition::CApplicationChannel *this,
        unsigned __int64 a2,
        const struct DirectComposition::ResourceObject *a3,
        struct DirectComposition::CResourceMarshaler **a4)
{
  unsigned int v6; // esi
  __int64 QuotaZInit; // rax
  struct DirectComposition::CResourceMarshaler *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rax

  v6 = a2;
  if ( (_DWORD)a2 == 196 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x48uLL, 0x74764344u);
    v9 = (struct DirectComposition::CResourceMarshaler *)QuotaZInit;
    if ( QuotaZInit )
    {
      DirectComposition::CResourceMarshaler::CResourceMarshaler(QuotaZInit, 147LL);
      *((_QWORD *)v9 + 7) = (char *)a3 + 24;
      *(_QWORD *)v9 = &DirectComposition::CVisualTargetMarshaler::`vftable';
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
      goto LABEL_5;
    *((_DWORD *)a3 + 14) = 2;
LABEL_12:
    ObfDereferenceObject(a3);
    return 3221225495LL;
  }
  v11 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x40uLL, 0x30734344u);
  v9 = (struct DirectComposition::CResourceMarshaler *)v11;
  if ( !v11 )
    goto LABEL_12;
  DirectComposition::CResourceMarshaler::CResourceMarshaler(v11, v6);
  *(_QWORD *)v9 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::`vftable';
  *((_QWORD *)v9 + 7) = (char *)a3 + 24;
LABEL_5:
  result = DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(
             (DirectComposition::CConnection **)this,
             v9);
  if ( (int)result >= 0 )
    *a4 = v9;
  return result;
}
