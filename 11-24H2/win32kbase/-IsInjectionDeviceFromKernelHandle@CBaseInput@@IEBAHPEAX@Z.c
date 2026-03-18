/*
 * XREFs of ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x14020CD14
 * Callers:
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x140103D70 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140188E00 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall CBaseInput::IsInjectionDeviceFromKernelHandle(CBaseInput *this, void *a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  unsigned int v5; // esi
  __int64 i; // rax

  v2 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 154);
  v5 = 0;
  W32AcquirePushLockExclusiveEx(v2, 0);
  for ( i = **((_QWORD **)this + 155); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(void **)(i + 24) == a2 )
    {
      v5 = -__CFSHR__(*(_DWORD *)(i + 168), 14);
      break;
    }
  }
  W32ReleasePushLockExclusiveEx(v2, 0LL);
  return v5;
}
