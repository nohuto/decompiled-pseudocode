/*
 * XREFs of ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x140198574
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x140194BCC (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x140315A64 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x140394CA4 (-GetPreviousConfigIndex@@YAHH@Z.c)
 */

void __fastcall RemovePostCompositionConfig(struct _POST_COMPOSITION_CONFIG_QUEUE *a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // eax

  v3 = a2;
  if ( *(_DWORD *)a1 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9303;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
      9303LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)a1 + 1) == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9304;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
      9304LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = 9 * v3;
  *(_OWORD *)((char *)a1 + 4 * v4 + 8) = 0LL;
  *(_OWORD *)((char *)a1 + 4 * v4 + 24) = 0LL;
  *((_DWORD *)a1 + v4 + 10) = 0;
  v5 = *((_DWORD *)a1 + 1);
  if ( *(_DWORD *)a1 == (_DWORD)v3 )
  {
    if ( v5 == (_DWORD)v3 )
    {
      *((_DWORD *)a1 + 1) = -1;
      *(_DWORD *)a1 = -1;
    }
    else
    {
      *(_DWORD *)a1 = GetPreviousConfigIndex(v3);
    }
  }
  else if ( v5 == (_DWORD)v3 )
  {
    *((_DWORD *)a1 + 1) = GetNextConfigIndex(v3);
  }
}
