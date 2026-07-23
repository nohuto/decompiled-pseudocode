/*
 * XREFs of SmHwAcceleratorMgrAccelCallback @ 0x14079BF40
 * Callers:
 *     <none>
 * Callees:
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x14060DBAC (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 */

void __fastcall SmHwAcceleratorMgrAccelCallback(__int64 a1, ULONG_PTR a2, int a3)
{
  if ( *(_DWORD *)(a1 + 4) == 1 )
    SmHwAcceleratorMgrHotRemoveAccelerator(a2, *(_QWORD *)(a1 + 16), a3);
}
