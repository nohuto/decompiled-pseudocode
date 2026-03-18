/*
 * XREFs of ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x140369794
 * Callers:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1403699D4 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1403E34F8 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(__int64 a1, int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v9; // rax

  v3 = a2;
  v6 = (unsigned int)(a2 - 1);
  if ( a2 == 1 )
  {
    v7 = 56LL;
  }
  else
  {
    v6 = (unsigned int)(a2 - 2);
    if ( a2 == 2 )
    {
      v7 = 64LL;
    }
    else
    {
      v6 = (unsigned int)(a2 - 4);
      if ( a2 == 4 )
      {
        v7 = 72LL;
      }
      else
      {
        v6 = (unsigned int)(a2 - 8);
        if ( a2 == 8 )
        {
          v7 = 80LL;
        }
        else
        {
          if ( a2 != 15 )
          {
            WdLogSingleEntry1(1LL, a2);
            WdLogGlobalForLineNumber = 1027;
          }
          v7 = 88LL;
        }
      }
    }
  }
  if ( !*(_QWORD *)(v7 + a1) && a3 )
  {
    v9 = operator new(0x38uLL, 0x63644356u, 256LL, v6);
    if ( v9 )
    {
      *(_DWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_WORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 40) = 0LL;
      *(_QWORD *)(v7 + a1) = v9;
    }
    else
    {
      *(_QWORD *)(v7 + a1) = 0LL;
      WdLogSingleEntry4(6LL, 56LL, v3, a1, *(_QWORD *)(a1 + 96));
      WdLogGlobalForLineNumber = 1041;
    }
  }
  return *(_QWORD *)(v7 + a1);
}
