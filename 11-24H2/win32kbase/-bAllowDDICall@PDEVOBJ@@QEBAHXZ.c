/*
 * XREFs of ?bAllowDDICall@PDEVOBJ@@QEBAHXZ @ 0x14003DCC4
 * Callers:
 *     ?vDeleteDriverRealization@SURFACE@@QEAAXXZ @ 0x1400382C0 (-vDeleteDriverRealization@SURFACE@@QEAAXXZ.c)
 *     vUnreferencePdevWorker @ 0x14003D4F0 (vUnreferencePdevWorker.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x14003D870 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bAllowDDICall(PDEVOBJ *this)
{
  __int64 v1; // rdi
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v3; // ebx

  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x8000) == 0 )
    return 1;
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 1776LL) + 56LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v3 = 0;
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( v1 == CurrentProcessWin32Process && !KeAreApcsDisabled() )
    return 1;
  return v3;
}
