/*
 * XREFs of PfQuerySuperfetchInformation @ 0x140932B10
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PfLockSharedRelease @ 0x1402054C4 (PfLockSharedRelease.c)
 *     PfLockSharedAcquire @ 0x14020739C (PfLockSharedAcquire.c)
 *     PfpMemoryListQuery @ 0x1403BDB08 (PfpMemoryListQuery.c)
 *     PfpMemoryRangesQuery @ 0x1404C727C (PfpMemoryRangesQuery.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PfpQueryFileExtentsRequest @ 0x140739C28 (PfpQueryFileExtentsRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 *     EtwTiLogSyscallUsage @ 0x1408EA178 (EtwTiLogSyscallUsage.c)
 *     PfpQueryGpuUtilization @ 0x14091D1F8 (PfpQueryGpuUtilization.c)
 *     PfpPfnPrioRequest @ 0x140933094 (PfpPfnPrioRequest.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     PfGetCompletedTrace @ 0x14093A5D4 (PfGetCompletedTrace.c)
 *     MmLogQueryCombineStats @ 0x140AB1EB4 (MmLogQueryCombineStats.c)
 *     PfpQueryScenarioInformation @ 0x140AB8458 (PfpQueryScenarioInformation.c)
 *     PfpVirtualQuery @ 0x140ABD794 (PfpVirtualQuery.c)
 */

__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, __int128 *a2, __int64 a3, KPROCESSOR_MODE a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edx
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
    v9 = 20;
    goto LABEL_11;
  }
  if ( SDWORD2(v20) > 16 )
  {
    switch ( DWORD2(v20) )
    {
      case 0x11:
        v8 = PfpMemoryRangesQuery((__int64)&v20, a4, a5);
        v9 = 21;
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
          *((_QWORD *)&v22 + 1) = qword_140E66D10;
          *(_OWORD *)Address[0] = v22;
          *a5 = 16;
        }
        else
        {
          return (unsigned int)-1073741735;
        }
        return v6;
      case 0x17:
        LOBYTE(a2) = a4;
        return (unsigned int)PfpVirtualQuery(&v20, a2, a5);
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
        return (unsigned int)PfpQueryGpuUtilization((__int64)&v20, a4, a5);
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
      v9 = 18;
LABEL_11:
      v6 = v8;
      EtwTiLogSyscallUsage(v8, v9);
      return v6;
    }
    if ( DWORD2(v20) == 8 )
    {
      v8 = PfpPrivSourceEnum((struct _KTHREAD *)&v20, a4, a5);
      v9 = 19;
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
      *(_DWORD *)Address[0] = xmmword_140F0DD48;
      *a5 = 4;
      return v6;
    }
    return (unsigned int)-1073741306;
  }
  if ( LODWORD(Address[1]) != 28 )
    return (unsigned int)-1073741306;
  v6 = 0;
  PfLockSharedAcquire(qword_140E66B98);
  v15 = xmmword_140E669E4;
  v23 = xmmword_140E669E4;
  v16 = qword_140E669F4;
  v24 = qword_140E669F4;
  v17 = dword_140E669FC;
  v25 = dword_140E669FC;
  PfLockSharedRelease(qword_140E66B98);
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
