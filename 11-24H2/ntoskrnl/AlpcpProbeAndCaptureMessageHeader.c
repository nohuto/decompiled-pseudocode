/*
 * XREFs of AlpcpProbeAndCaptureMessageHeader @ 0x1409A96B0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140867F3C (AlpcpProcessConnectionRequest.c)
 *     NtAlpcOpenSenderThread @ 0x1409A9420 (NtAlpcOpenSenderThread.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall AlpcpProbeAndCaptureMessageHeader(unsigned __int64 Src, _WORD *a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int16 v6; // ax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v4 = 0x7FFFFFFF0000LL;
  v8 = 0LL;
  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    if ( Src < 0x7FFFFFFF0000LL )
      v4 = Src;
    RtlCopyVolatileMemory(&v8, (const void *)v4, 0x18uLL);
    v6 = v8;
    v7 = HIDWORD(v9);
    *a2 = v8;
    a2[1] = v6 + 40;
    *((_DWORD *)a2 + 1) = DWORD1(v8);
    *((_QWORD *)a2 + 1) = DWORD2(v8);
    *((_QWORD *)a2 + 2) = HIDWORD(v8);
    result = (unsigned int)v9;
    *((_QWORD *)a2 + 4) = v7;
    *((_DWORD *)a2 + 6) = result;
    *((_DWORD *)a2 + 8) = v7;
  }
  else
  {
    if ( Src < 0x7FFFFFFF0000LL )
      v4 = Src;
    return (__int64)RtlCopyVolatileMemory(a2, (const void *)v4, 0x28uLL);
  }
  return result;
}
