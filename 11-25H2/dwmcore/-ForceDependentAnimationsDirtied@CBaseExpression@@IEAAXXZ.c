/*
 * XREFs of ?ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ @ 0x1802AAD64
 * Callers:
 *     ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x1801E1344 (-FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z.c)
 *     ?ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ @ 0x1802AAD64 (-ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ.c)
 * Callees:
 *     ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x1801C8720 (-GetSourceAnimationsForProperty@CResource@@QEAAPEAV-$DynArray@PEAVCBaseExpression@@$0A@@@I@Z.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x180297F6C (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ @ 0x1802AAD64 (-ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ.c)
 */

void __fastcall CBaseExpression::ForceDependentAnimationsDirtied(CBaseExpression *this)
{
  unsigned int v1; // ebx
  struct CResource *v3; // rax
  char *SourceAnimationsForProperty; // rax
  char *v5; // rdi

  v1 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    *((_QWORD *)this + 22) = 0LL;
    v3 = CBaseExpression::ResolveTargetNoRef(this);
    if ( v3 )
    {
      SourceAnimationsForProperty = CResource::GetSourceAnimationsForProperty((__int64)v3, *((_DWORD *)this + 47));
      v5 = SourceAnimationsForProperty;
      if ( SourceAnimationsForProperty )
      {
        if ( *((_DWORD *)SourceAnimationsForProperty + 6) )
        {
          do
            CBaseExpression::ForceDependentAnimationsDirtied(*(CBaseExpression **)(*(_QWORD *)v5 + 8LL * v1++));
          while ( v1 < *((_DWORD *)v5 + 6) );
        }
      }
    }
  }
}
