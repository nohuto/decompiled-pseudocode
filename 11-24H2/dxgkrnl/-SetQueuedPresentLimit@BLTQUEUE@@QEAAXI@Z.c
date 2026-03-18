/*
 * XREFs of ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x140283034
 * Callers:
 *     ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1403E169C (-SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1400634E8 (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403A1500 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1403D6D88 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::SetQueuedPresentLimit(BLTQUEUE *this, unsigned int a2)
{
  __int64 v2; // rdi
  char *v4; // rsi
  BLTENTRY *v5; // rbp
  __int64 v6; // rdi

  v2 = a2;
  BLTQUEUE::Flush(this);
  v4 = (char *)this + 1088;
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  v5 = CCachedData<BLTENTRY,3>::Get((__int64)this + 1088, v2);
  if ( v5 )
  {
    if ( (_DWORD)v2 )
    {
      do
      {
        BLTQUEUE::InsertQueueTail(this, (char *)this + 232, v5, 1LL);
        v5 = (BLTENTRY *)((char *)v5 + 576);
        --v2;
      }
      while ( v2 );
    }
  }
  else
  {
    v6 = 3LL;
    do
    {
      BLTQUEUE::InsertQueueTail(this, (char *)this + 232, v4, 1LL);
      v4 += 576;
      --v6;
    }
    while ( v6 );
  }
}
