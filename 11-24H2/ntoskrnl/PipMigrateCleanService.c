/*
 * XREFs of PipMigrateCleanService @ 0x140C23494
 * Callers:
 *     PipMigrateServiceCallback @ 0x140C23C80 (PipMigrateServiceCallback.c)
 * Callees:
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKey @ 0x14097D774 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14097EF98 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipMigrateCleanService(__int64 a1, void *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int InfoKey; // ebx
  int v7; // r14d
  __int64 v8; // rcx
  WCHAR *Pool2; // rdi
  int v10; // esi
  int v11; // eax
  int v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+44h] [rbp-Ch] BYREF
  int v15; // [rsp+48h] [rbp-8h] BYREF
  int v16; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+58h] BYREF

  v17 = 4;
  v16 = 0;
  v14 = 0;
  v15 = 0;
  v13 = 0;
  v4 = PnpCtxRegQueryValue(a1, a2, L"Clean", &v16, &v13, &v17);
  InfoKey = v4;
  if ( v4 == -1073741772 )
    return 0;
  if ( v4 < 0 )
    return InfoKey;
  if ( v16 != 4 || v17 != 4 )
    return (unsigned int)-1073741823;
  if ( !v13 )
    return 0;
  InfoKey = PnpCtxRegQueryInfoKey(v5, (int)a2, (int)&v14, (int)&v15, 0LL, 0LL, 0LL);
  if ( (InfoKey & 0x80000000) != 0 )
    return InfoKey;
  if ( v14 )
  {
    v7 = v15 + 1;
    Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, 2LL * (unsigned int)(v15 + 1), 0x6E697050uLL);
    if ( Pool2 )
    {
      v10 = 0;
      while ( 1 )
      {
        v16 = v7;
        v11 = PnpCtxRegEnumKey(v8, a2);
        InfoKey = v11;
        if ( v11 == -2147483622 )
          break;
        if ( v11 < 0 )
          goto LABEL_18;
        ++v10;
        if ( (int)PnpCtxRegDeleteTree(a1, (__int64)a2, Pool2) >= 0 )
          v10 = 0;
      }
      InfoKey = 0;
LABEL_18:
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return InfoKey;
}
