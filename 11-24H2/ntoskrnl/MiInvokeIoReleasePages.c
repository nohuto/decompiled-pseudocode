/*
 * XREFs of MiInvokeIoReleasePages @ 0x1404D32C8
 * Callers:
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14038DEE4 (MiUnlockOpportunisticPagesInPageTable.c)
 * Callees:
 *     IoTryReleasePages @ 0x140431500 (IoTryReleasePages.c)
 */

void __fastcall MiInvokeIoReleasePages(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rsi

  v1 = *(unsigned int *)(a1 + 28);
  if ( (_DWORD)v1 )
  {
    v3 = (_QWORD *)(a1 + 40 + 8 * v1);
    do
    {
      --v3;
      IoTryReleasePages(*v3 >> 12, (*v3 & 0x3FFLL) + 1);
      LODWORD(v1) = v1 - 1;
    }
    while ( (_DWORD)v1 );
    *(_WORD *)(a1 + 25) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 16) &= 0xFFFFFFDB;
  }
}
