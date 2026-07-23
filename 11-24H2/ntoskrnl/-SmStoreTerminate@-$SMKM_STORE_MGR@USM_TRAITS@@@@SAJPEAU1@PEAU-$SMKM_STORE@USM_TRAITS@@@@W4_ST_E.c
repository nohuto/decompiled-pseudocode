/*
 * XREFs of ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14060D184
 * Callers:
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x1406098F8 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     SmKmStoreReference @ 0x1402F6020 (SmKmStoreReference.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // edx

  v8 = 0;
  v9 = SmAllocEx(0x40uLL, 0x6D546D73u, -1);
  if ( v9 )
  {
    if ( SmKmStoreReference(a1, *(_DWORD *)(a2 + 6832)) )
    {
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_QWORD *)(v9 + 56) = 0LL;
      *(_QWORD *)(v9 + 16) = SmKmStoreTerminateWorker;
      *(_QWORD *)(v9 + 24) = v9;
      *(_QWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 40) = a2 + 7024;
      *(_QWORD *)(v9 + 32) = a1;
      *(_DWORD *)(v9 + 48) = *(_DWORD *)(a2 + 6832);
      v10 = *(_DWORD *)(a1 + 2000) & 1;
      *(_DWORD *)(v9 + 56) = a3;
      *(_DWORD *)(v9 + 52) = v10;
      *(_DWORD *)(v9 + 60) = a4;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v9, CriticalWorkQueue);
    }
    else
    {
      v8 = -1073741431;
      ExFreePoolWithTag((PVOID)v9, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
