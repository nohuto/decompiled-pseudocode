/*
 * XREFs of SepRmDispatchDataToLsa @ 0x1403D831C
 * Callers:
 *     SepAdtLogAuditRecord @ 0x1403D67CC (SepAdtLogAuditRecord.c)
 *     SepRmCallLsa @ 0x1403D8550 (SepRmCallLsa.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14069B500 (ZwFreeVirtualMemory.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14069C300 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140785D9C (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  __int64 v2; // rcx
  void *ServerSiloGlobals; // r14
  __int64 v5; // rdx
  int v6; // ebx
  void *v7; // rcx
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // esi
  size_t v14; // r8
  int v15; // eax
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h]
  __int128 v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID BaseAddress[58]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[40]; // [rsp+250h] [rbp+150h] BYREF
  int v24; // [rsp+278h] [rbp+178h]
  _BYTE Src[468]; // [rsp+27Ch] [rbp+17Ch] BYREF

  memset_0(&v21, 0, 0x1D4uLL);
  memset_0(v23, 0, 0x200uLL);
  v2 = *(_QWORD *)(a1 + 56);
  RegionSize = 0LL;
  ServerSiloGlobals = PsGetServerSiloGlobals(v2);
  if ( !*((_QWORD *)ServerSiloGlobals + 99) )
    return 0LL;
  v8 = *(_DWORD *)(a1 + 16);
  v19 = 0LL;
  v9 = *(_WORD *)(a1 + 36) + 48;
  v17 = 0LL;
  WORD1(v17) = v9;
  LOWORD(v17) = v9 - 40;
  v20 = *(_DWORD *)(a1 + 32);
  v18 = 0LL;
  v10 = v8 - 1;
  if ( v10 )
  {
    v11 = v10 - 3;
    if ( v11 && (unsigned int)(v11 - 1) >= 2 )
      return (unsigned int)-1073741811;
    v14 = *(unsigned int *)(a1 + 36);
    v13 = 1;
    if ( (unsigned int)v14 > 0x1D0 )
    {
      v15 = SepAdtCopyToLsaSharedMemory(*((HANDLE *)ServerSiloGlobals + 98));
      v6 = v15;
      if ( v15 < 0 )
      {
        SepAuditFailed((unsigned int)v15);
        return (unsigned int)v6;
      }
      BaseAddress[0] = 0LL;
      v21 = 3;
      LODWORD(v17) = 3670032;
    }
    else
    {
      memmove(BaseAddress, *(const void **)(a1 + 24), v14);
      v21 = 1;
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 4) <= 1 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
LABEL_17:
    if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
      v13 = 0;
    if ( v13 )
      v5 = 0x10000LL;
    else
      v5 = 0x20000LL;
    v6 = ZwAlpcSendWaitReceivePort(*((_QWORD *)ServerSiloGlobals + 99), v5);
    if ( v6 >= 0 )
    {
      v7 = *(void **)(a1 + 40);
      if ( v7 )
        memmove(v7, Src, *(unsigned int *)(a1 + 48));
      v6 = v24;
    }
    if ( v21 == 3 )
      return (unsigned int)ZwFreeVirtualMemory(*((HANDLE *)ServerSiloGlobals + 98), BaseAddress, &RegionSize, 0x8000u);
    return (unsigned int)v6;
  }
  v12 = *(_DWORD *)(a1 + 36);
  v13 = 1;
  v21 = 1;
  if ( v12 <= 0x1D0 )
  {
    memmove(BaseAddress, (const void *)(a1 + 24), v12);
    goto LABEL_17;
  }
  return (unsigned int)-1073741811;
}
