/*
 * XREFs of ?vSynchronizeDriver@@YAXK@Z @ 0x14001366C
 * Callers:
 *     GreFlush @ 0x140013650 (GreFlush.c)
 *     ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1403307F0 (-GreSynchronizeTimer@@YAXPEAXI_K_J@Z.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x140014258 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140014FC0 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14001505C (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9120 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400DF014 (--$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14018AEB4 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall vSynchronizeDriver(int a1)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rsi
  struct Gre::Base::SESSION_GLOBALS *v4; // r14
  HSEMAPHORE v5; // rbp
  __int64 i; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // r9d
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState() + 96);
  if ( a1 == 64 )
  {
    if ( *(_DWORD *)(v3 + 4712) == -1 )
      return;
  }
  else if ( a1 != 128 || *(_QWORD *)(v3 + 4720) == -1LL )
  {
    return;
  }
  v4 = Gre::Base::Globals(v2);
  v5 = (HSEMAPHORE)(*(_QWORD *)v4 + 624LL);
  GreAcquireSemaphoreSharedInternal(v5);
  GrepAcquireLockValidate<1>();
  for ( i = 0LL; ; i = v8 )
  {
    v7 = hdevEnumerateDisplayOnly(i);
    v8 = v7;
    if ( !v7 )
      break;
    v10 = v7;
    if ( (a1 & *(_DWORD *)(v7 + 2112)) != 0 )
    {
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
      {
        GreAcquireSemaphore<2,>(v4);
        GreAcquireSemaphore<8,PDEVOBJ>(v10);
      }
      if ( (a1 & *(_DWORD *)(v10 + 2112)) != 0 && (*(_DWORD *)(v10 + 40) & 0x400) == 0 )
      {
        v9 = 0;
        if ( a1 == 64 )
        {
          if ( *(_DWORD *)(v3 + 4712) != -1 )
            v9 = 2;
        }
        else
        {
          v9 = *(_QWORD *)(v3 + 4720) != -1LL;
        }
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v10,
          (struct _SURFOBJ *)((*(_QWORD *)(v10 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v10 + 2544) != 0LL)),
          0LL,
          v9);
      }
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
      {
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v10);
        GreReleaseSemaphoreExclusive<2,>(v4);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v5);
  GrepReleaseLockValidate<1>();
  GreReleaseSemaphoreSharedInternal(v5);
}
