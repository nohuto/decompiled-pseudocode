/*
 * XREFs of MiInsertMdlPageNeedsZero @ 0x14038C62C
 * Callers:
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1404168F8 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140A8E124 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertMdlPageNeedsZero(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edx
  unsigned __int64 v6; // r9
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rcx

  v5 = a1[9] % a1[6];
  ++a1[9];
  v6 = (unsigned __int64)v5 << 7;
  v7 = (_QWORD *)((char *)a1 + v6 + 280);
  if ( (_QWORD *)*v7 == v7 )
    ++a1[10];
  v8 = (_QWORD *)v7[1];
  if ( (_QWORD *)*v8 != v7 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 8) = v8;
  *(_QWORD *)a2 = v7;
  *v8 = a2;
  v7[1] = a2;
  *(_QWORD *)((char *)a1 + v6 + 272) += a3;
  result = HIWORD(*(_DWORD *)(a2 + 32));
  v10 = (unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(a2 + 32)) >> 6;
  *(_QWORD *)&a1[2 * v10 + 12] += a3;
  return result;
}
