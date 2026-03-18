/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x140A88D94
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140821C3C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408226F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbDispatchDriverDatabase @ 0x1408BDAB0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140922D68 (DrvDbGetDriverDatabaseMappedProperty.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     DrvDbCreateDatabaseNode @ 0x140823A00 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140823D38 (DrvDbDestroyDatabaseNode.c)
 *     _PnpCtxRegOpenKey @ 0x1408C7AFC (_PnpCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140925AF8 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140925CCC (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x140926C58 (DrvDbFindDatabaseNode.c)
 */

__int64 __fastcall DrvDbOpenDriverDatabaseRegKey(
        __int64 a1,
        const WCHAR *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  char v10; // bp
  int DatabaseNode; // eax
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING *v15; // rdi
  const UNICODE_STRING *v16[2]; // [rsp+50h] [rbp-28h] BYREF

  v16[0] = 0LL;
  v10 = 0;
  if ( wcsicmp(a2, L"*") )
  {
    DatabaseNode = DrvDbFindDatabaseNode(a1, a2, v16);
    v12 = DatabaseNode;
    if ( DatabaseNode == -1073741772 )
    {
      if ( !a4 )
        return (unsigned int)v12;
      v12 = DrvDbCreateDatabaseNode(a1, a2, 0LL, 0, 0LL, 16, 0LL, 0LL, (__int64 *)v16);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v10 = 1;
    }
    else if ( DatabaseNode < 0 )
    {
      return (unsigned int)v12;
    }
  }
  else
  {
    v16[0] = *(const UNICODE_STRING **)(a1 + 32);
  }
  CurrentThread = KeGetCurrentThread();
  v15 = (UNICODE_STRING *)v16[0];
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)v15[9].Buffer, 1u);
  if ( (*(_DWORD *)&v15[4].Length & 1) != 0 || (v12 = DrvDbLoadDatabaseNode((__int64 *)a1, (__int64)v15), v12 >= 0) )
  {
    v12 = PnpCtxRegOpenKey(*(_QWORD *)a1, *(_QWORD *)&v15[6].Length, 0LL, 0, a3, a5);
    if ( (*(_DWORD *)&v15[4].Length & 1) == 0 )
      DrvDbUnloadDatabaseNode(a1, (__int64)v15);
    if ( v12 >= 0 && a6 )
      *a6 = 2;
  }
  ExReleaseResourceLite((PERESOURCE)v15[9].Buffer);
  KeLeaveCriticalRegion();
  if ( v12 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v15);
  return (unsigned int)v12;
}
