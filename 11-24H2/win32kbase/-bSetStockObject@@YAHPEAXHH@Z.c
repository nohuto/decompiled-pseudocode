/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x14013C700
 * Callers:
 *     bInitPALOBJ @ 0x1402E2008 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1402E2494 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1402E409C (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402E4824 (bInitBrush.c)
 *     bInitICM @ 0x1402E4910 (bInitICM.c)
 * Callees:
 *     HmgModifyHandleType @ 0x140016130 (HmgModifyHandleType.c)
 */

__int64 __fastcall bSetStockObject(unsigned __int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 SessionState; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rcx

  v3 = 0;
  v4 = a2;
  if ( a1 )
  {
    SessionState = W32GetSessionState(a1);
    v9 = a1 | 0x800000;
    v10 = *(_QWORD *)(SessionState + 88);
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(v10 + 3016) + 8 * v4) = v9;
      v11 = *(_QWORD *)(v10 + 3016);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v10 + 3008) + 8 * v4) = v9;
      v11 = *(_QWORD *)(v10 + 3008);
    }
    HmgModifyHandleType(*(_QWORD *)(v11 + 8 * v4), v8);
  }
  LOBYTE(v3) = a1 != 0;
  return v3;
}
