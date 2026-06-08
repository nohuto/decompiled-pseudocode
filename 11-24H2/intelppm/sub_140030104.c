/*
 * XREFs of sub_140030104 @ 0x140030104
 * Callers:
 *     sub_14000C164 @ 0x14000C164 (sub_14000C164.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140030104(int a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  _DWORD *v3; // rax
  bool v4; // zf
  unsigned int v5; // edx

  v1 = 0;
  if ( dword_1400196F0 )
  {
    v2 = (unsigned int)dword_1400196F0;
    v3 = (_DWORD *)(qword_1400196E8 + 4);
    do
    {
      v4 = a1 == *v3;
      v5 = v1 + 1;
      v3 += 3;
      if ( !v4 )
        v5 = v1;
      v1 = v5;
      --v2;
    }
    while ( v2 );
  }
  return v1;
}
