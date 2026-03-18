/*
 * XREFs of sub_140972FCC @ 0x140972FCC
 * Callers:
 *     ExpDeleteSiloState @ 0x1406556C4 (ExpDeleteSiloState.c)
 * Callees:
 *     sub_1409735B8 @ 0x1409735B8 (sub_1409735B8.c)
 */

__int64 __fastcall sub_140972FCC(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1409735B8(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
