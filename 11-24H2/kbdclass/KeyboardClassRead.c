/*
 * XREFs of KeyboardClassRead @ 0x1C0002920
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassReadCopyData @ 0x1C0002C70 (KeyboardClassReadCopyData.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0002F10 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061D8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KeyboardClassRead(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // r14
  unsigned int v6; // eax
  NTSTATUS v7; // esi
  unsigned int v8; // ebp
  char v9; // r12
  KIRQL v10; // r15
  unsigned int CopyData; // eax
  __int64 v13; // rdx
  __int64 **v14; // rdx
  __int64 *v15; // rcx
  __int64 *v16; // rdx
  __int64 **v17; // rax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v4 = *(_QWORD *)(v2 + 184);
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_DWORD *)(v4 + 8);
  if ( !v6 )
  {
    v7 = 0;
    *(_DWORD *)(v2 + 48) = 0;
LABEL_16:
    *(_QWORD *)(v2 + 56) = 0LL;
    goto LABEL_17;
  }
  if ( v6 != 12 * (v6 / 0xCuLL) )
  {
    v7 = -1073741789;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(v5 + 363) )
  {
    v7 = -1073741667;
LABEL_25:
    *(_DWORD *)(v2 + 48) = v7;
    goto LABEL_16;
  }
  if ( DriverEntry != *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(*(_QWORD *)(v4 + 48) + 32LL) )
  {
    v7 = -1073741727;
    goto LABEL_25;
  }
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, File, 1u, 0x20u);
  v8 = 259;
  if ( v7 >= 0 )
    v7 = 259;
  *(_DWORD *)(v2 + 48) = v7;
  *(_QWORD *)(v2 + 56) = 0LL;
  if ( v7 == 259 )
  {
    v9 = 0;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 160));
    if ( *(_DWORD *)(v5 + 84) )
    {
      CopyData = KeyboardClassReadCopyData(v5, v2);
      *(_DWORD *)(v2 + 48) = CopyData;
      v8 = CopyData;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 160), v10);
LABEL_13:
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, 0x20u);
      IofCompleteRequest((PIRP)v2, 0);
      return v8;
    }
    v14 = *(__int64 ***)(v5 + 176);
    v15 = (__int64 *)(v2 + 168);
    if ( *v14 == (__int64 *)(v5 + 168) )
    {
      *v15 = v5 + 168;
      *(_QWORD *)(v2 + 176) = v14;
      *v14 = v15;
      *(_QWORD *)(v5 + 176) = v15;
      _InterlockedExchange64((volatile __int64 *)(v2 + 104), (__int64)&KeyboardClassCancel);
      if ( !*(_BYTE *)(v2 + 68) )
      {
LABEL_21:
        *(_BYTE *)(*(_QWORD *)(v2 + 184) + 3LL) |= 1u;
        goto LABEL_22;
      }
      if ( !_InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 3, 3, 48);
        goto LABEL_21;
      }
      v16 = (__int64 *)*v15;
      if ( *(__int64 **)(*v15 + 8) == v15 )
      {
        v17 = *(__int64 ***)(v2 + 176);
        if ( *v17 == v15 )
        {
          *v17 = v16;
          v8 = -1073741536;
          v16[1] = (__int64)v17;
          *(_DWORD *)(v2 + 48) = -1073741536;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 3, 3, 47);
          v9 = 1;
LABEL_22:
          KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 160), v10);
          if ( !v9 )
            return v8;
          goto LABEL_13;
        }
      }
    }
    __fastfail(3u);
  }
LABEL_17:
  IofCompleteRequest((PIRP)v2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 3LL);
  }
  return (unsigned int)v7;
}
