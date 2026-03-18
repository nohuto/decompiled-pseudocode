/*
 * XREFs of ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001A310
 * Callers:
 *     NtGdiAddInitialFonts @ 0x1C0018400 (NtGdiAddInitialFonts.c)
 * Callees:
 *     FinishStockFontInit @ 0x1C0019280 (FinishStockFontInit.c)
 *     UserOnGreTextReady @ 0x1C001A438 (UserOnGreTextReady.c)
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C001AB10 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C006ADEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C4108 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::AddInitialFonts(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS v2; // eax
  bool v3; // si
  __int64 HDEV; // rbx
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  struct _KEVENT *v7; // rcx
  bool v8; // bl
  __int64 v10; // rax
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( KeReadStateEvent(*(PRKEVENT *)(v1 + 23568)) )
    return 1;
  v2 = KeWaitForSingleObject(*(PVOID *)(v1 + 23576), Executive, 1, 0, 0LL);
  if ( v2 < 0 || v2 == 192 )
  {
    KeSetEvent(*(PRKEVENT *)(v1 + 23568), 0, 0);
    return 0;
  }
  else
  {
    v3 = (unsigned int)bInitializeEUDCInternal() != 0;
    HDEV = UserGetHDEV();
    v6 = Gre::Base::Globals(v5);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v11, *((HSEMAPHORE *)v6 + 10));
    LODWORD(HDEV) = *(_DWORD *)(HDEV + 2148);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v11);
    FinishStockFontInit((unsigned int)HDEV);
    if ( !*(_QWORD *)(v1 + 19504) )
    {
      v10 = *(_QWORD *)(v1 + 20272);
      if ( !v10 || !*(_DWORD *)(v10 + 28) )
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 13LL, 0LL, 0LL, 0LL, 0LL, 0LL, 1);
    }
    v7 = *(struct _KEVENT **)(v1 + 23552);
    *(_BYTE *)(v1 + 23560) = 1;
    KeSetEvent(v7, 0, 0);
    v8 = (unsigned int)UserOnGreTextReady() != 0 && v3;
    KeSetEvent(*(PRKEVENT *)(v1 + 23568), 0, 0);
    return v8;
  }
}
