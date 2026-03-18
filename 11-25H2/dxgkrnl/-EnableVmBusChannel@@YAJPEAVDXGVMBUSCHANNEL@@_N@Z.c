/*
 * XREFs of ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x140200954
 * Callers:
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x140200F84 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 *     NtDxgkVailConnect @ 0x140203500 (NtDxgkVailConnect.c)
 * Callees:
 *     ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x1402006AC (-Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z.c)
 */

__int64 __fastcall EnableVmBusChannel(struct DXGVMBUSCHANNEL *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return DXGVMBUSCHANNEL::Enable(a1, a2);
  return result;
}
