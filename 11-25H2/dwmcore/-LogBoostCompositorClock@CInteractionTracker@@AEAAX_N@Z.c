/*
 * XREFs of ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1800EFA84
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1800EF928 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1800EFE88 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1800F6E00 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::LogBoostCompositorClock(CInteractionTracker *this, unsigned __int8 a2)
{
  _DWORD v2[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v5; // [rsp+58h] [rbp-28h]
  int v6; // [rsp+60h] [rbp-20h]
  int v7; // [rsp+64h] [rbp-1Ch]
  _DWORD *v8; // [rsp+68h] [rbp-18h]
  int v9; // [rsp+70h] [rbp-10h]
  int v10; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_180404D18 > 5 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v10 = 0;
    v2[0] = a2;
    EventDescriptor.Keyword = 2LL;
    v8 = v2;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_180404D20;
    v9 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_180404D20;
    v5 = &unk_1803D8F2E;
    UserData.Reserved = 2;
    v6 = 60;
    v7 = 1;
    v2[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
