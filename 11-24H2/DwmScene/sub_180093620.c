/*
 * XREFs of sub_180093620 @ 0x180093620
 * Callers:
 *     sub_180094C30 @ 0x180094C30 (sub_180094C30.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180093620(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // r15
  __int64 result; // rax
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rbx

  v2 = 0;
  v4 = 0LL;
  do
  {
    result = *(unsigned int *)(a1 + 4616);
    if ( _bittest((const int *)&result, v2) )
    {
      v7 = 0;
      v8 = 0LL;
      do
      {
        if ( *(_BYTE *)(a1 + 4620)
          || (result = *(_QWORD *)(a1 + 16 * (v4 + v8) + 8), *(_QWORD *)(a1 + 16 * (v4 + v8) + 1544) != result) )
        {
          v9 = 16 * (v7 + 16LL * v2);
          v10 = v9 + a1;
          sub_18001254C((__int64 *)(v9 + a1 + 1544), (_QWORD *)(v9 + a1 + 8));
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 136LL))(
                     a2,
                     v2,
                     v10 + 1544,
                     v7);
        }
        ++v7;
        ++v8;
      }
      while ( v7 < 0x10 );
    }
    ++v2;
    v4 += 16LL;
  }
  while ( v2 < 6 );
  *(_BYTE *)(a1 + 4620) = 0;
  return result;
}
