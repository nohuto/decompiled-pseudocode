/*
 * XREFs of ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x14027BECC
 * Callers:
 *     ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1403E7FEC (-SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x140062BF8 (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403074A4 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1403CFA74 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::SetQueuedPresentLimit(BLTQUEUE *this, unsigned int a2)
{
  __int64 v2; // rdi
  char *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  BLTENTRY *v7; // rbp
  __int64 v8; // rdi

  v2 = a2;
  BLTQUEUE::Flush(this);
  v4 = (char *)this + 1016;
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  v7 = CCachedData<BLTENTRY,3>::Get((__int64)this + 1016, v2, v5, v6);
  if ( v7 )
  {
    if ( (_DWORD)v2 )
    {
      do
      {
        BLTQUEUE::InsertQueueTail(this, (char *)this + 232, v7, 1LL);
        v7 = (BLTENTRY *)((char *)v7 + 576);
        --v2;
      }
      while ( v2 );
    }
  }
  else
  {
    v8 = 3LL;
    do
    {
      BLTQUEUE::InsertQueueTail(this, (char *)this + 232, v4, 1LL);
      v4 += 576;
      --v8;
    }
    while ( v8 );
  }
}
