/*
 * XREFs of ?GetFreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXXZ @ 0x180018C9C
 * Callers:
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180018D34 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::GetFreeNode(
        __int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rax
  int v4; // r8d
  _QWORD *i; // rcx

  if ( *(_QWORD *)(a1 + 32) )
    return;
  v2 = *(unsigned int *)(a1 + 40);
  if ( v2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v2 < 0x18 )
      goto LABEL_9;
    v2 *= 24LL;
  }
  v3 = malloc(v2 + 8);
  if ( !v3 )
LABEL_9:
    ATL::AtlThrowImpl(-2147024882);
  *v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v3;
  v4 = *(_DWORD *)(a1 + 40) - 1;
  for ( i = &v3[2 * v4 + 1 + (unsigned int)v4]; v4 >= 0; --v4 )
  {
    *i = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = i;
    i -= 3;
  }
}
