/*
 * XREFs of ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1403245A4
 * Callers:
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1403246EC (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1403840D8 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1403249AC (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::FindEntry(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        int a3,
        const struct _LUID *a4,
        unsigned int *a5)
{
  _QWORD *v8; // rdx
  __int64 v9; // r10
  unsigned int v10; // r11d
  _DWORD *v11; // r9
  _DWORD *v12; // rdi
  unsigned int i; // edx
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rbx

  v10 = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  if ( v10 > 1 << *(_DWORD *)(v9 + 68) )
    v10 = 1 << *(_DWORD *)(v9 + 68);
  if ( a2 >= v10 )
  {
    v16 = v10;
    WdLogSingleEntry2(1LL, a2, v10);
    WdLogGlobalForLineNumber = 5719;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"FindEntry called with invalid start table size (0x%lx), table size is only %lx)",
      a2,
      v16,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v11 = (_DWORD *)*v8;
    v12 = (_DWORD *)(*v8 + 16LL * a2);
    for ( i = 0; i < v10; ++i )
    {
      v14 = v12[3] & 1 ^ (a3 == 0);
      if ( a4 && (a4->LowPart != *v12 || a4->HighPart != v12[1]) )
        v14 = 0;
      if ( (!a5 || *a5 == v12[2]) && v14 )
        return (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)v12;
      v15 = a2 + 1;
      v12 += 4;
      if ( a2 + 1 == v10 )
        v12 = v11;
      a2 = 0;
      if ( v15 != v10 )
        a2 = v15;
    }
  }
  return 0LL;
}
