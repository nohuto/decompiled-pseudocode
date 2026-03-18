/*
 * XREFs of ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1403C3E14
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x14026CF14 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1403B18BC (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryCloneInfo(
        CCD_SET_STRING_ID *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 v6; // rsi
  __int64 v9; // r8
  unsigned int v10; // r10d
  int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rax
  _WORD *v15; // r8

  v6 = a2;
  if ( a2 >= *((unsigned __int16 *)this + 16) || !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1600;
  }
  if ( (unsigned int)v6 >= *((unsigned __int16 *)this + 16) || !a3 )
    return 3221225485LL;
  v9 = *((_QWORD *)this + 3);
  v10 = *(unsigned __int16 *)(v9 + 8 * v6 + 2);
  *a3 = v10;
  if ( a5 || a4 )
  {
    v11 = v6 - 1;
    v12 = 0;
    v13 = (int)v6 - 1;
    if ( (int)v6 - 1 >= 0 )
    {
      v15 = (_WORD *)(v9 + 8LL * v11 + 2);
      do
      {
        if ( *v15 != (_WORD)v10 )
          break;
        ++v12;
        --v11;
        v15 -= 4;
        --v13;
      }
      while ( v13 >= 0 );
    }
    if ( a5 )
      *a5 = v12;
    if ( a4 )
      *a4 = v11 + 1;
  }
  return 0LL;
}
