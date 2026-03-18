/*
 * XREFs of ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x14036783C
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x140367720 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     RtlStringLengthWorkerW @ 0x140043C3C (RtlStringLengthWorkerW.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x140367A88 (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 result; // rax
  unsigned int Length; // eax
  unsigned int MaximumLength; // r8d
  unsigned __int64 v16; // r13
  struct HDXGMONITOR__ *v17; // rcx
  int CCDMonitorID; // eax
  unsigned int v19; // ebp
  __int16 v20; // ax
  unsigned __int16 v21; // ax
  size_t pcchLength; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+78h] [rbp+20h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7634;
  }
  v4 = *((_QWORD *)a1 + 390);
  if ( !v4 )
    return 0LL;
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, v5);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
    v6 = *(_QWORD *)(v5 + 120);
    v7 = *(_QWORD *)(v6 + 24);
    if ( v7 == v6 + 24 )
      v8 = 0LL;
    else
      v8 = v7 - 8;
    v9 = -1073741789;
    v10 = v6 + 24;
    while ( v8 )
    {
      if ( !*(_DWORD *)(v8 + 92) )
      {
        v11 = *(_QWORD *)(v8 + 112);
        if ( v11 )
        {
          Length = a2->Length;
          MaximumLength = a2->MaximumLength;
          if ( (unsigned __int16)Length >= (unsigned __int16)MaximumLength )
            goto LABEL_31;
          v16 = (a2->MaximumLength - (unsigned __int64)a2->Length) >> 1;
          v17 = *(struct HDXGMONITOR__ **)(v8 + 112);
          psz = &a2->Buffer[(unsigned __int64)a2->Length >> 1];
          CCDMonitorID = MonitorGetCCDMonitorID(
                           v17,
                           (MaximumLength - (unsigned __int64)Length) >> 1,
                           (unsigned __int16 *)psz);
          v19 = CCDMonitorID;
          if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
            goto LABEL_31;
          if ( CCDMonitorID < 0 )
          {
            WdLogSingleEntry2(3LL, v11, CCDMonitorID);
            WdLogGlobalForLineNumber = 7716;
            if ( v6 )
              ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
            v9 = v19;
            goto LABEL_33;
          }
          pcchLength = 0LL;
          if ( psz
            && (unsigned int)v16 <= 0x7FFFFFFFuLL
            && RtlStringLengthWorkerW(psz, (unsigned int)v16, &pcchLength) >= 0 )
          {
            v20 = pcchLength;
          }
          else
          {
            v20 = 0;
            pcchLength = 0LL;
          }
          v21 = a2->Length + 2 * v20;
          a2->Length = v21;
          if ( v21 >= a2->MaximumLength )
          {
LABEL_31:
            if ( v6 )
              ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
LABEL_33:
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
            return v9;
          }
          a2->Buffer[(unsigned __int64)v21 >> 1] = 94;
          v10 = v6 + 24;
          a2->Length += 2;
        }
      }
      v12 = *(_QWORD *)(v8 + 8);
      v8 = v12 - 8;
      if ( v12 == v10 )
        v8 = 0LL;
    }
    if ( v6 )
      ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
    return 0LL;
  }
  WdLogSingleEntry1(2LL, a1);
  result = 3223192373LL;
  WdLogGlobalForLineNumber = 7655;
  return result;
}
