/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402E8A4C
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     BltColor @ 0x14003BFF0 (BltColor.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x14007A308 (GreSetBkColor.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2)
{
  int v2; // ebp
  unsigned int v5; // r15d
  unsigned int v6; // edi
  __int64 OemBitmapInfo; // rax
  __int64 v8; // r8
  __int16 *v9; // rsi
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // rcx
  Gre::Base *v15; // rbx
  __int64 UserSessionState; // rax
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  char Layout; // al
  __int64 v21; // rdx
  int v22; // ebx
  bool v23; // zf
  char v24; // al
  int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  HDC v33; // r10
  int v35; // [rsp+60h] [rbp-C8h]
  int v36; // [rsp+64h] [rbp-C4h]
  int v37; // [rsp+68h] [rbp-C0h]
  int v38; // [rsp+6Ch] [rbp-BCh]
  _WORD v39[24]; // [rsp+70h] [rbp-B8h] BYREF
  int v40; // [rsp+A0h] [rbp-88h]

  v2 = 2;
  v5 = 1;
  v6 = 1;
  OemBitmapInfo = GetOemBitmapInfo(63LL);
  v8 = *(_QWORD *)a2;
  v9 = (__int16 *)OemBitmapInfo;
  v10 = *(_DWORD *)(*(_QWORD *)a2 + 76LL) - *(__int16 *)(OemBitmapInfo + 6);
  v11 = 0;
  if ( v10 >= 0 )
    v11 = v10;
  v12 = (unsigned int)(v11 >> 31);
  v36 = v11 / 2;
  v13 = v11 / 2;
  v14 = *(_DWORD *)(v8 + 4) & 8;
  if ( (_DWORD)v14 )
    v15 = *(Gre::Base **)(v8 + 24);
  else
    v15 = *(Gre::Base **)(v8 + 32);
  if ( v15 )
  {
    LODWORD(v12) = v11 % 2;
    UserSessionState = W32GetUserSessionState(v14, v12);
    v17 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43296), v15);
    if ( v17 )
    {
      memset_0(v39, 0, 0x68uLL);
      v37 = GreSetTextColor(a1, 0);
      v38 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (**(_DWORD **)a2 & 0x2000) != 0 )
        v2 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v9[2];
      if ( (unsigned int)GreExtGetObjectW(v15, 104LL, v39) == 104 && v39[23] == 32 && !v40 )
      {
        LOBYTE(v35) = 0;
        HIWORD(v35) = 511;
        Layout = GreGetLayout(a1);
        v22 = v9[3];
        v23 = (Layout & 1) == 0;
        v24 = 0;
        v25 = v9[2];
        if ( !v23 )
          v24 = 0x80;
        BYTE1(v35) = v24;
        v26 = W32GetUserSessionState(128LL, v21);
        GreAlphaBlend(a1, v2, v36, v9[3], v9[3], *(HDC *)(v26 + 43296), 0, 0, v25, v22, v35);
      }
      else
      {
        v27 = W32GetUserSessionState(v19, v18);
        GreBitBltInternal(a1, v2, v36, v9[2], v9[3], *(HDC *)(v27 + 43296), 0, 0, 0xB8074Au, 0xFFFFFFu, 0);
      }
      GreSetTextColor(a1, v37);
      GreSetBkColor(a1, v38);
      v30 = W32GetUserSessionState(v29, v28);
      GreSelectBitmap(*(_QWORD *)(v30 + 43296), v17);
    }
  }
  else if ( (_DWORD)v14 )
  {
    if ( (*(_DWORD *)v8 & 0x200) != 0 )
      v9 = (__int16 *)GetOemBitmapInfo(64LL);
    if ( (**(_DWORD **)a2 & 0x2000) != 0 )
      v2 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v9[2];
    if ( (GreGetLayout(a1) & 1) != 0 && a1 != *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v32, v31) + 57008) + 80LL) )
      v6 = 3;
    v33 = (HDC)PrepareHDCBITSBitmap(0LL);
    if ( v33 )
      BltColor(a1, 0LL, v33, v2, v13, v9[2], v9[3], *v9, v9[1], v6);
  }
  else
  {
    return 0;
  }
  return v5;
}
