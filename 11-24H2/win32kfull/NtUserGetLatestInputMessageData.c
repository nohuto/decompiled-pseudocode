/*
 * XREFs of NtUserGetLatestInputMessageData @ 0x140296760
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140274E78 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserGetLatestInputMessageData(void *Src)
{
  int v2; // ebx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int128 Srca; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v9; // [rsp+50h] [rbp-A8h]
  __int128 v10; // [rsp+60h] [rbp-98h]
  __int128 v11; // [rsp+70h] [rbp-88h]
  __int64 v12; // [rsp+80h] [rbp-78h]
  _OWORD v13[4]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+E0h] [rbp-18h]

  memset_0(&Srca, 0, 0x48uLL);
  v2 = 0;
  if ( !(unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = 5023;
LABEL_3:
    UserSetLastError(v3);
    return v2;
  }
  if ( !Src
    || (memset_0(v13, 0, 0x48uLL),
        RtlCopyFromUser(v13, Src, 0x48uLL),
        Srca = v13[0],
        v9 = v13[1],
        v10 = v13[2],
        v11 = v13[3],
        v12 = v14,
        LODWORD(v13[0]) != 72) )
  {
    v3 = 87;
    goto LABEL_3;
  }
  v6 = PtiCurrent(v5, v4);
  Srca = *(_OWORD *)((char *)v6 + 1384);
  v9 = *(_OWORD *)((char *)v6 + 1400);
  v10 = *(_OWORD *)((char *)v6 + 1416);
  v11 = *(_OWORD *)((char *)v6 + 1432);
  v12 = *((_QWORD *)v6 + 181);
  if ( (unsigned __int64)Src >= MmUserProbeAddress )
    Src = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, &Srca, 0x48uLL);
  return 1;
}
