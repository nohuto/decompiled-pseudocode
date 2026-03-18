/*
 * XREFs of ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x14007A41C
 * Callers:
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 * Callees:
 *     FillRect @ 0x140038250 (FillRect.c)
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x14007A308 (GreSetBkColor.c)
 *     GreExtTextOutW @ 0x14007A7F4 (GreExtTextOutW.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x14007A904 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall DrawBox(HDC a1, LPCRECT a2, __int16 a3)
{
  const char *v3; // r14
  int v5; // r15d
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  int v17; // ebx
  const wchar_t *v18; // rax
  HBRUSH v19; // r8
  LONG top; // r9d
  int v21; // r10d
  int v22; // eax
  __int64 v23; // rcx
  int v24; // r12d
  __int64 v25; // rdx
  int v26; // r13d
  int v27; // r15d
  const unsigned __int16 *v28; // r14
  __int64 i; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 UserSessionState; // rax
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // [rsp+20h] [rbp-60h]
  __int64 v45; // [rsp+28h] [rbp-58h]
  char v46; // [rsp+38h] [rbp-48h]
  int v47; // [rsp+40h] [rbp-40h]
  int v48; // [rsp+44h] [rbp-3Ch]
  _DWORD v49[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v50; // [rsp+58h] [rbp-28h]
  int v51; // [rsp+60h] [rbp-20h]
  __int64 v52; // [rsp+64h] [rbp-1Ch]
  __int64 v53; // [rsp+6Ch] [rbp-14h]

  v3 = L"nmlkji";
  v5 = a3 & 0x708;
  if ( (a3 & 2) != 0 )
  {
    v53 = 0LL;
    v17 = 0;
    v52 = 0LL;
    v51 = 0;
    v19 = *(HBRUSH *)(W32GetUserSessionState(a1, a2) + 43088);
    goto LABEL_11;
  }
  v9 = *(_DWORD **)(W32GetUserSessionState(a1, a2) + 19928);
  if ( (a3 & 0xC000) != 0 )
  {
    v14 = v9[1148];
    LODWORD(v53) = v14;
    HIDWORD(v52) = v14;
    LODWORD(v52) = v14;
  }
  else
  {
    LODWORD(v52) = v9[1164];
    v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19928);
    HIDWORD(v52) = *(_DWORD *)(v10 + 4652);
    v12 = *(_QWORD *)(W32GetUserSessionState(v10, v11) + 19928);
    LODWORD(v53) = *(_DWORD *)(v12 + 4648);
    v9 = *(_DWORD **)(W32GetUserSessionState(v12, v13) + 19928);
    v14 = v9[1158];
  }
  HIDWORD(v53) = v14;
  v16 = *(_DWORD **)(W32GetUserSessionState(v9, v8) + 19928);
  if ( (a3 & 0x300) != 0 )
  {
    v17 = v16[1157];
  }
  else if ( v5 == 1032 )
  {
    v17 = v16[1162];
  }
  else
  {
    v17 = v16[1147];
  }
  v51 = v17;
  if ( (a3 & 1) != 0 )
  {
    v19 = *(HBRUSH *)(W32GetUserSessionState(v16, v15) + 43096);
LABEL_11:
    FillRect(a1, a2, v19);
    goto LABEL_12;
  }
  v18 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v18 = (const wchar_t *)L"nmlkji";
  v3 = (const char *)v18;
LABEL_12:
  top = a2->top;
  v21 = a2->bottom - top;
  v22 = a2->right - a2->left;
  v48 = v21;
  v47 = v22;
  v23 = (unsigned int)v22;
  if ( v22 >= v21 )
    v23 = (unsigned int)v21;
  v24 = a2->left + (v22 - (int)v23) / 2;
  v25 = (unsigned int)((v21 - (int)v23) >> 31);
  v26 = top + (v21 - (int)v23) / 2;
  if ( v5 == 1032
    && ((LODWORD(v25) = (v21 - (int)v23) % 2,
         v36 = *(_QWORD *)(W32GetUserSessionState(v23, v25) + 19928),
         *(_WORD *)(v36 + 6996) < 8u)
     || (v36 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 19928), *(_DWORD *)(v36 + 4648) == 0xFFFFFF)) )
  {
    UserSessionState = W32GetUserSessionState(v36, v35);
    v38 = GreSetBkColor(a1, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4648LL));
    v41 = W32GetUserSessionState(v40, v39);
    v27 = GreSetTextColor(a1, *(_DWORD *)(*(_QWORD *)(v41 + 19928) + 4628LL));
    v49[0] = v24;
    v49[2] = v47;
    v49[3] = v48;
    v49[1] = v26;
    v50 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v43, v42) + 19928) + 4944LL);
    GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v49, 1);
    GreSetBkColor(a1, v38);
  }
  else
  {
    v27 = GreSetTextColor(a1, v17);
    GreExtTextOutW(a1, 0LL, (__int64)v3, 1, v46);
  }
  v28 = (const unsigned __int16 *)(v3 + 2);
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor(a1, *(&v51 + i));
    v45 = (__int64)v28++;
    GreExtTextOutW(a1, 0LL, v45, 1, v46);
  }
  if ( (a3 & 0x400) != 0 )
  {
    v33 = W32GetUserSessionState(v31, v30);
    if ( (a3 & 0x108) != 0 )
    {
      v34 = *(_DWORD *)(*(_QWORD *)(v33 + 19928) + 4632LL);
    }
    else if ( (a3 & 0x1000) != 0 )
    {
      v34 = *(_DWORD *)(*(_QWORD *)(v33 + 19928) + 4672LL);
    }
    else
    {
      v34 = *(_DWORD *)(*(_QWORD *)(v33 + 19928) + 4600LL);
    }
    GreSetTextColor(a1, v34);
    FlipUserTextOutW(a1, v24, v26, v28, v44);
  }
  GreSetTextColor(a1, v27);
  return 1LL;
}
