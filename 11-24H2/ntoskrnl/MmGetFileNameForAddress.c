/*
 * XREFs of MmGetFileNameForAddress @ 0x140A15B1C
 * Callers:
 *     DbgkPostModuleMessage @ 0x140480C54 (DbgkPostModuleMessage.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmGetFileNameForAddress(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int i; // edi
  __int64 Pool; // rax
  const void **v17; // rbx
  unsigned int v18; // eax
  unsigned int v20; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v21; // [rsp+68h] [rbp+20h] BYREF

  v20 = 0;
  v21 = 0;
  v5 = MiObtainReferencedVadEx(a1, 2LL, (int *)&v20, a4);
  v9 = v5;
  if ( !v5 )
    return 3221225793LL;
  if ( (*(_DWORD *)(v5 + 48) & 0x200000) != 0 || (v10 = **(_QWORD **)(v5 + 72), (*(_DWORD *)(v10 + 56) & 0x20) == 0) )
  {
    v20 = -1073741751;
    MiUnlockAndDereferenceVadShared(v5, v6, v7, v8);
  }
  else
  {
    v11 = (char *)MiReferenceControlAreaFile(v10);
    MiUnlockAndDereferenceVadShared(v9, v12, v13, v14);
    for ( i = 1040; ; i = v21 )
    {
      Pool = MiAllocatePool(0x100uLL, i, 538996045);
      v17 = (const void **)Pool;
      if ( !Pool )
        break;
      v21 = 0;
      v20 = ObQueryNameStringMode(v11, Pool, i, &v21, 0);
      if ( (v20 & 0x80000000) == 0 )
      {
        v18 = *(unsigned __int16 *)v17;
        *(_WORD *)(a2 + 2) = v18;
        *(_WORD *)a2 = v18;
        *(_QWORD *)(a2 + 8) = v17;
        memmove(v17, v17[1], v18);
        goto LABEL_8;
      }
      ExFreePoolWithTag(v17, 0);
      if ( v21 <= i )
        goto LABEL_8;
    }
    v20 = -1073741801;
LABEL_8:
    ObfDereferenceObjectWithTag(v11, 0x63536D4Du);
  }
  return v20;
}
