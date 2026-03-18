/*
 * XREFs of ?RemovePlaneConfig@@YAXPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@H@Z @ 0x140198460
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x140194BCC (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x140315A64 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x140394CA4 (-GetPreviousConfigIndex@@YAHH@Z.c)
 */

void __fastcall RemovePlaneConfig(struct _DISPLAY_PLANE_CONFIG_QUEUE *a1, int a2)
{
  __int64 v3; // rdi
  int v4; // eax

  v3 = a2;
  if ( *(_DWORD *)a1 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9271;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
      9271LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)a1 + 1) == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9272;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
      9272LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset((char *)a1 + 80 * v3 + 8, 0, 0x50uLL);
  v4 = *((_DWORD *)a1 + 1);
  if ( *(_DWORD *)a1 == (_DWORD)v3 )
  {
    if ( v4 == (_DWORD)v3 )
    {
      *((_DWORD *)a1 + 1) = -1;
      *(_DWORD *)a1 = -1;
    }
    else
    {
      *(_DWORD *)a1 = GetPreviousConfigIndex(v3);
    }
  }
  else if ( v4 == (_DWORD)v3 )
  {
    *((_DWORD *)a1 + 1) = GetNextConfigIndex(v3);
  }
}
