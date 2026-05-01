/*
 * XREFs of ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180006B50
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800063F0 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180006568 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800179AC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::SetBuffer(
        wil::details_abi::RawUsageIndex *this,
        char *a2,
        unsigned __int64 a3,
        const char *a4)
{
  void *v8; // rbp
  _WORD *v9; // rcx
  char v10; // al
  HANDLE ProcessHeap; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int64)a4 < 0xA )
    wil::details::in1diag3::_FailFast_Unexpected(retaddr, a2, a3, a4);
  v8 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  *((_QWORD *)this + 4) = &a2[a3];
  *((_QWORD *)this + 5) = &a4[(_QWORD)a2];
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 57) = 0;
  if ( a3 < 0xA
    || ((v9 = a2 + 2, *(_WORD *)a2) || *v9 > *(_WORD *)this ? (v10 = 1) : (v10 = 0),
        (*((_BYTE *)this + 57) = v10, *(_WORD *)a2)
     || *v9 != *(_WORD *)this
     || *((_WORD *)a2 + 2) != *((_WORD *)this + 1)
     || a2[8] != *((_BYTE *)this + 4)
     || *((_WORD *)a2 + 3) != *((_WORD *)this + 3)
     || a2[9] != *((_BYTE *)this + 8)) )
  {
    *(_WORD *)a2 = 0;
    *((_WORD *)a2 + 1) = *(_WORD *)this;
    *((_WORD *)a2 + 2) = *((_WORD *)this + 1);
    a2[8] = *((_BYTE *)this + 4);
    *((_WORD *)a2 + 3) = *((_WORD *)this + 3);
    a2[9] = *((_BYTE *)this + 8);
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3) + 10LL;
  }
}
