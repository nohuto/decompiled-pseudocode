/*
 * XREFs of ??$Base64Encode@$0IB@@TLV@@YAXPEBEIAEAY0IB@D@Z @ 0x180045A68
 * Callers:
 *     ??$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z @ 0x180045BF8 (--$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x18007A918 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TLV::Base64Encode<129>(unsigned __int8 *a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r10
  __int64 v11; // rbp
  unsigned int v12; // edx
  unsigned __int8 *v13; // rsi
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  __int64 v16; // r10
  __int64 v17; // r10
  __int64 v18; // r10
  int v19; // ebx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // r10
  unsigned __int8 v24; // dl
  __int64 v25; // r10
  __int64 v26; // r10

  v6 = a2 / 3;
  v7 = a2 - 3 * v6;
  if ( v7 )
    v8 = (v7 != 1) + 3;
  else
    v8 = 1;
  v9 = v8 + 4 * v6;
  if ( v9 <= 0x81 )
  {
    v10 = 0LL;
    if ( v6 )
    {
      v11 = v6;
      do
      {
        v12 = *a1;
        v13 = a1 + 1;
        v14 = *v13++;
        v15 = *v13;
        a1 = v13 + 1;
        *(_BYTE *)(v10 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int64)v12 >> 2];
        v16 = (unsigned int)(v10 + 1);
        *(_BYTE *)(v16 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[((unsigned __int64)v14 >> 4) | (unsigned __int8)(16 * (v12 & 3))];
        v17 = (unsigned int)(v16 + 1);
        *(_BYTE *)(v17 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[((unsigned __int64)v15 >> 6) | (unsigned __int8)(4 * (v14 & 0xF))];
        v18 = (unsigned int)(v17 + 1);
        LOBYTE(v9) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v15 & 0x3F];
        *(_BYTE *)(v18 + a3) = v9;
        v10 = (unsigned int)(v18 + 1);
        --v11;
      }
      while ( v11 );
    }
    v19 = v7 - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
      {
LABEL_13:
        *(_BYTE *)(v10 + a3) = 0;
        return v9;
      }
      v20 = a1[1];
      v21 = (unsigned __int8)(16 * (*a1 & 3));
      *(_BYTE *)(v10 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int64)*a1 >> 2];
      v22 = (unsigned int)(v10 + 1);
      *(_BYTE *)(v22 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[((unsigned __int64)v20 >> 4) | v21];
      v23 = (unsigned int)(v22 + 1);
      LOBYTE(v9) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int8)(4 * (v20 & 0xF))];
      *(_BYTE *)(v23 + a3) = v9;
    }
    else
    {
      v24 = 16 * (*a1 & 3);
      *(_BYTE *)(v10 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int64)*a1 >> 2];
      v25 = (unsigned int)(v10 + 1);
      LOBYTE(v9) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v24];
      *(_BYTE *)(v25 + a3) = v9;
      v23 = (unsigned int)(v25 + 1);
      *(_BYTE *)(v23 + a3) = 61;
    }
    v26 = (unsigned int)(v23 + 1);
    *(_BYTE *)(v26 + a3) = 61;
    v10 = (unsigned int)(v26 + 1);
    goto LABEL_13;
  }
  return v9;
}
