/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x1409066E0
 * Callers:
 *     RtlUnicodeToOemN @ 0x1409072A0 (RtlUnicodeToOemN.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x140905BE0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v7; // r10d
  PCH v8; // rax
  ULONG v9; // r11d
  _WORD *WideCharTable; // rbx
  PWCH v11; // r9
  __int64 v12; // rcx
  __int16 v13; // r8
  unsigned int v15; // ecx
  ULONG v16; // edx
  _BYTE *v17; // rbx
  PWCH v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  ULONG *v21; // r8
  NTSTATUS v22; // ebx
  char v23; // [rsp+40h] [rbp+8h] BYREF

  v7 = MaxBytesInCustomCPString;
  v8 = CustomCPString;
  if ( !CustomCP || CustomCP->CodePage == 0xFDE9 )
  {
    v21 = (ULONG *)&v23;
    if ( BytesInCustomCPString )
      v21 = BytesInCustomCPString;
    v22 = 0;
    if ( BytesInUnicodeString )
    {
      if ( RtlUnicodeToUTF8N(CustomCPString, v7, v21, UnicodeString, BytesInUnicodeString) == -1073741789 )
        return -2147483643;
      return v22;
    }
    else
    {
      *v21 = 0;
      return 0;
    }
  }
  else
  {
    v9 = BytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      WideCharTable = CustomCP->WideCharTable;
      if ( v9 )
      {
        v11 = UnicodeString;
        while ( v7 )
        {
          v12 = *v11++;
          v13 = WideCharTable[v12];
          if ( HIBYTE(v13) )
          {
            v15 = v7--;
            if ( v15 < 2 )
              break;
            *v8++ = HIBYTE(v13);
          }
          *v8 = v13;
          --v7;
          ++v8;
          if ( !--v9 )
            break;
        }
      }
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = (_DWORD)v8 - (_DWORD)CustomCPString;
    }
    else
    {
      v16 = MaxBytesInCustomCPString;
      if ( v9 < MaxBytesInCustomCPString )
        v16 = BytesInUnicodeString >> 1;
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = v16;
      v17 = CustomCP->WideCharTable;
      if ( v16 )
      {
        v18 = UnicodeString;
        v19 = v16;
        do
        {
          v20 = *v18;
          ++v8;
          ++v18;
          *(v8 - 1) = v17[v20];
          --v19;
        }
        while ( v19 );
      }
    }
    return v7 < v9 ? 0x80000005 : 0;
  }
}
