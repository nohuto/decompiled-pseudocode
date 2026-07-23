/*
 * XREFs of IvtCancelPageRequests @ 0x14056B1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtCancelPageRequests(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r10
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // eax

  v3 = a1[20];
  v5 = a1[18];
  result = 0x3FFFLL;
  v7 = a1[1];
  v8 = v3 >> 5;
  v9 = a3;
  v10 = (*(_QWORD *)(v7 + 192) >> 5) & 0x3FFFLL;
  v11 = (*(_QWORD *)(v7 + 200) >> 5) & 0x3FFF;
  while ( (_DWORD)v10 != v11 )
  {
    v12 = v5 + 32LL * (unsigned int)v10;
    if ( (*(_QWORD *)v12 & 0x100LL) != 0
      && (HIDWORD(*(_QWORD *)v12) & 0xFFFFF) == v9
      && *(unsigned __int16 *)(v12 + 2) == a2 )
    {
      *(_QWORD *)(v12 + 8) &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    v13 = v10 + 1;
    LODWORD(v10) = ((int)v10 + 1) % (unsigned int)v8;
    result = v13 / (unsigned int)v8;
  }
  return result;
}
