/*
 * XREFs of ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x140207064
 * Callers:
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x140207698 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 *     NtDxgkVailConnect @ 0x140209C10 (NtDxgkVailConnect.c)
 * Callees:
 *     ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x140206DBC (-Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z.c)
 */

__int64 __fastcall EnableVmBusChannel(struct DXGVMBUSCHANNEL *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return DXGVMBUSCHANNEL::Enable(a1, a2);
  return result;
}
