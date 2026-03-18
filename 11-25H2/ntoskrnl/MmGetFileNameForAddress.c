/*
 * XREFs of MmGetFileNameForAddress @ 0x140899218
 * Callers:
 *     DbgkPostModuleMessage @ 0x140484DC4 (DbgkPostModuleMessage.c)
 *     EtwpProviderArrivalCallback @ 0x140899014 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmGetFileNameForAddress(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rbx
  __int64 v5; // rcx
  void *v7; // rbp
  unsigned int i; // edi
  __int64 Pool; // rax
  const void **v10; // rbx
  unsigned int v11; // eax
  unsigned int NameStringMode; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  NameStringMode = 0;
  v13 = 0;
  v3 = MiObtainReferencedVadEx(a1, 2, (int *)&NameStringMode);
  v4 = (void *)v3;
  if ( !v3 )
    return 3221225793LL;
  if ( (*(_DWORD *)(v3 + 48) & 0x200000) == 0 && (v5 = **(_QWORD **)(v3 + 72), (*(_DWORD *)(v5 + 56) & 0x20) != 0) )
  {
    v7 = (void *)MiReferenceControlAreaFile(v5);
    MiUnlockAndDereferenceVadShared(v4);
    for ( i = 1040; ; i = v13 )
    {
      Pool = MiAllocatePool(0x100uLL, i, 538996045);
      v10 = (const void **)Pool;
      if ( !Pool )
        break;
      v13 = 0;
      NameStringMode = ObQueryNameStringMode((_DWORD)v7, Pool, i, (unsigned int)&v13, 0);
      if ( (NameStringMode & 0x80000000) == 0 )
      {
        v11 = *(unsigned __int16 *)v10;
        *(_WORD *)(a2 + 2) = v11;
        *(_WORD *)a2 = v11;
        *(_QWORD *)(a2 + 8) = v10;
        memmove(v10, v10[1], v11);
        goto LABEL_10;
      }
      ExFreePoolWithTag(v10, 0);
      if ( v13 <= i )
        goto LABEL_10;
    }
    NameStringMode = -1073741801;
LABEL_10:
    ObfDereferenceObjectWithTag(v7, 0x63536D4Du);
  }
  else
  {
    NameStringMode = -1073741751;
    MiUnlockAndDereferenceVadShared((PVOID)v3);
  }
  return NameStringMode;
}
