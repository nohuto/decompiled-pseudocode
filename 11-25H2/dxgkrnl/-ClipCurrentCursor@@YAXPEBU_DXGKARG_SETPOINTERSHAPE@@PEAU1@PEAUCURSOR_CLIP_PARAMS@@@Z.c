/*
 * XREFs of ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1403B096C
 * Callers:
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x14028AEA0 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC238 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

void __fastcall ClipCurrentCursor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct CURSOR_CLIP_PARAMS *a3)
{
  UINT Height; // r9d
  UINT v7; // r14d
  int v8; // edi
  UINT Pitch; // r8d
  UINT *p_Width; // rdx
  int v11; // edi
  __int64 v12; // rdi
  _BYTE *v13; // rsi
  _BYTE *v14; // r14
  unsigned int v15; // ecx
  char v16; // r13
  char v17; // r8
  __int64 v18; // r15
  __int64 v19; // r12
  void *v20; // rbx
  const void *v21; // rbp
  char *v22; // rbp
  __int64 v23; // rdi
  _BYTE *v24; // r10
  _BYTE *v25; // r9
  char v26; // r15
  char v27; // r13
  char v28; // r12
  __int64 v29; // r11
  const void *v30; // rax
  void *v31; // rbp
  bool v32; // zf
  UINT v33; // r14d
  char *v34; // rdi
  __int64 v35; // rdi
  _BYTE *v36; // rsi
  _BYTE *v37; // r14
  unsigned int v38; // ecx
  char v39; // dl
  char v40; // r15
  __int64 v41; // r12
  __int64 v42; // r13
  void *v43; // rbx
  const void *v44; // rbp
  UINT v45; // edi
  UINT v46; // edi
  UINT v47; // edi
  UINT v48; // ecx
  __int64 v49; // [rsp+50h] [rbp-58h]
  __int64 v50; // [rsp+58h] [rbp-50h]
  int v51; // [rsp+B0h] [rbp+8h]
  char v52; // [rsp+B0h] [rbp+8h]
  _BYTE *v53; // [rsp+B0h] [rbp+8h]
  char v54; // [rsp+B0h] [rbp+8h]
  char v56; // [rsp+B8h] [rbp+10h]
  char v57; // [rsp+B8h] [rbp+10h]
  _BYTE *v58; // [rsp+C0h] [rbp+18h]
  _BYTE *v59; // [rsp+C8h] [rbp+20h]

  a2->Flags.Value = a1->Flags.Value;
  a2->Width = a1->Width;
  Height = a1->Height;
  v7 = 0;
  v8 = *((_DWORD *)a3 + 5);
  a2->Height = Height;
  Pitch = a1->Pitch;
  a2->Pitch = Pitch;
  a2->XHot = a1->XHot;
  a2->YHot = a1->YHot;
  p_Width = &a1->Width;
  if ( (v8 & 1) != 0 )
    v7 = a1->Pitch * (a1->Height - *((_DWORD *)a3 + 1));
  v11 = v8 & 4;
  if ( v11 )
  {
    v48 = a1->Width - *(_DWORD *)a3;
    if ( (a1->Flags.Value & 1) != 0 )
      v7 += v48 >> 3;
    else
      v7 += 4 * v48;
  }
  v51 = *((_DWORD *)a3 + 3);
  if ( (a1->Flags.Value & 1) != 0 )
  {
    memset((void *)a2->pPixels, 255, Height * Pitch);
    if ( v51 )
    {
      if ( v11 )
        v46 = *(_DWORD *)a3 + 8 * a1->Pitch - a1->Width;
      else
        v46 = *(_DWORD *)a3;
      v23 = v46 >> 3;
      v22 = (char *)a3 + 16;
    }
    else
    {
      v22 = (char *)a3 + 16;
      if ( *((_BYTE *)a3 + 16) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 143;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 144;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v23 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v24 = (char *)a1->pPixels + v7;
    v25 = (char *)a2->pPixels + v7;
    v59 = v24;
    v58 = v25;
    if ( *((_DWORD *)a3 + 1) )
    {
      v26 = *v22;
      v27 = 8 - *((_BYTE *)a3 + 17);
      v28 = *((_BYTE *)a3 + 17);
      v29 = *((unsigned int *)a3 + 2);
      v50 = v29;
      v49 = *((unsigned int *)a3 + 1);
      do
      {
        v30 = v24;
        v31 = v25;
        v53 = v24;
        if ( v26 )
        {
          v31 = v25 + 1;
          v30 = v24 + 1;
          v53 = v24 + 1;
          *v25 = ((1 << v26) - 1) & *v24 | *v25 & ~((1 << v26) - 1);
        }
        if ( (_DWORD)v23 )
        {
          memmove(v31, v30, (unsigned int)v23);
          v25 = v58;
          v24 = v59;
          v29 = v50;
        }
        if ( v28 )
          *((_BYTE *)v31 + v23) = ((1 << v27) - 1) & *((_BYTE *)v31 + v23) | ~((1 << v27) - 1) & v53[v23];
        v25 += v29;
        v24 += v29;
        v32 = v49-- == 1;
        v58 = v25;
        v59 = v24;
      }
      while ( !v32 );
      v22 = (char *)a3 + 16;
    }
    v33 = a2->Height * a2->Pitch + v7;
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( (*((_DWORD *)a3 + 5) & 4) != 0 )
        v47 = *(_DWORD *)a3 + 8 * a1->Pitch - a1->Width;
      else
        v47 = *(_DWORD *)a3;
      v35 = v47 >> 3;
    }
    else
    {
      v34 = v22;
      if ( *v22 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 143;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v34 = (char *)a3 + 16;
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 144;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v22 = v34;
      }
      v35 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v36 = (char *)a1->pPixels + v33;
    v37 = (char *)a2->pPixels + v33;
    v38 = *((_DWORD *)a3 + 1);
    if ( v38 )
    {
      v39 = *v22;
      v40 = 8 - *((_BYTE *)a3 + 17);
      v41 = *((unsigned int *)a3 + 2);
      v42 = v38;
      v54 = *v22;
      v57 = *((_BYTE *)a3 + 17);
      do
      {
        v43 = v37;
        v44 = v36;
        if ( v39 )
        {
          v43 = v37 + 1;
          v44 = v36 + 1;
          *v37 = ((1 << v39) - 1) & *v36 | *v37 & ~((1 << v39) - 1);
        }
        if ( (_DWORD)v35 )
          memmove(v43, v44, (unsigned int)v35);
        if ( v57 )
          *((_BYTE *)v43 + v35) = ((1 << v40) - 1) & *((_BYTE *)v43 + v35) | ~((1 << v40) - 1) & *((_BYTE *)v44 + v35);
        v39 = v54;
        v37 += v41;
        v36 += v41;
        --v42;
      }
      while ( v42 );
    }
  }
  else
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( v11 )
        v45 = *(_DWORD *)a3 + 8 * a1->Pitch - *p_Width;
      else
        v45 = *(_DWORD *)a3;
      v12 = v45 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 143;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 144;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v12 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v13 = (char *)a1->pPixels + v7;
    v14 = (char *)a2->pPixels + v7;
    v15 = *((_DWORD *)a3 + 1);
    if ( v15 )
    {
      v16 = *((_BYTE *)a3 + 16);
      v17 = 8 - *((_BYTE *)a3 + 17);
      v18 = *((unsigned int *)a3 + 2);
      v19 = v15;
      v56 = v17;
      v52 = *((_BYTE *)a3 + 17);
      do
      {
        v20 = v14;
        v21 = v13;
        if ( v16 )
        {
          v20 = v14 + 1;
          v21 = v13 + 1;
          *v14 = ((1 << v16) - 1) & *v13 | *v14 & ~((1 << v16) - 1);
        }
        if ( (_DWORD)v12 )
        {
          memmove(v20, v21, (unsigned int)v12);
          v17 = v56;
        }
        if ( v52 )
          *((_BYTE *)v20 + v12) = ((1 << v17) - 1) & *((_BYTE *)v20 + v12) | ~((1 << v17) - 1) & *((_BYTE *)v21 + v12);
        v17 = v56;
        v14 += v18;
        v13 += v18;
        --v19;
      }
      while ( v19 );
    }
  }
}
