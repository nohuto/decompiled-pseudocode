/*
 * XREFs of MNEraseBackground @ 0x1402E93D4
 * Callers:
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     GreSetBrushOrg @ 0x1400384E8 (GreSetBrushOrg.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     GreGetBrushOrg @ 0x1402024B8 (GreGetBrushOrg.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, int a3, unsigned int a4, int a5, int a6)
{
  int v10; // r14d
  __int64 v11; // r8
  int v12; // edi
  int v13; // ecx
  unsigned int v14; // edx
  int v15; // r8d
  _QWORD *v16; // rax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v22 = 0LL;
  v10 = 1;
  GreGetBrushOrg(a1, &v22);
  v12 = 3;
  v13 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL);
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v14 = *(_DWORD *)(a2 + 116);
    if ( (v13 & 8) != 0 )
    {
      v12 = 0;
      LODWORD(v22) = 0;
      v15 = -*(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(a2, v14) + 68LL);
    }
    else
    {
      v12 = -3;
      LODWORD(v22) = -3;
      v16 = (_QWORD *)MNGetpItemFromIndex(a2, v14);
      v17 = *(_DWORD *)(*v16 + 68LL);
      v15 = -3 - *(_DWORD *)(GetDpiMetricsForCurrentThread(*v16, v18) + 36) - v17;
    }
    HIDWORD(v22) = v15;
    goto LABEL_8;
  }
  if ( (v13 & 8) != 0 )
  {
    v22 = 0x300000003LL;
    v15 = 3;
LABEL_8:
    GreSetBrushOrg(a1, v12, v15, &v22);
    goto LABEL_10;
  }
  v10 = 0;
LABEL_10:
  v19 = GreSelectBrush(a1, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL), v11);
  GrePatBlt(a1, a3, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(a1, v22, SHIDWORD(v22), 0LL);
  return GreSelectBrush(a1, v19, v20);
}
