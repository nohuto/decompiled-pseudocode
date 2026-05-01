/*
 * XREFs of ?GetVersion3Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV3@KnownGameList@@@Z @ 0x18067C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s_4 @ 0x18067CC18 (memcpy_s_4.c)
 */

__int64 __fastcall CQueryKnownGameList::GetVersion3Header(
        CQueryKnownGameList *this,
        struct KnownGameList::CookedKGLHeaderV3 *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *((_DWORD *)this + 9) >= 3u )
    {
      memcpy_s_4(a2, 0x2B8uLL, (char *)this + 32, 0x2B8uLL);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x262,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000DLL);
      return 2147942413LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x260,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
