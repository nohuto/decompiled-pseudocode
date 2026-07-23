/*
 * XREFs of HalpQueryProfileInformation @ 0x140AB79E4
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6CB90 (HaliQuerySystemInformation.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     HalpQueryProfileSourceList @ 0x140371748 (HalpQueryProfileSourceList.c)
 *     HalpQueryProfileSource @ 0x1404B6BC0 (HalpQueryProfileSource.c)
 *     HalpCollectProfileCorruptionStatus @ 0x140542D74 (HalpCollectProfileCorruptionStatus.c)
 *     HalpCollectProfileOwnershipStatus @ 0x140542EC4 (HalpCollectProfileOwnershipStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpQueryProfileInformation(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rax
  __int64 v8; // r10
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // edx
  int v12; // r9d
  int v13; // r8d
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax

  switch ( (_DWORD)a1 )
  {
    case 1:
      return (unsigned int)HalpQueryProfileSource(a2, a3, a4);
    case 0x14:
      return (unsigned int)HalpQueryProfileSourceList(a2, a3, a4);
    case 0x2C:
      if ( (_DWORD)a2 )
      {
        *(_BYTE *)a3 = HalpProfileInterface == &DefaultProfileInterface;
        *a4 = 1;
        return 0;
      }
      *a4 = 1;
      return (unsigned int)-1073741820;
  }
  if ( (_DWORD)a1 != 45 )
  {
    if ( (_DWORD)a1 == 52 )
    {
      return (unsigned int)HalpCollectProfileCorruptionStatus((unsigned int **)a3, a2, a4);
    }
    else if ( (_DWORD)a1 == 53 )
    {
      return (unsigned int)HalpCollectProfileOwnershipStatus((unsigned int *)a3, a2, a4);
    }
    else
    {
      return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
    }
  }
  if ( (unsigned int)a2 < 4 )
  {
LABEL_11:
    *a4 = 12;
    return (unsigned int)-1073741820;
  }
  LODWORD(v4) = KeGetPcr()->Prcb.Number;
  if ( (_DWORD)a2 == 4 )
  {
    *a4 = 4;
    v8 = KiProcessorBlock[v4];
    v9 = 0;
    v10 = *(_QWORD *)(v8 + 88);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 4);
      v12 = 0;
      if ( v10 == -24 )
      {
LABEL_17:
        v13 = 0;
        v14 = v10 + 48;
        if ( v14 )
          v13 = *(_DWORD *)(v14 + 4);
        if ( *(_QWORD *)(v8 + 88) == -72LL )
          v15 = 0;
        else
          v15 = *(_DWORD *)(*(_QWORD *)(v8 + 88) + 76LL);
        *(_DWORD *)a3 = v11 + v12 + v13 + v15;
        return v9;
      }
    }
    else
    {
      v11 = 0;
    }
    v12 = *(_DWORD *)(v10 + 28);
    goto LABEL_17;
  }
  if ( (unsigned int)a2 < 0xC )
    goto LABEL_11;
  v16 = *(unsigned int *)(a3 + 8);
  if ( (unsigned int)v16 < KeQueryActiveProcessorCountEx(0xFFFFu) )
  {
    _mm_lfence();
    v9 = 0;
    v17 = *(_QWORD *)(KiProcessorBlock[v16] + 88);
    if ( v17 )
      v18 = *(_DWORD *)(v17 + 4);
    else
      v18 = 0;
    *(_DWORD *)a3 = v18;
    if ( *(_QWORD *)(KiProcessorBlock[v16] + 88) == -24LL )
      v19 = 0;
    else
      v19 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v16] + 88) + 28LL);
    *(_DWORD *)(a3 + 4) = v19;
    *a4 = 12;
  }
  else
  {
    *a4 = 12;
    return (unsigned int)-1073741811;
  }
  return v9;
}
