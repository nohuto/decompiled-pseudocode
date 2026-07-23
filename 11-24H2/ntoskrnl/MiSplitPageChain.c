/*
 * XREFs of MiSplitPageChain @ 0x14049A18C
 * Callers:
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiGetCachedPoolPages @ 0x14049A090 (MiGetCachedPoolPages.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSplitPageChain(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  __int64 v4; // r10
  _QWORD *result; // rax

  v3 = *(_QWORD **)a1;
  v4 = 1LL;
  *a3 = *(_QWORD *)a1;
  while ( v4 != a2 && *v3 )
  {
    v3 = (_QWORD *)*v3;
    ++v4;
  }
  result = (_QWORD *)*v3;
  *(_QWORD *)a1 = *v3;
  if ( !result )
    *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) -= v4;
  *v3 = 0LL;
  a3[1] = v3;
  a3[2] = v4;
  return result;
}
