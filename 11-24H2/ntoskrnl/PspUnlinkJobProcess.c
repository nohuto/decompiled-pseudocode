/*
 * XREFs of PspUnlinkJobProcess @ 0x140A485E4
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PspUnlinkJobProcess(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 1320);
  v3 = *(_QWORD **)(a1 + 1320);
  v4 = (_QWORD *)(a2 + 856);
  while ( v3 != v2 )
  {
    if ( (_QWORD *)v3[2] == v4 )
      v3[2] = *(_QWORD *)(a2 + 864);
    v3 = (_QWORD *)*v3;
  }
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (result = (_QWORD *)v4[1], (_QWORD *)*result != v4) )
    __fastfail(3u);
  *result = v5;
  *(_QWORD *)(v5 + 8) = result;
  return result;
}
