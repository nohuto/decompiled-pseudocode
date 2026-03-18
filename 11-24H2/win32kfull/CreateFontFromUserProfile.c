/*
 * XREFs of CreateFontFromUserProfile @ 0x1401CD854
 * Callers:
 *     UserSetFont @ 0x1401CD7E8 (UserSetFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x14028FA28 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x140037A84 (GreCreateFontIndirectW.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1401CD9B8 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GreMarkDeletableFont @ 0x1401CDE34 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

struct HLFONT__ *__fastcall CreateFontFromUserProfile(struct _UNICODE_STRING *a1, __int128 *a2, unsigned int a3)
{
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  struct HLFONT__ *FontIndirectW; // rbx
  __int64 v17; // r8
  __int128 v19[5]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  __int16 v22; // [rsp+7Ch] [rbp-84h]
  _OWORD v23[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-30h]
  int v25; // [rsp+D8h] [rbp-28h]
  struct tagLOGFONTW v26; // [rsp+E0h] [rbp-20h] BYREF

  memset_0(v23, 0, 0x5CuLL);
  if ( !a2 )
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v26, a1, a3);
    a2 = v23;
    v7 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v23[0] = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    v8 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v23[1] = v7;
    v9 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v23[2] = v8;
    v10 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v23[3] = v9;
    *(_QWORD *)&v9 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    LODWORD(LogFontFromUserProfile) = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v23[4] = v10;
    v24 = v9;
    v25 = (int)LogFontFromUserProfile;
  }
  v11 = *a2;
  v12 = a2[1];
  v21 = *((_DWORD *)a2 + 22);
  v19[0] = v11;
  v13 = a2[2];
  v22 = 256;
  v19[1] = v12;
  v14 = a2[3];
  v19[2] = v13;
  v15 = a2[4];
  v19[3] = v14;
  *(_QWORD *)&v14 = *((_QWORD *)a2 + 10);
  v19[4] = v15;
  v20 = v14;
  FontIndirectW = (struct HLFONT__ *)GreCreateFontIndirectW(v19);
  if ( FontIndirectW )
  {
    memset_0(&v26, 0, sizeof(v26));
    if ( (unsigned int)GreExtGetObjectW(FontIndirectW, 92LL, &v26) && v26.lfHeight == *(_DWORD *)a2 )
    {
      LOBYTE(v17) = 10;
      HmgSetOwner(FontIndirectW, 0LL, v17);
    }
    else
    {
      GreMarkDeletableFont(FontIndirectW);
      GreDeleteObject(FontIndirectW);
      return 0LL;
    }
  }
  return FontIndirectW;
}
