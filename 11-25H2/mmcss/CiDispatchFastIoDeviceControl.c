/*
 * XREFs of CiDispatchFastIoDeviceControl @ 0x1C000C960
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0001800 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerTaskIndexYield @ 0x1C0003320 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerSetMultimediaMode @ 0x1C0004244 (CiSchedulerSetMultimediaMode.c)
 *     WPP_SF_dd @ 0x1C00049A4 (WPP_SF_dd.c)
 *     CiSchedulerQueryTaskIndexDebugInformation @ 0x1C0004C58 (CiSchedulerQueryTaskIndexDebugInformation.c)
 *     memmove @ 0x1C0005000 (memmove.c)
 *     CiIsTestSigningEnabled @ 0x1C000C3B0 (CiIsTestSigningEnabled.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000CC90 (CiCreateTaskIndexClientFromThread.c)
 *     CiThreadSetRelativePriority @ 0x1C000D620 (CiThreadSetRelativePriority.c)
 */

char __fastcall CiDispatchFastIoDeviceControl(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        _DWORD *Address,
        unsigned int Length,
        unsigned int a7,
        __int64 a8)
{
  size_t v8; // r12
  ULONG v10; // ebx
  int TaskIndexClientFromThread; // esi
  __int64 v12; // rdi
  __int64 v13; // r13
  _DWORD *v14; // r14
  __int64 v15; // r8
  _QWORD v17[7]; // [rsp+30h] [rbp-38h] BYREF

  v8 = a4;
  v10 = 0;
  v17[0] = 0LL;
  TaskIndexClientFromThread = -1073741811;
  KeEnterCriticalRegion();
  v12 = (a7 >> 2) & 0x7FF;
  if ( (unsigned int)v12 < 9 && (a7 & 0xFFFFE003) == 0x222003 )
  {
    v13 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)v13 == CiApiTypeTable[v12]
      && (_DWORD)v8 == CiApiBufferSizeTable[2 * v12]
      && Length == dword_1C00085E4[2 * v12] )
    {
      if ( ExGetPreviousMode() )
      {
        if ( (_DWORD)v8 )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          memmove(v17, a3, (unsigned int)v8);
          v10 = v17[0];
        }
        v14 = Address;
        if ( Length )
          ProbeForWrite(Address, Length, 4u);
      }
      else
      {
        if ( (_DWORD)v8 )
        {
          memmove(v17, a3, v8);
          v10 = v17[0];
        }
        v14 = Address;
      }
      if ( (_DWORD)v12 == 5 )
      {
        TaskIndexClientFromThread = 0;
        CiSchedulerTaskIndexYield(v13, v10, HIDWORD(v17[0]));
      }
      else if ( (_DWORD)v12 == 3 )
      {
        TaskIndexClientFromThread = CiCreateTaskIndexClientFromThread(v13, v14);
      }
      else
      {
        switch ( (int)v12 )
        {
          case 0:
            TaskIndexClientFromThread = CiThreadSetRelativePriority(v13, (unsigned __int8)v10);
            break;
          case 1:
            TaskIndexClientFromThread = 0;
            *v14 = CiSystemResponsiveness;
            break;
          case 2:
            if ( *(_QWORD *)(v13 + 80) == PsGetCurrentProcess() )
              goto LABEL_28;
            break;
          case 3:
          case 5:
            TaskIndexClientFromThread = -1073741808;
            break;
          case 4:
            TaskIndexClientFromThread = 0;
            LODWORD(v17[0]) = 0;
            *v14 = *(_DWORD *)(v13 + 144);
            break;
          case 6:
            TaskIndexClientFromThread = 0;
            CiSchedulerCancelTaskIndexYield(v13);
            break;
          case 7:
            TaskIndexClientFromThread = CiSchedulerSetMultimediaMode(v13, v10);
            break;
          case 8:
            LODWORD(v17[0]) = 0;
            if ( (unsigned int)CiIsTestSigningEnabled() )
            {
              CiSchedulerQueryTaskIndexDebugInformation(v13, v17);
              *v14 = v17[0];
LABEL_28:
              TaskIndexClientFromThread = 0;
            }
            else
            {
              TaskIndexClientFromThread = -1073741790;
            }
            break;
          default:
            break;
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  if ( TaskIndexClientFromThread < 0
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0x12u, v15, v12, TaskIndexClientFromThread);
  }
  *(_DWORD *)a8 = TaskIndexClientFromThread;
  *(_QWORD *)(a8 + 8) = 0LL;
  return 1;
}
