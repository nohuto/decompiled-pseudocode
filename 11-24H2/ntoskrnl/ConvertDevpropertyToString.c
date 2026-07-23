/*
 * XREFs of ConvertDevpropertyToString @ 0x140A8A040
 * Callers:
 *     ExpressionConvertToString @ 0x140AB9C18 (ExpressionConvertToString.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140423038 (RtlStringCbPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x1404447AC (RtlStringCbCopyExW.c)
 *     ConvertDevpropcompkeyToString @ 0x140A8A758 (ConvertDevpropcompkeyToString.c)
 */

__int64 __fastcall ConvertDevpropertyToString(__int64 a1, unsigned int a2, wchar_t *a3, unsigned int *a4)
{
  unsigned __int64 v4; // r14
  wchar_t *v5; // r13
  __int64 v6; // r15
  size_t v7; // rsi
  unsigned int v8; // edx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  const wchar_t *v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rax
  unsigned int v33; // r12d
  NTSTATUS v34; // eax
  __int16 *v35; // rbx
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  NTSTATUS v40; // eax
  bool v42; // zf
  double v43; // xmm0_8
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  const wchar_t *v49; // r8
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // [rsp+38h] [rbp-69h]
  __int64 v58; // [rsp+40h] [rbp-61h]
  __int64 v59; // [rsp+48h] [rbp-59h]
  __int64 v60; // [rsp+50h] [rbp-51h]
  __int64 v61; // [rsp+58h] [rbp-49h]
  __int64 v62; // [rsp+60h] [rbp-41h]
  __int64 v63; // [rsp+68h] [rbp-39h]
  __int64 v64; // [rsp+70h] [rbp-31h]
  __int64 v65; // [rsp+78h] [rbp-29h]
  __int64 v66; // [rsp+80h] [rbp-21h]
  __int64 v67; // [rsp+88h] [rbp-19h]
  size_t cbDest; // [rsp+98h] [rbp-9h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v70; // [rsp+A8h] [rbp+7h]
  unsigned __int64 v73; // [rsp+118h] [rbp+77h] BYREF
  unsigned int *v74; // [rsp+120h] [rbp+7Fh]

  v74 = a4;
  v4 = a2;
  v5 = a3;
  LODWORD(v73) = 0;
  v6 = a1;
  if ( a2 >= 2 )
    *a3 = 0;
  ppszDestEnd = a3;
  cbDest = a2;
  v7 = a2;
  v8 = ConvertDevpropcompkeyToString(a1, a3, a2, &v73);
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -1073741789 )
  {
    v8 = 0;
    v9 = (unsigned int)v73 - 2LL;
    if ( v4 >= v9 )
    {
      v7 = 2LL - (unsigned int)v73 + v4;
      cbDest = v7;
      v5 += v9 >> 1;
      ppszDestEnd = v5;
    }
    v10 = *(_DWORD *)(v6 + 32);
    if ( v10 > 0x1003 )
    {
      if ( v10 == 4109 )
      {
        v16 = L"GUID_ARRAY";
      }
      else
      {
        if ( v10 != 8210 )
          return (unsigned int)-1073741811;
        v16 = L"STRING_LIST";
      }
    }
    else if ( v10 == 4099 )
    {
      v16 = L"BINARY";
    }
    else if ( v10 > 0xD )
    {
      if ( v10 > 0x14 )
      {
        v27 = v10 - 21;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 != 1 )
                  return (unsigned int)-1073741811;
                v16 = L"STRING_INDIRECT";
              }
              else
              {
                v16 = L"NTSTATUS";
              }
            }
            else
            {
              v16 = L"ERROR";
            }
          }
          else
          {
            v16 = L"DEVPROPTYPE";
          }
        }
        else
        {
          v16 = L"DEVPROPKEY";
        }
      }
      else if ( v10 == 20 )
      {
        v16 = L"SECURITY_DESCRIPTOR_STRING";
      }
      else
      {
        v22 = v10 - 14;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  if ( v26 != 1 )
                    return (unsigned int)-1073741811;
                  v16 = L"SECURITY_DESCRIPTOR";
                }
                else
                {
                  v16 = L"STRING";
                }
              }
              else
              {
                v16 = L"BOOLEAN";
              }
            }
            else
            {
              v16 = L"FILETIME";
            }
          }
          else
          {
            v16 = L"DATE";
          }
        }
        else
        {
          v16 = L"CURRENCY";
        }
      }
    }
    else if ( v10 == 13 )
    {
      v16 = L"GUID";
    }
    else if ( v10 > 6 )
    {
      v17 = v10 - 7;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v21 = v20 - 1;
              if ( v21 )
              {
                if ( v21 != 1 )
                  return (unsigned int)-1073741811;
                v16 = L"DECIMAL";
              }
              else
              {
                v16 = L"DOUBLE";
              }
            }
            else
            {
              v16 = L"FLOAT";
            }
          }
          else
          {
            v16 = L"UINT64";
          }
        }
        else
        {
          v16 = L"INT64";
        }
      }
      else
      {
        v16 = L"UINT32";
      }
    }
    else
    {
      if ( v10 != 6 )
      {
        v11 = 0LL;
        if ( v10 )
        {
          v12 = v10 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  if ( v15 != 1 )
                    return (unsigned int)-1073741811;
                  v16 = L"UINT16";
                }
                else
                {
                  v16 = L"INT16";
                }
              }
              else
              {
                v16 = L"BYTE";
              }
            }
            else
            {
              v16 = L"SBYTE";
            }
          }
          else
          {
            v16 = L"NULL";
          }
        }
        else
        {
          v16 = L"EMPTY";
        }
