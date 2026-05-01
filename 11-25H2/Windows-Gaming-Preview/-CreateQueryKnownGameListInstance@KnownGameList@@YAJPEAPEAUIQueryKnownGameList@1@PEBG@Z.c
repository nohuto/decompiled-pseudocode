/*
 * XREFs of ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x18003D7B4
 * Callers:
 *     ?LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003AEA8 (-LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x18003CEAC (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KnownGameList::CreateQueryKnownGameListInstance(
        KnownGameList *this,
        struct KnownGameList::IQueryKnownGameList **a2,
        const unsigned __int16 *a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  void (*Flink)(void); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF
  const unsigned __int16 *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = (const unsigned __int16 *)a2;
  v9 = 0LL;
  if ( !this )
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return v4;
  }
  if ( !a2 )
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return v4;
  }
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CQueryKnownGameList,CQueryKnownGameList,unsigned short const * &>(
         &v9,
         &v10);
  v4 = v6;
  if ( (unsigned int)(v6 + 2147024894) <= 1 )
  {
    if ( !v9 )
      return v4;
    Flink = (void (*)(void))v9->DebugInfo->ProcessLocksList.Flink;
LABEL_12:
    Flink();
    return v4;
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v6);
    if ( !v9 )
      return v4;
    Flink = (void (*)(void))v9->DebugInfo->ProcessLocksList.Flink;
    goto LABEL_12;
  }
  *(_QWORD *)this = v9;
  return 0LL;
}
