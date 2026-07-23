/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x1800D2D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1800D2FE0 (RtlGetExtendedContextLength2.c)
 *     RtlpGetLegacyContextLength @ 0x1800D3210 (RtlpGetLegacyContextLength.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int16 v5; // di
  __int64 result; // rax
  ULONG v8; // ebp
  ULONG64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  ULONG ContextLength; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  *(_QWORD *)(a3 + 24) = a1;
  v14 = 0;
  ContextLength = 0;
  v5 = a2;
  if ( !(_WORD)a2 )
    v5 = *(_WORD *)(a1 + 2);
  switch ( v5 )
  {
    case 0x14Cu:
      v8 = 0x10000;
      RtlpGetLegacyContextLength(0x10000LL, a2, &v14);
      v9 = MEMORY[0x7FFE03D8] & 0x40000000000009FCLL;
      if ( (MEMORY[0x7FFE03D8] & 0x40000000000009FCLL) != 0 )
        v8 = 65600;
      break;
    case 0x1C4u:
      v8 = 0x200000;
      RtlpGetLegacyContextLength(0x200000LL, a2, &v14);
      v9 = 0LL;
      break;
    case 0x8664u:
      v8 = 0x100000;
      RtlpGetLegacyContextLength(0x100000LL, a2, &v14);
      v9 = 0LL;
      break;
    case 0xAA64u:
      v8 = 0x400000;
      RtlpGetLegacyContextLength(0x400000LL, a2, &v14);
      v9 = 0LL;
      break;
    default:
      return 3221225485LL;
  }
  RtlGetExtendedContextLength2(v8, &ContextLength, v9);
  v10 = ~(v14 - 1LL) & (a1 + v14 + 3LL);
  v11 = v10 + ContextLength + 7LL;
  *(_QWORD *)a3 = v10;
  v12 = v11 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a3 + 8) = v12;
  if ( (v8 & 0x10000) == 0 )
  {
    if ( (v8 & 0x100000) != 0 )
    {
      v10 += 48LL;
    }
    else if ( (v8 & 0x200000) == 0 )
    {
      if ( (v8 & 0x400000) != 0 )
        v3 = v10;
      v10 = v3;
    }
  }
  *(_QWORD *)(a3 + 40) = (v12 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  *(_QWORD *)(a3 + 16) = v10;
  *(_DWORD *)(a3 + 32) = v8;
  *(_WORD *)(a3 + 36) = v5;
  return result;
}
