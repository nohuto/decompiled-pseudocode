/*
 * XREFs of SmHpChunkFree @ 0x140380F50
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14023016C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140378D1C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140381820 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     SmHpUnprotectListNeighbors @ 0x140381E34 (SmHpUnprotectListNeighbors.c)
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     SmHpBufferCleanup @ 0x140487B60 (SmHpBufferCleanup.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall SmHpChunkFree(__int64 a1, unsigned __int64 a2)
{
  signed int v3; // esi
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  unsigned int v7; // eax
  int v8; // ebp
  __int64 result; // rax
  int v10; // ecx
  _QWORD *v11; // r14
  __int64 v12; // rcx
  _QWORD *v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // r8d
  void *v16; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v3 = -1;
  v4 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v5, v4);
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v5) + 16 * (v4 ^ (unsigned int)(1 << v5)));
  *(_WORD *)a2 = *((_WORD *)v6 + 4);
  v7 = *((unsigned __int16 *)v6 + 5);
  *((_WORD *)v6 + 4) = a2 - *(_WORD *)v6;
  if ( (_WORD)v7 )
    v8 = v7 >> *(_BYTE *)(a1 + 552);
  else
    v8 = -1;
  *((_WORD *)v6 + 5) = v7 + 1;
  ++*(_DWORD *)(a1 + 560);
  result = *((unsigned __int16 *)v6 + 5);
  if ( (_WORD)result )
    v3 = (unsigned int)result >> *(_BYTE *)(a1 + 552);
  if ( v8 != v3 )
  {
    BugCheckParameter4 = 0LL;
    if ( *((_DWORD *)v6 + 3) )
    {
      v14 = wyhash(*v6, 4096LL, 0LL);
      v15 = *((_DWORD *)v6 + 3);
      v16 = (void *)*v6;
      if ( !v14 )
        v14 = 1;
      if ( v14 != v15 )
      {
        SmPrepareForFatalHeapCorruption(v16, (__int64)&BugCheckParameter4, v15, v14, (LONGLONG *)&BugCheckParameter4);
        KeBugCheckEx(0x1C7u, 0LL, *v6, *((unsigned int *)v6 + 3), BugCheckParameter4);
      }
      result = ExProtectPoolEx(v16, *v6, 4096LL, 4LL);
      *((_DWORD *)v6 + 3) = 0;
    }
    v11 = (_QWORD *)*v6;
    if ( v8 >= 0 )
    {
      SmHpUnprotectListNeighbors(a1, a1 + 16 * (v8 + 18LL), *v6);
      v12 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 )
        goto LABEL_18;
      result = v11[1];
      if ( *(_QWORD **)result != v11 )
        goto LABEL_18;
      *(_QWORD *)result = v12;
      *(_QWORD *)(v12 + 8) = result;
      if ( *(_QWORD *)(a1 + 16 * (v8 + 18LL)) == a1 + 16 * (v8 + 18LL) )
      {
        result = (unsigned int)(1 << v8);
        *(_DWORD *)(a1 + 284) ^= result;
      }
    }
    if ( v3 < 0 )
    {
      v11[1] = v11;
      *v11 = v11;
      goto LABEL_6;
    }
    v13 = (_QWORD *)(a1 + 16 * (v3 + 18LL));
    if ( (_QWORD *)*v13 == v13 )
      *(_DWORD *)(a1 + 284) ^= 1 << v3;
    else
      SmHpUnprotectListNeighbors(a1, a1 + 16 * (v3 + 18LL), 0LL);
    result = v13[1];
    if ( *(_QWORD **)result == v13 )
    {
      *v11 = v13;
      v11[1] = result;
      *(_QWORD *)result = v11;
      v13[1] = v11;
      goto LABEL_6;
    }
LABEL_18:
    __fastfail(3u);
  }
LABEL_6:
  v10 = *((unsigned __int16 *)v6 + 5);
  if ( v10 == *(_DWORD *)(a1 + 548) )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 560) - v10);
    if ( (unsigned int)result >= *(_DWORD *)(a1 + 556) )
      result = SmHpBufferCleanup(a1);
  }
  --*(_DWORD *)(a1 + 564);
  return result;
}
