/*
 * XREFs of ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401DA74C
 * Callers:
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1402BBA30 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1400391D4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREATEHWQUEUE@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140050E10 (-VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREA.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x140051DE8 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x14018A51C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1403AE404 (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::InitializeForUserModeSubmission(
        DXGHWQUEUE *this,
        struct _D3DKMT_CREATEHWQUEUE *a2,
        _DWORD *a3)
{
  __int64 v4; // rdx
  unsigned int *v7; // r8
  __int64 v8; // r10
  __int64 result; // rax
  UINT Value; // ecx
  UINT PrivateDriverDataSize; // r9d
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  int HwQueue; // eax
  __int64 v16; // r8
  struct VIDSCH_HW_QUEUE **v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+28h] [rbp-60h]
  _DXGKARG_CREATEHWQUEUE v19; // [rsp+50h] [rbp-38h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = (unsigned int *)(v4 + 380);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 16LL) + 2992LL)
                 + 344LL * *(unsigned int *)(v4 + 388)
                 + 32);
  if ( !v8 || (*(_BYTE *)(74LL * *v7 + v8 + 68) & 8) == 0 )
  {
    WdLogSingleEntry2(2LL, v4, *v7);
    v18 = *(unsigned int *)(*((_QWORD *)this + 2) + 380LL);
    v17 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 256;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Cannot create UserModeSubmission capable HWQueue on DXGCONTEXT 0x%I64x, because Node Ordinal %u does not support U"
       "serModeSubmission",
      (__int64)v17,
      v18,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *((_BYTE *)this + 140) = 1;
  Value = a2->Flags.Value;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v19.Flags.Value = Value;
  v19.PrivateDriverDataSize = PrivateDriverDataSize;
  v19.hHwQueue = this;
  v19.pPrivateDriverData = a3;
  memset(&v19.hHwQueueProgressFence, 0, 24);
  if ( (*(_DWORD *)(v4 + 392) & 4) != 0 || *(_BYTE *)(*(_QWORD *)(v4 + 16) + 1914LL) )
    v19.Flags.Value = Value | 1;
  if ( (Value & 8) == 0 )
  {
    v12 = ADAPTER_RENDER::DdiCreateHwQueue(
            *(ADAPTER_RENDER **)(*(_QWORD *)(v4 + 16) + 16LL),
            *(void **)(v4 + 184),
            &v19);
    v13 = v12;
    if ( v12 < 0 )
    {
      if ( v12 != -1073741822 )
      {
        WdLogSingleEntry1(2LL, v12);
        WdLogGlobalForLineNumber = 292;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DdiCreateHwQueue() failed with status 0x%I64d",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v13;
      }
      *((_QWORD *)this + 4) = 153LL;
    }
    else
    {
      *((_QWORD *)this + 4) = v19.hHwQueue;
    }
LABEL_17:
    v14 = DXGPROCESS::AllocHandleSafe(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL),
            (__int64)this,
            0xFu);
    *((_DWORD *)this + 6) = v14;
    if ( v14 )
    {
      HwQueue = VIDSCH_EXPORT::VidSchCreateHwQueue(
                  *(VIDSCH_EXPORT **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
                  this,
                  *(struct VIDSCH_HW_CONTEXT **)(*((_QWORD *)this + 2) + 280LL),
                  a2,
                  (struct VIDSCH_HW_QUEUE **)this + 5);
      LODWORD(v13) = HwQueue;
      if ( HwQueue >= 0 )
      {
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              &EventCreateHwQueue,
              v16,
              *((_QWORD *)this + 2),
              *((unsigned int *)this + 6),
              this);
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), HwQueue);
        WdLogGlobalForLineNumber = 334;
      }
    }
    else
    {
      LODWORD(v13) = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 316;
    }
    return (unsigned int)v13;
  }
  if ( (*(_DWORD *)(v4 + 392) & 0x20) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 300;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The HW queue must specify NoKmdAccess flag",
      300LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  result = CheckNoKmdAccessPrivateData(PrivateDriverDataSize, a3, 0xFF000005);
  if ( (int)result >= 0 )
    goto LABEL_17;
  return result;
}
