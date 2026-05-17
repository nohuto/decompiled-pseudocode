/*
 * XREFs of LdrpLoadContextReplaceModule @ 0x1800D6BB8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x180074A60 (LdrpLoadKnownDll.c)
 *     LdrpMapDllSearchPath @ 0x180074F30 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180075388 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x1800D5ED0 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpDependencyExist @ 0x1800D6D20 (LdrpDependencyExist.c)
 *     LdrpQueueWork @ 0x1800D6D64 (LdrpQueueWork.c)
 */

__int64 __fastcall LdrpLoadContextReplaceModule(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // rdi
  int v7; // eax
  _QWORD **v8; // rcx
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // rbp
  _QWORD *v12; // r9
  _QWORD **v13; // rcx
  _QWORD *i; // rdx
  _QWORD **v15; // rax
  int v16; // eax
  _QWORD *v19; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock, (volatile signed __int32 **)a2, a3);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v6 = *(_QWORD *)(a2 + 152);
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 != -1 )
    *(_DWORD *)(v6 + 24) = v7 + 1;
  *(_DWORD *)(v5 + 24) = 0;
  v8 = *(_QWORD ***)(v5 + 48);
  if ( v8 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      *(_QWORD *)(v5 + 48) = 0LL;
    else
      *v8 = (_QWORD *)*v9;
    LdrpDereferenceModule(a2);
    v10 = v9[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v11 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
    if ( (unsigned __int8)LdrpDependencyExist(v10, v6) )
    {
      v13 = *(_QWORD ***)(v10 + 40);
      for ( i = *v13; i != v12; i = (_QWORD *)*i )
        v13 = (_QWORD **)i;
      *v13 = (_QWORD *)*v12;
      if ( *(_QWORD **)(v10 + 40) == v12 )
      {
        v15 = 0LL;
        if ( v13 != v12 )
          v15 = v13;
        *(_QWORD *)(v10 + 40) = v15;
      }
      v16 = *(_DWORD *)(v6 + 24);
      if ( v16 != -1 )
        *(_DWORD *)(v6 + 24) = v16 - 1;
      RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v12);
      v12 = 0LL;
    }
    else
    {
      v12[1] = v6;
      v19 = *(_QWORD **)(v6 + 48);
      if ( v19 )
      {
        *v9 = *v19;
        *v19 = v9;
      }
      else
      {
        *v9 = v9;
      }
      *(_QWORD *)(v6 + 48) = v9;
    }
    if ( v11 && (*(int *)(v6 + 56) >= 2 || !v12) && (*(_DWORD *)(v11 + 108))-- == 1 )
    {
      *(_DWORD *)(v10 + 56) = 4;
      LdrpQueueWork(v11);
    }
  }
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
