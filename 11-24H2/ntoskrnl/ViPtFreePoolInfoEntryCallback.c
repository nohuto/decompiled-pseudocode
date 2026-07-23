/*
 * XREFs of ViPtFreePoolInfoEntryCallback @ 0x140B8E880
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ViPtFreePoolInfoEntryCallback(_RTL_AVL_TABLE *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  if ( ViUpdateStackInfo )
  {
    if ( a2 != (_QWORD *)-32LL )
    {
      v2 = a2[6];
      if ( v2 )
      {
        ++*(_DWORD *)(v2 + 16);
        *(_QWORD *)(a2[6] + 32LL) += a2[5];
      }
    }
  }
  ExFreePoolWithTag(a2, 0x6E496956u);
}
