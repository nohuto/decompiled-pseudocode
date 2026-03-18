/*
 * XREFs of ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1801F0C5C
 * Callers:
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180172CD0 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18024FA1C (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GetIteratorForState(__int64 a1, __int64 a2, unsigned int a3)
{
  _OWORD *v4; // rax
  _QWORD *v5; // rdx
  int v6; // r9d
  __int64 v7; // rdx
  __int128 v9; // [rsp+10h] [rbp-88h]

  v4 = (_OWORD *)(144LL * a3 + **(_QWORD **)(a1 + 16));
  v9 = v4[1];
  v5 = *(_QWORD **)(a1 + 24);
  v6 = 100 * *v4;
  *(_QWORD *)a2 = v5;
  v6 += 48;
  v7 = (unsigned int)v9 + *v5;
  *(_DWORD *)(a2 + 24) = v6;
  *(_QWORD *)(a2 + 8) = v7;
  *(_QWORD *)(a2 + 16) = v7 + (unsigned int)(v6 * (DWORD1(v9) - 1));
  return a2;
}
