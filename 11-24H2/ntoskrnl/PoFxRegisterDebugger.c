/*
 * XREFs of PoFxRegisterDebugger @ 0x140C33028
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PoFxActivateComponent @ 0x1403B6160 (PoFxActivateComponent.c)
 *     RtlStringCbPrintfW @ 0x14040BC90 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     PoFxStartDevicePowerManagement @ 0x1404AB730 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PoFxRegisterCoreDevice @ 0x14074D5D0 (PoFxRegisterCoreDevice.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void PoFxRegisterDebugger()
{
  wchar_t *v0; // r14
  unsigned int v1; // ebx
  _DWORD *Pool2; // rdi
  unsigned int v3; // r12d
  _DWORD *v4; // rbx
  int v5; // r15d
  int v6; // ecx
  ULONG_PTR v7; // rsi
  wchar_t *v8; // rax
  wchar_t *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // rsi
  int v13; // ecx
  __int64 v14; // [rsp+28h] [rbp-E0h]
  __int64 v15; // [rsp+30h] [rbp-D8h]
  __int64 v16; // [rsp+38h] [rbp-D0h]
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h] BYREF
  __int64 DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v21[6]; // [rsp+78h] [rbp-90h] BYREF
  __int64 (__fastcall *v22)(__int64, __int64, char); // [rsp+90h] [rbp-78h]
  int v23; // [rsp+B8h] [rbp-50h]
  __int128 *v24; // [rsp+C0h] [rbp-48h]
  __int128 v25; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-30h]
  wchar_t pszDest[24]; // [rsp+E0h] [rbp-28h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  memset_0(v21, 0, 0x50uLL);
  BugCheckParameter2 = 0LL;
  LODWORD(v17) = 0;
  v0 = 0LL;
  DestinationString_8 = 0LL;
  if ( (unsigned int)guard_dispatch_icall_no_overrides(33LL, 0LL, 0LL, &v17) == -2147483643 )
  {
    v1 = v17;
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, (unsigned int)v17, 0x4D584650uLL);
    if ( Pool2 )
    {
      if ( (int)guard_dispatch_icall_no_overrides(33LL, v1, Pool2, &v17) >= 0 && (unsigned int)v17 <= v1 )
      {
        v3 = 0;
        v4 = Pool2 + 1;
        v5 = 0;
        if ( *Pool2 )
        {
          while ( 1 )
          {
            v4 = (_DWORD *)((char *)v4 + v3);
            v3 = v4[1];
            if ( *v4 == 1 )
            {
              v6 = v4[2];
              if ( v6 )
                break;
            }
            if ( !*v4 )
            {
              LODWORD(v16) = (v4[4] >> 5) & 7;
              LODWORD(v15) = v4[4] & 0x1F;
              LODWORD(v14) = v4[3];
              RtlStringCbPrintfW(
                pszDest,
                0x30uLL,
                L"PCI_DEBUG_%04X_%02X_%02X_%02X",
                *((unsigned __int16 *)v4 + 4),
                v14,
                v15,
                v16);
              v9 = pszDest;
LABEL_14:
              RtlInitUnicodeString(&DestinationString_8, v9);
              v26 = 0LL;
              v25 = 0LL;
              memset_0(v21, 0, 0x50uLL);
              v21[0] = 1;
              v24 = &v25;
              v21[1] = 1;
              v22 = PopFxDebuggerPowerCriticalTransitionCallback;
              v23 = 1;
              if ( (int)PoFxRegisterCoreDevice((__int64)&DestinationString_8, (__int64)v21, &BugCheckParameter2) < 0 )
                goto LABEL_19;
              v12 = BugCheckParameter2;
              v13 = *(_DWORD *)(BugCheckParameter2 + 864) | 2;
              DestinationString = 0LL;
              *(_DWORD *)(BugCheckParameter2 + 864) = v13;
              if ( *(_QWORD *)(v12 + 64) )
              {
                DestinationString = *(_QWORD *)(v12 + 72);
                guard_dispatch_icall_no_overrides(21LL, &DestinationString, v10, v11);
              }
              PoFxActivateComponent(v12, 0LL, 1);
              PoFxStartDevicePowerManagement(v12);
            }
            if ( (unsigned int)++v5 >= *Pool2 )
              goto LABEL_19;
          }
          if ( KeGetCurrentPrcb()->CpuVendor == 2 )
          {
            v7 = (unsigned int)(2 * v6 + 22);
            v8 = (wchar_t *)ExAllocatePool2(0x40uLL, v7, 0x4D584650uLL);
            v0 = v8;
            if ( !v8 )
              goto LABEL_19;
            RtlStringCbPrintfW(v8, (unsigned int)v7, L"ACPI\\DEBUG%ws", v4 + 3);
            v9 = v0;
          }
          else
          {
            v9 = (wchar_t *)(v4 + 3);
          }
          goto LABEL_14;
        }
      }
LABEL_19:
      ExFreePoolWithTag(Pool2, 0x4D584650u);
      if ( v0 )
        ExFreePoolWithTag(v0, 0x4D584650u);
    }
  }
}
