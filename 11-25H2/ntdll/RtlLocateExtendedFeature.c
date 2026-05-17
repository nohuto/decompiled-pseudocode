/*
 * XREFs of RtlLocateExtendedFeature @ 0x1800DB0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall RtlLocateExtendedFeature(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // r11
  unsigned int v4; // esi
  __int64 v5; // r9
  __int64 v6; // r10
  char *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // r10
  int v14; // eax

  v3 = a2;
  v4 = a2 - 2;
  if ( a2 - 2 > 0x3D )
    return 0LL;
  v5 = 1LL << a2;
  if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & (1LL << a2)) == 0 )
    return 0LL;
  if ( (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) != 0 )
    return 0LL;
  v6 = (int)a1[4];
  if ( *a1 > (int)v6 )
    return 0LL;
  if ( a1[1] + *a1 < (int)v6 + a1[5] )
    return 0LL;
  v7 = (char *)a1 + v6;
  if ( !(_DWORD *)((char *)a1 + v6) )
    return 0LL;
  if ( a3 )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      v14 = *(_DWORD *)(4 * v3 + 0x7FFE0604);
    else
      v14 = *(_DWORD *)(8 * v3 + 0x7FFE03F4);
    *a3 = v14;
  }
  if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
    return &v7[*(unsigned int *)(8 * v3 + 0x7FFE03F0) - 512];
  v8 = *((_QWORD *)v7 + 1);
  if ( (v5 & v8) == 0 )
    return 0LL;
  v9 = 576;
  if ( (unsigned int)v3 > 2 )
  {
    v11 = 4LL;
    v12 = v4;
    v13 = 2147354124LL;
    do
    {
      if ( (v11 & v8) != 0 )
      {
        if ( (v11 & MEMORY[0x7FFE05F8]) != 0 )
          v9 = (v9 + 63) & 0xFFFFFFC0;
        v9 += *(_DWORD *)v13;
      }
      v11 = __ROL8__(v11, 1);
      v13 += 4LL;
      --v12;
    }
    while ( v12 );
  }
  if ( (v5 & MEMORY[0x7FFE05F8]) != 0 )
    v9 = (v9 + 63) & 0xFFFFFFC0;
  return &v7[v9 - 512];
}
