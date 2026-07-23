/*
 * XREFs of SymCryptRsaCoreDecCrtScratchSpace @ 0x140522964
 * Callers:
 *     SymCryptRsaPkcs1Sign @ 0x140522D90 (SymCryptRsaPkcs1Sign.c)
 * Callees:
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 */

__int64 __fastcall SymCryptRsaCoreDecCrtScratchSpace(_DWORD *a1)
{
  unsigned int v1; // eax
  int v2; // ebp
  _DWORD *v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  int v9; // r9d
  __int64 v10; // rdx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r10
  __int64 v17; // r10
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // r10
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ebx

  v1 = a1[7];
  v2 = 0;
  if ( v1 )
  {
    v4 = a1 + 8;
    v5 = v1;
    do
    {
      v6 = *v4 >> 9;
      v7 = (*v4++ & 0x1FF) + 511;
      v2 += (v6 + (v7 >> 9)) << 6;
      --v5;
    }
    while ( v5 );
  }
  v8 = a1[5];
  v9 = a1[12];
  v10 = (unsigned int)(v9 << 7) + 128LL;
  v11 = (v9 << 8) + 64;
  v12 = 32 * v9;
  v13 = (unsigned int)((v8 + 1) << 6);
  v14 = v10 + 2LL * (unsigned int)(a1[12] << 6);
  v15 = v11;
  if ( v11 <= v12 )
    v15 = v12;
  if ( v13 <= v14 + v15 )
  {
    v17 = v11;
    if ( v11 <= v12 )
      v17 = v12;
    v16 = v14 + v17;
  }
  else
  {
    v16 = (unsigned int)v13;
  }
  v18 = (unsigned int)(4480 * v8 + 64);
  if ( v18 <= v16 )
  {
    v20 = v11;
    if ( v11 <= v12 )
      v20 = v12;
    if ( v13 <= v14 + v20 )
    {
      v21 = v11;
      if ( v11 <= v12 )
        v21 = v12;
      v19 = v14 + v21;
    }
    else
    {
      v19 = (unsigned int)((v8 + 1) << 6);
    }
  }
  else
  {
    v19 = (unsigned int)v18;
  }
  v22 = (unsigned int)((v8 << 8) + 64);
  if ( v22 <= v19 )
  {
    v23 = v11;
    if ( v11 <= v12 )
      v23 = v12;
    if ( v13 <= v14 + v23 )
    {
      v25 = v11;
      if ( v11 <= v12 )
        v25 = v12;
      v24 = v14 + v25;
    }
    else
    {
      v24 = (unsigned int)((v8 + 1) << 6);
    }
    if ( v18 <= v24 )
    {
      v26 = v11;
      if ( v11 <= v12 )
        v26 = v12;
      if ( v13 <= v14 + v26 )
      {
        if ( v11 <= v12 )
          v11 = v12;
        LODWORD(v22) = v14 + v11;
      }
      else
      {
        LODWORD(v22) = (v8 + 1) << 6;
      }
    }
    else
    {
      LODWORD(v22) = 4480 * v8 + 64;
    }
  }
  v27 = 3 * SymCryptSizeofIntFromDigits();
  return v2
       + (unsigned int)v22
       + (((a1[4] >> 9) + (((a1[4] & 0x1FFu) + 511) >> 9)) << 6)
       + v27
       + (unsigned int)SymCryptSizeofIntFromDigits();
}
