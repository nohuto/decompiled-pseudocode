/*
 * XREFs of ?get_DisplayName@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18003C880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::get_DisplayName(
        Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer *this,
        HSTRING *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v11 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 8) + 72LL))(*((_QWORD *)this + 8), &v11);
    v3 = v4;
    if ( v4 >= 0 )
    {
      if ( v11 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 48LL))(v11, a2);
        v3 = v7;
        if ( v7 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x22,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
            (const char *)(unsigned int)v7);
        v8 = v11;
        if ( v11 )
        {
          v11 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      else
      {
        v3 = -2147467261;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
          (const char *)0x80004003LL);
        v6 = v11;
        if ( v11 )
        {
          v11 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
        (const char *)(unsigned int)v4);
      v5 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  else
  {
    v3 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      (const char *)0x80004003LL);
  }
  return v3;
}
