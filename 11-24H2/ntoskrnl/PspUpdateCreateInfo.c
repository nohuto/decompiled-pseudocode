/*
 * XREFs of PspUpdateCreateInfo @ 0x140A27330
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PspPropagateHandle @ 0x140A275D4 (PspPropagateHandle.c)
 */

__int64 __fastcall PspUpdateCreateInfo(int a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  __int64 v6; // rbx
  unsigned __int8 PreviousMode; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  bool v13; // cl
  char v14; // al
  char v15; // cl
  char v16; // al
  char v17; // cl
  HANDLE *v19; // rbx
  _OWORD v20[3]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  v6 = *(_QWORD *)(a2 + 48);
  v20[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 2LL;
  if ( (*(_BYTE *)(a2 + 16) & 2) == 0 )
    goto LABEL_14;
  v9 = (unsigned int)(a1 - 2);
  if ( !(_DWORD)v9 )
  {
    LODWORD(v9) = PreviousMode;
    v5 = PspPropagateHandle(v9, a2 + 176, v20);
    if ( v5 >= 0 )
    {
      *(_QWORD *)(v6 + 16) = *(_QWORD *)&v20[0];
      goto LABEL_14;
    }
    goto LABEL_25;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_WORD *)(v6 + 16) = *(_WORD *)(a2 + 102);
    goto LABEL_14;
  }
  v11 = (unsigned int)(v10 - 2);
  if ( !(_DWORD)v11 )
  {
    LODWORD(v11) = PreviousMode;
    v5 = PspPropagateHandle(v11, a2 + 200, v20);
    if ( v5 >= 0 )
    {
      *(_QWORD *)(v6 + 16) = *(_QWORD *)&v20[0];
      goto LABEL_14;
    }
LABEL_25:
    *(_QWORD *)&v20[0] = 0LL;
    goto LABEL_14;
  }
  if ( (_DWORD)v11 == 1 )
  {
    if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
    {
      LOBYTE(v11) = PreviousMode;
      v5 = PspPropagateHandle(v11, a2 + 176, v20);
      if ( v5 < 0 )
      {
        *(_QWORD *)&v20[0] = 0LL;
      }
      else
      {
        LOBYTE(v12) = PreviousMode;
        v5 = PspPropagateHandle(v12, a2 + 192, (char *)v20 + 8);
        if ( v5 < 0 )
          *((_QWORD *)&v20[0] + 1) = 0LL;
      }
      if ( v5 < 0 )
        goto LABEL_16;
    }
    *(_DWORD *)(v6 + 16) = 0;
    v13 = (*(_BYTE *)(a3 + 1530) & 7) != 0;
    *(_BYTE *)(v6 + 16) = v13;
    v14 = v13 | ((*(_BYTE *)(a3 + 1530) & 7) != 1 ? 0 : 0x10);
    *(_BYTE *)(v6 + 16) = v14;
    v15 = v14 | *(_BYTE *)(a3 + 502) & 2;
    *(_BYTE *)(v6 + 16) = v15;
    v16 = v15 | (4 * (PspGlobalFlags & 1));
    *(_BYTE *)(v6 + 16) = v16;
    v17 = v16 | (*(_BYTE *)(a2 + 16) >> 2) & 8;
    *(_BYTE *)(v6 + 16) = v17;
    if ( (v17 & 8) != 0 )
    {
      *(_QWORD *)(v6 + 72) = *(_QWORD *)(a2 + 304);
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(a2 + 312);
    }
    *(_OWORD *)(v6 + 24) = v20[0];
    *(_QWORD *)(v6 + 40) = *(_QWORD *)(a2 + 224);
    *(_DWORD *)(v6 + 48) = *(_DWORD *)(a2 + 232);
    *(_DWORD *)(v6 + 52) = *(_DWORD *)(*(_QWORD *)(a2 + 216) + 8LL);
    *(_QWORD *)(v6 + 56) = *(_QWORD *)(a3 + 736);
    *(_DWORD *)(v6 + 64) = *(_DWORD *)(a2 + 236);
  }
LABEL_14:
  if ( v5 >= 0 )
  {
    *(_DWORD *)(v6 + 8) = a1;
    return 0LL;
  }
LABEL_16:
  v19 = (HANDLE *)v20;
  do
  {
    if ( *v19 )
      ObCloseHandle(*v19, PreviousMode);
    ++v19;
    --v8;
  }
  while ( v8 );
  return (unsigned int)v5;
}
