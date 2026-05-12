/*
 * XREFs of FreeNvmeIceEntry @ 0x1400695BC
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     AddNvmeIceInterfaceToList @ 0x140069104 (AddNvmeIceInterfaceToList.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x14006ABFC (RemoveNvmeIceInterfaceFromList.c)
 *     FreeNvmeIceList @ 0x140183948 (FreeNvmeIceList.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall FreeNvmeIceEntry(PVOID P)
{
  __int64 i; // r14
  __int64 v3; // rbp
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int16 *v5; // rdi
  void *v6; // rcx
  int v7; // eax
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  if ( *((_QWORD *)P + 9) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 14); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)P + 9);
      IsEnabledDeviceUsageNoInline = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
      v5 = *(unsigned __int16 **)(v3 + 72 * i + 48);
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( v5 )
        {
          memset(v5, 0, *(unsigned int *)(v3 + 72 * i + 40));
          v6 = *(void **)(v3 + 72 * i + 48);
          if ( v6 )
          {
            ExFreePoolWithTag(v6, 0x72436152u);
            *(_QWORD *)(v3 + 72 * i + 48) = 0LL;
          }
        }
        *(_DWORD *)(v3 + 72 * i + 40) = 0;
      }
      else if ( v5 )
      {
        memset(v5 + 8, 0, v5[2]);
        KeSweepLocalCaches();
        ExFreePoolWithTag(*(PVOID *)(v3 + 72 * i + 48), 0x72436152u);
        *(_QWORD *)(v3 + 72 * i + 48) = 0LL;
      }
    }
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      KeSweepLocalCaches();
    ExFreePoolWithTag(*((PVOID *)P + 9), 0x72436152u);
    *((_QWORD *)P + 9) = 0LL;
  }
  v7 = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
  v8 = (void *)*((_QWORD *)P + 4);
  if ( !v7 )
  {
    ExFreePoolWithTag(v8, 0x53446152u);
    v9 = (void *)*((_QWORD *)P + 5);
LABEL_23:
    ExFreePoolWithTag(v9, 0x72436152u);
    goto LABEL_24;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x53446152u);
  v10 = (void *)*((_QWORD *)P + 6);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x72436152u);
  v11 = (void *)*((_QWORD *)P + 5);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72436152u);
  v9 = (void *)*((_QWORD *)P + 13);
  if ( v9 )
    goto LABEL_23;
LABEL_24:
  ExFreePoolWithTag(P, 0x72436152u);
}
