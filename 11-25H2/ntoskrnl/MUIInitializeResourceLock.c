/*
 * XREFs of MUIInitializeResourceLock @ 0x140A16C28
 * Callers:
 *     NtFlushInstallUILanguage @ 0x1407B4A60 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x1407B4B70 (NtMapCMFModule.c)
 *     NtGetMUIRegistryInfo @ 0x140A168A0 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x1403A42F0 (ExDeleteResourceLite.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MUIInitializeResourceLock(volatile signed __int64 *a1)
{
  unsigned int v2; // edi
  struct _ERESOURCE *Pool2; // rax
  struct _ERESOURCE *v4; // rbx

  if ( a1 )
  {
    if ( *a1 )
    {
      return 0;
    }
    else
    {
      Pool2 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL);
      v4 = Pool2;
      if ( Pool2 )
      {
        v2 = ExInitializeResourceLite(Pool2);
        if ( (v2 & 0xC0000000) == 0xC0000000 )
          goto LABEL_12;
        if ( _InterlockedCompareExchange64(a1, (signed __int64)v4, 0LL) )
          ExDeleteResourceLite(v4);
        else
          v4 = 0LL;
        v2 = 0;
        if ( v4 )
LABEL_12:
          ExFreePoolWithTag(v4, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
