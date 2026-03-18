/*
 * XREFs of ?GetSyncData@CSynchronizationManager@DirectComposition@@IEAAPEAVCSyncData@2@_KPEAVCBatch@2@@Z @ 0x140073C28
 * Callers:
 *     ?Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z @ 0x140073B48 (-Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_1 @ 0x1400CF0C8 (DirectComposition--Memory--AllocateAndClear_1.c)
 */

struct DirectComposition::CSyncData *__fastcall DirectComposition::CSynchronizationManager::GetSyncData(
        DirectComposition::CSynchronizationManager *this,
        __int64 a2,
        struct DirectComposition::CBatch *a3)
{
  int v3; // eax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = *((_DWORD *)this + 5);
  if ( !v3
    || (v6 = (unsigned int)(v3 - 1),
        *((_DWORD *)this + 5) = v6,
        v7 = *((_QWORD *)this + v6 + 3),
        *((_QWORD *)this + v6 + 3) = 0LL,
        !v7) )
  {
    v9 = DirectComposition::Memory::AllocateAndClear_1(0x50uLL);
    v7 = v9;
    if ( !v9 )
      return 0LL;
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_DWORD *)(v9 + 16) = 0;
    v10 = v9 + 28;
    *(_OWORD *)v10 = 0LL;
    *(_OWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
    *(_QWORD *)(v7 + 72) = v10;
    *(_DWORD *)(v7 + 24) = 5;
  }
  *(_DWORD *)(v7 + 20) = 0;
  if ( a2 )
  {
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 8) = a2;
    *(_QWORD *)v7 = a3;
  }
  else
  {
    *(_QWORD *)v7 = 0LL;
  }
  return (struct DirectComposition::CSyncData *)v7;
}
