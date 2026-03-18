/*
 * XREFs of ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x1800E9514
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800E9B3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ??$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU23@$$QEAU23@@Z @ 0x1800E9F60 (--$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@-$vector@UConditio.c)
 *     ??0ConditionExpressionListEntry@CConditionalExpression@@QEAA@$$QEAU01@@Z @ 0x1800EA0F0 (--0ConditionExpressionListEntry@CConditionalExpression@@QEAA@$$QEAU01@@Z.c)
 *     ??1ConditionExpressionListEntry@CConditionalExpression@@QEAA@XZ @ 0x1800EA1AC (--1ConditionExpressionListEntry@CConditionalExpression@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConditionalExpression::ProcessAddConditionAnimationResources(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES *a3,
        unsigned int *a4)
{
  unsigned int i; // r15d
  unsigned int v9; // edx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v11; // rbx
  unsigned int v12; // edx
  struct CResource *v13; // rax
  struct CResource *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v23; // [rsp+30h] [rbp-10h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)a3 + 2) )
      return 0;
    v9 = *a4;
    v23 = 0LL;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v9);
    v11 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
            ResourceWithoutType,
            60LL) )
    {
      v17 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x4Cu, 0LL);
LABEL_17:
      CConditionalExpression::ConditionExpressionListEntry::~ConditionExpressionListEntry((CConditionalExpression::ConditionExpressionListEntry *)&v23);
      return v17;
    }
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = a4[1];
    *(_QWORD *)&v23 = v11;
    v13 = CResourceTable::GetResourceWithoutType(a2, v12);
    v14 = v13;
    if ( !v13
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v13 + 64LL))(v13, 60LL)
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v14 + 64LL))(v14, 112LL) )
    {
      v17 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x58u, 0LL);
      goto LABEL_20;
    }
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = *(_QWORD *)v11;
    *((_QWORD *)&v23 + 1) = v14;
    a4 += 2;
    (*(void (__fastcall **)(struct CResource *, CConditionalExpression *))(v15 + 208))(v11, this);
    (*(void (__fastcall **)(struct CResource *, CConditionalExpression *))(*(_QWORD *)v14 + 208LL))(v14, this);
    v16 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v11 + 224LL))(v11);
    v17 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x66u, 0LL);
      goto LABEL_17;
    }
    v18 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 224LL))(v14);
    v17 = v18;
    if ( v18 < 0 )
      break;
    v19 = *((_QWORD *)this + 42);
    if ( v19 == *((_QWORD *)this + 43) )
    {
      std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Emplace_reallocate<CConditionalExpression::ConditionExpressionListEntry>(
        (char *)this + 328,
        *((_QWORD *)this + 42),
        &v23);
    }
    else
    {
      CConditionalExpression::ConditionExpressionListEntry::ConditionExpressionListEntry(v19, &v23);
      *((_QWORD *)this + 42) += 16LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23 + 1);
    v20 = v23;
    if ( (_QWORD)v23 )
    {
      v21 = *(_QWORD *)v23;
      *(_QWORD *)&v23 = 0LL;
      (*(void (__fastcall **)(__int64))(v21 + 16))(v20);
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x67u, 0LL);
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23 + 1);
  if ( (_QWORD)v23 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 16LL))(v23);
  return v17;
}
