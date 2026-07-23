/*
 * XREFs of KiEmulateAtlThunk @ 0x1403F5764
 * Callers:
 *     KiCheckForAtlThunk @ 0x1403F56F8 (KiCheckForAtlThunk.c)
 * Callees:
 *     MmCheckForSafeExecution @ 0x1407F6AC0 (MmCheckForSafeExecution.c)
 */

__int64 __fastcall KiEmulateAtlThunk(unsigned int *a1, _DWORD *a2, unsigned int *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int *v5; // r14
  __int64 v10; // rbx
  _WORD *v11; // rcx
  char v12; // di
  unsigned int v13; // r14d
  __int64 v14; // rax
  char v15; // al
  unsigned int v16; // r15d
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // r12
  char v20; // [rsp+20h] [rbp-48h]
  unsigned int v21; // [rsp+24h] [rbp-44h]
  unsigned __int64 v22; // [rsp+30h] [rbp-38h]

  v5 = a4;
  if ( (KeGetCurrentThread()->ApcState.Process->Flags.ExecuteOptionsNV & 4) != 0 )
    return 0LL;
  v10 = *a1;
  v22 = (unsigned int)*a2;
  v21 = 0;
  v11 = (_WORD *)&KeGetPcr()->NtTib.$5225818D498B3FAE6A65DB4E37572489::$27D8BC11A01A0546FE12179A0057C7B6::Self[218].SubSystemTib
      + 1;
  if ( (*v11 & 1) != 0 )
  {
    v12 = 1;
    v20 = 1;
    *v11 &= ~1u;
  }
  else
  {
    v12 = 0;
    v20 = 0;
  }
  if ( *(_DWORD *)v10 == 69485767 && *(_BYTE *)(v10 + 8) == 0xE9 )
  {
    v13 = v10 + *(_DWORD *)(v10 + 9) + 13;
    LOBYTE(a4) = 1;
    if ( !(unsigned __int8)MmCheckForSafeExecution(v10, v22, v13, a4, v20) || !v12 )
      return v21;
    v14 = v22 + 4;
    if ( v22 + 4 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)(v10 + 4);
    *a1 = v13;
    return 1;
  }
  v15 = *(_BYTE *)v10;
  if ( *(_BYTE *)v10 == 0xB9 && *(_BYTE *)(v10 + 5) == 0xE9 )
  {
    v16 = v10 + *(_DWORD *)(v10 + 6) + 10;
    LOBYTE(a4) = 1;
    if ( !(unsigned __int8)MmCheckForSafeExecution(v10, v22, v16, a4, v20) || !v12 )
      return v21;
    *v5 = *(_DWORD *)(v10 + 1);
    goto LABEL_31;
  }
  if ( v15 == -70 && *(_BYTE *)(v10 + 5) == 0xB9 && *(_WORD *)(v10 + 10) == 0xE1FF )
  {
    v17 = *(_DWORD *)(v10 + 6);
    if ( (unsigned __int8)MmCheckForSafeExecution(v10, v22, v17, 0LL, v20) )
    {
      *a5 = *(_DWORD *)(v10 + 1);
      *v5 = v17;
      *a1 = v17;
      return 1;
    }
  }
  else
  {
    if ( v15 != -71 || *(_BYTE *)(v10 + 5) != 0xB8 || *(_WORD *)(v10 + 10) != 0xE0FF )
    {
      if ( v15 == 89
        && *(_BYTE *)(v10 + 1) == 88
        && *(_BYTE *)(v10 + 2) == 81
        && *(_BYTE *)(v10 + 3) == 0xFF
        && *(_BYTE *)(v10 + 4) == 96
        && *(_BYTE *)(v10 + 5) == 4 )
      {
        v18 = v22 + 4;
        if ( v22 + 4 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        v19 = *(unsigned int *)(unsigned int)(*(_DWORD *)v18 + 4);
        if ( (unsigned __int8)MmCheckForSafeExecution(v10, v22, v19, 0LL, v20) )
        {
          *v5 = *(_DWORD *)v22;
          *a3 = *(_DWORD *)(v22 + 4);
          *(_DWORD *)(v22 + 4) = *v5;
          *a1 = v19;
          *a2 = v22 + 4;
          return 1;
        }
      }
      return v21;
    }
    v16 = *(_DWORD *)(v10 + 6);
    LOBYTE(a4) = 1;
    if ( (unsigned __int8)MmCheckForSafeExecution(v10, v22, v16, a4, v20) && v12 )
    {
      *v5 = *(_DWORD *)(v10 + 1);
      *a3 = v16;
LABEL_31:
      *a1 = v16;
      return 1;
    }
  }
  return v21;
}
