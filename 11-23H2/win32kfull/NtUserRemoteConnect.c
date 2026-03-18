/*
 * XREFs of NtUserRemoteConnect @ 0x1C0098E30
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x1C00E0388 (wcsncpycch.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0138230 (__report_rangecheckfailure.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRemoteConnect(_OWORD *a1, unsigned int a2, volatile void *a3)
{
  SIZE_T v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // rcx
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ebx
  _BYTE v24[320]; // [rsp+30h] [rbp-2F8h] BYREF
  _BYTE v25[8]; // [rsp+170h] [rbp-1B8h] BYREF
  GUID ActivityId; // [rsp+178h] [rbp-1B0h] BYREF
  int v27; // [rsp+188h] [rbp-1A0h]
  char v28; // [rsp+1A0h] [rbp-188h]
  __int64 v29; // [rsp+1B0h] [rbp-178h]
  _BYTE v30[320]; // [rsp+1C0h] [rbp-168h] BYREF
  _WORD v31[12]; // [rsp+300h] [rbp-28h] BYREF

  v4 = a2;
  memset_0(v25, 0, 0x48uLL);
  EtwActivityIdControl(3u, &ActivityId);
  v29 = MEMORY[0xFFFFF78000000014];
  v27 = 31;
  v28 = -1;
  memset_0(v30, 0, sizeof(v30));
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  v13 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a1 + 20 < a1 || (unsigned __int64)(a1 + 20) > MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    v14 = v24;
    v15 = 2LL;
    do
    {
      *v14 = *a1;
      v14[1] = a1[1];
      v14[2] = a1[2];
      v14[3] = a1[3];
      v14[4] = a1[4];
      v14[5] = a1[5];
      v14[6] = a1[6];
      v14 += 8;
      *(v14 - 1) = a1[7];
      a1 += 8;
      --v15;
    }
    while ( v15 );
    *v14 = *a1;
    v14[1] = a1[1];
    v14[2] = a1[2];
    v14[3] = a1[3];
    v16 = v30;
    v17 = v24;
    v18 = 2LL;
    do
    {
      *v16 = *v17;
      v16[1] = v17[1];
      v16[2] = v17[2];
      v16[3] = v17[3];
      v16[4] = v17[4];
      v16[5] = v17[5];
      v16[6] = v17[6];
      v16 += 8;
      *(v16 - 1) = v17[7];
      v17 += 8;
      --v18;
    }
    while ( v18 );
    *v16 = *v17;
    v16[1] = v17[1];
    v16[2] = v17[2];
    v16[3] = v17[3];
    v19 = v4;
    ProbeForRead(a3, v4, 2u);
    if ( (unsigned int)v4 > 9 )
      v19 = 9;
    wcsncpycch(v31, a3, v19);
    if ( 2 * (unsigned __int64)v19 >= 0x14 )
      _report_rangecheckfailure(v20);
    v31[v19] = 0;
    gptiTSRequest = gptiCurrent;
    v21 = xxxRemoteConnect(v30, v19, v31, v25, v19);
    v22 = v21;
    if ( v21 < 0 )
    {
      v13 = gptiTSRequest;
      gptiTSRequest = 0LL;
    }
  }
  else
  {
    v22 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v13, v10, v11, v12);
  return v22;
}
