/*
 * XREFs of PipMigrateServiceCallback @ 0x140C23C80
 * Callers:
 *     <none>
 * Callees:
 *     PnpRegCopyKeySecurityTree @ 0x1407212EC (PnpRegCopyKeySecurityTree.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCloseKey @ 0x140A1004C (_PnpCtxRegCloseKey.c)
 *     PipMigrateCleanService @ 0x140C23494 (PipMigrateCleanService.c)
 */

__int64 __fastcall PipMigrateServiceCallback(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rcx
  int v8; // r9d
  __int64 *v9; // rbx
  void *v10; // rbx
  int v11; // r14d
  __int64 *v12; // rdi
  __int64 v13; // rsi
  void *v15; // [rsp+30h] [rbp-28h] BYREF
  void *v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  if ( (int)PnpCtxRegOpenKey(a1, a2, a3, 0, 0xF003Fu, (__int64)&v16) >= 0 && a4 )
  {
    v9 = a4 + 1;
    if ( !a4[1] && (int)PnpCtxRegOpenKey(a1, *a4, (__int64)L"Services", 0, 0xF003Fu, (__int64)(a4 + 1)) < 0 )
      *v9 = 0LL;
    if ( *v9 && (int)PnpCtxRegOpenKey(a1, *v9, a3, 0, 0xF003Fu, (__int64)&v15) < 0 )
    {
      v10 = 0LL;
      v15 = 0LL;
    }
    else
    {
      v10 = v15;
    }
    if ( v10 )
    {
      v11 = (int)v16;
      v12 = (__int64 *)off_140009F18;
      v13 = 2LL;
      do
      {
        PnpRegCopyKeySecurityTree(v11, (int)v10, *v12++, v8);
        --v13;
      }
      while ( v13 );
    }
    PipMigrateCleanService(a1, v16);
  }
  if ( v16 )
    PnpCtxRegCloseKey(v7, v16);
  if ( v15 )
    PnpCtxRegCloseKey(v7, v15);
  return 0LL;
}
