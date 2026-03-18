/*
 * XREFs of xxxGetUpdateRect @ 0x140033B40
 * Callers:
 *     NtUserGetUpdateRect @ 0x140033A00 (NtUserGetUpdateRect.c)
 * Callees:
 *     IntersectWithParents @ 0x14004372C (IntersectWithParents.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     xxxSimpleDoSyncPaint @ 0x1400477B0 (xxxSimpleDoSyncPaint.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     GreDPtoLP @ 0x140095424 (GreDPtoLP.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRect(struct tagWND *a1, _OWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  LONG x; // edx
  LONG v8; // ecx
  _DWORD *v9; // r8
  LONG y; // edx
  LONG v11; // ecx
  __int64 DesktopWindow; // rax
  __int64 v13; // rdx
  LONG v14; // r9d
  LONG v15; // r8d
  __int64 v16; // rax
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int64 v22; // rdx
  __int64 UserSessionState; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *i; // rdi
  __int64 v29; // rax
  int v30; // edx
  struct tagPOINT v31[2]; // [rsp+20h] [rbp-20h] BYREF

  *(_OWORD *)&v31[0].x = 0LL;
  if ( a3 )
    xxxSimpleDoSyncPaint(a1);
  SetOrClrWF(0LL, a1, 288LL, 1LL);
  v5 = *((_QWORD *)a1 + 5);
  v6 = *(_QWORD *)(v5 + 136);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      *(_OWORD *)&v31[0].x = *(_OWORD *)(v5 + 104);
    }
    else
    {
      if ( (unsigned int)GreGetRgnBox(v6, v31) < 2 )
        *(_OWORD *)&v31[0].x = 0LL;
      x = v31[0].x;
      v8 = v31[1].x;
      v9 = (_DWORD *)*((_QWORD *)a1 + 5);
      if ( v31[0].x <= v9[26] )
        x = v9[26];
      v31[0].x = x;
      if ( v31[1].x >= v9[28] )
        v8 = v9[28];
      v31[1].x = v8;
      if ( x >= v8 )
        goto LABEL_17;
      y = v31[0].y;
      v11 = v31[1].y;
      if ( v31[0].y <= v9[27] )
        y = v9[27];
      v31[0].y = y;
      if ( v31[1].y >= v9[29] )
        v11 = v9[29];
      v31[1].y = v11;
      if ( y >= v11 )
LABEL_17:
        *(_OWORD *)&v31[0].x = 0LL;
    }
    if ( (unsigned int)IntersectWithParents(a1, v31) )
    {
      DesktopWindow = GetDesktopWindow(a1);
      v14 = v31[0].x;
      v15 = v31[1].x;
      if ( a1 != (struct tagWND *)DesktopWindow )
      {
        v16 = *((_QWORD *)a1 + 5);
        v17 = *(_DWORD *)(v16 + 104);
        v13 = (unsigned int)-*(_DWORD *)(v16 + 108);
        v31[1].y -= *(_DWORD *)(v16 + 108);
        v18 = -v17;
        v14 = v18 + v31[0].x;
        v15 = v18 + v31[1].x;
        v31[0].y += v13;
        v31[0].x += v18;
        v31[1].x += v18;
      }
      v19 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
      if ( (*(_BYTE *)(v19 + 8) & 0x20) != 0 )
      {
        UserSessionState = W32GetUserSessionState(v19, v13);
        GreLockVisRgnShared(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
        v27 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 57008);
        for ( i = *(__int64 **)(v27 + 24); ; i = (__int64 *)*i )
        {
          v27 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 57008) + 24LL;
          if ( i == (__int64 *)v27 )
            break;
          if ( (struct tagWND *)i[10] == a1 && (i[6] & 2) == 0 )
          {
            GreDPtoLP((HDC)i[2], v31);
            break;
          }
        }
        v29 = W32GetUserSessionState(v27, v26);
        GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v29 + 57008) + 48LL));
        v15 = v31[1].x;
        v14 = v31[0].x;
      }
      v20 = *(_OWORD *)&v31[0].x;
    }
    else
    {
      v20 = 0LL;
      v15 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
      *(_OWORD *)&v31[0].x = 0LL;
      v14 = _mm_cvtsi128_si32((__m128i)0LL);
    }
    if ( a2 )
    {
      v22 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v22 + 26) & 0x40) != 0 )
      {
        v30 = *(_DWORD *)(v22 + 112) - *(_DWORD *)(v22 + 104);
        v31[0].x = v30 - v15;
        v31[1].x = v30 - v14;
        v20 = *(_OWORD *)&v31[0].x;
      }
      *a2 = v20;
    }
    return 1LL;
  }
  else
  {
    if ( a2 )
      *a2 = 0LL;
    return 0LL;
  }
}
