/*
 * XREFs of IoSetDependency @ 0x14071BE50
 * Callers:
 *     <none>
 * Callees:
 *     PipSetDependency @ 0x14071C634 (PipSetDependency.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409BD598 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 */

__int64 __fastcall IoSetDependency(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]

  v3 = a1;
  HIDWORD(v13[0]) = 0;
  v14[1] = 0;
  if ( a1 && a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( a1 == a2 )
      return 3221225473LL;
    LODWORD(v13[0]) = 0;
    LOBYTE(a1) = 1;
    v14[0] = 0;
    v13[1] = v3;
    v15 = a2;
    v16 = a3;
    PnpAcquireDependencyRelationsLock(a1);
    v5 = PipSetDependency(v13, v14);
    PnpReleaseDependencyRelationsLock(v7, v6, v8);
    if ( v5 >= 0 )
      PipProcessRebuildPowerRelationsQueue(v10, v9, v11, v12, v13[0]);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
