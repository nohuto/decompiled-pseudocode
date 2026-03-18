/*
 * XREFs of PipIommuRetrieveDeviceId @ 0x1407360B8
 * Callers:
 *     PiIommuAllocateExtension @ 0x140735DB4 (PiIommuAllocateExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IidValidateDeviceId @ 0x140817144 (IidValidateDeviceId.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipIommuRetrieveDeviceId(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  void *Pool2; // rdi
  int v5; // ebx
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  Pool2 = 0LL;
  if ( *(_QWORD *)(BugCheckParameter2 + 64) )
  {
    if ( (unsigned int)guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter2 + 8), 0LL, 0LL, &v8) == -1073741789
      && v8 )
    {
      Pool2 = (void *)ExAllocatePool2(0x40uLL);
      if ( Pool2 )
      {
        v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter2 + 8), v8, Pool2, 0LL);
        if ( v5 < 0 )
        {
          ExFreePoolWithTag(Pool2, 0x64706E50u);
          Pool2 = 0LL;
        }
        else
        {
          v6 = IidValidateDeviceId(Pool2, v8);
          if ( v6 < 0 )
            KeBugCheckEx(0xCAu, 0x12uLL, BugCheckParameter2, (ULONG_PTR)Pool2, v6);
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  result = (unsigned int)v5;
  *a2 = Pool2;
  return result;
}
