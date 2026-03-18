/*
 * XREFs of ?PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ @ 0x140224F70
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 * Callees:
 *     ?ValidateReferenceCountHash@CResourceMarshaler@DirectComposition@@AEAAXXZ @ 0x1402251D4 (-ValidateReferenceCountHash@CResourceMarshaler@DirectComposition@@AEAAXXZ.c)
 */

unsigned __int64 __fastcall DirectComposition::CResourceMarshaler::PrivateRelease(
        DirectComposition::CResourceMarshaler *this)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax

  DirectComposition::CResourceMarshaler::ValidateReferenceCountHash(this);
  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
    KeBugCheck(0xC000A003);
  result = v2 - 1;
  *((_QWORD *)this + 3) = result;
  *((_DWORD *)this + 5) = result ^ ~(_DWORD)this;
  return result;
}
