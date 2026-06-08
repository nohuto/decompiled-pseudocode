/*
 * XREFs of PerfControlHwp @ 0x140005C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PerfControlHwp(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 result; // rax
  __int64 v6; // r8
  unsigned int *v7; // rdi
  unsigned __int64 v8; // r9
  _BYTE *v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r8
  __int64 v15; // [rsp+0h] [rbp-18h]

  result = 0LL;
  if ( a3 || a4 )
  {
    if ( !*(_BYTE *)(a1 + 137) || a4 )
    {
      v7 = (unsigned int *)(a1 + 156);
      v10 = __readmsr(*(_DWORD *)(a1 + 156));
      v9 = (_BYTE *)(a1 + 1348);
      *(_BYTE *)(a1 + 137) = 1;
      HIDWORD(v6) = HIDWORD(v10);
      LODWORD(v15) = v10;
      if ( *(_BYTE *)(a1 + 1348) )
        v8 = __readmsr(0xC8Fu);
      else
        v8 = 0LL;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 176);
      v7 = (unsigned int *)(a1 + 156);
      v8 = *(_QWORD *)(a1 + 1392);
      v9 = (_BYTE *)(a1 + 1348);
      LODWORD(v15) = v6;
    }
    HIDWORD(v15) = HIDWORD(v6) & 0xFFFFFBFF | (*(_BYTE *)(a2 + 49) != 0 ? 0x400 : 0);
    result = *(_QWORD *)(a1 + 184) & *(_QWORD *)a2;
    v11 = result | v15 & ~*(_QWORD *)(a1 + 184);
    if ( v11 != *(_QWORD *)(a1 + 176) || a4 )
    {
      result |= v15 & ~*(_QWORD *)(a1 + 184);
      __writemsr(*v7, v11);
      *(_QWORD *)(a1 + 176) = v11;
    }
    if ( *v9 )
    {
      v12 = *(_QWORD *)(a1 + 1376);
      v13 = v12 & *(_QWORD *)(a2 + 8);
      result = v8 & ~v12;
      v14 = result | v13;
      if ( v14 != *(_QWORD *)(a1 + 1392) || a4 )
      {
        result = v14;
        __writemsr(0xC8Fu, v14);
        *(_QWORD *)(a1 + 1392) = v14;
      }
    }
  }
  return result;
}
