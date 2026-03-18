/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00C9140
 * Callers:
 *     UmfdDestroyFont @ 0x1C00933C0 (UmfdDestroyFont.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C009A184 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFontTree @ 0x1C00C4E10 (UmfdQueryFontTree.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00C5B58 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryAdvanceWidths @ 0x1C00C75B0 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryTrueTypeTable @ 0x1C00C8120 (UmfdQueryTrueTypeTable.c)
 *     UmfdLoadFontFile @ 0x1C00C8200 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C00C83B0 (UmfdQueryFontFile.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C00C8E04 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     UmfdQueryFont @ 0x1C00C9040 (UmfdQueryFont.c)
 *     UmfdDrvFreeInternal @ 0x1C03055D0 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C0305630 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C03056E0 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C03057A0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C0305820 (UmfdQueryGlyphAttrs.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C03058C0 (UmfdQueryTrueTypeOutline.c)
 * Callees:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C007C3B8 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C00988CC (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C00D8260 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C013E7A8 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C015ECF0 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C015ED14 (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02E01DC (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 *     ?UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C0305990 (-UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C0306958 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(__int64 a1, struct _SLIST_ENTRY *a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  signed int v12; // ebx
  __int64 v13; // rbx
  PSLIST_ENTRY v14; // rax
  PSLIST_ENTRY v15; // r14
  char *v16; // rax
  struct _SLIST_ENTRY *v17; // rbx
  __int64 v18; // r14
  struct _SLIST_ENTRY *v19; // rax
  union _SLIST_HEADER *v20; // rcx
  bool v21; // zf
  __int64 v22; // rbx
  __int64 v23; // rdi
  unsigned __int64 v24; // r14
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // r8d
  int v29; // r9d
  signed __int32 v31[8]; // [rsp+0h] [rbp-70h] BYREF
  signed int v32; // [rsp+30h] [rbp-40h] BYREF
  PSLIST_ENTRY v33; // [rsp+38h] [rbp-38h] BYREF
  struct _SLIST_ENTRY *v34; // [rsp+40h] [rbp-30h] BYREF
  __int64 v35; // [rsp+48h] [rbp-28h] BYREF
  __int64 v36; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v37[3]; // [rsp+58h] [rbp-18h] BYREF
  int v38; // [rsp+B0h] [rbp+40h] BYREF
  int v39; // [rsp+C0h] [rbp+50h] BYREF
  int v40; // [rsp+C8h] [rbp+58h] BYREF

  v2 = (int)a1;
  if ( (unsigned int)a1 > 3 )
    return 3221225485LL;
  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 40);
  _mm_lfence();
  v5 = *(_QWORD **)(v4 + 8 * v2 + 16);
  v7 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  if ( v7 )
  {
    *v7 = 0LL;
    v8 = *(_QWORD *)(SGDGetSessionState(v6) + 32) + 23520LL;
    v35 = v8;
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(v8);
    if ( !*(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v9) + 32) + 23536LL) )
    {
      if ( v8 )
      {
        GreReleasePushLockShared(v8);
        KeLeaveCriticalRegion();
      }
      goto LABEL_36;
    }
    if ( ((unsigned __int8 (__fastcall *)(struct _SLIST_ENTRY *))a2->Next[1].Next)(a2)
      && *(struct _KTHREAD **)(*(_QWORD *)(SGDGetSessionState(v10) + 32) + 23504LL) != KeGetCurrentThread() )
    {
      v11 = (*((__int64 (__fastcall **)(struct _SLIST_ENTRY *))&a2->Next->Next + 1))(a2);
      UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v11);
      v12 = -1073741823;
LABEL_14:
      AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v35);
      if ( v12 < 0 )
      {
LABEL_37:
        EngFreeMem(v7);
        return (unsigned int)v12;
      }
      v18 = *v7;
      if ( !*v7 )
      {
        v12 = -1073741811;
        goto LABEL_37;
      }
      if ( (unsigned int)WdSetEventAndWaitForSingleObject(
                           **(_QWORD **)(*v5 + 8LL),
                           **(_QWORD **)(*(_QWORD *)(v18 + 40) + 8LL),
                           0LL,
                           0LL,
                           "0u") == 258 )
      {
        v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)dword_1C0354098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354098, 0x200000000000LL) )
        {
          v38 = 0;
          v39 = v24;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v25,
            (unsigned int)&unk_1C031E990,
            v26,
            v27,
            (__int64)&v39,
            (__int64)&v38);
        }
        v12 = UmfdClientSignalServerAndWaitForCompletion(v5, v7, 0LL);
        if ( (unsigned int)dword_1C0354098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354098, 0x200000000000LL) )
        {
          v32 = v12;
          v40 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v24;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v40,
            (unsigned int)&unk_1C031E9BE,
            v28,
            v29,
            (__int64)&v32,
            (__int64)&v40);
        }
        goto LABEL_37;
      }
      v21 = *(_DWORD *)(v18 + 8) == 3;
      v22 = v5[1];
      v23 = *(_QWORD *)(v18 + 40);
      v37[1] = v23;
      v37[0] = v22;
      v36 = v18;
      if ( v21 )
      {
        CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v36);
        CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(v37);
        *v7 = 0LL;
        v12 = 0;
        goto LABEL_37;
      }
      EngFreeMem((PVOID)v18);
      if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v22) > 8 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v22);
        CEventPool::CEventPoolEntry::Destroy((_QWORD *)v23);
      }
      else
      {
        KeResetEvent(**(PRKEVENT **)(v23 + 8));
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v22 + 16), (PSLIST_ENTRY)v23);
      }
      *v7 = 0LL;
LABEL_36:
      v12 = -1073741823;
      goto LABEL_37;
    }
    v13 = v5[1];
    v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v13 + 16));
    v15 = v14;
    if ( v14 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v13);
    }
    else
    {
      v14 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      v15 = v14;
      if ( !v14 )
      {
        v33 = 0LL;
        goto LABEL_12;
      }
    }
    v33 = v14;
    v16 = (char *)EngAllocMem(0, 0x40u, 0x676D6466u);
    v17 = (struct _SLIST_ENTRY *)v16;
    if ( v16 )
    {
      *((_DWORD *)v16 + 6) = 8;
      *((_QWORD *)v16 + 5) = v15;
      *((_DWORD *)v16 + 7) = 8;
      v19 = (struct _SLIST_ENTRY *)(v16 + 56);
      v17[1].Next = v19;
      v34 = v17;
      v19->Next = a2;
      *((_DWORD *)&v17->Next + 2) = 0;
      v20 = (union _SLIST_HEADER *)*v5;
      if ( !*(_BYTE *)*v5 )
      {
        *((_DWORD *)&v17->Next + 2) = 1;
        ExpInterlockedPushEntrySList(v20 + 1, v17);
        _InterlockedOr(v31, 0);
        goto LABEL_13;
      }
    }
    else
    {
      v34 = 0LL;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v34);
LABEL_12:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v33);
    v17 = 0LL;
LABEL_13:
    *v7 = (__int64)v17;
    v12 = v17 == 0LL ? 0xC0000001 : 0;
    goto LABEL_14;
  }
  return 3221225495LL;
}
