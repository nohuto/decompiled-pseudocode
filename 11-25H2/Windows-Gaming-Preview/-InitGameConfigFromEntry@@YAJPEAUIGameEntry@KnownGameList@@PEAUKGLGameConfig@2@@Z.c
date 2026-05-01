/*
 * XREFs of ?InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z @ 0x180040D54
 * Callers:
 *     ?GetGameConfig@CGameEntry@@UEAAJPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18003DAA0 (-GetGameConfig@CGameEntry@@UEAAJPEAUKGLGameConfig@KnownGameList@@@Z.c)
 *     ?GetGameConfigFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18003DAF0 (-GetGameConfigFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAUKGLGameConfig@KnownGameList@@@Z.c)
 *     ?GetGameConfigFromPID@CQueryKnownGameList@@UEAAJKPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18003DC10 (-GetGameConfigFromPID@CQueryKnownGameList@@UEAAJKPEAUKGLGameConfig@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InitGameConfigFromEntry(
        struct KnownGameList::IGameEntry *a1,
        struct KnownGameList::KGLGameConfig *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v8; // edi
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int16 v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF

  *(_WORD *)((char *)a2 + 1) = 0;
  *(_BYTE *)a2 = 0;
  v4 = *(_QWORD *)a1;
  v16 = 0;
  v5 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, unsigned __int16 *))(v4 + 48))(a1, &v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = 0;
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = 0;
        v14 = 0LL;
        v9 = *(_QWORD *)a1;
        v13 = 0LL;
        v10 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, int *, __int128 *))(v9 + 64))(
                a1,
                v8,
                &v17,
                &v13);
        v11 = v10;
        if ( v10 < 0 )
          break;
        switch ( (unsigned __int16)v17 )
        {
          case 0x102u:
            if ( (_DWORD)v13 )
            {
              v12 = 1574LL;
LABEL_23:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v12,
                (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                (const char *)0x8000FFFFLL);
              return 2147549183LL;
            }
            *((_BYTE *)a2 + 2) = DWORD2(v13) != 0;
            break;
          case 0x101u:
            if ( (_DWORD)v13 )
            {
              v12 = 1580LL;
              goto LABEL_23;
            }
            *(_BYTE *)a2 = DWORD2(v13) != 0;
            break;
          case 0x100u:
            if ( (_DWORD)v13 )
            {
              v12 = 1586LL;
              goto LABEL_23;
            }
            *((_BYTE *)a2 + 1) = DWORD2(v13) != 0;
            break;
          case 0x103u:
            if ( (_DWORD)v13 )
            {
              v12 = 1592LL;
              goto LABEL_23;
            }
            *((_BYTE *)a2 + 3) = DWORD2(v13) != 0;
            break;
          case 0x104u:
            if ( (_DWORD)v13 )
            {
              v12 = 1598LL;
              goto LABEL_23;
            }
            *((_BYTE *)a2 + 4) = DWORD2(v13) != 0;
            break;
        }
        if ( ++v8 >= v16 )
          return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x622,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61B,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
