/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x14010090C
 * Callers:
 *     UmfdLoadFontFile @ 0x1400FEA50 (UmfdLoadFontFile.c)
 *     UmfdQueryTrueTypeOutline @ 0x1400FFCF0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1400FFDC0 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFontFile @ 0x1401000A0 (UmfdQueryFontFile.c)
 *     UmfdQueryFontTree @ 0x1401000F0 (UmfdQueryFontTree.c)
 *     UmfdQueryFont @ 0x140100370 (UmfdQueryFont.c)
 *     UmfdDestroyFont @ 0x1401003F0 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1401004C0 (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdQueryAdvanceWidths @ 0x140100590 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryTrueTypeTable @ 0x1401006A0 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryFontData @ 0x1401007F0 (UmfdQueryFontData.c)
 *     UmfdUnloadFontFileInternal @ 0x140100FD8 (UmfdUnloadFontFileInternal.c)
 *     UmfdDrvFreeInternal @ 0x140101948 (UmfdDrvFreeInternal.c)
 *     UmfdGetTrueTypeFile @ 0x1401019F0 (UmfdGetTrueTypeFile.c)
 *     UmfdFontManagement @ 0x140101B50 (UmfdFontManagement.c)
 *     UmfdEscape @ 0x14033EDD0 (UmfdEscape.c)
 *     UmfdQueryGlyphAttrs @ 0x14033EE70 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x140002648 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator() @ 0x140100C8C (_UmfdClientSendAndWaitForCompletion_--_2_--_lambda_1_--operator().c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x140100E24 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x140175620 (-UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x140196DF8 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401C5E94 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // r15
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rsi
  struct W32_PUSH_LOCK *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // rbx
  __int64 v21; // rdi
  unsigned __int64 v23; // rdi
  unsigned int CurrentThreadId; // eax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v30[4]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+48h] BYREF
  int v33; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+58h]

  v32 = a2;
  v3 = (int)a1;
  if ( (unsigned int)a1 > 3 )
    return 3221225485LL;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 104);
  _mm_lfence();
  v5 = *(_QWORD **)(v4 + 8 * v3 + 16);
  v6 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  v10 = v6;
  if ( v6 )
  {
    v30[0] = v5;
    *v6 = 0LL;
    v30[1] = &v32;
    v30[2] = v6;
    v11 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(v8, v7, v9) + 96) + 24256LL);
    GreAcquirePushLockShared(v11);
    if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96) + 24288LL) )
    {
      v15 = UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator()(v30);
      if ( v11 )
        GreReleasePushLockShared(v11);
      if ( v15 < 0 )
        goto LABEL_13;
      v16 = *v10;
      if ( !*v10 )
      {
        v15 = -1073741811;
        goto LABEL_13;
      }
      if ( (unsigned int)WdSetEventAndWaitForSingleObject(
                           **(_QWORD **)(*v5 + 8LL),
                           **(_QWORD **)(*(_QWORD *)(v16 + 40) + 8LL),
                           0LL,
                           0LL,
                           "0u") == 258 )
      {
        v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)dword_140398BB8 > 5
          && (unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x200000000000LL, v17, v18) )
        {
          CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
          v33 = v23;
          v31 = CurrentThreadId;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_140398BB8,
            (unsigned int)&unk_14036A294,
            v25,
            v26,
            (__int64)&v33,
            (__int64)&v31);
        }
        KeSetEvent(**(PRKEVENT **)(*v5 + 8LL), 1, 0);
        v15 = UmfdClientSignalServerAndWaitForCompletion(v5, v10, 0LL);
        if ( (unsigned int)dword_140398BB8 > 5
          && (unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x200000000000LL, v27, v28) )
        {
          v34 = (unsigned int)PsGetCurrentThreadId();
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - (unsigned int)v23,
            (__int64)&unk_14036A21E);
        }
        goto LABEL_13;
      }
      v19 = *(_DWORD *)(v16 + 8) == 3;
      v20 = v5[1];
      v21 = *(_QWORD *)(v16 + 40);
      v29 = v16;
      if ( v19 )
      {
        EngFreeMem((PVOID)v16);
        if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v20) > 8 )
        {
          _InterlockedDecrement((volatile signed __int32 *)v20);
          CEventPool::CEventPoolEntry::Destroy((PVOID)v21);
        }
        else
        {
          KeResetEvent(**(PRKEVENT **)(v21 + 8));
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v20 + 16), (PSLIST_ENTRY)v21);
        }
        *v10 = 0LL;
        v15 = 0;
        goto LABEL_13;
      }
      CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v29);
      if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v20) > 8 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v20);
        CEventPool::CEventPoolEntry::Destroy((PVOID)v21);
      }
      else
      {
        KeResetEvent(**(PRKEVENT **)(v21 + 8));
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v20 + 16), (PSLIST_ENTRY)v21);
      }
      *v10 = 0LL;
    }
    else if ( v11 )
    {
      GreReleasePushLockShared(v11);
    }
    v15 = -1073741823;
LABEL_13:
    EngFreeMem(v10);
    return (unsigned int)v15;
  }
  return 3221225495LL;
}
