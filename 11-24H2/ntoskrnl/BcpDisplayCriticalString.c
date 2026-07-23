/*
 * XREFs of BcpDisplayCriticalString @ 0x140699B4C
 * Callers:
 *     BcpDisplayErrorInformation @ 0x14069A26C (BcpDisplayErrorInformation.c)
 *     BcpDisplayErrorInformationModernized @ 0x14069A4D4 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgress @ 0x14069A874 (BcpDisplayProgress.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x14069B16C (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069B3E0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140698FEC (BgpDisplayCharacterEx.c)
 *     BgpFoGetStringAdvanceWidth @ 0x140699768 (BgpFoGetStringAdvanceWidth.c)
 *     BcpPrintSpaces @ 0x14069AFE8 (BcpPrintSpaces.c)
 *     BcpSetCursorPosition @ 0x14069B148 (BcpSetCursorPosition.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x14069BC80 (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BcpDisplayCriticalString(_WORD *a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // r9
  char *v6; // rax
  char *v7; // rcx
  int v8; // r12d
  unsigned int v9; // esi
  unsigned int v10; // edi
  unsigned int v11; // r14d
  int v12; // ebx
  __int64 v13; // rcx
  int *v14; // r13
  unsigned int v15; // ebx
  _WORD *v16; // r8
  unsigned int v17; // r15d
  unsigned int v18; // r13d
  _QWORD *v19; // rax
  __int64 *v20; // r9
  __int64 v21; // rcx
  int v22; // r15d
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  _QWORD *v26; // rcx
  unsigned int v27; // r9d
  unsigned __int64 v29; // [rsp+40h] [rbp-38h]
  int v30; // [rsp+50h] [rbp-28h]
  bool v31; // [rsp+54h] [rbp-24h]
  _QWORD *v32; // [rsp+58h] [rbp-20h]
  int v33; // [rsp+60h] [rbp-18h]
  __int64 v34; // [rsp+68h] [rbp-10h]
  int v36; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v37; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v38; // [rsp+D8h] [rbp+60h] BYREF

  v4 = 84LL * a4;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v34 = v4;
  v6 = (char *)&unk_140E0EFA0 + v4;
  v7 = (char *)&unk_140E0EFA0 + v4;
  if ( BcpTextBoxLeftEdgeOverride )
    v8 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
  else
    v8 = *((_DWORD *)v7 + 4) + *((_DWORD *)v6 + 8);
  if ( BcpTextBoxRightEdgeOverride )
    v9 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
  else
    v9 = *((_DWORD *)v7 + 4) + *((_DWORD *)v6 + 8) + *(_DWORD *)((char *)&unk_140E0EFA0 + v4 + 24);
  v10 = BcpCursor;
  v11 = *(&BcpCursor + 1);
  v12 = dword_140EEFD38;
  v13 = *(_QWORD *)(qword_140E3EBE0 + 24);
  v31 = 0;
  *(_DWORD *)(v13 + 56) = a2;
  v14 = (int *)(v13 + 40);
  v33 = v13 + 40;
  *(_DWORD *)(qword_140E3EBE0 + 8) = a2;
  if ( (int)BgpFoGetStringAdvanceWidth((int)v13 + 40, (__int64)a1, &v38, v4) >= 0 )
    v31 = v10 + v38 > v9;
  v15 = v12 - v11;
  v16 = a1;
  v30 = *v14;
  v17 = 0;
  if ( (int)v15 <= 0 )
    v15 = 0;
  v18 = 0;
  if ( (*a1 & 0xFFFE) != 0 )
  {
    v19 = a1 + 4;
    v32 = a1 + 4;
    while ( 1 )
    {
      v20 = &BcpWorkspace;
      if ( v31 && v17 <= v18 )
      {
        v21 = v18;
        v22 = 0;
        v38 = v18;
        while ( 1 )
        {
          v23 = *(unsigned __int16 *)(*v19 + 2 * v21);
          if ( (unsigned int)v23 <= 0x20 )
          {
            v24 = 0x100002401LL;
            if ( _bittest64(&v24, v23) )
              break;
          }
          if ( (int)BgpRasGetGlyphAdvanceWidth(
                      v33,
                      v23,
                      (unsigned int)&v36,
                      (unsigned int)&BcpWorkspace,
                      (__int64)&BcpWorkspace) < 0 )
            goto LABEL_40;
          v22 += v36;
          v20 = &BcpWorkspace;
          v21 = ++v38;
          v19 = v32;
          if ( v9 < v22 + v10 )
          {
            v20 = &BcpWorkspace;
            if ( v15 )
            {
              if ( v10 < v9 )
              {
                LODWORD(v20) = BcpPrintSpaces(qword_140E3EBE0, v10, v9, v11, v30, (__int64)&v37);
                if ( (int)v20 < 0 )
                  goto LABEL_40;
                if ( v15 < v37 )
                  v15 = v37;
              }
              v10 = v8;
              v25 = v15 + *(_DWORD *)((char *)&unk_140E0EFA0 + v34 + 40);
              v15 = 0;
              v11 += v25;
              break;
            }
          }
        }
        v16 = a1;
        v17 = v38;
      }
      v32 = v16 + 4;
      if ( (int)BgpRasGetGlyphAdvanceWidth(
                  v33,
                  *(unsigned __int16 *)(*((_QWORD *)v16 + 1) + 2LL * v18),
                  (unsigned int)&v36,
                  (_DWORD)v20,
                  (__int64)&BcpWorkspace) < 0 )
        goto LABEL_40;
      if ( v9 >= v10 + v36 )
        break;
      if ( v10 < v9 )
      {
        if ( (int)BcpPrintSpaces(qword_140E3EBE0, v10, v9, v11, v30, (__int64)&v37) < 0 )
          goto LABEL_40;
        if ( v15 < v37 )
          v15 = v37;
      }
      v10 = v8;
      v11 += v15 + *(_DWORD *)((char *)&unk_140E0EFA0 + v34 + 40);
      v15 = 0;
      if ( *(_WORD *)(*v32 + 2LL * v18) != 32 )
      {
        v26 = a1 + 4;
LABEL_36:
        if ( (int)BgpDisplayCharacterEx(
                    *(_WORD *)(*v26 + 2LL * v18),
                    (__int64 *)qword_140E3EBE0,
                    v10,
                    v11,
                    v30,
                    -1,
                    &v36,
                    &v37,
                    v29) < 0 )
          goto LABEL_40;
        v10 += v36;
        if ( v37 > v15 )
          v15 = v37;
      }
      v16 = a1;
      ++v18;
      v19 = v32;
      if ( v18 >= (unsigned __int16)*a1 >> 1 )
        goto LABEL_40;
    }
    v26 = v32;
    goto LABEL_36;
  }
LABEL_40:
  v37 = v11 + v15;
  BcpSetCursorPosition(v10, v11, &v37);
  return v27;
}
