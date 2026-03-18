/*
 * XREFs of FsRtlpRegisterUncProvider @ 0x1406FEEF0
 * Callers:
 *     FsRtlRegisterUncProvider @ 0x1406FEC80 (FsRtlRegisterUncProvider.c)
 *     FsRtlRegisterUncProviderEx @ 0x1406FECC0 (FsRtlRegisterUncProviderEx.c)
 *     FsRtlRegisterUncProviderEx2 @ 0x1406FED00 (FsRtlRegisterUncProviderEx2.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     FsRtlpOpenDev @ 0x1406FED2C (FsRtlpOpenDev.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1406FEDF4 (FsRtlpRegisterProviderWithMUP.c)
 */

__int64 __fastcall FsRtlpRegisterUncProvider(__int64 a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int v8; // esi
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  Handle = (HANDLE)-1LL;
  if ( a1 && *(_QWORD *)(a1 + 8) && *(_WORD *)a1 && *(_WORD *)(a1 + 2) && (*(_WORD *)(a3 + 2) < 0x101u || a2) )
  {
    KeWaitForSingleObject(&FsRtlpUncSemaphore, Executive, 0, 0, 0LL);
    v8 = FsRtlpOpenDev(&Handle);
    if ( v8 < 0 || (v8 = FsRtlpRegisterProviderWithMUP(Handle, (const void **)a1, a2, a3), v8 < 0) )
    {
      if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        ZwClose(Handle);
      *a4 = (HANDLE)-1LL;
    }
    else
    {
      ++FsRtlpRedirs;
      *a4 = Handle;
    }
    KeReleaseSemaphore(&FsRtlpUncSemaphore, 0, 1, 0);
    return (unsigned int)v8;
  }
  else
  {
    *a4 = (HANDLE)-1LL;
    return 3221225485LL;
  }
}
