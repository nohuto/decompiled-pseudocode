/*
 * XREFs of ACPIWakeEmulationPrepare @ 0x1400B41C0
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 * Callees:
 *     ACPICreateWakeInterruptRegistrationEntries @ 0x1400B42F0 (ACPICreateWakeInterruptRegistrationEntries.c)
 */

__int64 __fastcall ACPIWakeEmulationPrepare(__int64 a1)
{
  __int64 v1; // rax
  char v3; // si
  _DWORD *v4; // rcx
  int v5; // ecx
  _DWORD *v7; // rbp
  void *v8; // rdi
  int v9; // eax
  __int64 Pool2; // rax
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = *(_DWORD **)(v1 + 680);
  if ( v4 && *v4 == 1 )
  {
    if ( (*(_DWORD *)(v1 + 1120) & 0x100000LL) != 0 )
    {
      v7 = v4 + 3;
      v11 = 1;
      v8 = (void *)(a1 + 152);
      v9 = ACPICreateWakeInterruptRegistrationEntries(v4 + 3, a1, a1 + 152, &v11);
      v5 = v9;
      if ( v9 >= 0 )
        goto LABEL_10;
      if ( v9 != -1073741789 )
        goto LABEL_5;
      Pool2 = ExAllocatePool2(64LL, (unsigned int)(40 * v11), 1349542721LL);
      v8 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v5 = ACPICreateWakeInterruptRegistrationEntries(v7, a1, Pool2, &v11);
      v3 = 1;
      if ( v5 >= 0 )
      {
LABEL_10:
        *(_DWORD *)(a1 + 116) = v11;
        if ( v3 )
          *(_QWORD *)(a1 + 152) = v8;
      }
      else
      {
LABEL_5:
        v5 = -1073741637;
        if ( v8 && v3 )
        {
          ExFreePoolWithTag(v8, 0x50706341u);
          return (unsigned int)-1073741637;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v5;
}
