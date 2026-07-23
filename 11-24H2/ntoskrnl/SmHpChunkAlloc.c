/*
 * XREFs of SmHpChunkAlloc @ 0x140382D30
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14023016C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404AC5C0 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     SmHpBufferAlloc @ 0x140381B00 (SmHpBufferAlloc.c)
 *     SmHpUnprotectListNeighbors @ 0x140381E34 (SmHpUnprotectListNeighbors.c)
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

_WORD *__fastcall SmHpChunkAlloc(__int64 a1)
{
  unsigned int v3; // ecx
  int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  _WORD *v9; // r15
  unsigned int v10; // eax
  int v11; // esi
  unsigned int v12; // eax
  _QWORD *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  _QWORD *v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // r8d
  void *v21; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  while ( !_BitScanForward(&v3, *(_DWORD *)(a1 + 284)) )
  {
    if ( !SmHpBufferAlloc((_DWORD *)a1) )
      return 0LL;
  }
  LODWORD(BugCheckParameter4) = 0;
  v4 = -1;
  v5 = *(_QWORD *)(a1 + 16 * (v3 + 18LL));
  v6 = *(unsigned int *)(v5 + 16);
  _BitScanReverse((unsigned int *)&v7, v6);
  v8 = *(_QWORD *)(a1 + 8 * v7) + 16 * (v6 ^ (unsigned int)(1 << v7));
  v9 = (_WORD *)(v5 + *(unsigned __int16 *)(v8 + 8));
  *(_WORD *)(v8 + 8) = *v9;
  v10 = *(unsigned __int16 *)(v8 + 10);
  if ( (_WORD)v10 )
    v11 = v10 >> *(_BYTE *)(a1 + 552);
  else
    v11 = -1;
  *(_WORD *)(v8 + 10) = v10 - 1;
  --*(_DWORD *)(a1 + 560);
  v12 = *(unsigned __int16 *)(v8 + 10);
  if ( (_WORD)v12 )
    v4 = v12 >> *(_BYTE *)(a1 + 552);
  if ( v11 != v4 )
  {
    BugCheckParameter4 = 0LL;
    if ( *(_DWORD *)(v8 + 12) )
    {
      v19 = wyhash(*(_QWORD **)v8, 0x1000uLL, 0LL);
      v20 = *(_DWORD *)(v8 + 12);
      v21 = *(void **)v8;
      if ( !v19 )
        v19 = 1;
      if ( v19 != v20 )
      {
        SmPrepareForFatalHeapCorruption(v21, (__int64)&BugCheckParameter4, v20, v19, (LONGLONG *)&BugCheckParameter4);
        KeBugCheckEx(0x1C7u, 0LL, *(_QWORD *)v8, *(unsigned int *)(v8 + 12), BugCheckParameter4);
      }
      ExProtectPoolEx((unsigned __int64)v21, *(_QWORD *)v8, 4096LL, 4u);
      *(_DWORD *)(v8 + 12) = 0;
    }
    v14 = *(_QWORD **)v8;
    if ( v11 >= 0 )
    {
      SmHpUnprotectListNeighbors(a1, a1 + 16 * (v11 + 18LL), v14);
      v15 = *v14;
      if ( *(_QWORD **)(*v14 + 8LL) != v14 )
        goto LABEL_20;
      v16 = (_QWORD *)v14[1];
      if ( (_QWORD *)*v16 != v14 )
        goto LABEL_20;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      if ( *(_QWORD *)(a1 + 16 * (v11 + 18LL)) == a1 + 16 * (v11 + 18LL) )
        *(_DWORD *)(a1 + 284) ^= 1 << v11;
    }
    if ( v4 < 0 )
    {
      v14[1] = v14;
      *v14 = v14;
      goto LABEL_8;
    }
    v17 = (_QWORD *)(a1 + 16 * (v4 + 18LL));
    if ( (_QWORD *)*v17 == v17 )
      *(_DWORD *)(a1 + 284) ^= 1 << v4;
    else
      SmHpUnprotectListNeighbors(a1, a1 + 16 * (v4 + 18LL), 0LL);
    v18 = (_QWORD *)v17[1];
    if ( (_QWORD *)*v18 == v17 )
    {
      *v14 = v17;
      v14[1] = v18;
      *v18 = v14;
      v17[1] = v14;
      goto LABEL_8;
    }
LABEL_20:
    __fastfail(3u);
  }
LABEL_8:
  ++*(_DWORD *)(a1 + 564);
  return v9;
}
