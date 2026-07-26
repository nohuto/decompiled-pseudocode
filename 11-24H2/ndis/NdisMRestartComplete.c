/*
 * XREFs of NdisMRestartComplete @ 0x14005F510
 * Callers:
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14017F6D0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __stdcall NdisMRestartComplete(NDIS_HANDLE MiniportAdapterHandle, NDIS_STATUS Status)
{
  NDIS_STATUS v2; // esi
  KIRQL v4; // al
  struct _KEVENT *v5; // rsi
  int v6; // edx

  v2 = Status;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Status) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Status,
      1,
      159,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportAdapterHandle);
  }
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_DWORD *)MiniportAdapterHandle + 566) = v2;
  v5 = (struct _KEVENT *)*((_QWORD *)MiniportAdapterHandle + 282);
  *((_QWORD *)MiniportAdapterHandle + 282) = 0LL;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v4);
  if ( v5 )
  {
    KeSetEvent(v5, 0, 0);
  }
  else if ( (*((_DWORD *)MiniportAdapterHandle + 31) & 0x100000) != 0
         || *((_BYTE *)MiniportAdapterHandle + 32) > 6u
         || *((_BYTE *)MiniportAdapterHandle + 32) == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u )
  {
    ndisBugCheckEx(0x1FuLL, (ULONG_PTR)MiniportAdapterHandle, 2uLL, 0LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1,
      160,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportAdapterHandle);
  }
}
