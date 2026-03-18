/*
 * XREFs of ExpPrepareNewSvmDevice @ 0x140658D8C
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14065902C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewSvmDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // r15
  int v9; // eax
  int v10; // ebx
  __int64 Pool2; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  int v20; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  v20 = 0;
  a5 = 0LL;
  *v5 = 0LL;
  v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8), 0LL, 0LL, &a5);
  v10 = v9;
  if ( v9 == -1073741789 )
  {
    if ( !a5 )
      return (unsigned int)-1073741823;
    Pool2 = ExAllocatePool2(0x40uLL);
    v12 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_QWORD *)(Pool2 + 24) = a1;
    *(_DWORD *)(Pool2 + 32) = 1;
    *(_DWORD *)(Pool2 + 36) = 1;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(a3 + 64);
    v13 = *(_QWORD *)(Pool2 + 48);
    *(_QWORD *)(Pool2 + 168) = Pool2 + 192;
    v10 = guard_dispatch_icall_no_overrides(v13, a5, Pool2 + 192, 0LL);
    if ( v10 >= 0 )
    {
      if ( v12[9] )
      {
        v10 = guard_dispatch_icall_no_overrides(v12[6], &v20, v14, v15);
        if ( v10 >= 0 )
        {
          if ( (v20 & 1) != 0
            && (v20 & 2) != 0
            && (v20 & 4) != 0
            && 1 << ((unsigned __int8)v20 >> 3) >= (unsigned int)ExpSvmAgents )
          {
            _InterlockedAdd(&ExTbFlushActive, 1u);
            v10 = guard_dispatch_icall_no_overrides(a2, v12[21], a1, &v20);
            if ( v10 >= 0 )
            {
              v10 = guard_dispatch_icall_no_overrides(v12[6], &v20, ExAtsSvmDevicePowerCallback, v12[22]);
              if ( v10 >= 0 )
              {
                guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8), v16, v14, v15);
                v17 = ExpAtsSvmDevices;
                if ( *((PVOID **)ExpAtsSvmDevices + 1) != &ExpAtsSvmDevices )
                  __fastfail(3u);
                *v12 = ExpAtsSvmDevices;
                v12[1] = &ExpAtsSvmDevices;
                v17[1] = v12;
                ExpAtsSvmDevices = v12;
                *v5 = v12;
                return (unsigned int)v10;
              }
            }
            else
            {
              _InterlockedDecrement(&ExTbFlushActive);
            }
          }
          else
          {
            v10 = -1073741585;
          }
        }
      }
      else
      {
        v10 = -1073741637;
      }
    }
    v18 = v12[22];
    if ( v18 )
    {
      guard_dispatch_icall_no_overrides(a2, v18, v14, v15);
      _InterlockedDecrement(&ExTbFlushActive);
    }
    ExFreePoolWithTag(v12, 0);
    return (unsigned int)v10;
  }
  if ( v9 >= 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v10;
}
