/*
 * XREFs of BcpDisplayCriticalStringCentered @ 0x140699EB0
 * Callers:
 *     BcpDisplayErrorInformationModernized @ 0x14069A4D4 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14069AA84 (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069B730 (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     RtlULongSub @ 0x140491DA8 (RtlULongSub.c)
 *     BgpDisplayCharacterEx @ 0x140698FEC (BgpDisplayCharacterEx.c)
 *     BgpFoGetStringAdvanceWidth @ 0x140699768 (BgpFoGetStringAdvanceWidth.c)
 *     BcpPrintSpaces @ 0x14069AFE8 (BcpPrintSpaces.c)
 *     BcpSetCursorPosition @ 0x14069B148 (BcpSetCursorPosition.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x14069BC80 (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BcpDisplayCriticalStringCentered(_WORD *a1, int a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  int v5; // ecx
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // r14d
  unsigned int v9; // esi
  ULONG v10; // r12d
  int v11; // ebx
  __int64 v12; // r9
  unsigned int v13; // edi
  __int64 v14; // r9
  unsigned int *v15; // r13
  char v16; // r11
  __int64 v17; // r10
  NTSTATUS v18; // eax
  unsigned int v19; // ebx
  char v20; // r10
  unsigned int v21; // r11d
  _WORD *v22; // r8
  unsigned int v23; // r13d
  unsigned int v24; // r12d
  _QWORD *v25; // rax
  __int64 *v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // r13d
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  int GlyphAdvanceWidth; // eax
  int v33; // eax
  _QWORD *v34; // rcx
  int v35; // eax
  unsigned int v36; // r9d
  unsigned __int64 v38; // [rsp+40h] [rbp-29h]
  unsigned int v39; // [rsp+50h] [rbp-19h]
  unsigned int v40; // [rsp+54h] [rbp-15h]
  unsigned int v41; // [rsp+58h] [rbp-11h] BYREF
  ULONG pulResult[2]; // [rsp+60h] [rbp-9h] BYREF
  int v43; // [rsp+68h] [rbp-1h]
  __int64 v44; // [rsp+70h] [rbp+7h]
  unsigned int v46; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v47; // [rsp+E0h] [rbp+77h] BYREF
  int v48; // [rsp+E8h] [rbp+7Fh] BYREF

  v47 = a3;
  v4 = 84LL * a4;
  v48 = 0;
  v46 = 0;
  v41 = 0;
  v5 = *(_DWORD *)((char *)&unk_140E0EFA0 + v4 + 16);
  if ( BcpTextBoxLeftEdgeOverride )
  {
    v6 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
    v7 = *(_DWORD *)((char *)&unk_140E0EFA0 + v4 + 80);
  }
  else
  {
    v7 = *(_DWORD *)((char *)&unk_140E0EFA0 + v4 + 80);
    v6 = v5 + v7;
  }
  v40 = v6;
  if ( BcpTextBoxRightEdgeOverride )
    v8 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
  else
    v8 = v7 + v5 + *(_DWORD *)((char *)&unk_140E0EFA0 + v4 + 24);
  v9 = *(&BcpCursor + 1);
  v10 = BcpCursor;
  v11 = dword_140EEFD38;
  v12 = *(_QWORD *)(qword_140E3EBE0 + 24);
  *(_QWORD *)pulResult = *(_QWORD *)&BcpCursor;
  v43 = dword_140EEFD38;
  *(_DWORD *)(v12 + 56) = a2;
  *(_DWORD *)(qword_140E3EBE0 + 8) = a2;
  v13 = *(_DWORD *)((char *)&unk_140E0EFA0 + v4 + 80) + *(_DWORD *)((char *)&unk_140E0EFA0 + v4 + 16);
  BcpSetCursorPosition(v13, v9, 0LL);
  v15 = (unsigned int *)(v14 + 40);
  LOBYTE(v47) = v16;
  v44 = v14 + 40;
  if ( (int)BgpFoGetStringAdvanceWidth((int)v14 + 40, v17, &v41, v14) < 0 || v13 + v41 <= v8 )
  {
    v18 = RtlULongSub(v10, v41 >> 1, pulResult);
    v13 = pulResult[0];
    v9 = pulResult[1];
    v11 = v43;
    if ( v18 < 0 )
    {
      v19 = v43 - pulResult[1];
      goto LABEL_43;
    }
  }
  else
  {
    LOBYTE(v47) = 1;
  }
  BcpSetCursorPosition(v13, v9, 0LL);
  v19 = v11 - v9;
  v22 = a1;
  v41 = *v15;
  v23 = v21;
  if ( (int)v19 <= 0 )
    v19 = v21;
  v24 = v21;
  if ( (*a1 & 0xFFFE) != 0 )
  {
    v25 = a1 + 4;
    *(_QWORD *)pulResult = a1 + 4;
    while ( 1 )
    {
      v26 = &BcpWorkspace;
      if ( v20 && v23 <= v24 )
      {
        v27 = v24;
        v28 = v21;
        v39 = v24;
        while ( 1 )
        {
          v29 = *(unsigned __int16 *)(*v25 + 2 * v27);
          if ( (unsigned int)v29 <= 0x20 )
          {
            v30 = 0x100002401LL;
            if ( _bittest64(&v30, v29) )
              break;
          }
          if ( (int)BgpRasGetGlyphAdvanceWidth(
                      v44,
                      v29,
                      (unsigned int)&v48,
                      (unsigned int)&BcpWorkspace,
                      (__int64)&BcpWorkspace) < 0 )
            goto LABEL_43;
          v28 += v48;
          v26 = &BcpWorkspace;
          v27 = ++v39;
          v25 = *(_QWORD **)pulResult;
          if ( v8 < v13 + v28 )
          {
            v26 = &BcpWorkspace;
            if ( v19 )
            {
              if ( v13 < v8 )
              {
                LODWORD(v26) = BcpPrintSpaces(qword_140E3EBE0, v13, v8, v9, v41, (__int64)&v46);
                if ( (int)v26 < 0 )
                  goto LABEL_43;
                if ( v19 < v46 )
                  v19 = v46;
              }
              v13 = v40;
              v31 = v19 + *(_DWORD *)((char *)&unk_140E0EFA0 + v4 + 40);
              v19 = 0;
              v9 += v31;
              break;
            }
          }
        }
        v22 = a1;
        v23 = v39;
      }
      *(_QWORD *)pulResult = v22 + 4;
      GlyphAdvanceWidth = BgpRasGetGlyphAdvanceWidth(
                            v44,
                            *(unsigned __int16 *)(*((_QWORD *)v22 + 1) + 2LL * v24),
                            (unsigned int)&v48,
                            (_DWORD)v26,
                            (__int64)&BcpWorkspace);
      v21 = 0;
      if ( GlyphAdvanceWidth < 0 )
        goto LABEL_43;
      if ( v8 >= v13 + v48 )
        break;
      if ( v13 < v8 )
      {
        v33 = BcpPrintSpaces(qword_140E3EBE0, v13, v8, v9, v41, (__int64)&v46);
        v21 = 0;
        if ( v33 < 0 )
          goto LABEL_43;
        if ( v19 < v46 )
          v19 = v46;
      }
      v13 = v40;
      v9 += v19 + *(_DWORD *)((char *)&unk_140E0EFA0 + v4 + 40);
      v19 = 0;
      if ( *(_WORD *)(**(_QWORD **)pulResult + 2LL * v24) != 32 )
      {
        v34 = a1 + 4;
LABEL_39:
        v35 = BgpDisplayCharacterEx(
                *(_WORD *)(*v34 + 2LL * v24),
                (__int64 *)qword_140E3EBE0,
                v13,
                v9,
                v41,
                -1,
                &v48,
                &v46,
                v38);
        v21 = 0;
        if ( v35 < 0 )
          goto LABEL_43;
        v13 += v48;
        if ( v46 > v19 )
          v19 = v46;
      }
      v22 = a1;
      ++v24;
      v20 = v47;
      v25 = *(_QWORD **)pulResult;
      if ( v24 >= (unsigned __int16)*a1 >> 1 )
        goto LABEL_43;
    }
    v34 = *(_QWORD **)pulResult;
    goto LABEL_39;
  }
LABEL_43:
  v47 = v9 + v19;
  BcpSetCursorPosition(v13, v9, &v47);
  return v36;
}
