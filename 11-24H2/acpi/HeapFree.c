/*
 * XREFs of HeapFree @ 0x140004AB0
 * Callers:
 *     ParsePackage @ 0x140001230 (ParsePackage.c)
 *     WriteCookAccess @ 0x1400015F0 (WriteCookAccess.c)
 *     RawFieldAccess @ 0x140001978 (RawFieldAccess.c)
 *     ProcessEvalObj @ 0x140002AF0 (ProcessEvalObj.c)
 *     ParseAcquire @ 0x140002BC0 (ParseAcquire.c)
 *     FreeNameSpaceObjects @ 0x140003200 (FreeNameSpaceObjects.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     ParseRelease @ 0x140004C30 (ParseRelease.c)
 *     FreeObjOwner @ 0x140005670 (FreeObjOwner.c)
 *     WriteFieldLoop @ 0x140005880 (WriteFieldLoop.c)
 *     ProcessIncDec @ 0x140005D80 (ProcessIncDec.c)
 *     RunContext @ 0x140005EA0 (RunContext.c)
 *     WriteFieldObj @ 0x14000B3B0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x14000B7E0 (ReadFieldObj.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     GetPciAddressWorker @ 0x1400150D0 (GetPciAddressWorker.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     FreeObjData @ 0x14002E368 (FreeObjData.c)
 *     ParseFieldList @ 0x1400358A8 (ParseFieldList.c)
 *     ProcessDivide @ 0x140040570 (ProcessDivide.c)
 *     ProcessSleep @ 0x140040AC0 (ProcessSleep.c)
 *     PreserveWriteObj @ 0x140042070 (PreserveWriteObj.c)
 *     FindNSObjMainNoLock @ 0x140042848 (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x140042958 (FindNSObj.c)
 *     ParseLoad @ 0x140053310 (ParseLoad.c)
 *     ProcessWait @ 0x140054330 (ProcessWait.c)
 *     ParseFieldConnection @ 0x140054520 (ParseFieldConnection.c)
 *     Simulator_Free_Arguments @ 0x14006B1AC (Simulator_Free_Arguments.c)
 *     LoadFieldUnitDDB @ 0x14006B76C (LoadFieldUnitDDB.c)
 *     ParseNestedContext @ 0x14006F010 (ParseNestedContext.c)
 *     ParseUnload @ 0x14006F0D0 (ParseUnload.c)
 *     ProcessLoadTable @ 0x14006FA50 (ProcessLoadTable.c)
 * Callees:
 *     <none>
 */

void __fastcall HeapFree(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // r8
  _QWORD *v4; // rax
  _QWORD *i; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // r10
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax

  v1 = a1 - 2;
  *((_DWORD *)a1 - 4) = 0;
  byte_140088EC8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v3 = v1[1];
  v4 = *(_QWORD **)(v3 + 40);
  for ( i = (_QWORD *)(v3 + 40); v4 != i; v4 = (_QWORD *)*v4 )
  {
    if ( a1 < v4 )
      break;
  }
  v6 = (_QWORD *)v4[1];
  if ( (_QWORD *)*v6 != v4 )
    goto LABEL_10;
  a1[1] = v6;
  *a1 = v4;
  *v6 = a1;
  v4[1] = a1;
  v7 = (_QWORD *)*a1;
  v8 = *a1 - 16LL;
  if ( (_QWORD *)*a1 != i )
  {
    v14 = *((unsigned int *)v1 + 1);
    if ( (_QWORD *)v8 == (_QWORD *)((char *)v1 + v14) )
    {
      *((_DWORD *)v1 + 1) = v14 + *(_DWORD *)(v8 + 4);
      v15 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_10;
      v16 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v16 != v7 )
        goto LABEL_10;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
    }
  }
  v9 = (_QWORD *)v1[3];
  v10 = v9 - 2;
  if ( v9 != i )
  {
    v17 = *((unsigned int *)v10 + 1);
    if ( v1 == (_QWORD *)((char *)v10 + v17) )
    {
      *((_DWORD *)v10 + 1) = *((_DWORD *)v1 + 1) + v17;
      v18 = *a1;
      if ( *(_QWORD **)(*a1 + 8LL) != a1 )
        goto LABEL_10;
      v19 = (_QWORD *)a1[1];
      if ( (_QWORD *)*v19 != a1 )
        goto LABEL_10;
      *v19 = v18;
      v1 = v10;
      *(_QWORD *)(v18 + 8) = v19;
    }
  }
  if ( *(_QWORD *)(v3 + 32) <= (unsigned __int64)v1 + *((unsigned int *)v1 + 1) )
  {
    *(_QWORD *)(v3 + 32) = v1;
    v11 = v1 + 2;
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) == v11 )
    {
      v13 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v13 == v11 )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        goto LABEL_9;
      }
    }
LABEL_10:
    __fastfail(3u);
  }
LABEL_9:
  KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
}
