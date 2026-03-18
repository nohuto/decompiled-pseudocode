/*
 * XREFs of SepRmDispatchDataToLsa @ 0x140349EEC
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     SepRmCallLsa @ 0x14034A120 (SepRmCallLsa.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1406A67D0 (ZwFreeVirtualMemory.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A75D0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14079516C (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  __int64 v2; // rcx
  void *ServerSiloGlobals; // r14
  int v5; // eax
  unsigned int v6; // ebx
  void *v7; // rcx
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // esi
  __int64 v14; // rcx
  size_t v15; // r8
  int v16; // eax
  void *v17; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID BaseAddress[58]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[40]; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v25; // [rsp+278h] [rbp+178h]
  char Src[468]; // [rsp+27Ch] [rbp+17Ch] BYREF

  memset_0(&v22, 0, 0x1D4uLL);
  memset_0(v24, 0, 0x200uLL);
  v2 = *(_QWORD *)(a1 + 56);
  RegionSize = 0LL;
  v17 = 0LL;
  ServerSiloGlobals = PsGetServerSiloGlobals(v2);
  if ( !*((_QWORD *)ServerSiloGlobals + 99) )
    return 0LL;
  v8 = *(_DWORD *)(a1 + 16);
  v20 = 0LL;
  v9 = *(_WORD *)(a1 + 36) + 48;
  memset(v19, 0, sizeof(v19));
  WORD1(v19[0]) = v9;
  LOWORD(v19[0]) = v9 - 40;
  v21 = *(_DWORD *)(a1 + 32);
  v10 = v8 - 1;
  if ( v10 )
  {
    v11 = v10 - 3;
    if ( v11 && (unsigned int)(v11 - 1) >= 2 )
      return (unsigned int)-1073741811;
    v15 = *(unsigned int *)(a1 + 36);
    v13 = 1;
    if ( (unsigned int)v15 > 0x1D0 )
    {
      v16 = SepAdtCopyToLsaSharedMemory(*((HANDLE *)ServerSiloGlobals + 98));
      v6 = v16;
      if ( v16 < 0 )
      {
        SepAuditFailed((unsigned int)v16);
        return v6;
      }
      BaseAddress[0] = v17;
      v22 = 3;
      LODWORD(v19[0]) = 3670032;
    }
    else
    {
      memmove(BaseAddress, *(const void **)(a1 + 24), v15);
      v22 = 1;
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 4) <= 1 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
LABEL_17:
    if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
      v13 = 0;
    v14 = *((_QWORD *)ServerSiloGlobals + 99);
    if ( v13 )
      v5 = ZwAlpcSendWaitReceivePort(v14, 0x10000LL, v19, 0LL, 0LL, 0LL, 0LL, 0LL, v17);
    else
      v5 = ZwAlpcSendWaitReceivePort(v14, 0x20000LL, v19, 0LL, v24, &v17, 0LL, 0LL, 512LL);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = *(void **)(a1 + 40);
      if ( v7 )
        memmove(v7, Src, *(unsigned int *)(a1 + 48));
      v6 = v25;
    }
    if ( v22 == 3 )
      return (unsigned int)ZwFreeVirtualMemory(*((HANDLE *)ServerSiloGlobals + 98), BaseAddress, &RegionSize, 0x8000u);
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
