/*
 * XREFs of PiSwFreePdoAssociationsList @ 0x1409A3F9C
 * Callers:
 *     PiSwDeviceFree @ 0x1409A38F4 (PiSwDeviceFree.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PiSwLock @ 0x1408363D0 (PiSwLock.c)
 *     PiSwPdoAssociationFree @ 0x140A97F1C (PiSwPdoAssociationFree.c)
 */

void __fastcall PiSwFreePdoAssociationsList(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1
      || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2)
      || (*a1 = v3, v3[1] = a1, PiSwLock(), v4 = v2[2], *(_QWORD **)(v4 + 8) != v2 + 2)
      || (v5 = (_QWORD *)v2[3], (_QWORD *)*v5 != v2 + 2) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
    PiSwPdoAssociationFree(v2);
  }
}
