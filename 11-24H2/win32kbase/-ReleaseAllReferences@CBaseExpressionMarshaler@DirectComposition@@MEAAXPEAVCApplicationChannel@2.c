/*
 * XREFs of ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400ECCA0
 * Callers:
 *     ?ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400ECC00 (-ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 *     ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140196160 (-ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1402371E0 (-ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rdi
  PVOID v7; // rax
  __int64 i; // rdi
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    v6 = *(_QWORD *)(v4 + 16);
    if ( v5 )
    {
      GreDeleteFastMutex((char *)v4);
      if ( v6 )
      {
        Buffer[0] = v6;
        Buffer[1] = 0LL;
        v7 = RtlLookupElementGenericTable(a2 + 4, Buffer);
        if ( v7 )
          RtlDeleteElementGenericTable(a2 + 4, v7);
        *(_DWORD *)(v6 + 16) &= ~4u;
      }
    }
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *((_QWORD *)this + 13) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(
        (DirectComposition::CApplicationChannel *)a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 13) + 8 * i));
    GreDeleteFastMutex(*((char **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
    *((_DWORD *)this + 29) = 0;
    *((_DWORD *)this + 28) = 0;
  }
}
