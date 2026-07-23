/*
 * XREFs of _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409AA8EC
 * Callers:
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409AA710 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PnpIsValidGuidString @ 0x1408B5960 (PnpIsValidGuidString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140A85920 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceInterfaceListWorker(
        __int64 a1,
        const WCHAR *a2,
        const wchar_t *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _WORD *a7,
        unsigned int a8,
        _DWORD *a9,
        __int16 a10)
{
  __int64 v11; // rdi
  int CachedContextBaseKey; // ebx
  int v13; // r12d
  char v14; // bp
  int v15; // eax
  __int64 Pool2; // rax
  int v17; // eax
  void *v18; // rcx
  __int64 v19; // rax
  HANDLE Handle; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-50h] BYREF
  __int128 v23; // [rsp+40h] [rbp-48h]

  v22 = 0LL;
  *a9 = 0;
  v11 = 0LL;
  Handle = 0LL;
  v23 = 0LL;
  if ( a8 )
    *a7 = 0;
  if ( (a4 & 0xFFFFFFFE) != 0 || a10 )
    goto LABEL_4;
  v13 = 1;
  v14 = a4 & 1;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, &v22);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_23;
  if ( a2 )
  {
    if ( PnpIsValidGuidString(a2) )
    {
      v13 = 2;
      goto LABEL_10;
    }
LABEL_4:
    CachedContextBaseKey = -1073741811;
    goto LABEL_23;
  }
LABEL_10:
  v15 = PnpCtxRegOpenKey(a1, v22, (__int64)a2, 0, 8u, (__int64)&Handle);
  CachedContextBaseKey = v15;
  if ( v15 == -1073741444 )
  {
    CachedContextBaseKey = -1073741595;
  }
  else if ( v15 >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x5B8uLL, 0x52504E50u);
    v11 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = v13;
      RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(Pool2 + 1012), 0xC8uLL, a3, 0LL, 0LL, 0x900u);
      *(_QWORD *)(v11 + 1432) = a5;
      *(_QWORD *)(v11 + 1440) = a6;
      *(_QWORD *)(v11 + 1416) = 0LL;
      *(_DWORD *)(v11 + 1424) = 0;
      *(_BYTE *)(v11 + 1428) = v14;
      *(_QWORD *)(v11 + 1448) = a7;
      *(_DWORD *)(v11 + 1456) = a8;
      *(_DWORD *)(v11 + 1460) = 0;
      v17 = PnpCtxRegEnumKeyWithCallback(a1, Handle, CmDeviceClassesSubkeyCallback, v11);
      v18 = *(void **)(v11 + 1416);
      CachedContextBaseKey = v17;
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      if ( CachedContextBaseKey >= 0 )
      {
        v19 = *(unsigned int *)(v11 + 1460);
        *a9 = v19;
        if ( (_DWORD)v19 )
        {
          *a9 = v19 + 1;
          if ( a7 && a8 >= (int)v19 + 1 )
            a7[v19] = 0;
          else
            CachedContextBaseKey = -1073741789;
        }
      }
    }
    else
    {
      CachedContextBaseKey = -1073741801;
    }
  }
LABEL_23:
  if ( *((_QWORD *)&v23 + 1) )
    ExFreePool(*((PVOID *)&v23 + 1));
  if ( v11 )
    ExFreePoolWithTag((PVOID)v11, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
