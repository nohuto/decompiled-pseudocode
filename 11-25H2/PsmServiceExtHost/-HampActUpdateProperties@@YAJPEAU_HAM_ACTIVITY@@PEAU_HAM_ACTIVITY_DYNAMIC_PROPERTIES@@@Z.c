/*
 * XREFs of ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180034998
 * Callers:
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180019514 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 * Callees:
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C3C4 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18000D578 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029E18 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActGetExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B1A0 (-HampActGetExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036438 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActUpdateProperties(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a2)
{
  struct _RM_HAM_ACTIVITY_HOST **v2; // rsi
  DWORD v3; // ebp
  unsigned __int64 v4; // r15
  __int64 v5; // r14
  _QWORD *Value; // rbx
  int v9; // ebx
  int ExecutionSpeed; // ebp
  int v11; // edx
  int v12; // eax
  unsigned int v13; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rsi
  struct _HAM_DEPENDENCY_GROUP *v15; // rsi
  __int64 v16; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdx
  int v21; // [rsp+50h] [rbp+8h]
  int v22; // [rsp+50h] [rbp+8h]

  v2 = (struct _RM_HAM_ACTIVITY_HOST **)((char *)a1 + 80);
  v3 = HampLockTrackerId;
  v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v5 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( *((_BYTE *)a1 + 562) == 4 )
  {
    v13 = -1073741275;
LABEL_32:
    HampHostReleaseLockExclusive(*v2);
    return v13;
  }
  if ( (*((_BYTE *)a1 + 552) & 8) != 0 )
  {
    v13 = -1058275327;
    goto LABEL_32;
  }
  ExecutionSpeed = HampActGetExecutionSpeed((__int64)a1);
  v21 = *(_DWORD *)a2;
  v9 = *(_DWORD *)a2;
  v11 = HIWORD(*(_DWORD *)a2);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    *((_DWORD *)a1 + 28) ^= (*((_DWORD *)a1 + 28) ^ ((unsigned __int16)v9 << 9)) & 0x200;
  if ( (v11 & 4) != 0 )
  {
    *((_DWORD *)a1 + 28) ^= (*((_DWORD *)a1 + 28) ^ ((unsigned __int16)v9 << 11)) & 0x4000;
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)(v4 + 120), 0);
  }
  if ( (v21 & 0x20000) != 0 )
    *((_DWORD *)a1 + 28) ^= (*((_DWORD *)a1 + 28) ^ ((unsigned __int16)v9 << 6)) & 0x180;
  v12 = *((_DWORD *)a2 + 1);
  v13 = 0;
  v14 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  v22 = v12;
  if ( (v12 & 1) != 0 )
  {
    if ( !HIBYTE(v12) )
    {
      HIBYTE(v22) = *((_BYTE *)a1 + 427);
      v12 = v22;
    }
    *((_DWORD *)a1 + 106) = v12;
    HampHostUpdateActivityState(v14);
  }
  if ( ExecutionSpeed == (unsigned int)HampActGetExecutionSpeed((__int64)a1)
    || (unsigned __int8)(*((_BYTE *)a1 + 562) - 2) > 1u )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = HampHostCheckEnterDependencyWorker(v14);
  }
  v16 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v17 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v18 = *v17;
    if ( (*v17 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v17[2]-- == 1 )
      *v17 = v18 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v16 + 8) = 0;
  RtlReleaseSRWLockExclusive(v16);
  if ( v15 )
    HampDepGroupRunStateChangeWorker(v15);
  RmHamHostUpdateSettings(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  return v13;
}
