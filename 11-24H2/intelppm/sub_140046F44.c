/*
 * XREFs of sub_140046F44 @ 0x140046F44
 * Callers:
 *     sub_140046234 @ 0x140046234 (sub_140046234.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140046F44(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _BYTE *v3; // r8
  __int64 v4; // r10
  char v5; // cl

  __readmsr(*(_DWORD *)(a1 + 8));
  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v3 = (_BYTE *)(*(_QWORD *)(a1 + 24) + 9LL);
    v4 = *(unsigned __int8 *)(a1 + 16);
    do
    {
      v5 = *(v3 - 1);
      if ( v5 == 64 )
        v2 = -1LL;
      else
        v2 |= ((1LL << v5) - 1) << *v3;
      v3 += 16;
      --v4;
    }
    while ( v4 );
  }
  *(_QWORD *)(a2 + 8) = v2;
  return 0LL;
}
