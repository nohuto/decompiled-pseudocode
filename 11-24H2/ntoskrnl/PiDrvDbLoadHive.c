/*
 * XREFs of PiDrvDbLoadHive @ 0x140A739D4
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x140737564 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A73830 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwLoadKeyEx @ 0x1406A9610 (ZwLoadKeyEx.c)
 *     ZwUnloadKey2 @ 0x1406AAF10 (ZwUnloadKey2.c)
 */

__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, UNICODE_STRING *a2, int a3, HANDLE *a4)
{
  NTSTATUS v5; // ebx
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+78h] [rbp+27h] BYREF

  *a4 = 0LL;
  memset(&TargetKey.Attributes + 1, 0, 20);
  memset(&SourceFile.Attributes + 1, 0, 20);
  TargetKey.RootDirectory = 0LL;
  SourceFile.RootDirectory = 0LL;
  TargetKey.ObjectName = a1;
  SourceFile.ObjectName = a2;
  *(_QWORD *)&TargetKey.Length = 48LL;
  *(_QWORD *)&SourceFile.Length = 48LL;
  TargetKey.Attributes = 576;
  SourceFile.Attributes = 576;
  v5 = ZwLoadKeyEx(&TargetKey, &SourceFile, a3 | 0x80, 0LL, 0LL, 0, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    v5 = ZwOpenKey(a4, 0x2000000u, &TargetKey);
    if ( v5 < 0 )
      ZwUnloadKey2(&TargetKey, 0);
  }
  return (unsigned int)v5;
}
