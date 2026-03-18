/*
 * XREFs of ??1DMMVIDPN@@UEAA@XZ @ 0x1403A2CC8
 * Callers:
 *     ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x14001FAE0 (--_EDMMVIDPN@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAA@XZ @ 0x14000CECC (--1-$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAA@XZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1400217CC (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x140021978 (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x140042038 (-Remove@-$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z.c)
 */

void __fastcall DMMVIDPN::~DMMVIDPN(DMMVIDPN *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax

  v1 = *((_QWORD *)this + 6);
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  if ( v1 )
  {
    if ( *(struct _KTHREAD **)(v1 + 64) != KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 544;
    }
    if ( Set<DMMVIDPN>::Remove(v1 + 136, (__int64)this) )
    {
      v7 = WdLogNewEntry5_WdTrace(v4, v3, v5, v6);
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = v1;
      WdLogGlobalForLineNumber = 554;
    }
    else
    {
      v12 = WdLogNewEntry5_WdTrace(v4, v3, v5, v6);
      *(_QWORD *)(v12 + 24) = this;
      *(_QWORD *)(v12 + 32) = v1;
      WdLogGlobalForLineNumber = 559;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = this;
    WdLogGlobalForLineNumber = 564;
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
    WdLogGlobalForLineNumber = 537;
  }
  auto_ptr<DMMVIDPNSOURCESET>::~auto_ptr<DMMVIDPNSOURCESET>((__int64 *)this + 39);
  auto_ptr<DMMVIDPNSOURCESET>::~auto_ptr<DMMVIDPNSOURCESET>((__int64 *)this + 38);
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  *((_DWORD *)this + 16) |= 0x6D640000u;
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDPN *)((char *)this + 24));
  *(_QWORD *)this = &SetElement::`vftable';
}
