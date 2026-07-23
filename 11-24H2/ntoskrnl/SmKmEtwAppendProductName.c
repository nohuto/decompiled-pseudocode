/*
 * XREFs of SmKmEtwAppendProductName @ 0x14060BE04
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x14060C0E0 (SmKmStoreTerminateWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     SmUniqueIdParseProductName @ 0x14060B270 (SmUniqueIdParseProductName.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SmKmStoreFileOpenVolume @ 0x14079B558 (SmKmStoreFileOpenVolume.c)
 *     SmKmVolumeQueryUniqueId @ 0x14079B92C (SmKmVolumeQueryUniqueId.c)
 */

LONG_PTR __fastcall SmKmEtwAppendProductName(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  void *v4; // rbp
  __int64 v5; // rdx
  wchar_t *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  wchar_t *v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // r13d
  unsigned int v19; // edi
  void *v20; // rbx
  unsigned int v21; // esi
  __int64 v22; // rax
  LONG_PTR result; // rax
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  void *v25; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  v25 = 0LL;
  v4 = 0LL;
  v24 = v3;
  if ( !v3 )
  {
    SmKmStoreFileOpenVolume(*(_QWORD *)(a2 + 8), &v25, &v24);
    v3 = v24;
    v4 = v25;
  }
  v5 = a1[1] + *((unsigned int *)a1 + 6);
  v6 = (wchar_t *)((v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = v5 + *((_DWORD *)a1 + 7) - *((_DWORD *)a1 + 6) - (_DWORD)v6;
  if ( !v3 )
    goto LABEL_7;
  v8 = 256LL;
  v9 = (v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 < 0x100 )
    v8 = v7;
  if ( (int)SmKmVolumeQueryUniqueId(v3, v9, v8) < 0 )
LABEL_7:
    *v6 = 0;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( v6[v11] );
  v12 = &v6[(unsigned int)v11 + 1];
  if ( (int)SmUniqueIdParseProductName(v6, v12, v7 - 2 * (_DWORD)v11 - 2) < 0 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    do
      ++v10;
    while ( v12[v10] );
  }
  v13 = *((unsigned int *)a1 + 6);
  v14 = a1[1];
  v15 = *((_DWORD *)a1 + 4);
  v16 = *a1;
  v17 = 2LL * v15;
  v18 = v13 + 2;
  *(_WORD *)(v13 + v14) = v10;
  v19 = v15 + 1;
  v20 = (void *)(v14 + (unsigned int)(v13 + 2));
  v21 = 2 * v10;
  *(_QWORD *)(v16 + 8 * v17) = v13 + v14;
  *(_QWORD *)(v16 + 8 * v17 + 8) = 2LL;
  if ( v12 )
    memmove(v20, v12, v21);
  v22 = v16 + 16LL * v19;
  *(_DWORD *)(v22 + 12) = 0;
  *(_QWORD *)v22 = v20;
  *(_DWORD *)(v22 + 8) = v21;
  *((_DWORD *)a1 + 4) = v19 + 1;
  result = v21 + v18;
  *((_DWORD *)a1 + 6) = result;
  if ( v4 )
    return ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return result;
}
