/*
 * XREFs of SmProcessStatsRequest @ 0x140798698
 * Callers:
 *     SmQueryStoreInformation @ 0x140A18DA0 (SmQueryStoreInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     SmAllocEx @ 0x14044AB68 (SmAllocEx.c)
 *     MmSizeOfMdl @ 0x140458550 (MmSizeOfMdl.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1404974E0 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     SmpGetProcessPartition @ 0x140498A6C (SmpGetProcessPartition.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PsReferencePartitionByHandle @ 0x140934434 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessStatsRequest(__int64 a1, int a2, _DWORD *a3, KPROCESSOR_MODE a4)
{
  struct _MDL *v7; // r14
  __int64 v8; // rsi
  int v9; // r12d
  __int64 v10; // r8
  int v11; // ebx
  unsigned int v12; // r15d
  __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  __int16 v16; // r8
  int v18; // [rsp+30h] [rbp-98h]
  __int64 v19; // [rsp+48h] [rbp-80h] BYREF
  __int64 ProcessPartition; // [rsp+50h] [rbp-78h]
  PVOID Base[2]; // [rsp+58h] [rbp-70h]
  __int64 v22; // [rsp+68h] [rbp-60h]
  __int128 v23; // [rsp+70h] [rbp-58h] BYREF
  struct _KEVENT Object; // [rsp+80h] [rbp-48h] BYREF

  memset(&Object, 0, sizeof(Object));
  v23 = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( a2 != 24 )
  {
    v11 = -1073741306;
    goto LABEL_25;
  }
  if ( a4 && (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *(_OWORD *)Base = *(_OWORD *)a1;
  v22 = *(_QWORD *)(a1 + 16);
  if ( LOBYTE(Base[0]) == 3 && (unsigned __int64)((__int64)Base[0] & 0xFF00) < 0x400 )
  {
    if ( v22 )
    {
      LOBYTE(v10) = a4;
      v11 = PsReferencePartitionByHandle(v22, 1LL, v10, 1397845331LL, &v19);
      if ( v11 < 0 )
        goto LABEL_25;
      ProcessPartition = *(_QWORD *)(v19 + 24);
      if ( !ProcessPartition )
      {
        v11 = -1073741399;
        goto LABEL_25;
      }
    }
    else
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    v12 = (unsigned int)Base[0];
    v18 = BYTE1(Base[0]);
    if ( BYTE1(Base[0]) <= 1u || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    {
      v13 = HIDWORD(Base[0]);
      if ( (!HIDWORD(Base[0])
         || (v14 = MmSizeOfMdl(Base[1], HIDWORD(Base[0])), (v7 = (struct _MDL *)SmAllocEx(v14, 1145924979LL, -1)) != 0LL))
        && (v8 = SmAllocEx(40LL, 1767337331LL, -1)) != 0 )
      {
        *(_OWORD *)v8 = 0LL;
        *(_OWORD *)(v8 + 16) = 0LL;
        *(_QWORD *)(v8 + 32) = 0LL;
        if ( (_DWORD)v13 )
        {
          v7->Next = 0LL;
          v15 = (unsigned __int64)Base[1];
          v16 = (__int16)Base[1];
          v7->Size = 8 * ((((unsigned __int64)((__int64)Base[1] & 0xFFF) + v13 + 4095) >> 12) + 6);
          v7->MdlFlags = 0;
          v7->StartVa = (PVOID)(v15 & 0xFFFFFFFFFFFFF000uLL);
          v7->ByteOffset = v16 & 0xFFF;
          v7->ByteCount = v13;
          MmProbeAndLockPages(v7, a4, IoWriteAccess);
          v9 = 1;
        }
        *(_DWORD *)v8 = *(_DWORD *)v8 & 0xFFFFFFF8 | 3;
        *(_DWORD *)(v8 + 8) = v18;
        *(_DWORD *)(v8 + 12) = v13;
        *(_QWORD *)(v8 + 16) = v7;
        v11 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(ProcessPartition, HIWORD(v12), v8, (int)&Object, (__int64)&v23);
        if ( v11 >= 0 )
        {
          v8 = 0LL;
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          v11 = v23;
          *a3 = DWORD2(v23);
        }
      }
      else
      {
        v11 = -1073741670;
      }
    }
    else
    {
      v11 = -1073741790;
    }
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_25:
  if ( v8 )
    CmSiFreeMemory((PPRIVILEGE_SET)v8);
  if ( v9 )
    MmUnlockPages(v7);
  if ( v7 )
    CmSiFreeMemory((PPRIVILEGE_SET)v7);
  if ( v19 )
    PsDereferencePartition(v19);
  return (unsigned int)v11;
}
