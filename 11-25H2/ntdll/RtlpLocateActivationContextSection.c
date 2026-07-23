/*
 * XREFs of RtlpLocateActivationContextSection @ 0x18001A3B0
 * Callers:
 *     RtlpFindNextActivationContextSection @ 0x18001A1F0 (RtlpFindNextActivationContextSection.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180048FD0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x1800920DC (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800B0060 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x1800F587C (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800F5BC4 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryRunLevel @ 0x18010E09C (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180114FFC (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x180119E28 (RtlpQueryInformationActivationContextManifestResourceName.c)
 * Callees:
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     bsearch @ 0x180125820 (bsearch.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLocateActivationContextSection(_DWORD *a1, _QWORD *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // r9d
  unsigned int v9; // ebx
  __int64 v10; // rax
  _DWORD *v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  int v17; // edx
  _DWORD *v18; // rcx
  unsigned int v19; // r9d
  _DWORD *v20; // rdx
  __int64 v21; // r9
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // r11d
  unsigned int j; // r9d
  char *v30; // rsi
  unsigned int i; // r8d
  __int64 v32; // rax
  char *v33; // rcx
  unsigned int v34; // eax
  __int128 Key; // [rsp+40h] [rbp-48h] BYREF

  v6 = a1[3];
  if ( v6 < 0x20 || a1[1] < 0x20u )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Activation context data at %p too small; TotalSize = %lu; HeaderSize = %lu\n",
      a1,
      v6,
      a1[1]);
  }
  else
  {
    v9 = 0;
    if ( a2 )
    {
      v24 = (unsigned int)a1[5];
      if ( !(_DWORD)v24 )
        return (unsigned int)-1072365567;
      if ( (int)v24 + 16 > v6 || (unsigned int)(v24 + 16) < 0x10 || (unsigned int)v24 >= v6 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS/RTL: Extended TOC offset (%ld) is outside bounds of activation context data (%lu bytes)\n",
          v24,
          v6);
      }
      else
      {
        v25 = *(unsigned int *)((char *)a1 + v24 + 4);
        v26 = *(unsigned int *)((char *)a1 + v24 + 8);
        v27 = 24 * v25;
        if ( (unsigned __int64)(24 * v25) <= 0xFFFFFFFF
          && v27 + (unsigned int)v26 <= v6
          && v27 + (unsigned int)v26 >= v27
          && (unsigned int)v26 < v6 )
        {
          v30 = (char *)a1 + v26;
          for ( i = 0; i < (unsigned int)v25; ++i )
          {
            v32 = *a2 - *(_QWORD *)&v30[24 * i];
            v33 = &v30[24 * i];
            if ( *a2 == *(_QWORD *)v33 )
              v32 = a2[1] - *((_QWORD *)v33 + 1);
            if ( !v32 )
            {
              v34 = *((_DWORD *)v33 + 4);
              if ( v34 + 16 > v6 || v34 + 16 < 0x10 || v34 >= v6 )
              {
                DbgPrintEx(
                  0x33u,
                  0,
                  "SXS/RTL: Extended TOC section TOC %d (offset: %ld, size: %u) is outside activation context data bounds (%lu bytes)\n",
                  i,
                  v34,
                  16,
                  v6);
                return (unsigned int)-1072365565;
              }
              _mm_lfence();
              v10 = *((unsigned int *)v33 + 4);
              goto LABEL_5;
            }
          }
          return (unsigned int)-1072365567;
        }
        DbgPrintEx(
          0x33u,
          0,
          "SXS/RTL: Extended TOC entry array (starting at offset %ld; count = %lu; entry size = %u) is outside bounds of "
          "activation context data (%lu bytes)\n",
          v26,
          v25,
          24,
          v6);
      }
    }
    else
    {
      v10 = (unsigned int)a1[4];
      if ( !(_DWORD)v10 )
        return (unsigned int)-1072365567;
LABEL_5:
      v11 = (_DWORD *)((char *)a1 + v10);
      if ( !v11 )
        return (unsigned int)-1072365567;
      v12 = v11[1];
      if ( !v12 )
        return (unsigned int)-1072365567;
      v13 = a1[3];
      v14 = (unsigned int)v11[2];
      v15 = 16LL * v12;
      if ( v15 <= 0xFFFFFFFF
        && (int)v15 + (int)v14 <= v13
        && (int)v15 + (int)v14 >= (unsigned int)v15
        && (unsigned int)v14 < v13 )
      {
        v17 = v11[3];
        v18 = (_DWORD *)((char *)a1 + v14);
        if ( (v17 & 2) == 0 )
        {
          for ( j = 0; j < v12; ++j )
          {
            v20 = &v18[4 * j];
            if ( *v20 == a3 )
              goto LABEL_18;
          }
          return (unsigned int)-1072365567;
        }
        if ( a3 >= *v18 )
        {
          v19 = v11[1];
          if ( (v17 & 1) != 0 )
          {
            v28 = a3 - *v18;
            if ( v28 >= v19 )
              return (unsigned int)-1072365567;
            v20 = &v18[4 * v28];
          }
          else
          {
            Key = 0LL;
            LODWORD(Key) = a3;
            v20 = bsearch(&Key, v18, v19, 0x10uLL, RtlpCompareActivationContextDataTOCEntryById);
          }
LABEL_18:
          if ( v20 )
          {
            v21 = (unsigned int)v20[1];
            if ( (_DWORD)v21 )
            {
              v22 = v20[2];
              v23 = a1[3];
              if ( v22 + (unsigned int)v21 <= v23 && v22 + (unsigned int)v21 >= v22 && (unsigned int)v21 < v23 )
              {
                *a4 = (char *)a1 + v21;
                *a5 = v20[2];
                return v9;
              }
              DbgPrintEx(
                0x33u,
                0,
                "SXS/RTL: Section found (offset %ld; length %lu) extends past end of activation context data (%lu bytes)\n",
                v21,
                v22,
                v23);
              return (unsigned int)-1072365565;
            }
          }
        }
        return (unsigned int)-1072365567;
      }
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: TOC entry array (offset: %ld; count = %lu; entry size = %u) is outside bounds of activation context data (%lu bytes)\n",
        v14,
        v12,
        16,
        v13);
    }
  }
  return (unsigned int)-1072365565;
}
