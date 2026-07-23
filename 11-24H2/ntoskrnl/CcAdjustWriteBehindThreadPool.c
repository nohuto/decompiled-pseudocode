/*
 * XREFs of CcAdjustWriteBehindThreadPool @ 0x140577824
 * Callers:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14049AF6C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     CcGetCurrentNumaNode @ 0x140485F8C (CcGetCurrentNumaNode.c)
 *     CcReEngageWorkerThreads @ 0x1404D4C20 (CcReEngageWorkerThreads.c)
 *     CcSetMaxNumberOfWriteBehindThreads @ 0x1405780F0 (CcSetMaxNumberOfWriteBehindThreads.c)
 */

void __fastcall CcAdjustWriteBehindThreadPool(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // r11d
  char v3; // r9
  __int64 v4; // rax
  char v5; // r11
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r10
  char v9; // r11

  if ( (unsigned int)CcNumberNumaNodes <= 1 && !CcEnablePerVolumeLazyWriter )
  {
    CcGetCurrentNumaNode(a1, 0LL);
    if ( v3 )
    {
      v4 = CcSetMaxNumberOfWriteBehindThreads(v1, (unsigned int)(v2 + 1));
      if ( *(_BYTE *)(v4 + 224) != v5 )
        *(_BYTE *)(v4 + 224) = v5;
    }
    else
    {
      v6 = CcSetMaxNumberOfWriteBehindThreads(v1, 0xFFFFFFFFLL);
      if ( *(_QWORD *)(v6 + 104) != v6 + 104 && *(_BYTE *)(v8 + 196) == v9 )
        CcReEngageWorkerThreads(v7, v8, *(_DWORD *)(v7 + 840), 0);
    }
  }
}
