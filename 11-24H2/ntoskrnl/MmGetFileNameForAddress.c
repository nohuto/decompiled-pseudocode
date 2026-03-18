/*
 * XREFs of MmGetFileNameForAddress @ 0x140838768
 * Callers:
 *     DbgkPostModuleMessage @ 0x140485670 (DbgkPostModuleMessage.c)
 *     EtwpProviderArrivalCallback @ 0x140838564 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmGetFileNameForAddress(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  void *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int i; // edi
  __int64 Pool; // rax
  const void **v15; // rbx
  unsigned int v16; // eax
  unsigned int NameStringMode; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v19; // [rsp+68h] [rbp+20h] BYREF

  NameStringMode = 0;
  v19 = 0;
  v3 = MiObtainReferencedVadEx(a1, 2LL, (int *)&NameStringMode);
  v7 = v3;
  if ( !v3 )
    return 3221225793LL;
  if ( (*(_DWORD *)(v3 + 48) & 0x200000) != 0 || (v8 = **(_QWORD **)(v3 + 72), (*(_DWORD *)(v8 + 56) & 0x20) == 0) )
  {
    NameStringMode = -1073741751;
    MiUnlockAndDereferenceVadShared(v3, v4, v5, v6);
  }
  else
  {
    v9 = (void *)MiReferenceControlAreaFile(v8);
    MiUnlockAndDereferenceVadShared(v7, v10, v11, v12);
    for ( i = 1040; ; i = v19 )
    {
      Pool = MiAllocatePool(0x100uLL, i, 538996045);
      v15 = (const void **)Pool;
      if ( !Pool )
        break;
      v19 = 0;
      NameStringMode = ObQueryNameStringMode((_DWORD)v9, Pool, i, (unsigned int)&v19, 0);
      if ( (NameStringMode & 0x80000000) == 0 )
      {
        v16 = *(unsigned __int16 *)v15;
        *(_WORD *)(a2 + 2) = v16;
        *(_WORD *)a2 = v16;
        *(_QWORD *)(a2 + 8) = v15;
        memmove(v15, v15[1], v16);
        goto LABEL_8;
      }
      ExFreePoolWithTag(v15, 0);
      if ( v19 <= i )
        goto LABEL_8;
    }
    NameStringMode = -1073741801;
LABEL_8:
    ObfDereferenceObjectWithTag(v9, 0x63536D4Du);
  }
  return NameStringMode;
}
