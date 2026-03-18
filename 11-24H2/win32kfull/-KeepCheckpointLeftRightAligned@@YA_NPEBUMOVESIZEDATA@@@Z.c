/*
 * XREFs of ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402A6100
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A7BD4 (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CE108 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall KeepCheckpointLeftRightAligned(const struct MOVESIZEDATA *a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // ecx
  bool result; // al
  unsigned int v6; // edi
  __int64 v7; // rax

  result = 0;
  if ( (*((_DWORD *)a1 + 50) & 0x30000000) == 0x30000000 )
  {
    v2 = *((_DWORD *)a1 + 34);
    if ( *((_DWORD *)a1 + 38) == v2 )
    {
      v3 = *((_DWORD *)a1 + 36);
      if ( *((_DWORD *)a1 + 40) == v3 )
      {
        v4 = *((_DWORD *)a1 + 44);
        if ( (unsigned int)(v4 - 3) > 5
          && (v4 != 9
           || v3 - v2 == *((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 6)
           && *((_DWORD *)a1 + 37) - *((_DWORD *)a1 + 35) == *((_DWORD *)a1 + 9) - *((_DWORD *)a1 + 7)) )
        {
          if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
            && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 384LL) & 0x10) == 0 )
          {
            return 1;
          }
          v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL);
          v7 = MonitorFromRect((INT *)a1 + 38, 2u, v6);
          if ( MonitorFromRect((INT *)a1 + 6, 2u, v6) == v7 )
            return 1;
        }
      }
    }
  }
  return result;
}
