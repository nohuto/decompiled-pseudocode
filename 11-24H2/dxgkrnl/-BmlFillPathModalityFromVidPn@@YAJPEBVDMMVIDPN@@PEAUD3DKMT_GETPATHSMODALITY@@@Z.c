/*
 * XREFs of ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1403BCCA8
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1403635A4 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403BCEE0 (--$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall BmlFillPathModalityFromVidPn(const struct DMMVIDPN *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  VIDPN_MGR *v2; // r12
  const struct DMMVIDPN *v3; // r8
  char *v4; // rbp
  char *v6; // r13
  unsigned int i; // ebx
  char *v8; // rsi
  __int64 v9; // rbx
  char v10; // r14
  struct DMMVIDPNTARGETMODESET *v11; // rdi
  __int64 v12; // rax
  struct DMMVIDPNTARGETMODESET *v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  char *v16; // rax
  unsigned int v18; // [rsp+54h] [rbp+Ch]

  v2 = (VIDPN_MGR *)*((_QWORD *)a1 + 6);
  v3 = (const struct DMMVIDPN *)*((_QWORD *)a1 + 15);
  v4 = 0LL;
  if ( v3 != (const struct DMMVIDPN *)((char *)a1 + 120) )
    v4 = (char *)v3 - 8;
  if ( v4 )
  {
    v6 = (char *)a1 + 120;
    do
    {
      for ( i = 0; i < *((unsigned __int16 *)a2 + 10); ++i )
      {
        v8 = (char *)a2 + 296 * i;
        if ( (*((_QWORD *)v8 + 7) & 0x700000000000LL) == 0x700000000000LL )
        {
          if ( *((_DWORD *)v8 + 18) == *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v2) + 103)
            && *((_DWORD *)v8 + 19) == *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v2) + 104)
            && *((_DWORD *)v8 + 20) == *(_DWORD *)(*((_QWORD *)v4 + 11) + 24LL)
            && *((_DWORD *)v8 + 21) == *(_DWORD *)(*((_QWORD *)v4 + 12) + 24LL) )
          {
            LODWORD(v9) = 0;
            v18 = 0;
            v10 = 0;
            if ( (*((_DWORD *)a2 + 6) & 1) != 0 && (*((_DWORD *)v8 + 14) & 0x100LL) != 0 )
            {
              v9 = *((_QWORD *)v8 + 19);
              v10 = 1;
              v18 = HIDWORD(v9);
            }
            _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(v4, v8 + 56);
            v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v4 + 11));
            v12 = *((_QWORD *)v11 + 18);
            if ( v12 )
              v8[184] = (unsigned int)(*(_DWORD *)(v12 + 72) - 3) <= 1;
            v13 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v4 + 12));
            v14 = *((_QWORD *)v13 + 18);
            if ( v14 )
            {
              *((_DWORD *)v8 + 65) = *(_DWORD *)(v14 + 132);
              v15 = *(_DWORD *)(v14 + 136);
              *((_QWORD *)v8 + 7) |= 8uLL;
            }
            else
            {
              *((_DWORD *)v8 + 65) = 0;
              v15 = 4;
            }
            *((_DWORD *)v8 + 66) = v15;
            if ( v10 && *((_QWORD *)v8 + 19) != __PAIR64__(v18, v9) )
              *((_QWORD *)v8 + 7) &= ~0x20000uLL;
            ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v13 + 88));
            ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
            break;
          }
        }
        else
        {
          WdLogSingleEntry2(3LL, i, a2);
          WdLogGlobalForLineNumber = 5380;
        }
      }
      v16 = (char *)*((_QWORD *)v4 + 1);
      v4 = v16 - 8;
      if ( v16 == v6 )
        v4 = 0LL;
    }
    while ( v4 );
  }
  return 0LL;
}
