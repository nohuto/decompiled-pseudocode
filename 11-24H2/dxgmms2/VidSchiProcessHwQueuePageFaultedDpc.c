/*
 * XREFs of VidSchiProcessHwQueuePageFaultedDpc @ 0x1400493D0
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U2@U2@U4@U4@U4@U2@U4@U4@U4@U4@U4@U2@U?$_tlgWrapSz@D@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@446664666664AEBU?$_tlgWrapSz@D@@6@Z @ 0x140001DF0 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNIC_ea_140001DF0.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1400122B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x14001FF30 (VidSchiMarkDeviceAsError.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     _tlgKeywordOn @ 0x14003E548 (_tlgKeywordOn.c)
 *     ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x14004B1BC (-VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessHwQueuePageFaultedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rsi
  __int64 v2; // r15
  __int64 v3; // rdi
  __int64 v4; // r11
  int v5; // r9d
  __m128i v6; // xmm1
  _BYTE *v7; // r12
  int v8; // r13d
  __int64 v9; // r14
  int v10; // ebx
  unsigned __int64 v11; // xmm0_8
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct _SLIST_ENTRY *v14; // rax
  const void *v15; // rcx
  __int64 v16; // r14
  _BYTE *v17; // r8
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  char v20; // al
  _BYTE *v21; // rax
  _BYTE *v22; // r8
  __int64 v23; // rcx
  _BYTE *v24; // rdx
  char v25; // al
  _BYTE *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r10
  __int16 v30; // r11
  __int64 v31; // rcx
  unsigned __int64 v32; // [rsp+B0h] [rbp-80h] BYREF
  int v33; // [rsp+B8h] [rbp-78h] BYREF
  int v34; // [rsp+BCh] [rbp-74h] BYREF
  int v35; // [rsp+C0h] [rbp-70h] BYREF
  __int32 v36; // [rsp+C4h] [rbp-6Ch] BYREF
  __int32 v37; // [rsp+C8h] [rbp-68h] BYREF
  int v38; // [rsp+CCh] [rbp-64h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-58h] BYREF
  _QWORD v41[2]; // [rsp+E0h] [rbp-50h] BYREF
  char v42; // [rsp+F0h] [rbp-40h]
  int v43; // [rsp+F4h] [rbp-3Ch]
  void *v44; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v45; // [rsp+100h] [rbp-30h] BYREF
  __m128i v46; // [rsp+108h] [rbp-28h] BYREF
  __int128 v47; // [rsp+118h] [rbp-18h] BYREF
  __m128i v48; // [rsp+128h] [rbp-8h] BYREF
  __int128 v49; // [rsp+138h] [rbp+8h] BYREF
  __m128i v50; // [rsp+150h] [rbp+20h]
  __int128 v51; // [rsp+160h] [rbp+30h]
  __m128i v52; // [rsp+170h] [rbp+40h]
  __int128 v53; // [rsp+180h] [rbp+50h]
  _BYTE v54[112]; // [rsp+190h] [rbp+60h] BYREF
  int v55; // [rsp+210h] [rbp+E0h] BYREF
  int v56; // [rsp+218h] [rbp+E8h] BYREF
  int v57; // [rsp+220h] [rbp+F0h] BYREF
  struct _SLIST_ENTRY *v58; // [rsp+228h] [rbp+F8h] BYREF

  Next = ListEntry[2].Next;
  v46 = *(__m128i *)((char *)&ListEntry[2] + 8);
  v50 = v46;
  v47 = *(__int128 *)((char *)&ListEntry[3] + 8);
  v51 = v47;
  v48 = *(__m128i *)((char *)&ListEntry[4] + 8);
  v52 = v48;
  v49 = *(__int128 *)((char *)&ListEntry[5] + 8);
  v53 = v49;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[720], ListEntry);
  v2 = (int)v49;
  v3 = *((_QWORD *)&Next[1].Next + 1);
  v55 = 0;
  VidSchiValidatePageFaultFlags((enum _DXGK_PAGE_FAULT_FLAGS)v49);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v54, (unsigned __int64 *)(v3 + 1984), 1, 1);
  v4 = v47;
  v42 = 0;
  v41[1] = v41;
  v41[0] = v41;
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v48, 12));
  v6 = _mm_srli_si128(v48, 8);
  v7 = 0LL;
  v58 = 0LL;
  v8 = 0;
  v40 = v3;
  v9 = 0LL;
  v10 = DWORD2(v53);
  v43 = 2;
  v56 = v5;
  v57 = _mm_cvtsi128_si32(v6);
  v39 = v47;
  v11 = _mm_srli_si128(v46, 8).m128i_u64[0];
  v32 = v11;
  if ( (v2 & 2) == 0 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v51 + 1) + 40LL) + 40LL);
    goto LABEL_9;
  }
  if ( (v2 & 0x40) != 0 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)&v51 + 1) + 8LL);
LABEL_9:
    v13 = *(_QWORD *)(v12 + 8);
    v8 = *(_DWORD *)(v12 + 84);
    v9 = *(_QWORD *)(v13 + 40);
    v55 = *(_DWORD *)(v13 + 200);
    v14 = *(struct _SLIST_ENTRY **)(v9 + 2656);
    v7 = *(_BYTE **)(v9 + 2648);
    *(_DWORD *)(v13 + 220) = v5;
    v58 = v14;
    *(_QWORD *)(v13 + 208) = v4;
    *(_DWORD *)(v13 + 216) = _mm_cvtsi128_si32(v6);
    *(_DWORD *)(v13 + 224) = v2;
    *(_QWORD *)(v13 + 232) = v11;
    *(_DWORD *)(v13 + 228) = v10;
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)&v40, v13, 9, 0LL);
    goto LABEL_10;
  }
  if ( (v2 & 0xC) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, v2, *((_QWORD *)&v51 + 1), v50.m128i_i64[1]);
    WdLogGlobalForLineNumber = 906;
  }
  if ( (v2 & 0x80u) != 0LL )
  {
    v7 = *(_BYTE **)(*((_QWORD *)&v51 + 1) + 96LL);
    v9 = *(_QWORD *)(*((_QWORD *)&v51 + 1) + 24LL);
    v58 = *(struct _SLIST_ENTRY **)(*((_QWORD *)&v51 + 1) + 40LL);
  }
LABEL_10:
  if ( g_PageFaultDebugMode || KdRefreshDebuggerNotPresent() )
  {
    v16 = v32;
  }
  else
  {
    if ( v9 )
      v15 = *(const void **)(v9 + 2656);
    else
      v15 = 0LL;
    v16 = v32;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected a HW queue page fault at GPU VA 0x%I64X.\n"
      "We broke into the debugger to allow a chance for debugging this issue.\n"
      "Run \"!dxgkdx.gpuva -a %d -p 0x%p -o %d 0x%I64X[ -h]\" command for more info.\n"
      "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
      "or \"ed 0x%p 1\"\n"
      "\n",
      v32,
      HIWORD(Next->Next),
      v15,
      *(_DWORD *)(v3 + 4),
      v32,
      &g_PageFaultDebugMode);
    __debugbreak();
  }
  if ( (v2 & 4) != 0 )
  {
    if ( !*((_DWORD *)&Next[134].Next + 2) )
    {
      v17 = (_BYTE *)(v3 + 3269);
      if ( !v7 )
        goto LABEL_27;
      v18 = 15LL;
      v19 = (_BYTE *)(v3 + 3269);
      do
      {
        if ( v18 == -2147483631 )
          break;
        v20 = v19[v7 - v17];
        if ( !v20 )
          break;
        *v19++ = v20;
        --v18;
      }
      while ( v18 );
      v21 = v19 - 1;
      if ( v18 )
        v21 = v19;
      *v21 = 0;
      if ( !v18 )
LABEL_27:
        *v17 = 0;
      *(_DWORD *)(v3 + 3284) = v8;
      *((_DWORD *)&Next[134].Next + 2) = 1;
    }
  }
  else if ( (v2 & 8) != 0 && !HIDWORD(Next[134].Next) )
  {
    v22 = (char *)&Next[134].Next + 12;
    if ( !v7 )
      goto LABEL_40;
    v23 = 15LL;
    v24 = (char *)&Next[134].Next + 12;
    do
    {
      if ( v23 == -2147483631 )
        break;
      v25 = v24[v7 - v22];
      if ( !v25 )
        break;
      *v24++ = v25;
      --v23;
    }
    while ( v23 );
    v26 = v24 - 1;
    if ( v23 )
      v26 = v24;
    *v26 = 0;
    if ( !v23 )
LABEL_40:
      *v22 = 0;
    Next[136].Next = v58;
    *((_DWORD *)&Next[135].Next + 3) = v8;
    HIDWORD(Next[134].Next) = 1;
  }
  if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000010LL) )
  {
    v31 = *(_QWORD *)(v3 + 16);
    LODWORD(v58) = v55;
    v45 = v29;
    v33 = v10 & 1;
    v35 = DWORD1(v53);
    v36 = v52.m128i_i32[1];
    v37 = v52.m128i_i32[0];
    *(_QWORD *)&v47 = v50.m128i_i64[0];
    v46.m128i_i64[0] = v16;
    v38 = v2;
    LODWORD(v32) = v28;
    v34 = v10 >> 1;
    v48.m128i_i64[0] = *(_QWORD *)(v31 + 1928);
    *(_QWORD *)&v49 = *(_QWORD *)(v31 + 412);
    v44 = v7;
    LOWORD(v55) = v30;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v31,
      (__int64)&unk_140075395,
      v27,
      v28,
      (__int64)&v55,
      (__int64)&v49,
      (unsigned __int16 **)&v48,
      (__int64)&v32,
      (__int64)&v47,
      (__int64)&v39,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v38,
      (__int64)&v46,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v45,
      &v44,
      (__int64)&v58);
  }
  *(_QWORD *)(v3 + 1480) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 1448), 0, 0);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v40);
  AcquireSpinLock::Release((AcquireSpinLock *)v54);
}
