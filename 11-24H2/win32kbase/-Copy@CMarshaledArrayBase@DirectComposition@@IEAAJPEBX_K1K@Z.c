/*
 * XREFs of ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x140105D3C
 * Callers:
 *     ?Copy@?$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CDC@$0CDD@@DirectComposition@@QEAAJPEBX_K@Z @ 0x1402257E8 (-Copy@-$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CDC@$0CDD@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CDA@$0CDB@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022580C (-Copy@-$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CDA@$0CDB@@DirectComposition@@QEAAJPEBX.c)
 *     ?Copy@?$CMarshaledArray@UD2D_POINT_3F@@$0GHGNEDEE@$0EA@$0CCO@$0CCP@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140225830 (-Copy@-$CMarshaledArray@UD2D_POINT_3F@@$0GHGNEDEE@$0EA@$0CCO@$0CCP@@DirectComposition@@QEAAJPEBX.c)
 *     ?Copy@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0BAA@$0BOI@$0BOJ@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140225854 (-Copy@-$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0BAA@$0BOI@$0BOJ@@DirectComposition@@QEAAJPEBX_.c)
 *     ?Copy@?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CBH@$0CBI@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140225878 (-Copy@-$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CBH@$0CBI@@DirectComposition@@QEAA.c)
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0CAI@$0CAJ@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022589C (-Copy@-$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0CAI@$0CAJ@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CDE@$0CDF@@DirectComposition@@QEAAJPEBX_K@Z @ 0x1402258C0 (-Copy@-$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CDE@$0CDF@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022A200 (-SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022A2C0 (-SetBufferProperty@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArrayBase::Copy(
        DirectComposition::CMarshaledArrayBase *this,
        const void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rbp
  char *v13; // rcx
  char *v15; // rcx

  v6 = 0;
  v9 = a3 / a4;
  v10 = a4 * (a3 / a4);
  if ( a3 == v10 )
  {
    v11 = *((_QWORD *)this + 2);
    if ( v9 <= v11 )
    {
      if ( v9 )
      {
        if ( v9 < v11 )
          memset((void *)(v10 + *((_QWORD *)this + 1)), 0, a4 * (v11 - v9));
      }
      else
      {
        v15 = (char *)*((_QWORD *)this + 1);
        if ( v15 )
        {
          GreDeleteFastMutex(v15);
          *((_QWORD *)this + 1) = 0LL;
        }
      }
    }
    else
    {
      v12 = Win32AllocPoolWithQuotaImpl((__int64)this, a3, a5);
      if ( !v12 )
        return (unsigned int)-1073741801;
      v13 = (char *)*((_QWORD *)this + 1);
      if ( v13 )
        GreDeleteFastMutex(v13);
      *((_QWORD *)this + 1) = v12;
    }
    memmove(*((void **)this + 1), a2, a3);
    *((_QWORD *)this + 2) = v9;
    *(_QWORD *)this = 0LL;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
