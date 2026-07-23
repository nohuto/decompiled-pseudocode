/*
 * XREFs of sub_140800FC4 @ 0x140800FC4
 * Callers:
 *     ntoskrnl_20 @ 0x14095B5C0 (ntoskrnl_20.c)
 * Callees:
 *     sub_140801010 @ 0x140801010 (sub_140801010.c)
 */

__int64 __fastcall sub_140800FC4(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140801010(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
