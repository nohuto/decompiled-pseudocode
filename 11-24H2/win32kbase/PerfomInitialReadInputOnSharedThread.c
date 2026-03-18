/*
 * XREFs of PerfomInitialReadInputOnSharedThread @ 0x140145B80
 * Callers:
 *     UserActivateMITInputProcessing @ 0x14018A3B0 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x140145BE0 (-Read@CBaseInput@@QEAAJXZ.c)
 */

CBaseInput **__fastcall PerfomInitialReadInputOnSharedThread(__int64 a1)
{
  __int64 v1; // rax
  CBaseInput **v2; // rdi
  CBaseInput **v3; // rbx
  CBaseInput **result; // rax

  v1 = W32GetUserSessionState(a1) + 3120;
  v2 = (CBaseInput **)(v1 + 144);
  v3 = (CBaseInput **)(v1 + 24);
  do
  {
    if ( *((_DWORD *)v3 - 2) == 2 )
      CBaseInput::Read(*v3);
    v3 += 6;
    result = v3 - 3;
  }
  while ( v3 - 3 != v2 );
  return result;
}
