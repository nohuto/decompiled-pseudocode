/*
 * XREFs of HandleDisplayChangeForInactiveDesktops @ 0x1C009D9B0
 * Callers:
 *     xxxBroadcastModernAppRedraw @ 0x1C01F5570 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C00B2DB0 (PostIAMShellHookMessageEx.c)
 */

__int64 __fastcall HandleDisplayChangeForInactiveDesktops(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 i; // rbx

  result = *(_QWORD *)(a1 + 40);
  for ( i = *(_QWORD *)(result + 16); i; i = *(_QWORD *)(i + 32) )
  {
    if ( i != a1 )
    {
      if ( a2 )
        result = PostIAMShellHookMessageEx(i, 35LL);
      *(_DWORD *)(i + 48) |= 0x20u;
    }
  }
  return result;
}
