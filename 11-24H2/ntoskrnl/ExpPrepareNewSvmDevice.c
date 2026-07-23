/*
 * XREFs of ExpPrepareNewSvmDevice @ 0x14065742C
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406576CC (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewSvmDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // r15
  int v9; // eax
  int v10; // ebx
  __int64 Pool2; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  v18 = 0;
  a5 = 0LL;
  *v5 = 0LL;
  v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8), 0LL);
  v10 = v9;
  if ( v9 == -1073741789 )
  {
    if ( !a5 )
      return (unsigned int)-1073741823;
    Pool2 = ExAllocatePool2(0x40uLL, (ULONG_PTR)(a5 + 24), 0x65447845u);
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
    v10 = guard_dispatch_icall_no_overrides(v13, a5);
    if ( v10 >= 0 )
    {
      if ( v12[9] )
      {
        v10 = guard_dispatch_icall_no_overrides(v12[6], &v18);
        if ( v10 >= 0 )
        {
          if ( (v18 & 1) != 0
            && (v18 & 2) != 0
            && (v18 & 4) != 0
            && 1 << ((unsigned __int8)v18 >> 3) >= (unsigned int)ExpSvmAgents )
          {
            _InterlockedAdd(&ExTbFlushActive, 1u);
            v10 = guard_dispatch_icall_no_overrides(a2, v12[21]);
            if ( v10 >= 0 )
            {
              v10 = guard_dispatch_icall_no_overrides(v12[6], &v18);
              if ( v10 >= 0 )
              {
                guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8), v14);
                v15 = ExpAtsSvmDevices;
                if ( *((PVOID **)ExpAtsSvmDevices + 1) != &ExpAtsSvmDevices )
                  __fastfail(3u);
                *v12 = ExpAtsSvmDevices;
                v12[1] = &ExpAtsSvmDevices;
                v15[1] = v12;
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
    v16 = v12[22];
    if ( v16 )
    {
      guard_dispatch_icall_no_overrides(a2, v16);
      _InterlockedDecrement(&ExTbFlushActive);
    }
    ExFreePoolWithTag(v12, 0);
    return (unsigned int)v10;
  }
  if ( v9 >= 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v10;
}
