/*
 * XREFs of ConvertToBuffer @ 0x14002E0E0
 * Callers:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     ToBuffer @ 0x14002E060 (ToBuffer.c)
 *     Concat @ 0x14002F1F0 (Concat.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ConvertToBuffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  size_t v5; // rsi
  _BYTE *v7; // rax
  bool v8; // al
  unsigned __int64 v9; // rdi
  unsigned int v10; // esi
  _BYTE *v11; // rax
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-28h]
  _BYTE *v15; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  WORD1(v13) = 3;
  if ( *(_WORD *)(a1 + 2) == 1 )
  {
    v8 = IsCompatableDSDTRevision();
    if ( v8 )
      v9 = *(_QWORD *)(a1 + 16);
    else
      v9 = *(unsigned int *)(a1 + 16);
    v10 = v8 ? 8 : 4;
    DWORD2(v14) = v10;
    v11 = (_BYTE *)HeapAlloc(gpheapGlobal, 1381258056, v10);
    v15 = v11;
    if ( !v11 )
      return (unsigned int)-1073741670;
    v12 = v10;
    do
    {
      *v11++ = v9;
      v9 >>= 8;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 2) - 2 > 1 )
      return (unsigned int)-1072431095;
    v5 = *(unsigned int *)(a1 + 24);
    if ( !(_DWORD)v5 )
      goto LABEL_4;
    DWORD2(v14) = *(_DWORD *)(a1 + 24);
    v7 = (_BYTE *)HeapAlloc(gpheapGlobal, 1381258056, v5);
    v15 = v7;
    if ( !v7 )
      return (unsigned int)-1073741670;
    memmove(v7, *(const void **)(a1 + 32), v5);
  }
LABEL_4:
  FreeDataBuffs(a2, 1u);
  *(_OWORD *)a2 = v13;
  *(_OWORD *)(a2 + 16) = v14;
  *(_QWORD *)(a2 + 32) = v15;
  return v2;
}
