/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140013840
 * Callers:
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x14012C9E4 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HSURF a1)
{
  __int64 v2; // rdx
  __int64 DIBitmapReal; // r12
  __int64 v4; // rbx
  __int64 UserSessionState; // rax
  int v6; // esi
  __int64 v7; // rdx
  HDC v8; // rdx
  unsigned int v9; // r14d
  int DIBits; // edi
  __int64 v11; // rdx
  OBJECT *v12; // rax
  OBJECT *v13; // rbx
  unsigned int v15; // ecx
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r11
  unsigned int v19; // r8d
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+68h] [rbp-98h]
  __int128 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int16 v26; // [rsp+A0h] [rbp-60h]
  __int64 v27[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v28; // [rsp+C0h] [rbp-40h]
  _BYTE v29[128]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v30[128]; // [rsp+150h] [rbp+50h] BYREF
  int v31; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v32; // [rsp+1D4h] [rbp+D4h]
  __int64 v33; // [rsp+1DCh] [rbp+DCh]
  __int128 v34; // [rsp+1E4h] [rbp+E4h]
  __int64 v35; // [rsp+1F4h] [rbp+F4h]

  if ( !a1 )
    return 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1) || (_DWORD)v22 != 2097153 )
    return 0LL;
  v32 = *(_QWORD *)((char *)&v21 + 4);
  v35 = 0LL;
  v20 = 0LL;
  v34 = 0LL;
  v31 = 40;
  v33 = 2097153LL;
  v23 = 0LL;
  v26 = 0;
  v24 = 0LL;
  v2 = *(_QWORD *)(W32GetUserSessionState() + 57008);
  v25 = 0LL;
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v29, *(HDC *)(v2 + 64));
  DIBitmapReal = GrepCreateDIBitmapReal((OPTAPIDCOBJ *)v29, 0, 44, 0LL, 0, 0LL, 0, 0LL, (__int64)&v20);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v29);
  if ( DIBitmapReal )
  {
    v4 = v20;
    v32 = *(_QWORD *)((char *)&v21 + 4);
    v34 = 0LL;
    v35 = 0LL;
    v31 = 40;
    v33 = 2097153LL;
    UserSessionState = W32GetUserSessionState();
    v6 = v31;
    v7 = *(_QWORD *)(UserSessionState + 57008);
    v27[0] = v4;
    v8 = *(HDC *)(v7 + 64);
    v9 = HIDWORD(v32) * (((32 * (int)v32) >> 3) & 0xFFFFFFFC);
    v27[2] = 0LL;
    v28 = 0;
    v27[1] = v9;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v30, v8);
    DIBits = GrepGetDIBits((OPTAPIDCOBJ *)v30, a1, (__int64)v27, &v31, 0, v9, v6);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v30);
    if ( DIBits )
    {
      v15 = 0;
      v11 = (unsigned int)(v32 * HIDWORD(v32));
      v16 = v20;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v11 )
        {
          DIBits = 0;
          goto LABEL_6;
        }
        if ( *(_BYTE *)(v20 + 4LL * v15 + 3) )
          break;
        ++v15;
      }
      DIBits = 1;
      if ( (_DWORD)v11 )
      {
        v17 = 0LL;
        v18 = (unsigned int)v11;
        while ( 1 )
        {
          v19 = *(_DWORD *)(v17 + v16);
          v17 += 4LL;
          *(_BYTE *)(v17 + v16 - 2) = HIBYTE(v19) * BYTE2(v19) / 0xFFu;
          *(_BYTE *)(v17 + v20 - 3) = HIBYTE(v19) * BYTE1(v19) / 0xFFu;
          v11 = HIBYTE(v19) * (unsigned __int8)v19 / 0xFFu;
          *(_BYTE *)(v17 + v20 - 4) = v11;
          if ( !--v18 )
            break;
          v16 = v20;
        }
      }
    }
LABEL_6:
    LOBYTE(v11) = 5;
    v12 = (OBJECT *)HmgLock(DIBitmapReal, v11);
    v13 = v12;
    if ( v12 )
    {
      OBJECT::InterlockedDecrementExclusiveLockCount(v12);
      OBJECT::InterlockedDecrementExclusiveLockCount(v13);
    }
    if ( !DIBits )
    {
      GreDeleteObject(DIBitmapReal);
      return 0LL;
    }
  }
  return DIBitmapReal;
}
