/*
 * XREFs of ?InitializePowerGlobals@@YAJXZ @ 0x14014AB68
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     memset @ 0x14023F500 (memset.c)
 */

NTSTATUS InitializePowerGlobals(void)
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  _BYTE *UserGdiSessionState; // rax
  _QWORD OutputBuffer[8]; // [rsp+30h] [rbp-40h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v1 = W32GetUserSessionState(v0) + 368;
  result = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  v3 = result;
  if ( result >= 0 )
  {
    *(_DWORD *)(v1 + 2392) = LODWORD(OutputBuffer[3]) == 1;
    *(_DWORD *)(v1 + 2404) = HIDWORD(OutputBuffer[3]) == 0;
    v4 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
    *(_DWORD *)(v1 + 2400) = 0;
    *(_DWORD *)(v1 + 2424) = v4 >> 24;
    *(_DWORD *)(v1 + 2432) = LOBYTE(OutputBuffer[6]);
    *(_DWORD *)(v1 + 2436) = HIDWORD(OutputBuffer[6]) != 0;
    *(_DWORD *)(v1 + 2440) = BYTE1(OutputBuffer[6]);
    *(_DWORD *)(v1 + 2444) = 0;
    *(_DWORD *)(v1 + 2448) = BYTE1(OutputBuffer[7]);
    *(_DWORD *)(v1 + 2528) = 1;
    *(_QWORD *)(v1 + 2464) = 0LL;
    v5 = MEMORY[0xFFFFF78000000004];
    v6 = MEMORY[0xFFFFF78000000320] << 8;
    *(_QWORD *)(v1 + 2488) = 0LL;
    *(_QWORD *)(v1 + 2496) = 0LL;
    *(_QWORD *)(v1 + 2504) = 0LL;
    *(_QWORD *)(v1 + 2512) = 0LL;
    *(_QWORD *)(v1 + 2480) = ((unsigned __int64)(v5 << 32) * (unsigned __int128)v6) >> 64;
    v7 = MEMORY[0xFFFFF78000000004];
    v8 = MEMORY[0xFFFFF78000000320] << 8;
    *(_DWORD *)(v1 + 2520) = 0;
    *(_QWORD *)(v1 + 2472) = ((unsigned __int64)(v7 << 32) * (unsigned __int128)v8) >> 64;
    *(_DWORD *)(v1 + 2552) = OutputBuffer[5];
    *(_DWORD *)(v1 + 2544) = HIDWORD(OutputBuffer[4]);
    v9 = HIDWORD(OutputBuffer[4]);
    *(_DWORD *)(v1 + 2536) = OutputBuffer[4];
    v10 = LODWORD(OutputBuffer[4]);
    *(_DWORD *)(v1 + 2556) = HIDWORD(OutputBuffer[5]);
    *(_DWORD *)(v1 + 2568) = -1;
    *(_DWORD *)(v1 + 2572) = -1;
    *(_DWORD *)(v1 + 2576) = -1;
    *(_DWORD *)(v1 + 2584) = -1;
    *(_DWORD *)(v1 + 2588) = -1;
    *(_DWORD *)(v1 + 2592) = -1;
    *(_DWORD *)(v1 + 2560) = -1;
    *(_DWORD *)(v1 + 2564) = v10;
    *(_DWORD *)(v1 + 2580) = v9;
    *(_BYTE *)(v1 + 2596) = 0;
    UserGdiSessionState = (_BYTE *)W32GetUserGdiSessionState(v10);
    *UserGdiSessionState = OutputBuffer[7];
    *(_DWORD *)(v1 + 2312) = 1000 * LODWORD(OutputBuffer[2]);
    *(_QWORD *)(v1 + 2352) = OutputBuffer[0];
    *(_QWORD *)(v1 + 2344) = OutputBuffer[1];
    LODWORD(UserGdiSessionState) = 1000 * HIDWORD(OutputBuffer[2]);
    *(_BYTE *)(v1 + 2304) = 1;
    *(_DWORD *)(v1 + 2320) = (_DWORD)UserGdiSessionState;
    return v3;
  }
  return result;
}
