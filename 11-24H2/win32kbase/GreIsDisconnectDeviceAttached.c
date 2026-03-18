/*
 * XREFs of GreIsDisconnectDeviceAttached @ 0x140037DB8
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x14016CB70 (NtUserGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphoreShared @ 0x140021030 (EngAcquireSemaphoreShared.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x140038030 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x1400380D0 (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 */

__int64 __fastcall GreIsDisconnectDeviceAttached(__int64 a1)
{
  struct _ERESOURCE **v1; // rsi
  struct _ERESOURCE *v2; // rdi
  int v3; // r8d
  struct _ERESOURCE *v4; // rax
  unsigned int v5; // ebx
  struct _ERESOURCE *v6; // rax

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v2 = *v1 + 6;
  EngAcquireSemaphoreShared((HSEMAPHORE)v2);
  GrepAcquireLockValidate<1>();
  v4 = v1[154];
  v5 = 1;
  if ( !v4 || (v4[1].OwnerEntry.TableSize & 1) == 0 )
  {
    v6 = v1[152];
    if ( !v6 || (v6[1].OwnerEntry.TableSize & 1) == 0 )
      v5 = 0;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"DynamicModeChange", (int)v2, v3);
  GrepReleaseLockValidate<1>();
  GreReleaseSemaphoreSharedInternal(v2);
  return v5;
}