LABEL_71:
        v31 = -1LL;
        v32 = -1LL;
        do
          ++v32;
        while ( v16[v32] );
        v33 = v73 + 2 * v32;
        if ( v33 <= (unsigned int)v4 )
        {
          v34 = RtlStringCbCopyExW(v5, v7, v16, &ppszDestEnd, &cbDest, 0x400u);
          v11 = 0LL;
          v8 = v34;
          if ( v34 < 0 )
            return v8;
          v5 = ppszDestEnd;
          v7 = cbDest;
        }
        if ( !*(_DWORD *)(v6 + 36) )
          goto LABEL_94;
        v35 = *(__int16 **)(v6 + 40);
        if ( !v35 )
          goto LABEL_94;
        v36 = *(_DWORD *)(v6 + 32);
        if ( v36 > 0x1003 )
        {
          if ( v36 == 4109 )
          {
LABEL_149:
            while ( 1 )
            {
              v56 = *(unsigned int *)(v6 + 36);
              v73 = v11;
              if ( v11 >= v56 )
                break;
              v33 += 80;
              v70 = *(_OWORD *)(*(_QWORD *)(v6 + 40) + v11);
              if ( v33 <= (unsigned int)v4 )
              {
                LODWORD(v67) = HIBYTE(*((_QWORD *)&v70 + 1));
                LODWORD(v66) = BYTE14(v70);
                LODWORD(v65) = BYTE13(v70);
                LODWORD(v64) = BYTE12(v70);
                LODWORD(v63) = BYTE11(v70);
                LODWORD(v62) = BYTE10(v70);
                LODWORD(v61) = BYTE9(v70);
                LODWORD(v60) = BYTE8(v70);
                LODWORD(v59) = WORD3(v70);
                LODWORD(v58) = WORD2(v70);
                LODWORD(v57) = v70;
                v8 = RtlStringCbPrintfExW(
                       v5,
                       cbDest,
                       &ppszDestEnd,
                       &cbDest,
                       0x400u,
                       L"({%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x})",
                       v57,
                       v58,
                       v59,
                       v60,
                       v61,
                       v62,
                       v63,
                       v64,
                       v65,
                       v66,
                       v67);
                if ( (v8 & 0x80000000) != 0 )
                  return v8;
                v5 = ppszDestEnd;
                v11 = v73;
                LODWORD(v4) = a2;
                v6 = a1;
              }
              v11 += 16LL;
            }
            goto LABEL_94;
          }
          if ( v36 == 8210 )
          {
            while ( *v35 )
            {
              v54 = -1LL;
              do
                ++v54;
              while ( v35[v54] );
              v33 += 2 * v54 + 4;
              if ( v33 <= (unsigned int)v4 )
              {
                v8 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"[%s]", v35);
                if ( (v8 & 0x80000000) != 0 )
                  return v8;
                v5 = ppszDestEnd;
              }
              v55 = -1LL;
              do
                ++v55;
              while ( v35[v55] );
              v7 = cbDest;
              v35 += v55 + 1;
            }
            goto LABEL_94;
          }
          goto LABEL_139;
        }
        if ( v36 == 4099 )
          goto LABEL_94;
        if ( v36 <= 0xD )
        {
          if ( v36 == 13 )
            goto LABEL_149;
          if ( v36 <= 6 )
          {
            if ( v36 != 6 )
            {
              if ( v36 )
              {
                v37 = v36 - 1;
                if ( v37 )
                {
                  v38 = v37 - 1;
                  if ( v38 )
                  {
                    v39 = v38 - 1;
                    if ( v39 )
                    {
                      if ( v39 - 1 <= 1 )
                      {
                        v33 += 16;
                        if ( v33 <= (unsigned int)v4 )
                        {
                          v40 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.4x)", *v35);
                          goto LABEL_93;
                        }
LABEL_94:
                        if ( v74 )
                          *v74 = v33;
                        if ( v33 > (unsigned int)v4 )
                          return (unsigned int)-1073741789;
                        return v8;
                      }
LABEL_139:
                      v8 = -1073741811;
                      goto LABEL_94;
                    }
                  }
                  v33 += 12;
                  if ( v33 > (unsigned int)v4 )
                    goto LABEL_94;
                  v40 = RtlStringCbPrintfExW(
                          v5,
                          v7,
                          &ppszDestEnd,
                          &cbDest,
                          0x400u,
                          L"(0x%.2x)",
                          *(unsigned __int8 *)v35);
LABEL_93:
                  v8 = v40;
                  if ( v40 < 0 )
                    return v8;
                  goto LABEL_94;
                }
              }
              return (unsigned int)-1073741811;
            }
LABEL_135:
            v33 += 24;
            if ( v33 > (unsigned int)v4 )
              goto LABEL_94;
            v40 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.8x)", *(_DWORD *)v35);
            goto LABEL_93;
          }
          switch ( v36 )
          {
            case 7u:
              goto LABEL_135;
            case 8u:
            case 9u:
              v33 += 40;
              if ( v33 > (unsigned int)v4 )
                goto LABEL_94;
              v40 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.16I64x)", *(_QWORD *)v35);
              goto LABEL_93;
            case 0xAu:
            case 0xBu:
              v33 += 32;
              if ( v33 > (unsigned int)v4 )
                goto LABEL_94;
              if ( v36 == 10 )
                v43 = *(float *)v35;
              else
                v43 = *(double *)v35;
              v40 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(%.6e)", v43);
              goto LABEL_93;
          }
          v42 = v36 == 12;
