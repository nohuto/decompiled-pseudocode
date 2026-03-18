/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x140077300
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(__int64 a1, int a2, ULONG64 a3, unsigned int *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  unsigned int *v9; // rax
  SIZE_T v10; // r12
  __int64 v11; // r14
  unsigned int v12; // esi
  int v13; // r15d
  int v14; // r15d
  int v15; // r15d
  _BYTE *v16; // rdx
  int v17; // ecx
  int v18; // ecx
  _BYTE *v19; // rdx
  int v21; // ecx
  __int64 v22; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v23[24]; // [rsp+88h] [rbp-30h] BYREF

  v7 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v22, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  v9 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  LOBYTE(v8) = 19;
  v11 = HMValidateHandleWithDescriptor(a1, v8);
  if ( !v11 )
  {
    v21 = 6;
LABEL_44:
    UserSetLastError(v21);
    v7 = -1;
    goto LABEL_37;
  }
  switch ( a2 )
  {
    case 536870917:
      if ( *(_DWORD *)(v11 + 48) == 2 )
        v12 = *(_DWORD *)(*(_QWORD *)(v11 + 440) + 104LL);
      else
        v12 = 0;
      break;
    case 536870919:
      v12 = (*(unsigned __int16 *)(v11 + 192) >> 1) + 1;
      break;
    case 536870923:
      v12 = 32;
      break;
    case 536870924:
      v12 = 44;
      break;
    default:
      v21 = 87;
      goto LABEL_44;
  }
  if ( !a3 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v12;
    goto LABEL_37;
  }
  if ( (unsigned int)v10 < v12 )
  {
    v7 = -1;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v12;
    UserSetLastError(122);
    goto LABEL_37;
  }
  ProbeForWrite((volatile void *)a3, v10, 4u);
  v13 = a2 - 536870917;
  if ( !v13 )
  {
    if ( *(_DWORD *)(v11 + 48) == 2 )
      memmove((void *)a3, *(const void **)(*(_QWORD *)(v11 + 440) + 16LL), v12);
    goto LABEL_36;
  }
  v14 = v13 - 2;
  if ( v14 )
  {
    v15 = v14 - 4;
    if ( v15 )
    {
      if ( v15 != 1 )
        goto LABEL_36;
      if ( (_DWORD)v10 == v12 )
      {
        v19 = (_BYTE *)a3;
        if ( (a3 & 3) == 0 )
        {
          if ( a3 >= MmUserProbeAddress )
            v19 = (_BYTE *)MmUserProbeAddress;
          *v19 = *v19;
          v19[43] = v19[43];
          *(_OWORD *)a3 = 0LL;
          *(_OWORD *)(a3 + 16) = 0LL;
          *(_QWORD *)(a3 + 32) = 0LL;
          *(_DWORD *)(a3 + 40) = 0;
          RIMFillDeviceHealthInfo(a3, v11);
          goto LABEL_36;
        }
        goto LABEL_33;
      }
    }
    else if ( (_DWORD)v10 == v12 )
    {
      v16 = (_BYTE *)a3;
      if ( (a3 & 3) == 0 )
      {
        if ( a3 >= MmUserProbeAddress )
          v16 = (_BYTE *)MmUserProbeAddress;
        *v16 = *v16;
        v16[31] = v16[31];
        *(_OWORD *)a3 = 0LL;
        *(_OWORD *)(a3 + 16) = 0LL;
        *(_DWORD *)a3 = v12;
        v17 = *(_DWORD *)(v11 + 48);
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 )
            {
              *(_DWORD *)(a3 + 4) = 2;
              *(_DWORD *)(a3 + 8) = *(unsigned __int16 *)(*(_QWORD *)(v11 + 440) + 110LL);
              *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(*(_QWORD *)(v11 + 440) + 112LL);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(*(_QWORD *)(v11 + 440) + 114LL);
              *(_WORD *)(a3 + 20) = *(_WORD *)(*(_QWORD *)(v11 + 440) + 42LL);
              *(_WORD *)(a3 + 22) = *(_WORD *)(*(_QWORD *)(v11 + 440) + 40LL);
            }
          }
          else
          {
            *(_DWORD *)(a3 + 4) = 1;
            *(_DWORD *)(a3 + 8) = *(_DWORD *)(v11 + 468);
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(v11 + 472);
            *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v11 + 442);
            *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v11 + 444);
            *(_DWORD *)(a3 + 24) = *(unsigned __int16 *)(v11 + 446);
            *(_DWORD *)(a3 + 28) = *(unsigned __int16 *)(v11 + 448);
          }
        }
        else
        {
          *(_DWORD *)(a3 + 4) = 0;
          *(_DWORD *)(a3 + 8) = *(_WORD *)(v11 + 440) & 0x7FFF;
          *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(v11 + 442);
          *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v11 + 444);
          *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v11 + 440) >> 15;
        }
        goto LABEL_36;
      }
LABEL_33:
      ExRaiseDatatypeMisalignment();
    }
    v7 = -1;
    UserSetLastError(87);
    goto LABEL_37;
  }
  if ( v12 > 2 )
  {
    memmove((void *)a3, *(const void **)(v11 + 200), *(unsigned __int16 *)(v11 + 192));
    *(_WORD *)(a3 + 2) = 92;
    *(_WORD *)(a3 + 2LL * (v12 - 1)) = 0;
LABEL_36:
    v7 = v12;
    goto LABEL_37;
  }
  v7 = -1;
LABEL_37:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v23);
  UserSessionSwitchLeaveCrit();
  return v7;
}
