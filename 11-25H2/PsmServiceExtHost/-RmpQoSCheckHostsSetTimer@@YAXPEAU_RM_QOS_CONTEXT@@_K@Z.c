/*
 * XREFs of ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x1800274C0
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000433C (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800272E0 (-RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x1800276C4 (CempListEntryRemoveAndClear.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x1800277CC (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180028750 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180056F70 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall RmpQoSCheckHostsSetTimer(struct _RM_QOS_CONTEXT *a1, unsigned __int64 a2, int a3, int a4)
{
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r9
  char *v9; // r15
  DWORD v10; // ebp
  _QWORD *Value; // rsi
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  if ( *(struct _RM_QOS_CONTEXT **)a1 != a1 )
  {
    v6 = (struct _RM_ACTIVITY_ENFORCEMENT_INFO *)(*(_QWORD *)a1 - 88LL);
    if ( *(_QWORD *)a1 != 88LL )
    {
      do
      {
        if ( *((_QWORD *)v6 + 15) > a2 )
          break;
        v9 = (char *)v6 - 1192;
        if ( (unsigned int)dword_1800E7278 > 4
          && (byte_1800E7288 & 0x19) != 0
          && (qword_1800E7290 & 0x19) == qword_1800E7290 )
        {
          v15 = *((_QWORD *)v9 + 4);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1800E7278,
            (unsigned int)&unk_1800D989E,
            a3,
            a4,
            (__int64)&v15);
        }
        v10 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          Value = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *Value |= 2uLL;
          ++Value[2];
        }
        RtlAcquireSRWLockExclusive(v9 + 64);
        *((_DWORD *)v9 + 18) = GetCurrentThreadId();
        *((_QWORD *)v9 + 91) |= 0x4000000000000uLL;
        HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v9 + 64), 0);
        if ( HampLockTrackerId != -1 )
        {
          v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v13 = *v12;
          if ( (*v12 & 2) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          if ( v12[2]-- == 1 )
            *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        *((_DWORD *)v9 + 18) = 0;
        RtlReleaseSRWLockExclusive(v9 + 64);
        CempListEntryRemoveAndClear(v9 + 1280);
        RmpObjectRelease(v9);
        v6 = RmpQoSGetEarliestHostInfo(a1);
      }
      while ( v6 );
    }
  }
  if ( *(struct _RM_QOS_CONTEXT **)a1 == a1 || *(_QWORD *)a1 == 88LL )
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  else
  {
    v7 = &v16;
    v8 = *((unsigned int *)a1 + 7);
    v16 = *(_QWORD *)(*(_QWORD *)a1 - 88LL + 120);
  }
  TpSetTimer(*((_QWORD *)a1 + 2), v7, 0LL, v8);
}
