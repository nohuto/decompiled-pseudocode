/*
 * XREFs of DrawEdge @ 0x140037D18
 * Callers:
 *     DrawPushButton @ 0x140037B70 (DrawPushButton.c)
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1402E115C (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     xxxMNDrawFullNC @ 0x1402E951C (xxxMNDrawFullNC.c)
 * Callees:
 *     FillRect @ 0x140038250 (FillRect.c)
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x1400383AC (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1402F1A5C (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall DrawEdge(HDC a1, __m128i *a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi
  char v6; // si
  __int64 UserSessionState; // rax
  RECT v10; // xmm6
  LONG bottom; // r12d
  __m128i v12; // xmm1
  int v13; // ecx
  __m128i v14; // xmm0
  bool v15; // zf
  int left; // r14d
  char v17; // al
  int right; // r15d
  int top; // esi
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  HBRUSH v27; // rdi
  HBRUSH v28; // rdx
  unsigned int v29; // r9d
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  HBRUSH v44; // r8
  int v45; // eax
  HBRUSH v46; // r8
  RECT v47; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-69h]
  _OWORD *v49; // [rsp+50h] [rbp-61h]
  int v50; // [rsp+58h] [rbp-59h] BYREF
  int v51; // [rsp+5Ch] [rbp-55h]
  int v52; // [rsp+60h] [rbp-51h]
  int v53; // [rsp+64h] [rbp-4Dh]
  _QWORD v54[10]; // [rsp+68h] [rbp-49h]

  v48 = a3;
  v4 = 1;
  v49 = a2;
  v6 = a3;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v10 = (RECT)*a2;
  bottom = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 12));
  v12 = _mm_srli_si128(*a2, 8);
  v13 = a4 | 0x8000;
  v14 = _mm_srli_si128(*a2, 4);
  v15 = *(_WORD *)(*(_QWORD *)(UserSessionState + 19928) + 6996LL) == 1;
  left = _mm_cvtsi128_si32(*a2);
  v17 = v6;
  right = _mm_cvtsi128_si32(v12);
  if ( !v15 )
    v13 = a4;
  top = _mm_cvtsi128_si32(v14);
  v20 = v13 | 0x4000;
  v47 = v10;
  if ( (v13 & 0x8000) == 0 )
    v20 = v13;
  v21 = v17 & 3;
  if ( !v21 )
    goto LABEL_24;
  while ( 1 )
  {
    if ( (v20 & 0x4000) != 0 )
    {
      v43 = v21 & 3;
      if ( (v20 & 0x8000) != 0 )
        v28 = v43
            ? *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(4096LL, 0x8000LL) + 19928) + 4744LL)
            : *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(4096LL, 0x8000LL) + 19928) + 4736LL);
      else
        v28 = v43
            ? *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(4096LL, 0x8000LL) + 19928) + 4824LL)
            : *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(4096LL, 0x8000LL) + 19928) + 4816LL);
      v27 = v28;
    }
    else
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 2;
          if ( v24 )
          {
            if ( v24 != 4 )
              return 0LL;
            v40 = *(_QWORD *)(W32GetUserSessionState(4096LL, 0x8000LL) + 19928);
            v27 = (v20 & 0x1000) != 0 ? *(HBRUSH *)(v40 + 4824) : *(HBRUSH *)(v40 + 4864);
            v28 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v40, v39) + 19928) + 4872LL);
          }
          else
          {
            v26 = *(_QWORD *)(W32GetUserSessionState(4096LL, 0x8000LL) + 19928);
            v27 = (v20 & 0x1000) != 0 ? *(HBRUSH *)(v26 + 4872) : *(HBRUSH *)(v26 + 4856);
            v28 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v26, v25) + 19928) + 4824LL);
          }
        }
        else
        {
          v42 = *(_QWORD *)(W32GetUserSessionState(4096LL, 0x8000LL) + 19928);
          v27 = (v20 & 0x1000) != 0 ? *(HBRUSH *)(v42 + 4864) : *(HBRUSH *)(v42 + 4824);
          v28 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v42, v41) + 19928) + 4856LL);
        }
      }
      else
      {
        v38 = *(_QWORD *)(W32GetUserSessionState(4096LL, 0x8000LL) + 19928);
        v27 = (v20 & 0x1000) != 0 ? *(HBRUSH *)(v38 + 4856) : *(HBRUSH *)(v38 + 4872);
        v28 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v38, v37) + 19928) + 4864LL);
      }
    }
    if ( (v20 & 0x10) != 0 )
    {
      v35 = DrawDiagonal(a1, &v47, v27, v28, v20);
      bottom = v47.bottom;
      right = v47.right;
      top = v47.top;
      left = v47.left;
      v10 = v47;
    }
    else
    {
      v29 = 0;
      if ( (v20 & 4) != 0 )
      {
        --right;
        v51 = top;
        v47.right = right;
        v10 = v47;
        v50 = right;
        v53 = bottom - top;
        v29 = 1;
        v52 = 1;
        v54[0] = v28;
      }
      if ( (v20 & 8) != 0 )
      {
        v47.bottom = --bottom;
        v10 = v47;
        v30 = 3LL * v29;
        *(&v50 + 2 * v30) = left;
        *(&v52 + 2 * v30) = right - left;
        ++v29;
        *(&v51 + 2 * v30) = bottom;
        *(&v53 + 2 * v30) = 1;
        v54[v30] = v28;
      }
      if ( (v20 & 1) != 0 )
      {
        v31 = v29++;
        v32 = 3 * v31;
        *(&v50 + 2 * v32) = left++;
        *(&v51 + 2 * v32) = top;
        v47.left = left;
        v10 = v47;
        *(&v52 + 2 * v32) = 1;
        *(&v53 + 2 * v32) = bottom - top;
        v54[v32] = v27;
      }
      if ( (v20 & 2) != 0 )
      {
        v33 = v29++;
        v34 = 3 * v33;
        *(&v51 + 2 * v34) = top++;
        *(&v50 + 2 * v34) = left;
        v47.top = top;
        v10 = v47;
        *(&v52 + 2 * v34) = right - left;
        *(&v53 + 2 * v34) = 1;
        v54[v34] = v27;
      }
      v35 = GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)&v50, v29);
    }
    v4 = v35;
LABEL_24:
    v21 = v48 & 0xC;
    if ( (v48 & 0xC) == 0 )
      break;
    v48 &= 0xFFFFFFF3;
  }
  if ( (v20 & 0x800) != 0 )
  {
    if ( (v20 & 0x10) != 0 )
    {
      if ( (v20 & 0x8000) != 0 )
        v44 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v48, 0x8000LL) + 19928) + 4736LL);
      else
        v44 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v48, 0x8000LL) + 19928) + 4816LL);
      v45 = FillTriangle(a1, &v47, v44, v20);
      v10 = v47;
    }
    else
    {
      if ( (v20 & 0x8000) != 0 )
        v46 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v48, 0x8000LL) + 19928) + 4736LL);
      else
        v46 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v48, 0x8000LL) + 19928) + 4816LL);
      v45 = FillRect(a1, &v47, v46);
    }
    v4 = v45;
  }
  if ( (v20 & 0x2000) != 0 )
    *v49 = v10;
  return v4;
}
