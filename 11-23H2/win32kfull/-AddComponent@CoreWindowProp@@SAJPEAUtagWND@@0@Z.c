/*
 * XREFs of ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C021F6F0
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C021FC9C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0083170 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00B5154 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C021F944 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 */

__int64 __fastcall CoreWindowProp::AddComponent(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v14 = 0LL;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v14) )
  {
    v5 = v14;
    if ( *(_DWORD *)(v14 + 24) )
    {
      if ( !CoreWindowProp::FindComponent(a1, a2, 0LL) )
      {
        v6 = (_QWORD *)Win32AllocPoolZInit(16LL, 1920430933LL);
        if ( !v6 )
          return (unsigned int)-1073741801;
        *v6 = *(_QWORD *)(v5 + 40);
        v6[1] = a2;
        *(_QWORD *)(v5 + 40) = v6;
        ++*(_DWORD *)(v5 + 48);
      }
      if ( *(_DWORD *)(*((_QWORD *)a2 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
        v13[2] = 0LL;
        v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v13;
        v13[1] = a2;
        HMLockObject(a2);
        xxxSetWindowBand(a2, 0LL, *(unsigned int *)(*((_QWORD *)a1 + 5) + 236LL), 7);
        ThreadUnlock1(v8, v7, v9);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14, v10, v11);
      }
      return v3;
    }
  }
  UserSetLastError(5);
  return 3221225506LL;
}
