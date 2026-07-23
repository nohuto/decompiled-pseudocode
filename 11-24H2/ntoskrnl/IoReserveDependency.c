/*
 * XREFs of IoReserveDependency @ 0x14071BDC0
 * Callers:
 *     <none>
 * Callees:
 *     PipSetDependency @ 0x14071C634 (PipSetDependency.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409BD598 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 */

__int64 __fastcall IoReserveDependency(__int64 a1, _WORD *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  _DWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]

  v3 = a1;
  v9[1] = 0;
  v11[1] = 0;
  if ( a1 && a2 && *a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    v11[0] = 1;
    LOBYTE(a1) = 1;
    v12 = a2;
    v13 = a3;
    v9[0] = 0;
    v10 = v3;
    PnpAcquireDependencyRelationsLock(a1);
    v4 = PipSetDependency(v9, v11);
    PnpReleaseDependencyRelationsLock(v6, v5, v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
