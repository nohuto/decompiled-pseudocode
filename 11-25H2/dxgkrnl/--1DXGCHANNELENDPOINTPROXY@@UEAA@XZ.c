/*
 * XREFs of ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1402044F4
 * Callers:
 *     ??_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z @ 0x1402047C0 (--_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005DA48 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x14007A3C0 (-GetUsedEntryCount@HMGRTABLE@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14029E7B4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1403473B0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x140385DA0 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 */

void __fastcall DXGCHANNELENDPOINTPROXY::~DXGCHANNELENDPOINTPROXY(DXGCHANNELENDPOINTPROXY *this)
{
  HMGRTABLE *v1; // rdi
  unsigned int UsedEntryCount; // r14d
  unsigned int v4; // r12d
  unsigned int i; // esi
  unsigned int EntryType; // ebp
  unsigned int v7; // eax
  unsigned int v8; // r15d
  unsigned int v9; // ecx
  int v10; // edx
  __int64 v11; // r8

  *(_QWORD *)this = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGCHANNEL'};
  v1 = (DXGCHANNELENDPOINTPROXY *)((char *)this + 40);
  *((_QWORD *)this + 1) = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGEXPANDHANDLETABLECALLBACK'};
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    UsedEntryCount = HMGRTABLE::GetUsedEntryCount((DXGCHANNELENDPOINTPROXY *)((char *)this + 40));
    v4 = 0;
    for ( i = 0; v4 < UsedEntryCount; ++i )
    {
      if ( i >= *((_DWORD *)this + 14) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 830;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"Index < m_HandleTable.GetTableSize()",
          830LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      EntryType = HMGRTABLE::GetEntryType(v1);
      if ( !EntryType )
        continue;
      v7 = HMGRTABLE::BuildEntryHandle(v1, i);
      v8 = v7;
      v9 = (v7 >> 6) & 0xFFFFFF;
      if ( v9 < *((_DWORD *)v1 + 4)
        && ((v7 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v1 + 16LL * v9 + 8) & 0x60)
        && (*(_DWORD *)(*(_QWORD *)v1 + 16LL * v9 + 8) & 0x2000) == 0 )
      {
        v10 = *(_DWORD *)(*(_QWORD *)v1 + 16LL * v9 + 8) & 0x1F;
        if ( v10 )
        {
          if ( EntryType == v10 )
          {
            v11 = *(_QWORD *)(*(_QWORD *)v1 + 16LL * v9);
            goto LABEL_13;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v11 = 0LL;
LABEL_13:
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 8LL))(
        *((_QWORD *)this + 17),
        EntryType,
        v11);
      HMGRTABLE::FreeHandle(v1, v8);
      ++v4;
    }
  }
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 844;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_HandleTable.IsEmpty()", 844LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGCHANNELENDPOINTPROXY *)((char *)this + 72));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)v1);
}
