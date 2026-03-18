/*
 * XREFs of ?ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140116940
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CEffectBrushMarshaler::ReleaseAllReferences(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  __int64 i; // rdi

  DirectComposition::CApplicationChannel::ReleaseResource(
    a2,
    *((struct DirectComposition::CResourceMarshaler **)this + 9));
  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 9) = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  *((_QWORD *)this + 10) = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 11) + 8 * i));
    GreDeleteFastMutex(*((char **)this + 11));
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 25) = 0;
  }
}
