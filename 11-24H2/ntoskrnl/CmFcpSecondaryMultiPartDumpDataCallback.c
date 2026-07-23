/*
 * XREFs of CmFcpSecondaryMultiPartDumpDataCallback @ 0x1406676C0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpCountFeatureDescriptors @ 0x140667484 (CmFcpCountFeatureDescriptors.c)
 *     CmFcpFindNextProviderWithDescriptors @ 0x140667514 (CmFcpFindNextProviderWithDescriptors.c)
 *     CmFcpPopulateModuleFeatures @ 0x1406675B0 (CmFcpPopulateModuleFeatures.c)
 */

void __fastcall CmFcpSecondaryMultiPartDumpDataCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int128 *v5; // rsi
  bool v6; // zf
  _DWORD *v7; // rcx
  int v8; // edx
  __int64 *i; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 *NextProviderWithDescriptors; // rax
  __int64 **v13; // r14
  __int64 *v14; // rdi
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  __int64 v17; // r8
  int v18; // eax
  int v19; // [rsp+40h] [rbp+18h] BYREF

  v19 = 0;
  ReasonSpecificData[10] = 0;
  v5 = (__int128 *)*((_QWORD *)ReasonSpecificData + 6);
  *((_OWORD *)ReasonSpecificData + 1) = xmmword_14003AC20;
  if ( !v5 )
  {
    v5 = &xmmword_140E62510;
    xmmword_140E62510 = 0LL;
    *((_QWORD *)ReasonSpecificData + 6) = &xmmword_140E62510;
  }
  if ( *(_BYTE *)v5 )
  {
    v13 = (__int64 **)v5 + 1;
    v14 = (__int64 *)*((_QWORD *)v5 + 1);
    if ( !v14 )
      goto LABEL_20;
    v15 = CmFcpCountFeatureDescriptors((_QWORD *)v14[14], v14[15], &v19);
    v16 = 16 * v15 + 24;
    v6 = ReasonSpecificData[2] == 0;
    ReasonSpecificData[10] = v16;
    if ( !v6 && v16 <= ReasonSpecificData[3] )
    {
      v17 = *(_QWORD *)ReasonSpecificData;
      *(_DWORD *)v17 = v16;
      *(_DWORD *)(v17 + 4) = 1;
      *(_QWORD *)(v17 + 8) = v14[10];
      *(_DWORD *)(v17 + 16) = v19;
      *(_DWORD *)(v17 + 20) = v15;
      CmFcpPopulateModuleFeatures(v14[14], v14[15], v17 + 24, v15);
      ReasonSpecificData[2] = ReasonSpecificData[10];
      *((_QWORD *)ReasonSpecificData + 4) = *(_QWORD *)ReasonSpecificData;
    }
    NextProviderWithDescriptors = CmFcpFindNextProviderWithDescriptors((__int64 *)*v14);
  }
  else
  {
    v6 = ReasonSpecificData[2] == 0;
    ReasonSpecificData[10] = 16;
    if ( !v6 )
    {
      v7 = *(_DWORD **)ReasonSpecificData;
      v8 = 0;
      *v7 = 16;
      v7[1] = 1;
      v7[2] = dword_140E3EE68;
      for ( i = (__int64 *)qword_140EF76C8; i != &qword_140EF76C8; i = (__int64 *)*i )
      {
        v10 = i[14];
        if ( v10 )
        {
          v11 = i[15];
          if ( v11 )
          {
            if ( v11 > v10 )
              ++v8;
          }
        }
      }
      v7[3] = v8;
      ReasonSpecificData[2] = ReasonSpecificData[10];
      *((_QWORD *)ReasonSpecificData + 4) = *(_QWORD *)ReasonSpecificData;
    }
    *(_BYTE *)v5 = 1;
    NextProviderWithDescriptors = CmFcpFindNextProviderWithDescriptors((__int64 *)qword_140EF76C8);
    v13 = (__int64 **)v5 + 1;
  }
  *v13 = NextProviderWithDescriptors;
  v14 = NextProviderWithDescriptors;
LABEL_20:
  v18 = ReasonSpecificData[14];
  if ( v14 )
  {
    ReasonSpecificData[14] = v18 | 1;
  }
  else
  {
    ReasonSpecificData[14] = v18 & 0xFFFFFFFE;
    *v13 = 0LL;
    *(_BYTE *)v5 = 0;
  }
}
