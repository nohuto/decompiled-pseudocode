/*
 * XREFs of ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140109410
 * Callers:
 *     _lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_ @ 0x1401093A0 (_lambda_41d3d8e444f2107bdec37176a1b6496a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14010F668 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x140188B00 (-UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z.c)
 *     SynthesizePTPMouseInput @ 0x1401899D0 (SynthesizePTPMouseInput.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void CPTPProcessor::ProcessMouseQueue(void)
{
  __int64 v0; // rcx
  int v1; // ecx
  int v2; // ebx
  int v3; // ebx
  _QWORD *v4; // rax
  bool v5; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v7; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+58h] [rbp-B0h]
  __int128 v9; // [rsp+68h] [rbp-A0h]
  int v10[36]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v11[18]; // [rsp+108h] [rbp+0h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v6, "PTPMouseOperation", 0LL);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  memset(v10, 0, 0x88uLL);
  memset(v11, 0, 0x88uLL);
  v5 = 0;
  *(_QWORD *)&v7 = *(_QWORD *)(W32GetUserSessionState(v0) + 19240);
  while ( CPTPProcessor::UnqueuePTPMouseEvent((struct tagPTPMOUSEEVENT *)v10, (struct tagPTPMOUSEEVENT *)v11, &v5) )
  {
    *(LARGE_INTEGER *)&v10[8] = KeQueryPerformanceCounter(0LL);
    v1 = 3840;
    *(_QWORD *)&v10[10] = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    if ( !v10[5] && !v10[6] )
      v1 = 3848;
    if ( v10[28] )
    {
      *((_QWORD *)&v9 + 1) = &v10[29];
      v2 = v10[32] != 0 ? 112 : 48;
    }
    else
    {
      *((_QWORD *)&v9 + 1) = 0LL;
      v2 = 64;
    }
    v3 = v1 | v2;
    InputTraceLogging::Mouse::InjectInput(4LL, *(_QWORD *)&v10[8]);
    *((_QWORD *)&v8 + 1) = 0LL;
    if ( v5 )
    {
      v4 = &v11[1];
      if ( *(_QWORD *)v10 != v11[0] )
        v4 = 0LL;
      *((_QWORD *)&v8 + 1) = v4;
    }
    *(_QWORD *)&v9 = *(_QWORD *)&v10[12];
    *(_QWORD *)&v8 = &v10[14];
    SynthesizePTPMouseInput(v10[0], (int)&v10[2], v10[10], v10[8], v3, (struct PTPMouseInputData *)&v7);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
}
