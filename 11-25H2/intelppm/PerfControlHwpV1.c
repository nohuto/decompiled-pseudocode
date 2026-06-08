/*
 * XREFs of PerfControlHwpV1 @ 0x140007610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PerfControlHwpV1(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // r8
  unsigned int *v6; // rbx
  unsigned __int64 v7; // r9
  _BYTE *v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // [rsp+0h] [rbp-18h]

  result = 0LL;
  if ( a3 || a4 )
  {
    if ( !*(_BYTE *)(a1 + 137) || a4 )
    {
      v6 = (unsigned int *)(a1 + 156);
      v9 = __readmsr(*(_DWORD *)(a1 + 156));
      v8 = (_BYTE *)(a1 + 1348);
      *(_BYTE *)(a1 + 137) = 1;
      HIDWORD(v5) = HIDWORD(v9);
      LODWORD(v14) = v9;
      if ( *(_BYTE *)(a1 + 1348) )
        v7 = __readmsr(0xC8Fu);
      else
        v7 = 0LL;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 176);
      v6 = (unsigned int *)(a1 + 156);
      v7 = *(_QWORD *)(a1 + 1392);
      v8 = (_BYTE *)(a1 + 1348);
      LODWORD(v14) = v5;
    }
    HIDWORD(v14) = HIDWORD(v5) & 0xFFFFFBFF | (*(_BYTE *)(a2 + 49) != 0 ? 0x400 : 0);
    result = *(_QWORD *)(a1 + 184) & *(_QWORD *)a2;
    v10 = result | v14 & ~*(_QWORD *)(a1 + 184);
    if ( v10 != *(_QWORD *)(a1 + 176) )
    {
      result |= v14 & ~*(_QWORD *)(a1 + 184);
      __writemsr(*v6, v10);
      *(_QWORD *)(a1 + 176) = v10;
    }
    if ( *v8 )
    {
      v11 = *(_QWORD *)(a1 + 1376);
      v12 = v11 & *(_QWORD *)(a2 + 8);
      result = v7 & ~v11;
      v13 = result | v12;
      if ( v13 != *(_QWORD *)(a1 + 1392) )
      {
        result = v13;
        __writemsr(0xC8Fu, v13);
        *(_QWORD *)(a1 + 1392) = v13;
      }
    }
  }
  return result;
}
