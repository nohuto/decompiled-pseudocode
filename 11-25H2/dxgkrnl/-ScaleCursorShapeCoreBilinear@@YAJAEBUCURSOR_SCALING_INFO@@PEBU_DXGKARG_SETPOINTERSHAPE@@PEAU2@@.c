/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x140319CF0
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC238 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ScaleCursorShapeCoreBilinear(
        const struct CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3)
{
  UINT Value; // edx
  struct _DXGKARG_SETPOINTERSHAPE *v5; // rdi
  const struct CURSOR_SCALING_INFO *v6; // rsi
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // r10d
  float v11; // xmm4_4
  float v12; // xmm9_4
  int v13; // r9d
  float v14; // xmm6_4
  int v15; // r12d
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm3_4
  int v19; // edi
  UINT Pitch; // r8d
  __int64 v21; // rdx
  char *v22; // r10
  __int64 v23; // r11
  float v24; // xmm3_4
  char *v25; // r8
  int v26; // esi
  int v27; // ebp
  int v28; // r14d
  int v29; // r15d
  int v30; // edi
  int v31; // ecx
  int v32; // r11d
  int v33; // r8d
  int v34; // edx
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // ecx
  UINT v39; // eax
  unsigned int v40; // ecx
  unsigned int v42; // [rsp+50h] [rbp-C8h]
  unsigned int v43; // [rsp+54h] [rbp-C4h]
  int v44; // [rsp+58h] [rbp-C0h]
  bool v45; // [rsp+5Ch] [rbp-BCh]
  bool v46; // [rsp+6Ch] [rbp-ACh]
  int v47; // [rsp+70h] [rbp-A8h]
  __int64 v48; // [rsp+78h] [rbp-A0h]
  unsigned int v49; // [rsp+80h] [rbp-98h]
  int v50; // [rsp+88h] [rbp-90h]
  unsigned int v52; // [rsp+128h] [rbp+10h]
  unsigned int v54; // [rsp+138h] [rbp+20h]

  Value = a2->Flags.Value;
  v5 = a3;
  v6 = a1;
  if ( (Value & 6) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 741;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pOrigCursorShape->Flags.Color || pOrigCursorShape->Flags.MaskedColor",
      741LL,
      0LL,
      0LL,
      0LL,
      0LL);
    Value = a2->Flags.Value;
  }
  if ( (v5->Flags.Value & 2) == 0 && (Value & 4) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 742;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pNewCursorShape->Flags.Color || pOrigCursorShape->Flags.MaskedColor",
      742LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *((_DWORD *)v6 + 4);
  v8 = *((_DWORD *)v6 + 5);
  v9 = 0;
  v49 = v7;
  v46 = (a2->Flags.Value & 4) != 0;
  v10 = 4 * v7;
  v50 = v8;
  v45 = (v5->Flags.Value & 4) != 0;
  v47 = 4 * v7;
  v44 = 0;
  v11 = (float)(int)a2->Width / (float)v7;
  v12 = (float)(int)a2->Height / (float)v8;
  if ( v8 )
  {
    do
    {
      v13 = 0;
      if ( v7 )
      {
        v14 = (float)v9 * v12;
        v48 = (unsigned int)(v10 * v9);
        v15 = (int)v14;
        v16 = v14 - (float)(int)v14;
        v17 = 1.0 - v16;
        do
        {
          v18 = (float)v13 * v11;
          v19 = (int)v18;
          if ( v15 == a2->Height - 1 )
            Pitch = 0;
          else
            Pitch = a2->Pitch;
          v21 = 0LL;
          v22 = (char *)a2->pPixels + (unsigned int)(4 * v19) + (unsigned __int64)(a2->Pitch * v15);
          v23 = Pitch;
          v24 = v18 - (float)v19;
          if ( v19 != a2->Width - 1 )
            v21 = 4LL;
          v54 = *(_DWORD *)&v22[v21];
          v25 = &v22[Pitch + v21];
          v42 = *(_DWORD *)&v22[v23];
          v26 = (int)(float)((float)(v17 * (float)(1.0 - v24)) * 256.0);
          v27 = (int)(float)((float)(v17 * v24) * 256.0);
          v28 = (int)(float)((float)(v16 * (float)(1.0 - v24)) * 256.0);
          v29 = (int)(float)((float)(v16 * v24) * 256.0);
          v30 = (unsigned __int8)((unsigned __int16)(v27 * (unsigned __int8)v54
                                                   + v29 * (unsigned __int8)*(_DWORD *)v25
                                                   + v28 * (unsigned __int8)v42
                                                   + v26 * (unsigned __int8)*(_DWORD *)v22) >> 8) | ((_WORD)v26 * (unsigned __int8)v22[1] + (_WORD)v27 * (unsigned __int8)v22[v21 + 1] + (_WORD)v28 * (unsigned __int8)v22[v23 + 1] + (_WORD)v29 * (unsigned __int8)v25[1]) & 0xFF00 | ((v26 * (unsigned __int8)v22[2] + v27 * (unsigned __int8)v22[v21 + 2] + v28 * (unsigned __int8)v22[v23 + 2] + v29 * (unsigned __int8)v25[2]) << 8) & 0xFF0000;
          if ( v45 )
          {
            v36 = v30 | ((((_WORD)v26 * HIBYTE(*(_DWORD *)v22)
                         + (_WORD)v29 * HIBYTE(*(_DWORD *)v25)
                         + (_WORD)v28 * HIBYTE(v42)
                         + (_WORD)v27 * HIBYTE(v54)) & 0x8000) != 0
                       ? 0xFF000000
                       : 0);
            if ( _byteswap_ulong(
                   (((_WORD)v26 * HIBYTE(*(_DWORD *)v22)
                   + (_WORD)v29 * HIBYTE(*(_DWORD *)v25)
                   + (_WORD)v28 * HIBYTE(v42)
                   + (_WORD)v27 * HIBYTE(v54)) & 0x8000) != 0
                 ? 0xFF000000
                 : 0) )
            {
              v43 = *(_DWORD *)v25;
              v52 = *(_DWORD *)v22;
              v36 = (unsigned __int8)-(((v43 & (v43 >> 8) | v42 & (v42 >> 8) | v54 & (v54 >> 8) | v52 & (v52 >> 8)) & 0xFFFF0000) != 0) | ((((_WORD)v26 * HIBYTE(*(_DWORD *)v22) + (_WORD)v29 * HIBYTE(*(_DWORD *)v25) + (_WORD)v28 * HIBYTE(v42) + (_WORD)v27 * HIBYTE(v54)) & 0x8000) != 0 ? 0xFF000000 : 0) | (unsigned __int16)((unsigned __int8)-(((v43 & (v43 >> 8) | v42 & (v42 >> 8) | v54 & (v54 >> 8) | v52 & (v52 >> 8)) & 0xFFFF0000) != 0) << 8) | _byteswap_ulong((unsigned __int8)-(((v43 & (v43 >> 8) | v42 & (v42 >> 8) | v54 & (v54 >> 8) | v52 & (v52 >> 8)) & 0xFFFF0000) != 0) << 8);
            }
          }
          else
          {
            v31 = (unsigned __int8)v22[v23 + 3];
            v32 = (unsigned __int8)v22[3];
            v33 = (unsigned __int8)v25[3];
            v34 = (unsigned __int8)v22[v21 + 3];
            if ( v46 )
              v35 = v27 * (255 - v34) + v26 * (255 - v32) + v29 * (255 - v33) + v28 * (255 - v31);
            else
              v35 = v29 * v33 + v28 * v31 + v27 * v34 + v26 * v32;
            v36 = v30 | (v35 << 16) & 0xFF000000;
          }
          v5 = a3;
          v37 = v48 + (unsigned int)(4 * v13++);
          *(_DWORD *)((char *)a3->pPixels + v37) = v36;
          v7 = v49;
        }
        while ( v13 < v49 );
        v9 = v44;
        v8 = v50;
        v10 = v47;
      }
      v44 = ++v9;
    }
    while ( v9 < (unsigned int)v8 );
    v6 = a1;
  }
  v5->VidPnSourceId = a2->VidPnSourceId;
  v5->Width = v7;
  v38 = *((_DWORD *)v6 + 2);
  v5->Height = v8;
  v5->Pitch = v10;
  v39 = (v38 + *(_DWORD *)v6 * a2->XHot - 1) / v38;
  v40 = *((_DWORD *)v6 + 3);
  v5->XHot = v39;
  v5->YHot = (v40 + *((_DWORD *)v6 + 1) * a2->YHot - 1) / v40;
  return 0LL;
}
