/*
 * XREFs of PfQuerySuperfetchInformation @ 0x140933148
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     PfpMemoryListQuery @ 0x1403D4358 (PfpMemoryListQuery.c)
 *     PfLockSharedAcquire @ 0x14047FC44 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x140482C98 (PfLockSharedRelease.c)
 *     PfpMemoryRangesQuery @ 0x1404C7DA4 (PfpMemoryRangesQuery.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     PfpVirtualQuery @ 0x140932690 (PfpVirtualQuery.c)
 *     MmLogQueryCombineStats @ 0x140932778 (MmLogQueryCombineStats.c)
 *     PfpPfnPrioRequest @ 0x1409334C4 (PfpPfnPrioRequest.c)
 *     PfGetCompletedTrace @ 0x140933980 (PfGetCompletedTrace.c)
 *     EtwTiLogSyscallUsage @ 0x140934948 (EtwTiLogSyscallUsage.c)
 *     PfpQueryGpuUtilization @ 0x140934A2C (PfpQueryGpuUtilization.c)
 *     PfpQueryScenarioInformation @ 0x140ABC5D8 (PfpQueryScenarioInformation.c)
 */

__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, __int128 *a2, __int64 a3, KPROCESSOR_MODE a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int128 v15; // xmm6
  __int64 v16; // xmm7_8
  int v17; // edi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int128 v20; // [rsp+28h] [rbp-B0h] BYREF
  volatile void *Address[2]; // [rsp+38h] [rbp-A0h]
  __int128 v22; // [rsp+48h] [rbp-90h]
  __int128 v23; // [rsp+58h] [rbp-80h]
  __int64 v24; // [rsp+68h] [rbp-70h]
  int v25; // [rsp+70h] [rbp-68h]
  __int128 v26; // [rsp+78h] [rbp-60h] BYREF
  __int128 v27; // [rsp+88h] [rbp-50h]

  DWORD1(v22) = 0;
  v26 = 0LL;
  v27 = 0LL;
  if ( (_DWORD)a3 != 32 )
    return (unsigned int)-1073741820;
  v6 = 0;
  v20 = *a2;
  *(_OWORD *)Address = a2[1];
  if ( (_QWORD)v20 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  if ( DWORD2(v20) > 0x1C || (v7 = 268501248, !_bittest(&v7, DWORD2(v20))) )
  {
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
      return (unsigned int)-1073741790;
  }
  if ( DWORD2(v20) == 16 )
  {
    v8 = PfpMemoryListQuery((__int64)&v20, a4, a5);
    v9 = 20LL;
    goto LABEL_11;
  }
  if ( SDWORD2(v20) > 16 )
  {
    switch ( DWORD2(v20) )
    {
      case 0x11:
        v8 = PfpMemoryRangesQuery((__int64)&v20, a4, a5);
        v9 = 21LL;
        goto LABEL_11;
      case 0x14:
        if ( LODWORD(Address[1]) != 16 )
          return (unsigned int)-1073741306;
        v6 = 0;
        *(_QWORD *)&v22 = 0LL;
        if ( a4 )
        {
          v12 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v12 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v12 = *(_BYTE *)v12;
          *(_BYTE *)(v12 + 15) = *(_BYTE *)(v12 + 15);
          v6 = 0;
        }
        v22 = *(_OWORD *)Address[0];
        if ( (_DWORD)v22 == 1 )
        {
          *((_QWORD *)&v22 + 1) = qword_140E66FD0;
          *(_OWORD *)Address[0] = v22;
          *a5 = 16;
        }
        else
        {
          return (unsigned int)-1073741735;
        }
        return v6;
      case 0x17:
        return (unsigned int)PfpVirtualQuery((__int64)&v20, a4, a5);
      case 0x18:
        if ( LODWORD(Address[1]) != 16 )
          return (unsigned int)-1073741306;
        MmLogQueryCombineStats(0LL, 0LL, &v26);
        if ( a4 )
          ProbeForWrite(Address[0], 0x10uLL, 4u);
        if ( *(_DWORD *)Address[0] == 1 )
        {
          v13 = Address[0];
          *((_DWORD *)Address[0] + 1) = DWORD1(v26);
          v13[1] = *((_QWORD *)&v27 + 1);
        }
        else
        {
          return (unsigned int)-1073741811;
        }
        return v6;
      case 0x1B:
        return (unsigned int)PfpQueryFileExtentsRequest((__int64)&v20, a4, a5);
      case 0x1C:
        LOBYTE(a2) = a4;
        return (unsigned int)PfpQueryGpuUtilization(&v20, a2, a5);
      default:
        return (unsigned int)-1073741821;
    }
  }
  if ( DWORD2(v20) == 1 )
  {
    LOBYTE(a3) = a4;
    return (unsigned int)PfGetCompletedTrace(Address[0], LODWORD(Address[1]), a3, a5);
  }
  if ( DWORD2(v20) != 2 )
  {
    if ( DWORD2(v20) == 6 )
    {
      LOBYTE(a2) = a4;
      v8 = PfpPfnPrioRequest(&v20, a2, a5);
      v9 = 18LL;
LABEL_11:
      v6 = v8;
      EtwTiLogSyscallUsage(v8, v9);
      return v6;
    }
    if ( DWORD2(v20) == 8 )
    {
      v8 = PfpPrivSourceEnum((__int64)&v20, a4, a5);
      v9 = 19LL;
      goto LABEL_11;
    }
    if ( DWORD2(v20) != 9 )
    {
      if ( DWORD2(v20) == 12 )
      {
        LOBYTE(a2) = a4;
        return (unsigned int)PfpQueryScenarioInformation(&v20, a2, a5);
      }
      return (unsigned int)-1073741821;
    }
    v6 = 0;
    if ( LODWORD(Address[1]) == 4 )
    {
      if ( a4 )
      {
        v14 = (__int64)Address[0];
        if ( ((__int64)Address[0] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
          v14 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v14 = *(_BYTE *)v14;
        *(_BYTE *)(v14 + 3) = *(_BYTE *)(v14 + 3);
        v6 = 0;
      }
      *(_DWORD *)Address[0] = xmmword_140F0E408;
      *a5 = 4;
      return v6;
    }
    return (unsigned int)-1073741306;
  }
  if ( LODWORD(Address[1]) != 28 )
    return (unsigned int)-1073741306;
  v6 = 0;
  PfLockSharedAcquire((volatile signed __int64 *)qword_140E66E58);
  v15 = xmmword_140E66CA4;
  v23 = xmmword_140E66CA4;
  v16 = qword_140E66CB4;
  v24 = qword_140E66CB4;
  v17 = dword_140E66CBC;
  v25 = dword_140E66CBC;
  PfLockSharedRelease((signed __int64 *)qword_140E66E58);
  if ( a4 )
  {
    v18 = (__int64)Address[0];
    if ( ((__int64)Address[0] & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v18 = *(_BYTE *)v18;
    *(_BYTE *)(v18 + 27) = *(_BYTE *)(v18 + 27);
    v6 = 0;
    v17 = v25;
    v16 = v24;
    v15 = v23;
  }
  v19 = Address[0];
  *(_OWORD *)Address[0] = v15;
  v19[2] = v16;
  *((_DWORD *)v19 + 6) = v17;
  *a5 = 28;
  return v6;
}
