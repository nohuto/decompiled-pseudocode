/*
 * XREFs of NtUserGetMessage @ 0x1C0126DC0
 * Callers:
 *     <none>
 * Callees:
 *     ClientGetMessageMPH @ 0x1C000359C (ClientGetMessageMPH.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, __int64 a2, int a3, int a4)
{
  int v8; // ebx
  int MessageMPH; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  ULONG64 v15; // rcx
  __int128 v17; // [rsp+48h] [rbp-40h] BYREF
  __int128 v18; // [rsp+58h] [rbp-30h]
  __int128 v19; // [rsp+68h] [rbp-20h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = 0;
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
      MessageMPH = ClientGetMessageMPH(&v17, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)&v17, a2, a3, a4, 1uLL, 1);
    v8 = MessageMPH;
    HIDWORD(v17) = 0;
    HIDWORD(v19) = 0;
    v13 = v18;
    v14 = v19;
    v15 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v17;
    a1[1] = v13;
    a1[2] = v14;
  }
  UserSessionSwitchLeaveCrit(v15, v10, v11, v12);
  return v8;
}
