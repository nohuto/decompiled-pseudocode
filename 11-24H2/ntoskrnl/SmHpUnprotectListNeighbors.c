/*
 * XREFs of SmHpUnprotectListNeighbors @ 0x140381E34
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpChunkFree @ 0x140380F50 (SmHpChunkFree.c)
 *     SmHpBufferUpdateFullness @ 0x140381C40 (SmHpBufferUpdateFullness.c)
 *     SmHpChunkAlloc @ 0x140382D30 (SmHpChunkAlloc.c)
 * Callees:
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall SmHpUnprotectListNeighbors(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  void *v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // r8d
  void *v22; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp+40h] BYREF

  if ( !a3 )
  {
    result = *(_QWORD *)(a2 + 8);
    BugCheckParameter4 = 0LL;
    v13 = *(unsigned int *)(result + 16);
    _BitScanReverse((unsigned int *)&v14, v13);
    v12 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v14) + 16 * (v13 ^ (unsigned int)(1 << v14)));
    if ( !*((_DWORD *)v12 + 3) )
      return result;
    v15 = wyhash(*v12, 4096LL, 0LL);
    v16 = *((_DWORD *)v12 + 3);
    v17 = (void *)*v12;
    if ( !v15 )
      v15 = 1;
    if ( v15 != v16 )
    {
      SmPrepareForFatalHeapCorruption(v17, (__int64)&BugCheckParameter4, v16, v15, (LONGLONG *)&BugCheckParameter4);
      KeBugCheckEx(0x1C7u, 0LL, *v12, *((unsigned int *)v12 + 3), BugCheckParameter4);
    }
LABEL_15:
    result = ExProtectPoolEx(v17, v17, 4096LL, 4LL);
    *((_DWORD *)v12 + 3) = 0;
    return result;
  }
  if ( *a3 != a2 )
  {
    v6 = *(unsigned int *)(*a3 + 16LL);
    _BitScanReverse((unsigned int *)&v7, v6);
    BugCheckParameter4 = 0LL;
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v7) + 16 * (v6 ^ (unsigned int)(1 << v7)));
    if ( *((_DWORD *)v8 + 3) )
    {
      v20 = wyhash(*v8, 4096LL, 0LL);
      v21 = *((_DWORD *)v8 + 3);
      v22 = (void *)*v8;
      if ( !v20 )
        v20 = 1;
      if ( v20 != v21 )
      {
        SmPrepareForFatalHeapCorruption(v22, (__int64)&BugCheckParameter4, v21, v20, (LONGLONG *)&BugCheckParameter4);
        KeBugCheckEx(0x1C7u, 0LL, *v8, *((unsigned int *)v8 + 3), BugCheckParameter4);
      }
      ExProtectPoolEx(v22, *v8, 4096LL, 4LL);
      *((_DWORD *)v8 + 3) = 0;
    }
  }
  result = a3[1];
  if ( result != a2 )
  {
    v10 = *(unsigned int *)(result + 16);
    _BitScanReverse((unsigned int *)&v11, v10);
    BugCheckParameter4 = 0LL;
    v12 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v11) + 16 * (v10 ^ (unsigned int)(1 << v11)));
    if ( *((_DWORD *)v12 + 3) )
    {
      v18 = wyhash(*v12, 4096LL, 0LL);
      v19 = *((_DWORD *)v12 + 3);
      v17 = (void *)*v12;
      if ( !v18 )
        v18 = 1;
      if ( v18 != v19 )
      {
        SmPrepareForFatalHeapCorruption(v17, (__int64)&BugCheckParameter4, v19, v18, (LONGLONG *)&BugCheckParameter4);
        KeBugCheckEx(0x1C7u, 0LL, *v12, *((unsigned int *)v12 + 3), BugCheckParameter4);
      }
      goto LABEL_15;
    }
  }
  return result;
}
