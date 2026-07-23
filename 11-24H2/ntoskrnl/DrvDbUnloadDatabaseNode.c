/*
 * XREFs of DrvDbUnloadDatabaseNode @ 0x140927E0C
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140822E34 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x140824478 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140927308 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140927C38 (DrvDbLoadDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A85194 (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PiDrvDbNodeActionCallback @ 0x140927F50 (PiDrvDbNodeActionCallback.c)
 */

__int64 __fastcall DrvDbUnloadDatabaseNode(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(int, int, int, int, __int64, __int64); // rsi
  NTSTATUS v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  _QWORD *v12; // r14
  unsigned int v13; // ebp
  HANDLE *v14; // r14
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64))(a2 + 80);
  v3 = 0;
  v15 = 0LL;
  if ( v2 )
  {
    v15 = a2 + 96;
    v6 = *(_QWORD *)(a2 + 88);
    v7 = *(_QWORD *)(a2 + 24);
    if ( v2 == PiDrvDbNodeActionCallback )
      v8 = PiDrvDbNodeActionCallback(a1, v7, 2, 1, (__int64)&v15, v6);
    else
      v8 = guard_dispatch_icall_no_overrides(a1, v7);
    if ( v8 == -1073741822 )
    {
      v2 = 0LL;
    }
    else if ( v8 < 0 )
    {
      v3 = v8;
LABEL_8:
      v9 = *(_QWORD *)(a2 + 24);
      if ( v2 == PiDrvDbNodeActionCallback )
        v10 = PiDrvDbNodeActionCallback(a1, v9, 2, 2, (__int64)&v15, *(_QWORD *)(a2 + 88));
      else
        v10 = guard_dispatch_icall_no_overrides(a1, v9);
      if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741822 && !v3 )
        return v10;
      return (unsigned int)v3;
    }
  }
  if ( *(_QWORD *)(a2 + 96) )
  {
    v12 = (_QWORD *)(a2 + 96);
    if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
    {
      v13 = 0;
      v14 = (HANDLE *)(a2 + 104);
      do
      {
        if ( *v14 )
        {
          v3 = ZwClose(*v14);
          if ( v3 < 0 )
            goto LABEL_7;
          *v14 = 0LL;
        }
        ++v13;
        ++v14;
      }
      while ( v13 < 6 );
      v12 = (_QWORD *)(a2 + 96);
    }
    v3 = ZwClose(*(HANDLE *)(a2 + 96));
    if ( v3 >= 0 )
      *v12 = 0LL;
  }
LABEL_7:
  if ( v2 )
    goto LABEL_8;
  return (unsigned int)v3;
}
