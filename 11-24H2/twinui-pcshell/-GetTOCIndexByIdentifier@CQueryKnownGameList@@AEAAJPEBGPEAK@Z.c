/*
 * XREFs of ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x180109AE0
 * Callers:
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180109510 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CQueryKnownGameList::GetTOCIndexByIdentifier(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  char *v6; // rsi
  unsigned int i; // ebx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rdx
  int v12[4]; // [rsp+20h] [rbp-68h] BYREF
  char v13; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = 0LL;
  *(_OWORD *)v12 = 0LL;
  if ( !a3 )
  {
    v11 = 1068LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !a2 )
  {
    v11 = 1069LL;
    goto LABEL_13;
  }
  for ( i = 0; i < *((_DWORD *)this + 200); ++i )
  {
    v8 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, int *))(*(_QWORD *)this + 88LL))(this, i, v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x433,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    if ( !LOWORD(v12[0]) || (int)_o__wcsnicmp(v12, a2, 4LL) > 0 )
      break;
    v6 = &v13;
  }
  if ( !v6 )
    return 2147942402LL;
  *a3 = i - 1;
  return 0LL;
}
