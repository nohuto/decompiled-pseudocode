/*
 * XREFs of ?ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ @ 0x180101A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetOopCalloutSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001E0D0 (-GetOopCalloutSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 */

__int64 __fastcall CPolicyConfig::ValidateSpatialAudioSettings(CPolicyConfig *this)
{
  struct CSerialWorkQueue *OopCalloutSerialWorkQueue; // rax
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-48h] BYREF
  int *v6; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  OopCalloutSerialWorkQueue = GetOopCalloutSerialWorkQueue();
  *(_QWORD *)v5 = &off_180173558;
  v6 = v5;
  v2 = CSerialWorkQueue::QueueWorkItem((__int64)OopCalloutSerialWorkQueue, (__int64 *)v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6F5,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
