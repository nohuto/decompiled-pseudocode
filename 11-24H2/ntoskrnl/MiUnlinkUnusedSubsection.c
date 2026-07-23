/*
 * XREFs of MiUnlinkUnusedSubsection @ 0x140338CE4
 * Callers:
 *     MiDeleteEmptySubsections @ 0x140292788 (MiDeleteEmptySubsections.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiReferenceSubsection @ 0x140338AB0 (MiReferenceSubsection.c)
 *     MiDeleteCachedEntry @ 0x1403EE484 (MiDeleteCachedEntry.c)
 *     MiRemoveUnusedSubsection @ 0x140441E80 (MiRemoveUnusedSubsection.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x140673338 (MiDeleteDeleteOnCloseSubsections.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUnlinkUnusedSubsection(__int64 a1)
{
  int v1; // eax
  _QWORD *v2; // rdx
  __int64 v3; // r9
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  unsigned int v12; // eax

  v1 = *(_DWORD *)(a1 + 32);
  v2 = (_QWORD *)(a1 + 88);
  v3 = *(_QWORD *)(a1 + 88);
  if ( *(_QWORD *)(v3 + 8) != a1 + 88 || (v5 = *(_QWORD **)(a1 + 96), (_QWORD *)*v5 != v2) )
    __fastfail(3u);
  *v5 = v3;
  *(_QWORD *)(v3 + 8) = v5;
  *(_DWORD *)(a1 + 32) = v1 & 0xFFF7FFFF;
  v2[1] = v2;
  *v2 = v2;
  v6 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  v7 = *(unsigned int *)(a1 + 44);
  v8 = 8 * v7;
  if ( (unsigned __int64)(8 * v7) > 0xFE0 )
  {
    v12 = (8 * (_WORD)v7) & 0xFFF;
    if ( v8 >= 0x10000 || v12 > 0xFC0 )
    {
      v10 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_7;
    }
    v9 = v8 + 15;
  }
  else
  {
    v9 = v8 + 31;
  }
  v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_7:
  result = -(__int64)v10;
  _InterlockedAdd64(&qword_140E2CD58, -(__int64)v10);
  *(_QWORD *)(v6 + 2088) -= v10;
  return result;
}
