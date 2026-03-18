/*
 * XREFs of ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1402083B0
 * Callers:
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x140211B48 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointInPenDeadzone @ 0x1401D957C (rimAbIsPointInPenDeadzone.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1401FBDB8 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1401FEE14 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x140205680 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208EB4 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

struct _LIST_ENTRY **__fastcall CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        const struct DEVICE_OUTPUT_CONFIG *a3,
        const struct tagPOINTER_INFO *a4)
{
  struct CPointerInputFrame *v8; // rbp
  unsigned int i; // r14d
  __int64 v10; // rbx
  int v11; // r9d
  struct _LIST_ENTRY **NextFrame; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  PERESOURCE *v15[8]; // [rsp+20h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v15,
    (PERESOURCE *)this + 4,
    0LL);
  if ( (*((_DWORD *)a2 + 57) & 0x200) == 0 )
  {
    v8 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((PERESOURCE *)this, a2);
    for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
    {
      v10 = *((_QWORD *)a2 + 30) + 480LL * i;
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v10) )
      {
        if ( *(_DWORD *)(v10 + 168) != v11 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13555);
        if ( (*(_DWORD *)(v10 + 180) & 0x10000) != 0
          && (unsigned int)rimAbIsPointInPenDeadzone(*((_QWORD *)a2 + 32) + 156LL, v10 + 168, (__int64)a3, (__int64)a4) )
        {
          *(_DWORD *)v10 |= 0x1000u;
        }
        else if ( v8 )
        {
          ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((PERESOURCE *)this, v8, *(_WORD *)(v10 + 172), 0LL);
          if ( ValidNodeInFrame )
          {
            if ( (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
              *(_DWORD *)v10 |= 0x1000u;
          }
        }
      }
    }
    if ( v8 )
      CTouchProcessor::UnreferenceFrameInt(this, v8);
  }
  NextFrame = CTouchProcessor::GetNextFrame((PERESOURCE *)this, a2, (struct _LIST_ENTRY *)this + 3);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v15);
  return NextFrame;
}
