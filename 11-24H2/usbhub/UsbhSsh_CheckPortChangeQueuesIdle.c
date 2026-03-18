/*
 * XREFs of UsbhSsh_CheckPortChangeQueuesIdle @ 0x140033708
 * Callers:
 *     UsbhSsh_CheckHubIdle @ 0x1400044C4 (UsbhSsh_CheckHubIdle.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

__int64 __fastcall UsbhSsh_CheckPortChangeQueuesIdle(__int64 a1)
{
  unsigned __int16 i; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  bool v12; // zf

  FdoExt(a1);
  for ( i = 1; ; ++i )
  {
    if ( i > *((unsigned __int8 *)FdoExt(a1) + 2938) )
      return 0LL;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v3 = *(_QWORD *)(a1 + 64);
        if ( v3 )
        {
          v4 = *(_QWORD *)(v3 + 888)
             + 32LL
             * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
          *(_DWORD *)v4 = 1413771367;
          *(_QWORD *)(v4 + 16) = i;
          *(_QWORD *)(v4 + 8) = 0LL;
          *(_QWORD *)(v4 + 24) = 0LL;
        }
      }
    }
    if ( i && (v5 = FdoExt(a1), i <= *((unsigned __int8 *)FdoExt(a1) + 2938)) && (v6 = *((_QWORD *)v5 + 382)) != 0 )
    {
      v7 = v6 + 2928LL * i - 2928;
      if ( (UsbhLogMask & 8) != 0 && a1 )
      {
        v8 = *(_QWORD *)(a1 + 64);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 888)
             + 32LL
             * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
          *(_DWORD *)v9 = 1044672615;
          *(_QWORD *)(v9 + 8) = 0LL;
          *(_QWORD *)(v9 + 16) = i;
          *(_QWORD *)(v9 + 24) = v7;
        }
      }
    }
    else
    {
      v7 = 0LL;
    }
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 440));
    v11 = (KSPIN_LOCK *)(v7 + 440);
    v12 = *(_QWORD *)(v7 + 456) == v7 + 456;
    *(_DWORD *)(v7 + 448) = 0;
    if ( !v12 )
      break;
    KeReleaseSpinLock(v11, v10);
  }
  KeReleaseSpinLock(v11, v10);
  return 3221225473LL;
}
