/*
 * XREFs of GreOnCURSINFODestroy @ 0x14002CB50
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14002CA40 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreSetPointer @ 0x1400285BC (GreSetPointer.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreOnCURSINFODestroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  Gre::Base *v5; // rcx
  __int64 v6; // rbp
  struct Gre::Base::SESSION_GLOBALS *v7; // rdi
  __int64 HDEV; // rax
  HSEMAPHORE v9; // rbx
  __int64 v10; // rdi
  HSEMAPHORE v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  result = W32GetSessionState(a1, a2, a3);
  v6 = *(_QWORD *)(result + 96);
  if ( *(_QWORD *)(v6 + 24) == a1 )
  {
    v7 = Gre::Base::Globals(v5);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v13, v7);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      v12 = HDEV;
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12) )
      {
        v9 = *(HSEMAPHORE *)(v12 + 56);
        GreAcquireSemaphoreInternal(v9);
        GrepAcquireLockValidate<4>();
        if ( *(_QWORD *)(v6 + 24) == a1 )
          GreSetPointer(0LL, 0, 0, 0);
        if ( v9 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            (__int64)v9);
      }
      else
      {
        v10 = *(_QWORD *)v7 + 1144LL;
        GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v10);
        v11 = *(HSEMAPHORE *)(v12 + 56);
        GreAcquireSemaphoreInternal(v11);
        GrepAcquireLockValidate<4>();
        if ( *(_QWORD *)(v6 + 24) == a1 )
          GreSetPointer(0LL, 0, 0, 0);
        if ( v11 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            (__int64)v11);
        if ( v10 )
          GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v10);
      }
    }
    return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
             (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
             v13);
  }
  return result;
}
