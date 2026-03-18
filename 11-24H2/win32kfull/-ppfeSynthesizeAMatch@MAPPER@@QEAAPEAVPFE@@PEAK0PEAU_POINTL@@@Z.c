/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1400B7A9C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400B96C8 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1400FD4E8 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1400FD7CC (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ulCharsetToCodePage @ 0x1401781C0 (ulCharsetToCodePage.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x140264E30 (-bInitPrivatePFT@@YAHXZ.c)
 */

struct PFE *__fastcall MAPPER::ppfeSynthesizeAMatch(
        MAPPER *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _POINTL *a4)
{
  int v4; // eax
  __int64 v5; // rsi
  char *v8; // rdi
  __int64 *v9; // r14
  int v10; // r12d
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  int v17; // esi
  int v18; // r14d
  char *v19; // rdi
  __int64 v20; // r10
  int v21; // eax
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // r10
  char *v25; // r9
  int v26; // r8d
  unsigned int *v27; // rbx
  struct _POINTL *v28; // rax
  size_t v29; // [rsp+30h] [rbp-41h]
  struct PFF *v30; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v31[9]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v32; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int *v33; // [rsp+E8h] [rbp+77h]
  struct _POINTL *v34; // [rsp+F0h] [rbp+7Fh]

  v34 = a4;
  v33 = a3;
  v4 = *((_DWORD *)this + 22);
  v5 = 0LL;
  v32 = 0;
  if ( (v4 & 1) != 0 )
    v8 = (char *)this + 92;
  else
    v8 = (char *)(*((_QWORD *)this + 1) + 348LL);
  v9 = (__int64 *)*((_QWORD *)this + 35);
  v10 = 4 * *((_DWORD *)v8 + 1) + 8;
  if ( !v9 )
    return (struct PFE *)v5;
  v12 = *v9;
  v30 = 0LL;
  if ( !v12 )
    return (struct PFE *)v5;
  v13 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  if ( *(_QWORD *)(v13 + 20408) || (unsigned int)bInitPrivatePFT() )
  {
    v31[0] = *(_QWORD *)(v13 + 20408);
    if ( (*(_DWORD *)(v12 + 52) & 0x10) != 0 )
    {
LABEL_16:
      if ( v32 && v30 )
      {
        if ( v32 == 1 )
        {
          v5 = *((_QWORD *)v30 + 28);
        }
        else
        {
          v15 = 0;
          v16 = 0;
          v17 = 0x7FFFFFFF;
          if ( v32 )
          {
            v18 = *((_DWORD *)this + 43);
            v19 = (char *)v30 + 224;
            do
            {
              v20 = *(_QWORD *)(*(_QWORD *)v19 + 32LL);
              v21 = *(unsigned __int16 *)(v20 + 46) - v18;
              if ( v21 < 0 )
                v21 = v18 - *(unsigned __int16 *)(v20 + 46);
              if ( v21 <= v17 )
              {
                v17 = v21;
                v22 = *(int *)(v20 + 8);
                if ( (*((_DWORD *)this + 61) & 0x2000000) != 0 )
                {
                  if ( *(_WORD *)(v22 + v20) == 64 )
                    v15 = v16;
                }
                else if ( *(_WORD *)(v22 + v20) != 64 )
                {
                  v15 = v16;
                }
              }
              ++v16;
              v19 += 8;
            }
            while ( v16 < v32 );
          }
          v5 = *((_QWORD *)v30 + v15 + 28);
        }
        *a2 = 0;
        v23 = *((_QWORD *)this + 1);
        v24 = *(_QWORD *)(v5 + 32);
        v25 = (char *)this + 8;
        v31[0] = v24;
        if ( *(_BYTE *)(v23 + 20) && (*(_BYTE *)(v24 + 52) & 1) == 0 && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v31) )
        {
          v25 = (char *)this + 8;
          *a2 = 0x4000;
        }
        if ( (*((_DWORD *)this + 61) & 0x200000) == 0
          && *(unsigned __int16 *)(v24 + 46) - *((_DWORD *)this + 43) < 0
          && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v24 + 46) > 150 )
        {
          if ( IFIOBJ::pvSimBold((IFIOBJ *)v31) )
            *a2 = v26 | 0x2000;
        }
        v27 = v33;
        *v33 = *(unsigned __int8 *)(*(_QWORD *)v25 + 23LL) << 24;
        *v27 |= (unsigned int)ulCharsetToCodePage() << 8;
        v28 = v34;
        v34->y = 1;
        v28->x = 1;
      }
      return (struct PFE *)v5;
    }
    LODWORD(v29) = v10;
    v14 = PUBLIC_PFTOBJ::bLoadFonts(
            (PUBLIC_PFTOBJ *)v31,
            *(unsigned __int16 **)(v12 + 24),
            *(_DWORD *)(v12 + 32),
            *(_DWORD *)(v12 + 36),
            (struct tagDESIGNVECTOR *)v8,
            v29,
            &v32,
            0x40u,
            &v30,
            0x30u,
            1,
            0LL,
            0,
            0);
    if ( v14 )
      v14 = v32;
    else
      v32 = 0;
    if ( v14 )
    {
      GreQuerySystemTime(v13 + 20432);
      goto LABEL_16;
    }
    return (struct PFE *)v5;
  }
  return 0LL;
}
