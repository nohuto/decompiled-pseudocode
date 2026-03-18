/*
 * XREFs of IopGetLegacyVetoListDrivers @ 0x1409B9634
 * Callers:
 *     IoGetLegacyVetoList @ 0x1409B9120 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x1409B923C (PopFilterCapabilities.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfW @ 0x14040BC90 (RtlStringCbPrintfW.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1406A6F10 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1406A8DD0 (ZwQueryDirectoryObject.c)
 *     IopAppendLegacyVeto @ 0x1407330BC (IopAppendLegacyVeto.c)
 *     ObReferenceObjectByName @ 0x14083F230 (ObReferenceObjectByName.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopGetLegacyVetoListDrivers(__int64 a1)
{
  _QWORD *Pool2; // rsi
  char v3; // r13
  NTSTATUS v4; // ecx
  unsigned __int16 v5; // r15
  _WORD *v6; // rax
  void *v7; // rbx
  int DirectoryObject; // eax
  unsigned __int16 v9; // r14
  __int64 v10; // r9
  PVOID v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-59h]
  PVOID Object; // [rsp+40h] [rbp-39h] BYREF
  __int128 v14; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  int v17; // [rsp+E8h] [rbp+6Fh] BYREF
  int v18; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE DirectoryHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Object = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v15[1] = L"\\Driver";
  v15[0] = 1048590LL;
  v17 = 0;
  v18 = 0;
  DirectoryHandle = 0LL;
  Pool2 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v3 = 1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  v14 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v4 < 0 )
  {
    **(_DWORD **)(a1 + 24) = v4;
LABEL_14:
    v7 = (void *)*((_QWORD *)&v14 + 1);
    goto LABEL_15;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
    goto LABEL_14;
  }
  v5 = 188;
  LODWORD(v14) = 12320768;
  v6 = (_WORD *)ExAllocatePool2(0x100uLL);
  *((_QWORD *)&v14 + 1) = v6;
  v7 = v6;
  if ( v6 )
  {
    *v6 = 0;
    while ( 1 )
    {
      LOBYTE(v12) = v3;
      DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
      if ( DirectoryObject == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          break;
        LOBYTE(v12) = v3;
        DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
      }
      v3 = 0;
      if ( DirectoryObject < 0 )
        goto LABEL_15;
      v9 = *(_WORD *)Pool2 + 18;
      if ( v9 > v5 )
      {
        ExFreePoolWithTag(v7, 0);
        WORD1(v14) = v9;
        v5 = v9;
        *((_QWORD *)&v14 + 1) = ExAllocatePool2(0x100uLL);
        v7 = (void *)*((_QWORD *)&v14 + 1);
        if ( !*((_QWORD *)&v14 + 1) )
          break;
      }
      v10 = Pool2[1];
      LOWORD(v14) = v9 - 2;
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v7, v5, L"\\Driver\\%ws", v10, v12, &v18, &v17);
      if ( (int)ObReferenceObjectByName(
                  (__int64)&v14,
                  576LL,
                  0LL,
                  0,
                  (__int64)IoDriverObjectType,
                  0,
                  0LL,
                  (PADAPTER_OBJECT *)&Object) >= 0 )
      {
        v11 = Object;
        if ( (*((_DWORD *)Object + 4) & 0x40) != 0 )
        {
          **(_DWORD **)(a1 + 16) = 11;
          if ( *(_QWORD *)a1 )
            IopAppendLegacyVeto((const void ***)a1, (const void **)Pool2);
        }
        ObfDereferenceObject(v11);
        if ( **(_DWORD **)(a1 + 16) == 11 && !*(_QWORD *)a1 )
          goto LABEL_14;
        if ( **(int **)(a1 + 24) < 0 )
          goto LABEL_14;
      }
      v7 = (void *)*((_QWORD *)&v14 + 1);
      v5 = WORD1(v14);
    }
  }
  **(_DWORD **)(a1 + 24) = -1073741670;
LABEL_15:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
}
