/*
 * XREFs of CiProcessAddThread @ 0x14000F450
 * Callers:
 *     CiThreadCreate @ 0x14000ECB0 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiProcessAddThread(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *v3; // r8
  _QWORD *v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD **)(v1 + 72);
  v4 = (_QWORD *)(a1 + 112);
  if ( *v3 != v1 + 64 )
    __fastfail(3u);
  *v4 = v1 + 64;
  v4[1] = v3;
  *v3 = v4;
  *(_QWORD *)(v1 + 72) = v4;
  result = *(unsigned __int8 *)(a1 + 148);
  *(_BYTE *)(a1 + 148) = result ^ (*(_BYTE *)(v1 + 88) ^ result) & 1;
  return result;
}
