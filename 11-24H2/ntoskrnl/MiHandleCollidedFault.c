/*
 * XREFs of MiHandleCollidedFault @ 0x140426D4C
 * Callers:
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiAllowReadInProgress @ 0x140426F14 (MiAllowReadInProgress.c)
 *     MiIssueFlowThroughFault @ 0x140426F68 (MiIssueFlowThroughFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 */

__int64 __fastcall MiHandleCollidedFault(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _DWORD *a6)
{
  _DWORD *v7; // r14
  unsigned __int64 v10; // rdx
  int v11; // ecx
  int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 result; // rax
  int v17; // r9d
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r14d
  unsigned int v22; // ebp
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9

  v7 = a6;
  *a5 = 0LL;
  *v7 = 2;
  v12 = MiAllowReadInProgress();
  if ( v12 < 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(v10) = 17;
      MiUnlockProtoPoolPage(a3, v10, v13, v14);
    }
    *v7 = 0;
    return (unsigned int)v12;
  }
  else
  {
    result = MiIssueFlowThroughFault(v11, v10, a3, (unsigned int)*(_QWORD *)v14 - 32, a4, v15, (__int64)v7);
    if ( *v7 != 1 )
    {
      if ( *(__int64 *)(a4 + 40) < 0 )
        MiObtainProtoReference(a3, 1);
      LODWORD(a5) = 0;
      LOBYTE(v17) = 2;
      v21 = MiWaitForCollidedFaultComplete(a1, a4, a3, v17, (__int64)&a5);
      if ( !(_DWORD)a5 )
      {
        if ( a3 )
        {
          v22 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v22 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v22);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(a3 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(a3, v18, v19, v20);
          _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( !v21 )
        {
          MiAddLockedPageCharge(a4, 3);
          v23 = (*(_QWORD *)(a4 + 24) + 1LL) ^ (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0xC000000000000000uLL;
          *(_QWORD *)(a4 + 24) = v23;
          LODWORD(a5) = *(_DWORD *)(a4 + 32);
          BYTE2(a5) = BYTE2(a5) & 0xF8 | 6;
          *(_DWORD *)(a4 + 32) = (_DWORD)a5;
          MiRemoveLockedPageChargeAndDecRef(a4, v23, v24, v25);
          return 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a3 )
        {
          LOBYTE(v18) = 17;
          MiUnlockProtoPoolPage(a3, v18, v19, v20);
        }
      }
      return v21;
    }
  }
  return result;
}
