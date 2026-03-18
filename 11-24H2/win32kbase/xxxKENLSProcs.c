/*
 * XREFs of xxxKENLSProcs @ 0x1400FB32C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?StubDispFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400F7C20 (-StubDispFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FB48C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x14019FBD0 (-KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1402145F0 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxKENLSProcs(struct _PATHOBJ *a1, struct _CLIPOBJ *a2)
{
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // rcx
  _BYTE *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 14072)
    && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4) + 14072) + 8LL) )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(v6) + 14072);
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7) + 14072) + 4LL);
    do
    {
      if ( !v9 )
        return 1LL;
      v10 = 132LL * (unsigned int)--v9;
      v11 = (_BYTE *)(v8 + v10);
    }
    while ( *v11 != BYTE2(a1->fl) );
    v12 = (unsigned __int8)v11[1];
    if ( (unsigned __int8)v12 >= 3u )
    {
      v13 = 0;
    }
    else
    {
      v13 = ((__int64 (__fastcall *)(_BYTE *, struct _PATHOBJ *, struct _CLIPOBJ *))funcs_1400FB3E7[v12])(v11, a1, a2);
      if ( v13 )
        return v13;
    }
    InputTraceLogging::Keyboard::DropInput(12LL);
    return v13;
  }
  return 1LL;
}
