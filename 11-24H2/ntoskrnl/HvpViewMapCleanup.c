/*
 * XREFs of HvpViewMapCleanup @ 0x140A40EA4
 * Callers:
 *     HvHiveCleanup @ 0x140882B48 (HvHiveCleanup.c)
 * Callees:
 *     CmSiCloseSection @ 0x1404990AC (CmSiCloseSection.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x140A40F84 (HvpViewMapDeleteViewTreeNode.c)
 */

NTSTATUS __fastcall HvpViewMapCleanup(__int64 a1)
{
  __int64 v1; // rbx
  bool v3; // zf
  unsigned __int64 v4; // rcx
  int v5; // esi
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rdi
  NTSTATUS result; // eax

  v1 = a1 + 40;
  v3 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)v4;
        if ( !*(_QWORD *)v4 )
          break;
        v7 = (_QWORD *)v4;
LABEL_11:
        if ( v5 )
          v4 ^= v6;
        else
          v4 = v6;
        *v7 = 0LL;
      }
      v7 = (_QWORD *)(v4 + 8);
      v6 = *(_QWORD *)(v4 + 8);
      if ( v6 )
        goto LABEL_11;
      v8 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v8 )
        v8 ^= v4;
      HvpViewMapDeleteViewTreeNode(v4, a1);
      if ( !v8 )
        break;
      v4 = v8;
    }
  }
  result = *(unsigned __int8 *)(v1 + 8);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (result & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  if ( *(_QWORD *)a1 )
    return CmSiCloseSection(*(void **)a1);
  return result;
}
