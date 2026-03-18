/*
 * XREFs of ??1CConditionalExpression@@UEAA@XZ @ 0x1801B7E0C
 * Callers:
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1801B7DC0 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAXPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1801B9BD8 (--$_Destroy_range@V-$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConditionalExpression::~CConditionalExpression(CConditionalExpression *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  CConditionalExpression::ConditionExpressionListEntry *v4; // rcx
  CConditionalExpression::ConditionExpressionListEntry *v5; // rcx

  *(_QWORD *)this = &CConditionalExpression::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 42);
  for ( i = (_QWORD *)*((_QWORD *)this + 41); i != v2; i += 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 208LL))(*i, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)i[1] + 208LL))(i[1], 0LL);
  }
  v4 = (CConditionalExpression::ConditionExpressionListEntry *)*((_QWORD *)this + 41);
  if ( v4 != *((CConditionalExpression::ConditionExpressionListEntry **)this + 42) )
  {
    std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(v4);
    *((_QWORD *)this + 42) = *((_QWORD *)this + 41);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 44);
  v5 = (CConditionalExpression::ConditionExpressionListEntry *)*((_QWORD *)this + 41);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(v5);
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 41),
      (*((_QWORD *)this + 43) - *((_QWORD *)this + 41)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
  }
  CBaseExpression::~CBaseExpression((void **)this);
}
