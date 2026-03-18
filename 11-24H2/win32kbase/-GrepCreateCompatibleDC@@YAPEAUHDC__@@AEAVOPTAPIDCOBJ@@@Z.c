/*
 * XREFs of ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14000E350
 * Callers:
 *     GreCreateCompatibleDC @ 0x14000E310 (GreCreateCompatibleDC.c)
 * Callees:
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x14000DA6C (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14000E5A8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x14000EA60 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14000ED9C (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     UserGetDesktopDC @ 0x14000EDE0 (UserGetDesktopDC.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x14000F240 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepCreateCompatibleDC(struct OPTAPIDCOBJ *a1)
{
  HDC v1; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  HDC DisplayDC; // rax
  DC *v8; // r9
  __int64 v9; // rax
  unsigned int v10; // r8d
  _QWORD v12[14]; // [rsp+20h] [rbp-E0h] BYREF
  DC *v13[14]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v14; // [rsp+100h] [rbp+0h] BYREF
  __int64 v15; // [rsp+108h] [rbp+8h]
  __int64 v16; // [rsp+110h] [rbp+10h]
  __int64 v17; // [rsp+118h] [rbp+18h]
  __int64 v18; // [rsp+120h] [rbp+20h]
  _BYTE *v19; // [rsp+128h] [rbp+28h]
  _BYTE v20[48]; // [rsp+130h] [rbp+30h] BYREF

  v1 = 0LL;
  if ( !*((_QWORD *)a1 + 13) )
    return UserGetDesktopDC(1u);
  if ( OPTAPIDCOBJ::bValid(a1) )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
      v4 = *CurrentThreadNonPaged;
    else
      v4 = 0LL;
    v15 = 0LL;
    v16 = 1LL;
    v17 = 0LL;
    v18 = 8LL;
    v5 = (v4 + 8) & -(__int64)(v4 != 0);
    v20[32] = 1;
    v14 = v5;
    v19 = v20;
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 336);
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 80) )
        {
          ++*(_QWORD *)(v6 + 16);
        }
        else
        {
          *(_QWORD *)(v5 + 336) = &v14;
          v15 = v6;
        }
      }
      else
      {
        *(_QWORD *)(v5 + 336) = &v14;
      }
    }
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
    DisplayDC = (HDC)GreCreateDisplayDC(*(HDEV *)(v12[0] + 48LL), 1u);
    v1 = DisplayDC;
    if ( DisplayDC )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, DisplayDC);
      v8 = v13[0];
      v9 = v12[0];
      if ( v13[0] && (*(_DWORD *)(v12[0] + 520LL) & 1) != 0 )
      {
        DC::vSetDpiScaling((__int64)v13[0], *(_QWORD *)(v12[0] + 524LL));
        v9 = v12[0];
        v8 = v13[0];
      }
      v10 = *(_DWORD *)(*(_QWORD *)(v9 + 976) + 108LL);
      if ( (v10 & 7) != 0 )
        DC::dwSetLayout(v8, -1, v10);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)&v14);
  }
  return (__int64)v1;
}
