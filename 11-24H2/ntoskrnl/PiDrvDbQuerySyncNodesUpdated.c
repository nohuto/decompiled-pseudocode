/*
 * XREFs of PiDrvDbQuerySyncNodesUpdated @ 0x140735C50
 * Callers:
 *     PpDevCfgInit @ 0x140C26FC4 (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _PnpCtxRegCreateTree @ 0x140928268 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbQuerySyncNodesUpdated(char a1, char *a2)
{
  char v3; // r12
  ULONG BufferLengthIn; // esi
  WCHAR *TargetPath; // rdi
  NTSTATUS PersistedStateLocation; // eax
  int v8; // ebx
  __int64 i; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v14; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+64h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h] BYREF
  __int64 Source2; // [rsp+70h] [rbp-10h] BYREF
  __int64 Source1; // [rsp+78h] [rbp-8h] BYREF
  ULONG BufferLengthOut; // [rsp+D0h] [rbp+50h] BYREF
  int v20; // [rsp+D8h] [rbp+58h] BYREF

  v3 = 0;
  Handle = 0LL;
  Source1 = 0LL;
  Source2 = 0LL;
  BufferLengthIn = 520;
  v20 = 0;
  v14 = 0;
  v15 = 0;
  for ( BufferLengthOut = 0; ; BufferLengthIn = BufferLengthOut )
  {
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL, BufferLengthIn, 0x62647050u);
    if ( !TargetPath )
    {
      v8 = -1073741670;
      goto LABEL_28;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"DriverDatabaseUpdates",
                               0LL,
                               L"\\Registry\\Machine\\System\\DriverDatabase\\Updates",
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    v8 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    ExFreePoolWithTag(TargetPath, 0);
    TargetPath = 0LL;
    if ( BufferLengthOut <= BufferLengthIn )
    {
      v8 = -1073741595;
      goto LABEL_28;
    }
  }
  if ( PersistedStateLocation >= 0 )
  {
    v8 = PnpCtxRegCreateTree(0LL, 0LL, TargetPath, 0LL, 131103, 0LL, &Handle, 0LL);
    if ( v8 >= 0 )
    {
      for ( i = PiDrvDbNodeList; (__int64 *)i != &PiDrvDbNodeList; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 64) & 4) == 0 || !PnpBootMode )
        {
          if ( (int)PnpGetObjectProperty(
                      PiPnpRtlCtx,
                      *(_QWORD *)(i + 24),
                      7,
                      *(_QWORD *)(i + 72),
                      0LL,
                      (__int64)DEVPKEY_DriverDatabase_LastUpdateDate,
                      (__int64)&v20,
                      (__int64)&Source1,
                      8,
                      (__int64)&v14,
                      0) >= 0
            && v20 == 16
            && v14 == 8 )
          {
            v11 = *(_QWORD *)(i + 24);
            BufferLengthOut = 8;
            v8 = PnpCtxRegQueryValue(v10, Handle, v11, &v15, &Source2, &BufferLengthOut);
            if ( v8 < 0 || v15 != 3 || BufferLengthOut != 8 )
            {
              v8 = 0;
              Source2 = 0LL;
            }
            if ( RtlCompareMemory(&Source1, &Source2, 8uLL) != 8 )
            {
              v3 = 1;
              if ( !a1 )
                break;
              v8 = PnpCtxRegSetValue(v12, Handle, *(_QWORD *)(i + 24), 3LL, &Source1, 8);
              if ( v8 < 0 )
                goto LABEL_28;
            }
          }
          else
          {
            v8 = 0;
          }
        }
      }
      if ( a2 )
        *a2 = v3;
    }
  }
LABEL_28:
  if ( Handle )
    ZwClose(Handle);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  return (unsigned int)v8;
}
