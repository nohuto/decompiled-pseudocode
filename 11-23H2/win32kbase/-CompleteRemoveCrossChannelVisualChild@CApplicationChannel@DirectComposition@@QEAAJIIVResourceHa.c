/*
 * XREFs of ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1C00089F4
 * Callers:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C00082B8 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0008AB8 (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00935A0 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteRemoveCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  __int64 v8; // rax
  struct DirectComposition::CResourceMarshaler *v9; // rdi
  __int64 CrossChannelVisualChildNoRef; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r11d
  struct DirectComposition::CResourceMarshaler *v15; // rax
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF

  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a2);
  if ( !v7 )
    return (unsigned int)-1073741790;
  v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v7 + 168LL))(v7);
  v9 = (struct DirectComposition::CResourceMarshaler *)v8;
  if ( !v8 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    if ( !a4 )
      return (unsigned int)-1073741811;
    CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v8);
    goto LABEL_6;
  }
  v15 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a3);
  if ( v15 )
  {
    CrossChannelVisualChildNoRef = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v15 + 168LL))(v15);
LABEL_6:
    v11 = CrossChannelVisualChildNoRef;
    goto LABEL_7;
  }
  v11 = 0LL;
LABEL_7:
  if ( !v11 )
    return (unsigned int)-1073741811;
  v12 = *(_QWORD *)v9;
  v16[0] = 0;
  v13 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, _BYTE *))(v12 + 296))(
          v9,
          a1,
          v11,
          v16);
  if ( v13 >= 0 && v16[0] )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v9);
  return (unsigned int)v13;
}
