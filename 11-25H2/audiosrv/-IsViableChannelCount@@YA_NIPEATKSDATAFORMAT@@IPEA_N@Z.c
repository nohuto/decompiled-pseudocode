/*
 * XREFs of ?IsViableChannelCount@@YA_NIPEATKSDATAFORMAT@@IPEA_N@Z @ 0x18009F924
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180043A2C (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 * Callees:
 *     <none>
 */

char __fastcall IsViableChannelCount(unsigned int a1, union KSDATAFORMAT *a2, ULONG a3, bool *a4)
{
  char v4; // r10
  __int64 v6; // r11
  union KSDATAFORMAT *v7; // r8
  LONGLONG v8; // rax
  LONGLONG v9; // rax
  bool v10; // cc

  v4 = 0;
  if ( !a1 )
    return 1;
  v6 = a1;
  do
  {
    v7 = (union KSDATAFORMAT *)((char *)a2 + a2->FormatSize);
    if ( *a4 )
    {
      v8 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *(&a2->Alignment + 2);
      if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *(&a2->Alignment + 2) )
        v8 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *(&a2->Alignment + 3);
      if ( v8 )
        goto LABEL_13;
      v9 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(&a2->Alignment + 4);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(&a2->Alignment + 4) )
        v9 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(&a2->Alignment + 5);
      if ( v9 )
      {
LABEL_13:
        *a4 = 0;
      }
      else
      {
        v10 = a3 <= a2[1].FormatSize;
        *a4 = v10;
        if ( v10 )
          v4 = 1;
      }
    }
    ++a4;
    a2 = v7;
    --v6;
  }
  while ( v6 );
  return v4;
}
