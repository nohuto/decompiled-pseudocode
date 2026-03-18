/*
 * XREFs of ??$SetExpressionArray@UtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@Z @ 0x1801B8438
 * Callers:
 *     ?ProcessAddInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXI@Z @ 0x1802AADE8 (-ProcessAddInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1801B81B0 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1801B9698 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::SetExpressionArray<tagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS,DynArrayIANoCtor<CBaseExpression *,2,0>>(
        __int64 a1,
        CResourceTable *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int i; // esi
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v12; // rdi
  int v13; // r9d
  unsigned int v14; // ebx
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-38h]
  struct CResource *v18; // [rsp+70h] [rbp+18h] BYREF

  for ( i = 0; i < *(_DWORD *)(a3 + 8); ++i )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
    v12 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
            ResourceWithoutType,
            59LL) )
    {
      v17 = 335;
      goto LABEL_5;
    }
    if ( (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 216LL))(v12) )
    {
      v17 = 343;
LABEL_5:
      v13 = -2003303421;
      v14 = -2003303421;
LABEL_6:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v17, 0LL);
      return v14;
    }
    v18 = v12;
    v16 = DynArray<CBaseExpression *,0>::AddMultipleAndSet(a6, &v18);
    v14 = v16;
    if ( v16 < 0 )
    {
      v17 = 346;
      goto LABEL_14;
    }
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 8LL))(v12);
    (*(void (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v12 + 208LL))(v12, a1);
    v16 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 224LL))(v12);
    v14 = v16;
    if ( v16 < 0 )
    {
      v17 = 354;
LABEL_14:
      v13 = v16;
      goto LABEL_6;
    }
    ++a4;
  }
  return 0;
}
