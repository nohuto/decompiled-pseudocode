/*
 * XREFs of PiSwFreeInterfaceList @ 0x1409A3A3C
 * Callers:
 *     PiSwProcessRemove @ 0x1409A35FC (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1409A38F4 (PiSwDeviceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x1409A3F4C (PiSwInterfaceFree.c)
 */

void __fastcall PiSwFreeInterfaceList(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    PiSwInterfaceFree(v2);
  }
}
