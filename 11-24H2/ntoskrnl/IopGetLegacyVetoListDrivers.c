/*
 * XREFs of IopGetLegacyVetoListDrivers @ 0x14099FC84
 * Callers:
 *     IoGetLegacyVetoList @ 0x14099F770 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1406A7EB0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1406A9D70 (ZwQueryDirectoryObject.c)
 *     IopAppendLegacyVeto @ 0x140730FF0 (IopAppendLegacyVeto.c)
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopGetLegacyVetoListDrivers(__int64 a1)
{
  _QWORD *Pool2; // rsi
  BOOLEAN RestartScan; // r13
  NTSTATUS v4; // ecx
  ULONG v5; // r12d
  unsigned __int16 v6; // r15
  _WORD *v7; // rax
  void *v8; // rbx
  NTSTATUS v9; // eax
  unsigned __int16 v10; // r14
  __int64 v11; // r9
  PVOID v12; // rbx
  PVOID Object; // [rsp+40h] [rbp-39h] BYREF
  __int128 v14; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  ULONG Length; // [rsp+E8h] [rbp+6Fh] BYREF
  ULONG Context; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE DirectoryHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Object = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v15[1] = L"\\Driver";
  v15[0] = 1048590LL;
  Length = 0;
  Context = 0;
  DirectoryHandle = 0LL;
  Pool2 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  RestartScan = 1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  v14 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v4 < 0 )
  {
    **(_DWORD **)(a1 + 24) = v4;
LABEL_14:
    v8 = (void *)*((_QWORD *)&v14 + 1);
    goto LABEL_15;
  }
  v5 = 202;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0xCAuLL, 0x6F697050u);
  if ( !Pool2 )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
    goto LABEL_14;
  }
  v6 = 188;
  LODWORD(v14) = 12320768;
  v7 = (_WORD *)ExAllocatePool2(0x100uLL, 0xBCuLL, 0x6F697050u);
  *((_QWORD *)&v14 + 1) = v7;
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    while ( 1 )
    {
      v9 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, v5, 1u, RestartScan, &Context, &Length);
      if ( v9 == -1073741789 )
      {
        v5 = Length;
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, v5, 0x6F697050u);
        if ( !Pool2 )
          break;
        v9 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, v5, 1u, RestartScan, &Context, &Length);
      }
      RestartScan = 0;
      if ( v9 < 0 )
        goto LABEL_15;
      v10 = *(_WORD *)Pool2 + 18;
      if ( v10 > v6 )
      {
        ExFreePoolWithTag(v8, 0);
        WORD1(v14) = v10;
        v6 = v10;
        *((_QWORD *)&v14 + 1) = ExAllocatePool2(0x100uLL, v10, 0x6F697050u);
        v8 = (void *)*((_QWORD *)&v14 + 1);
        if ( !*((_QWORD *)&v14 + 1) )
          break;
      }
      v11 = Pool2[1];
      LOWORD(v14) = v10 - 2;
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v8, v6, L"\\Driver\\%ws", v11);
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
        v12 = Object;
        if ( (*((_DWORD *)Object + 4) & 0x40) != 0 )
        {
          **(_DWORD **)(a1 + 16) = 11;
          if ( *(_QWORD *)a1 )
            IopAppendLegacyVeto((const void ***)a1, (const void **)Pool2);
        }
        ObfDereferenceObject(v12);
        if ( **(_DWORD **)(a1 + 16) == 11 && !*(_QWORD *)a1 )
          goto LABEL_14;
        if ( **(int **)(a1 + 24) < 0 )
          goto LABEL_14;
      }
      v8 = (void *)*((_QWORD *)&v14 + 1);
      v6 = WORD1(v14);
    }
  }
  **(_DWORD **)(a1 + 24) = -1073741670;
LABEL_15:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
}
