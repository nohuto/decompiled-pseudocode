/*
 * XREFs of SepRmDispatchDataToLsa @ 0x1403C1B1C
 * Callers:
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1406A7770 (ZwFreeVirtualMemory.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A8570 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14079527C (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  __int64 v2; // rcx
  __int64 ServerSiloGlobals; // r14
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  void *v7; // rcx
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // esi
  void *v14; // rcx
  SIZE_T v15; // r8
  void *v16; // rdx
  int v17; // eax
  ULONG_PTR v18; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  _PORT_MESSAGE SendMessageA; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID BaseAddress[58]; // [rsp+80h] [rbp-80h] BYREF
  _PORT_MESSAGE v24; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v25; // [rsp+278h] [rbp+178h]
  char Src[468]; // [rsp+27Ch] [rbp+17Ch] BYREF

  memset_0(&v22, 0, 0x1D4uLL);
  memset_0(&v24, 0, 0x200uLL);
  v2 = *(_QWORD *)(a1 + 56);
  RegionSize = 0LL;
  v18 = 0LL;
  ServerSiloGlobals = PsGetServerSiloGlobals(v2);
  if ( !*(_QWORD *)(ServerSiloGlobals + 792) )
    return 0LL;
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_WORD *)(a1 + 36) + 48;
  memset(&SendMessageA, 0, sizeof(SendMessageA));
  SendMessageA.u1.s1.TotalLength = v9;
  SendMessageA.u1.s1.DataLength = v9 - 40;
  v21 = *(_DWORD *)(a1 + 32);
  v10 = v8 - 1;
  if ( v10 )
  {
    v11 = v10 - 3;
    if ( v11 && (unsigned int)(v11 - 1) >= 2 )
      return (unsigned int)-1073741811;
    v15 = *(unsigned int *)(a1 + 36);
    v13 = 1;
    v16 = *(void **)(a1 + 24);
    if ( (unsigned int)v15 > 0x1D0 )
    {
      v17 = SepAdtCopyToLsaSharedMemory(*(HANDLE *)(ServerSiloGlobals + 784), v16, v15);
      v6 = v17;
      if ( v17 < 0 )
      {
        SepAuditFailed((unsigned int)v17);
        return v6;
      }
      BaseAddress[0] = (PVOID)v18;
      v22 = 3;
      SendMessageA.u1.Length = 3670032;
    }
    else
    {
      memmove(BaseAddress, v16, v15);
      v22 = 1;
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 4) <= 1 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
LABEL_17:
    if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
      v13 = 0;
    v14 = *(void **)(ServerSiloGlobals + 792);
    if ( v13 )
    {
      v5 = ZwAlpcSendWaitReceivePort(v14, 0x10000u, &SendMessageA, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v18 = 512LL;
      v5 = ZwAlpcSendWaitReceivePort(v14, 0x20000u, &SendMessageA, 0LL, &v24, &v18, 0LL, 0LL);
    }
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = *(void **)(a1 + 40);
      if ( v7 )
        memmove(v7, Src, *(unsigned int *)(a1 + 48));
      v6 = v25;
    }
    if ( v22 == 3 )
      return (unsigned int)ZwFreeVirtualMemory(*(HANDLE *)(ServerSiloGlobals + 784), BaseAddress, &RegionSize, 0x8000u);
    return v6;
  }
  v12 = *(_DWORD *)(a1 + 36);
  v13 = 1;
  v22 = 1;
  if ( v12 <= 0x1D0 )
  {
    memmove(BaseAddress, (const void *)(a1 + 24), v12);
    goto LABEL_17;
  }
  return (unsigned int)-1073741811;
}
