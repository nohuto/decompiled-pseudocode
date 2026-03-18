/*
 * XREFs of ThermalZone @ 0x14006EF50
 * Callers:
 *     <none>
 * Callees:
 *     PushScope @ 0x1400050C0 (PushScope.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ThermalZone(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax

  v2 = a2 + 8;
  result = CreateNameSpaceObject(a1[40], *(_QWORD *)(a2[10] + 32), a1[10], a1[11], a2 + 8, 0);
  if ( !(_DWORD)result )
  {
    *(_WORD *)(*v2 + 66) = 13;
    if ( ghCreate )
      ghCreate(13LL, *v2 + 120);
    return PushScope(a1, a1[15], a2[5], 0LL, *v2, a1[11], a1[40], a2[11]);
  }
  return result;
}
