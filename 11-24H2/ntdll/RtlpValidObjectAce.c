/*
 * XREFs of RtlpValidObjectAce @ 0x18010FD94
 * Callers:
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidObjectAce(__int64 a1)
{
  unsigned __int64 v1; // rdx
  int v2; // r9d
  unsigned int v3; // r10d
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( !a1 )
    return 0;
  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v1 || (unsigned __int16)v1 < 0xCu )
    return 0;
  v2 = *(_DWORD *)(a1 + 8);
  v3 = v2 & 1;
  v4 = v2 & 2;
  v5 = 16 * v3 + 16;
  if ( !v4 )
    v5 = 16 * v3;
  v6 = (unsigned int)v5;
  if ( v1 >= v5 + 24
    && (v7 = a1 + 16LL * v3, v8 = v4 != 0 ? 28LL : 12LL, *(_BYTE *)(v8 + v7) == 1)
    && *(_BYTE *)(v8 + v7 + 1) <= 0xFu )
  {
    return v1 >= v6 + 4 * ((unsigned __int64)*(unsigned __int8 *)(v8 + v7 + 1) + 5);
  }
  else
  {
    return 0;
  }
}
