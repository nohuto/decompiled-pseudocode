/*
 * XREFs of HalpWdatExecuteActionBeforeInitialize @ 0x14055D1F8
 * Callers:
 *     HalpWdatDiscover @ 0x14055CF58 (HalpWdatDiscover.c)
 * Callees:
 *     WdInstrDestroyInstruction @ 0x14056A024 (WdInstrDestroyInstruction.c)
 *     WdInstrExecuteInstruction @ 0x14056A054 (WdInstrExecuteInstruction.c)
 *     WdInstrInitializeInstruction @ 0x14056A184 (WdInstrInitializeInstruction.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpWdatExecuteActionBeforeInitialize(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 i; // rsi
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  __int16 *v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  int v18; // eax
  _BYTE v20[64]; // [rsp+40h] [rbp-48h] BYREF

  memset_0(v20, 0, sizeof(v20));
  v10 = 0;
  if ( a4 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a4 + 64); i = (unsigned int)(i + 1) )
    {
      v12 = 3 * i;
      if ( *(_BYTE *)(a4 + 24 * i + 68) == a1 )
      {
        LOBYTE(v8) = a1;
        LOBYTE(v12) = *(_BYTE *)(a4 + 24 * i + 69);
        v13 = WdInstrInitializeInstruction(
                (unsigned int)v20,
                v8,
                v12,
                (int)a4 + 72 + 24 * (int)i,
                *(_DWORD *)(a4 + 24 * i + 84),
                *(_DWORD *)(a4 + 24 * i + 88),
                0);
        if ( v13 < 0 )
        {
          v10 = v13;
        }
        else
        {
          v14 = WdInstrExecuteInstruction(v20, 0LL, a3);
          if ( v14 < 0 )
            v10 = v14;
          WdInstrDestroyInstruction(v20);
        }
      }
    }
  }
  else if ( a5 )
  {
    v15 = &word_140025D12;
    v16 = 15LL;
    do
    {
      if ( *((_BYTE *)v15 - 2) == a1 )
      {
        LOBYTE(v9) = *((_BYTE *)v15 - 1);
        LOBYTE(v8) = a1;
        v17 = WdInstrInitializeInstruction(
                (unsigned int)v20,
                v8,
                v9,
                (unsigned int)a5 + (*(_BYTE *)v15 != 0 ? 48 : 36),
                *(_DWORD *)(v15 + 1),
                *(_DWORD *)(v15 + 3),
                1);
        if ( v17 < 0 )
        {
          v10 = v17;
        }
        else
        {
          v18 = WdInstrExecuteInstruction(v20, 0LL, a3);
          if ( v18 < 0 )
            v10 = v18;
          WdInstrDestroyInstruction(v20);
        }
      }
      v15 += 6;
      --v16;
    }
    while ( v16 );
  }
  return v10;
}
