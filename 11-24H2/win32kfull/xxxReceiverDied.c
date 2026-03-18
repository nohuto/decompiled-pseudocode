/*
 * XREFs of xxxReceiverDied @ 0x14016F37C
 * Callers:
 *     SendMsgCleanup @ 0x140107600 (SendMsgCleanup.c)
 *     SuspendThreadQueue @ 0x1401A4D60 (SuspendThreadQueue.c)
 *     ?InterQueueMsgCleanup@@YAXK@Z @ 0x1401E851C (-InterQueueMsgCleanup@@YAXK@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x14016F544 (UnlinkSendListSms.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  _QWORD *v13; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v15[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v16; // [rsp+68h] [rbp-30h]
  __int64 v17; // [rsp+70h] [rbp-28h]
  __int64 v18; // [rsp+78h] [rbp-20h]
  __int128 v19; // [rsp+80h] [rbp-18h]

  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 84) |= 2u;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 84) &= ~0x4000u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 84) & 0x8010) == 0 )
    {
      --*(_DWORD *)(v5 + 576);
      v13 = (_QWORD *)(a1 + 16);
      a3 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(a3 + 8) != a1 + 16 || (a2 = *(_QWORD **)(a1 + 24), (_QWORD *)*a2 != v13) )
        __fastfail(3u);
      *a2 = a3;
      *(_QWORD *)(a3 + 8) = a2;
      *v13 = 0LL;
    }
    if ( *(_QWORD *)(v5 + 560) == v5 + 560 )
    {
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v5 + 488) + 8LL), 0xFFFFFFBF);
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v5 + 488) + 4LL), 0xFFFFFFBF);
    }
  }
  result = *(_QWORD *)(a1 + 32);
  v7 = *(_DWORD *)(a1 + 84);
  if ( result )
  {
    if ( (v7 & 1) != 0 )
    {
      v12 = v7 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      v12 = v7 | 0x8001;
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    *(_DWORD *)(a1 + 84) = v12;
    SetWakeBit(result, 512LL);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    if ( (v7 & 4) == 0 )
    {
      result = v7 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v8 = *(_QWORD *)(a1 + 112);
        v9 = v7 | 1;
        *(_DWORD *)(a1 + 84) = v9;
        v15[1] = 0;
        v10 = 33;
        v18 = 0LL;
        if ( (v9 & 0x400) != 0 )
          v10 = 289;
        v15[0] = v10;
        v16 = *(_QWORD *)(a1 + 48);
        v17 = *(_QWORD *)(a1 + 56);
        v19 = 0LL;
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v8);
        xxxInterSendMsgEx(
          *(struct tagWND **)(a1 + 112),
          *(_DWORD *)(a1 + 104),
          0LL,
          0LL,
          0,
          *(_QWORD *)(a1 + 64),
          (__int64)v15,
          1,
          *(_DWORD *)(a1 + 84) & 0x10000);
        result = Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v11);
      }
    }
    if ( (*(_DWORD *)(a1 + 84) & 0x4000) == 0 )
      return UnlinkSendListSms(a1, a2, a3, a4);
  }
  return result;
}
