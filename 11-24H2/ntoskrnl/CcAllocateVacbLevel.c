/*
 * XREFs of CcAllocateVacbLevel @ 0x14047E3FC
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1402D5FE0 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x1403F6E60 (CcExtendVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

_QWORD *__fastcall CcAllocateVacbLevel(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  if ( a2 )
  {
    v2 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0LL;
    memset_0(v2 + 1, 0, 0x3F8uLL);
    v2[256] = 0LL;
  }
  else
  {
    v2 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
      KeBugCheckEx(0x34u, 0x1632uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    --*(_DWORD *)(a1 + 24);
    memset_0(v2 + 1, 0, 0x400uLL);
  }
  *v2 = 0LL;
  return v2;
}
