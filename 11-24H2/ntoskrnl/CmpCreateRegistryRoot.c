/*
 * XREFs of CmpCreateRegistryRoot @ 0x140C48EC4
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x140853260 (ObInsertObject.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     EnlistKeyBodyWithKCB @ 0x140990790 (EnlistKeyBodyWithKCB.c)
 *     CmpTryToLockKcbExclusive @ 0x1409DB8E0 (CmpTryToLockKcbExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpCreateRootNode @ 0x140C490B0 (CmpCreateRootNode.c)
 */

__int64 __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  int inserted; // edi
  ACL *v3; // rbx
  unsigned int v4; // eax
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rax
  _DWORD *v7; // rbx
  ULONG_PTR v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v11[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v12; // [rsp+68h] [rbp+Fh]
  UNICODE_STRING *v13; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+7Ch] [rbp+23h]
  ACL *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]
  PVOID v18; // [rsp+C0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh] BYREF

  Object = 0LL;
  v11[1] = 0;
  v15 = 0;
  BugCheckParameter2 = 0LL;
  LODWORD(v18) = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  inserted = CmpCreateRootNode(a1, a2, &v18);
  if ( inserted >= 0 )
  {
    v3 = CmpHiveRootSecurityDescriptor();
    v11[0] = 48;
    v12 = 0LL;
    v13 = &CmRegistryRootName;
    v14 = 576;
    v16 = v3;
    v17 = 0LL;
    inserted = ObCreateObject(0, CmKeyObjectType, (__int64)v11, 0, 0, 112, 0, 0, &Object);
    ExFreePoolWithTag(v3, 0);
    if ( inserted >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"REGISTRY");
      v4 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
      inserted = CmpCreateKeyControlBlock(
                   CmpMasterHive,
                   (unsigned int)v18,
                   0LL,
                   0LL,
                   0,
                   &DestinationString.Length,
                   v4,
                   0,
                   &BugCheckParameter2);
      if ( inserted >= 0 )
      {
        v5 = Object;
        v6 = BugCheckParameter2;
        *(_DWORD *)Object = 1803104306;
        v5[1] = v6;
        v5[2] = 0LL;
        v7 = Object;
        *((_QWORD *)Object + 3) = KeGetCurrentThread()[1].CycleTime;
        v8 = BugCheckParameter2;
        v7[12] = 0;
        *((_QWORD *)v7 + 10) = v7 + 18;
        *((_QWORD *)v7 + 9) = v7 + 18;
        *((_QWORD *)v7 + 7) = 0LL;
        *((_QWORD *)v7 + 8) = 0LL;
        CmpTryToLockKcbExclusive(v8);
        EnlistKeyBodyWithKCB((signed __int64)v7, 2);
        CmpUnlockKcb(BugCheckParameter2);
        inserted = ObInsertObject(v7, 0LL, 0, 0, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          v18 = 0LL;
          inserted = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v18, 0LL);
          CmpRegistryRootObject = v18;
          if ( inserted >= 0 )
            return 0;
          else
            ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return (unsigned int)inserted;
}
