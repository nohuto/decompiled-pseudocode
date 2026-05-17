/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x1800754D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x180075A00 (RtlpGetEntireXStateAreaLength.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int16 v4; // di
  unsigned int v6; // r9d
  __int64 result; // rax
  __int64 v8; // r10
  int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // r15d
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  int v15; // r13d
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx

  v3 = 0LL;
  *(_QWORD *)(a3 + 24) = a1;
  v4 = a2;
  v6 = 0;
  if ( !a2 )
    v4 = *(_WORD *)(a1 + 2);
  if ( v4 != 332 )
  {
    switch ( v4 )
    {
      case 0x1C4u:
        v9 = 0x200000;
        v11 = 8;
        break;
      case 0x8664u:
        v9 = 0x100000;
        v11 = 16;
        break;
      case 0xAA64u:
        v11 = 16;
        v9 = 0x400000;
        break;
      default:
        return 3221225485LL;
    }
    v10 = 0LL;
    v8 = 0LL;
    goto LABEL_11;
  }
  v8 = MEMORY[0x7FFE03D8] & 0x40000000000009FCLL;
  v9 = 0x10000;
  v10 = MEMORY[0x7FFE03D8] & 0x40000000000009FCLL;
  v11 = 4;
  if ( (MEMORY[0x7FFE03D8] & 0x40000000000009FCLL) == 0 )
  {
LABEL_11:
    v12 = 0;
LABEL_12:
    v13 = 0;
    v14 = 0;
    v15 = v9 & 0x10000;
    if ( (v9 & 0x10000) != 0 )
    {
      v13 = 716;
      v14 = 4;
    }
    else
    {
      if ( (v9 & 0x100000) != 0 )
      {
        v13 = 1232;
      }
      else
      {
        if ( (v9 & 0x200000) != 0 )
        {
          v13 = 416;
          v14 = 8;
          goto LABEL_14;
        }
        if ( (v9 & 0x400000) == 0 )
          goto LABEL_14;
        v13 = 912;
      }
      v14 = 16;
    }
LABEL_14:
    v16 = v13 + 32;
    if ( v12 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v10 = v8 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]);
        if ( !v15 && (v9 & 0x100000) == 0 )
        {
          if ( (v9 & 0x400000) != 0 )
            v10 &= 4u;
          else
            v10 = 0LL;
        }
      }
      v16 = (-v14 & (v14 + v16 - 1)) - v14 - 448 + RtlpGetEntireXStateAreaLength(v10);
    }
    v6 = v16 + v14 - 1;
    goto LABEL_20;
  }
  v9 = 65600;
  if ( MEMORY[0x7FFE03D8] )
  {
    v12 = 2;
    goto LABEL_12;
  }
  v15 = 0x10000;
LABEL_20:
  v17 = ~(v11 - 1LL) & (v11 + a1 + 3);
  *(_QWORD *)a3 = v17;
  v18 = (v17 + v6 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a3 + 8) = v18;
  if ( !v15 )
  {
    if ( (v9 & 0x100000) != 0 )
    {
      v17 += 48LL;
    }
    else if ( (v9 & 0x200000) == 0 )
    {
      if ( (v9 & 0x400000) != 0 )
        v3 = ~(v11 - 1LL) & (v11 + a1 + 3);
      v17 = v3;
    }
  }
  *(_QWORD *)(a3 + 40) = (v18 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  *(_QWORD *)(a3 + 16) = v17;
  *(_DWORD *)(a3 + 32) = v9;
  *(_WORD *)(a3 + 36) = v4;
  return result;
}
