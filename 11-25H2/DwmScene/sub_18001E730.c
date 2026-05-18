/*
 * XREFs of sub_18001E730 @ 0x18001E730
 * Callers:
 *     sub_18001E1E8 @ 0x18001E1E8 (sub_18001E1E8.c)
 *     sub_180086160 @ 0x180086160 (sub_180086160.c)
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 */

void **__fastcall sub_18001E730(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  void **result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbx

  v2 = *(_QWORD *)(a1 + 16);
  if ( a2 > v2 )
  {
    v6 = a2 - v2;
    if ( a2 - v2 > *(_QWORD *)(a1 + 24) - v2 )
    {
      return sub_18001DB68((void **)a1, v6, a1, a2 - v2);
    }
    else
    {
      *(_QWORD *)(a1 + 16) = a2;
      v7 = sub_1800137F8(a1);
      v9 = v7 + v8;
      result = (void **)memset((void *)(v7 + v8), 0, v6);
      *(_BYTE *)(v9 + v6) = 0;
    }
  }
  else
  {
    result = (void **)sub_1800137F8(a1);
    *(_QWORD *)(v5 + 16) = v4;
    *((_BYTE *)result + v4) = 0;
  }
  return result;
}
