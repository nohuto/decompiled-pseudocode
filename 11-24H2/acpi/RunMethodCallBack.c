/*
 * XREFs of RunMethodCallBack @ 0x14006E600
 * Callers:
 *     DebugRunMethod @ 0x14006E170 (DebugRunMethod.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     DumpObject @ 0x14006BA88 (DumpObject.c)
 */

void __fastcall RunMethodCallBack(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  const char *v6; // rdx
  void *v7; // rbx
  __int64 v8; // rdx
  __int64 ObjectPath; // rax
  const char *v10; // rdx
  void *v11; // rbx

  v3 = *a1;
  if ( a2 )
  {
    if ( dword_1400890B8 )
    {
      ObjectPath = GetObjectPath(v3);
      v10 = byte_1400753E8;
      v11 = (void *)ObjectPath;
      if ( ObjectPath )
        v10 = (const char *)ObjectPath;
      ConPrintf("\n%s failed with the following error:\n%s\n", v10, pszDest);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
  }
  else
  {
    v5 = GetObjectPath(v3);
    v6 = byte_1400753E8;
    v7 = (void *)v5;
    if ( v5 )
      v6 = (const char *)v5;
    ConPrintf("\n%s completed successfully with object data:\n", v6);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    DumpObject(a3, v8, 0);
  }
  fRunningMethod = 0;
}
