/*
 * XREFs of sub_1800C6F34 @ 0x1800C6F34
 * Callers:
 *     sub_1800C6590 @ 0x1800C6590 (sub_1800C6590.c)
 *     sub_1800C6FD0 @ 0x1800C6FD0 (sub_1800C6FD0.c)
 *     sub_1800C7DC0 @ 0x1800C7DC0 (sub_1800C7DC0.c)
 *     sub_1800C9AB0 @ 0x1800C9AB0 (sub_1800C9AB0.c)
 *     sub_1800C9D10 @ 0x1800C9D10 (sub_1800C9D10.c)
 *     sub_1800C9F70 @ 0x1800C9F70 (sub_1800C9F70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C6F34(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v1 )
    return (unsigned int)(*(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 24));
  else
    return v1 - *(_QWORD *)a1;
}
