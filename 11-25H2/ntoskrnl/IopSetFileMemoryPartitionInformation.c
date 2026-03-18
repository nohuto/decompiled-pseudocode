/*
 * XREFs of IopSetFileMemoryPartitionInformation @ 0x140708F44
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateFileObjectExtension @ 0x1402A2840 (IopAllocateFileObjectExtension.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     IopSetTypeSpecificFoExtension @ 0x14044C938 (IopSetTypeSpecificFoExtension.c)
 *     PsReferencePartitionByHandle @ 0x14093B9BC (PsReferencePartitionByHandle.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetFileMemoryPartitionInformation(__int64 a1, __int128 *a2, unsigned int a3)
{
  int v5; // ebx
  int v6; // eax
  _DWORD *Pool2; // rdi
  int v8; // eax
  PVOID v9; // rbp
  int v10; // eax
  __int64 *v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+38h] [rbp-30h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  Object = 0LL;
  if ( a3 < 0x10 )
    return (unsigned int)-1073741811;
  v6 = *((_DWORD *)a2 + 2);
  v13 = *a2;
  if ( (unsigned __int8)v6 > 1u )
    return (unsigned int)-1073741811;
  BYTE8(v13) = 0;
  if ( DWORD2(v13) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v8 = PsReferencePartitionByHandle(*(_QWORD *)a2, 2LL, 0LL, 1716547401LL, &Object);
      v9 = Object;
      v5 = v8;
      if ( v8 >= 0 )
      {
        ObfReferenceObjectWithTag(Object, 0x6F466F49u);
        PsDereferencePartition((__int64)v9);
        v10 = Pool2[2];
        *(_QWORD *)Pool2 = v9;
        Pool2[2] = v10 ^ ((unsigned __int8)v10 ^ *((_BYTE *)a2 + 8)) & 1;
        v5 = IopAllocateFileObjectExtension(a1, &v12, 0);
        if ( v5 >= 0 )
        {
          if ( (int)IopSetTypeSpecificFoExtension((__int64)v12, 8u, (signed __int64)Pool2) >= 0 )
            return 0;
          v5 = -1073741791;
        }
      }
      if ( *(_QWORD *)Pool2 )
        ObfDereferenceObjectWithTag(v9, 0x6F466F49u);
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
