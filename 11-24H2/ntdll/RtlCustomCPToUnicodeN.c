/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x180038C80
 * Callers:
 *     RtlOemToUnicodeN @ 0x1800CF600 (RtlOemToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180038DF0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlCustomCPToUnicodeN(
        PCPTABLEINFO CustomCP,
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCH CustomCPString,
        ULONG BytesInCustomCPString)
{
  PWCH v7; // r11
  ULONG v8; // r8d
  ULONG v9; // r10d
  __int64 v10; // rdx
  unsigned __int16 *MultiByteTable; // rbx
  PCH v12; // r9
  __int64 v13; // rax
  ULONG *v15; // r8
  NTSTATUS v16; // ebx
  PCH v17; // rbx
  int v18; // esi
  unsigned __int16 *DBCSOffsets; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // [rsp+40h] [rbp+8h] BYREF

  v7 = UnicodeString;
  if ( !CustomCP || CustomCP->CodePage == 0xFDE9 )
  {
    v15 = (ULONG *)&v22;
    if ( BytesInUnicodeString )
      v15 = BytesInUnicodeString;
    v16 = 0;
    if ( BytesInCustomCPString )
    {
      if ( RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v15, CustomCPString, BytesInCustomCPString) == -1073741789 )
        return -2147483643;
      return v16;
    }
    else
    {
      *v15 = 0;
      return 0;
    }
  }
  else
  {
    v8 = BytesInCustomCPString;
    v9 = MaxBytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      v17 = CustomCPString;
      v18 = (int)UnicodeString;
      DBCSOffsets = CustomCP->DBCSOffsets;
      while ( v9 && v8 )
      {
        --v9;
        --v8;
        v20 = (unsigned __int8)*v17;
        v21 = DBCSOffsets[v20];
        if ( (_WORD)v21 )
        {
          if ( !v8 )
          {
            *v7 = 0;
            LODWORD(v7) = (_DWORD)v7 + 2;
            break;
          }
          --v8;
          *v7++ = DBCSOffsets[v21 + (unsigned __int8)v17[1]];
          v17 += 2;
        }
        else
        {
          *v7++ = CustomCP->MultiByteTable[v20];
          ++v17;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v7 - v18;
    }
    else
    {
      v10 = BytesInCustomCPString;
      if ( v9 < BytesInCustomCPString )
        v10 = v9;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v10;
      MultiByteTable = CustomCP->MultiByteTable;
      if ( (_DWORD)v10 )
      {
        v12 = CustomCPString;
        do
        {
          v13 = (unsigned __int8)*v12;
          ++v7;
          ++v12;
          *(v7 - 1) = MultiByteTable[v13];
          --v10;
        }
        while ( v10 );
      }
    }
    return v9 < v8 ? 0x80000005 : 0;
  }
}
