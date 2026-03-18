/*
 * XREFs of ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140016C70
 * Callers:
 *     ?SetReferenceProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1401964B0 (-SetReferenceProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 *     ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140196750 (-SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetReferenceProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1402330C0 (-SetReferenceProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x140015E64 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x140017494 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int WeakReferenceBase; // ebx
  __int64 i; // rax
  __int64 v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rax
  struct DirectComposition::CWeakReferenceBase *v12; // rsi
  struct DirectComposition::CWeakReferenceBase *v13; // rdx
  struct DirectComposition::CWeakReferenceBase *v14; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 == 2 )
  {
    WeakReferenceBase = 0;
    if ( a4 )
    {
      for ( i = *((unsigned int *)a4 + 9); (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
      {
        if ( (_DWORD)i == 135 )
          goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    }
LABEL_9:
    v10 = *((_QWORD *)this + 9);
    if ( v10 )
      v11 = *(struct DirectComposition::CResourceMarshaler **)(v10 + 16);
    else
      v11 = 0LL;
    if ( a4 == v11 )
    {
      if ( !v10 || v11 )
        return WeakReferenceBase;
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        (struct DirectComposition::CWeakReferenceBase *)v10);
      *((_QWORD *)this + 9) = 0LL;
    }
    else
    {
      v12 = 0LL;
      v14 = 0LL;
      if ( a4 )
      {
        WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(
                              (DirectComposition::CApplicationChannel *)a2,
                              a4,
                              &v14);
        if ( (WeakReferenceBase & 0x80000000) != 0 )
          return WeakReferenceBase;
        v12 = v14;
      }
      v13 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 9);
      if ( v13 )
        DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v13);
      *((_QWORD *)this + 9) = v12;
    }
    *((_DWORD *)this + 4) &= ~0x40u;
    *a5 = 1;
    return WeakReferenceBase;
  }
  return 3221225485LL;
}
