/*
 * XREFs of ObpLookupDirectoryEntry @ 0x14083E800
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(unsigned __int16 *a1, char a2, __int64 a3)
{
  unsigned __int16 *v4; // r14
  char v5; // bl
  unsigned int v6; // ebp
  unsigned __int16 *v7; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // edi
  unsigned int v11; // edx
  int v12; // edi
  __int64 v13; // rcx
  __int64 **v14; // rdi
  __int64 *v15; // rbx
  __int64 result; // rax
  __int64 v17; // rdx
  struct _LIST_ENTRY *Flink; // r13
  __int64 v19; // rax
  size_t v20; // r12
  char *v21; // r14
  char *v22; // r15
  unsigned __int16 *v23; // rbp
  SIZE_T v24; // rax
  __int64 v25; // rax
  unsigned __int16 *v26; // r14
  char *v27; // r15
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  __int64 v30; // r15
  __int64 v31; // rax
  __int128 v32; // rt0
  int v35; // [rsp+68h] [rbp+10h]

  v4 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v5 = a2;
  v6 = *a1 >> 1;
  v7 = a1;
  if ( v6 < 4 )
  {
    v10 = 0;
  }
  else
  {
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)v4;
      if ( (*(_QWORD *)v4 & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v30 = 4LL;
        do
        {
          v31 = (unsigned __int16)v9;
          if ( (unsigned __int16)v9 >= 0x61u )
          {
            if ( (unsigned __int16)v9 <= 0x7Au )
              v31 = (unsigned int)(unsigned __int16)v9 - 32;
            else
              v31 = RtlUpcaseUnicodeChar(v9);
          }
          *(_QWORD *)&v32 = v9;
          *((_QWORD *)&v32 + 1) = v31;
          v9 = v32 >> 16;
          --v30;
        }
        while ( v30 );
      }
      else
      {
        v9 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      v4 += 4;
      v6 -= 4;
      v8 = v9 + (v8 >> 1) + 3 * v8;
    }
    while ( v6 >= 4 );
    v7 = a1;
    v10 = v8 + HIDWORD(v8);
    v5 = a2;
  }
  while ( v6 )
  {
    v11 = *v4++;
    --v6;
    v12 = (v10 >> 1) + 3 * v10;
    if ( v11 >= 0x61 )
    {
      if ( v11 > 0x7A )
      {
        v10 = RtlUpcaseUnicodeChar(v11) + v12;
        continue;
      }
      v12 -= 32;
    }
    v10 = v11 + v12;
  }
  *(_DWORD *)(a3 + 16) = v10;
  v35 = v5 & 0x40;
  v13 = v10 % 0x25;
  v14 = (__int64 **)(*(_QWORD *)a3 + 8 * v13);
  *(_BYTE *)(a3 + 20) = v13;
  v15 = *v14;
  if ( !*v14 )
    return 0LL;
  while ( 1 )
  {
    if ( *((_DWORD *)v15 + 4) != *(_DWORD *)(a3 + 16) )
      goto LABEL_15;
    Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
    v19 = *v7;
    if ( (_WORD)v19 != *(_WORD *)(v17 + 8) )
      goto LABEL_15;
    v20 = *v7;
    v21 = (char *)*((_QWORD *)v7 + 1);
    v22 = *(char **)(v17 + 16);
    v23 = (unsigned __int16 *)&v21[v19];
    if ( v35 )
      break;
    if ( !memcmp(v21, v22, v20) )
      goto LABEL_26;
LABEL_15:
    v14 = (__int64 **)v15;
    v15 = (__int64 *)*v15;
    if ( !v15 )
      return 0LL;
    v7 = a1;
  }
  v24 = RtlCompareMemory(v21, v22, v20);
  if ( v24 != v20 )
  {
    v25 = 2 * (v24 >> 1);
    v26 = (unsigned __int16 *)&v21[v25];
    v27 = &v22[v25];
    while ( v26 < v23 )
    {
      v28 = *v26;
      v29 = *(unsigned __int16 *)v27;
      if ( (_WORD)v28 != (_WORD)v29 )
      {
        if ( (unsigned int)v28 >= 0x61 )
        {
          if ( (unsigned int)v28 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v28 >= 0xC0u )
              LOWORD(v28) = *((_WORD *)&Flink->Flink
                            + (v28 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v28 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v28 >> 8))))
                          + v28;
          }
          else
          {
            LOWORD(v28) = v28 - 32;
          }
        }
        if ( (unsigned int)v29 >= 0x61 )
        {
          if ( (unsigned int)v29 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v29 >= 0xC0u )
                LOWORD(v29) = *((_WORD *)&Flink->Flink
                              + (v29 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v29 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v29 >> 8))))
                            + v29;
            }
          }
          else
          {
            LOWORD(v29) = v29 - 32;
          }
        }
        if ( (_WORD)v28 != (_WORD)v29 )
          goto LABEL_15;
      }
      ++v26;
      v27 += 2;
    }
  }
LABEL_26:
  result = v15[1];
  *(_QWORD *)(a3 + 8) = v14;
  return result;
}
