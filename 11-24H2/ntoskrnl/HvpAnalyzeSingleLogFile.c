/*
 * XREFs of HvpAnalyzeSingleLogFile @ 0x14096CFFC
 * Callers:
 *     HvAnalyzeLogFiles @ 0x14096B918 (HvAnalyzeLogFiles.c)
 * Callees:
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x140A84C48 (HvpIncrementalLogFileEnumeratorAdvance.c)
 */

__int64 __fastcall HvpAnalyzeSingleLogFile(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v4; // r9d
  __int64 v5; // rax
  int v6; // edi
  int v7; // r14d
  unsigned int v8; // r15d
  unsigned int v9; // ebx
  __int64 result; // rax
  unsigned int v11; // ecx
  __int128 v12; // [rsp+20h] [rbp-30h]
  unsigned __int64 v13; // [rsp+30h] [rbp-20h]
  _DWORD v14[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h]
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  v4 = a2[1];
  DWORD2(v12) = v4;
  DWORD1(v12) = *(_DWORD *)a1;
  if ( a2[7] == 6 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = 0;
    v17 = 0LL;
    v7 = 0;
    v15 = v5;
    v8 = 0;
    v9 = 0;
    v16 = *(_QWORD *)(a1 + 16);
    LODWORD(v12) = 1;
    v14[0] = 512;
    v14[1] = v4;
    while ( 1 )
    {
      result = HvpIncrementalLogFileEnumeratorAdvance(v14, &v17);
      if ( (_DWORD)result == -2147483622 )
        break;
      if ( (int)result < 0 )
        return result;
      ++v6;
      v8 = v14[0];
      v11 = *(_DWORD *)(v17 + 16);
      v7 = *(_DWORD *)(v17 + 12);
      if ( v11 <= v9 )
        v11 = v9;
      v9 = v11;
    }
    if ( !v6 )
      return 2147483682LL;
    HIDWORD(v12) = v7;
    v13 = __PAIR64__(v9, v8);
  }
  else
  {
    LODWORD(v13) = 0;
    HIDWORD(v13) = a2[10];
    LODWORD(v12) = 3;
    HIDWORD(v12) = a2[1];
  }
  result = 0LL;
  *(_OWORD *)a3 = v12;
  *(_QWORD *)(a3 + 16) = v13;
  return result;
}
