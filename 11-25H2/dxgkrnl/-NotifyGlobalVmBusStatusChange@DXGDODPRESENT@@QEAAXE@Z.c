/*
 * XREFs of ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x14027B920
 * Callers:
 *     ?GlobalVmBusStatChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140217BD0 (-GlobalVmBusStatChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1403CFB5C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall DXGDODPRESENT::NotifyGlobalVmBusStatusChange(DXGDODPRESENT *this, char a2)
{
  unsigned int i; // ebx
  BLTQUEUE *v5; // rcx

  for ( i = 0; i < *(_DWORD *)this; ++i )
  {
    v5 = (BLTQUEUE *)(*((_QWORD *)this + 1) + 2968LL * i);
    *((_BYTE *)v5 + 624) = a2;
    *((_BYTE *)v5 + 608) = 1;
    BLTQUEUE::IssueCommand(v5);
  }
}
