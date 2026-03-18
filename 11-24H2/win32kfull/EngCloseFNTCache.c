/*
 * XREFs of EngCloseFNTCache @ 0x140302DE4
 * Callers:
 *     EngFntCacheAllocInternal @ 0x1402687A8 (EngFntCacheAllocInternal.c)
 *     CloseFNTCache @ 0x140302D5C (CloseFNTCache.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x140114610 (ComputeFileviewCheckSum.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x140115DEC (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bSetFntCacheReg @ 0x14026C7C0 (bSetFntCacheReg.c)
 */

void __fastcall EngCloseFNTCache(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  int v4; // ecx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ecx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v4 = *(_DWORD *)(v2 + 19592);
  if ( (v4 & 3) != 0 )
  {
    v5 = *(_DWORD **)(v2 + 19600);
    if ( v5 )
    {
      if ( (v4 & 2) != 0 && *(_QWORD *)v5 && v5[5] )
      {
        *(_DWORD *)(*(_QWORD *)v5 + 20LL) = v5[2];
        *(_DWORD *)(**(_QWORD **)(v2 + 19600) + 36LL) = *(_DWORD *)(*(_QWORD *)(v2 + 19600) + 32LL)
                                                      - *(_DWORD *)(*(_QWORD *)(v2 + 19600) + 24LL);
        ***(_DWORD ***)(v2 + 19600) = ComputeFileviewCheckSum(
                                        (_DWORD *)(**(_QWORD **)(v2 + 19600) + 4LL),
                                        (unsigned int)(*(_DWORD *)(**(_QWORD **)(v2 + 19600) + 24LL) - 4));
      }
      v6 = *(_QWORD *)(v2 + 19600);
      v7 = *(unsigned int *)(v6 + 16);
      if ( (*(_DWORD *)(v2 + 19592) & 2) != 0 )
      {
        if ( *(_DWORD *)(v6 + 12) != (_DWORD)v7 )
          bSetFntCacheReg(1u, v7);
        v7 = 0LL;
        v8 = 0;
      }
      else
      {
        if ( (v7 & 3) == 0 )
        {
LABEL_14:
          vCleanUpFntCacheInternal(v6, v7, v3);
          return;
        }
        v8 = 1;
      }
      bSetFntCacheReg(v8, v7);
      goto LABEL_14;
    }
  }
  *(_DWORD *)(v2 + 19592) = 0;
  *(_BYTE *)(v2 + 19612) = 1;
}