LABEL_120:
          if ( v42 )
            goto LABEL_94;
          goto LABEL_139;
        }
        if ( v36 > 0x14 )
        {
          v50 = v36 - 21;
          if ( !v50 )
            goto LABEL_94;
          v51 = v50 - 1;
          if ( !v51 )
            goto LABEL_135;
          v52 = v51 - 1;
          if ( !v52 )
            goto LABEL_135;
          v53 = v52 - 1;
          if ( !v53 )
            goto LABEL_135;
          if ( v53 != 1 )
            goto LABEL_139;
        }
        else if ( v36 != 20 )
        {
          v44 = v36 - 14;
          if ( !v44 )
            goto LABEL_94;
          v45 = v44 - 1;
          if ( !v45 )
            goto LABEL_94;
          v46 = v45 - 1;
          if ( !v46 )
            goto LABEL_94;
          v47 = v46 - 1;
          if ( !v47 )
          {
            v49 = L"(TRUE)";
            if ( *(_BYTE *)v35 != 0xFF )
              v49 = L"(FALSE)";
            do
              ++v31;
            while ( v49[v31] );
            v33 += 2 * v31;
            if ( v33 > (unsigned int)v4 )
              goto LABEL_94;
            v40 = RtlStringCbCopyExW(v5, v7, v49, &ppszDestEnd, &cbDest, 0x400u);
            goto LABEL_93;
          }
          v48 = v47 - 1;
          if ( v48 )
          {
            v42 = v48 == 1;
            goto LABEL_120;
          }
        }
        do
          ++v31;
        while ( v35[v31] );
        v33 += 2 * v31;
        if ( v33 > (unsigned int)v4 )
          goto LABEL_94;
        v40 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(%s)", *(_QWORD *)(v6 + 40));
        goto LABEL_93;
      }
      v16 = L"INT32";
    }
    v11 = 0LL;
    goto LABEL_71;
  }
  return v8;
}
