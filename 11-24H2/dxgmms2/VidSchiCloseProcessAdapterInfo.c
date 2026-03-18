/*
 * XREFs of VidSchiCloseProcessAdapterInfo @ 0x1400D4D54
 * Callers:
 *     VidSchTerminateDevice @ 0x1400D48E0 (VidSchTerminateDevice.c)
 * Callees:
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x140041428 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall VidSchiCloseProcessAdapterInfo(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  _DWORD *v6; // rdx
  __int64 i; // rbp
  __int64 j; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  PVOID *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rcx

  v2 = a2[1];
  v3 = a1 + 2664;
  ExAcquirePushLockExclusiveEx(a1 + 2664, 0LL);
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2);
  --*v6;
  if ( !**(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2) )
  {
    for ( i = 0LL; (unsigned int)i < a2[10]; i = (unsigned int)(i + 1) )
    {
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8 * i + 88), 0);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8 * i + 88) = 0LL;
    }
    for ( j = 0LL; (unsigned int)j < a2[20]; *v18 = 0LL )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
      v11 = *(_QWORD *)(v10 + 8);
      v12 = *(_DWORD *)(v10 + 80);
      v13 = v11 + 8 * j;
      if ( (unsigned int)j >= v12 )
        v13 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v13 + 216LL) )
      {
        v14 = v11 + 8 * j;
        if ( (unsigned int)j >= v12 )
          v14 = v11;
        PcwCloseInstance(*(PPCW_INSTANCE *)(*(_QWORD *)v14 + 216LL));
      }
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
      v16 = (PVOID *)(*(_QWORD *)(v15 + 8) + 8 * j);
      if ( (unsigned int)j >= *(_DWORD *)(v15 + 80) )
        v16 = *(PVOID **)(v15 + 8);
      ExFreePoolWithTag(*v16, 0);
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
      v18 = (_QWORD *)(*(_QWORD *)(v17 + 8) + 8 * j);
      if ( (unsigned int)j >= *(_DWORD *)(v17 + 80) )
        v18 = *(_QWORD **)(v17 + 8);
      j = (unsigned int)(j + 1);
    }
    VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(*(VIDSCH_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(a1 + 32)
                                                                                              + 8 * v2));
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 32) + 8 * v2), 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) = 0LL;
  }
  return ExReleasePushLockExclusiveEx(v3, 0LL);
}
