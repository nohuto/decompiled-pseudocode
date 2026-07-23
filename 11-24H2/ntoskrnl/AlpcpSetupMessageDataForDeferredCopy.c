/*
 * XREFs of AlpcpSetupMessageDataForDeferredCopy @ 0x140892140
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x14089137C (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpChargePagedPoolQuota @ 0x140892384 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408923C8 (AlpcpReleasePagedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpSetupMessageDataForDeferredCopy(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int16 a4,
        char a5,
        char a6)
{
  unsigned int v6; // ebp
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  void *v12; // rcx
  __int64 v14; // r14
  void *v15; // rcx
  ULONG_PTR v16; // rbx
  __int64 Pool2; // rax
  __int64 v18; // rcx
  ULONG_PTR v19; // rcx
  ULONG_PTR v20; // rdx
  int v21; // ebx
  __int64 v22; // rcx

  v6 = 0;
  if ( !a5 )
  {
    if ( (a3 & 0xC0000000) == 0x80000000 )
      a2 += 24LL;
    else
      a2 += 40LL;
  }
  v8 = a4;
  if ( a6 && (unsigned __int64)a4 + a2 > 0x7FFFFFFF0000LL )
    return 3221225477LL;
  v9 = *(_QWORD *)(a1 + 96);
  v10 = 512LL;
  *(_QWORD *)(a1 + 176) = a2;
  if ( v9 )
    v11 = *(_QWORD *)(v9 + 32) - 40LL;
  else
    v11 = 512LL;
  if ( a4 > v11 )
  {
    if ( v9 )
      v10 = *(_QWORD *)(v9 + 32) - 40LL;
    if ( a4 > v10 )
    {
      if ( a4 > 0xFFD7uLL )
      {
        return (unsigned int)-2147483643;
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 232);
        if ( a4 > v14 + v10 )
        {
          v15 = *(void **)(a1 + 224);
          if ( v15 )
          {
            ExFreePoolWithTag(v15, 0x42456C41u);
            *(_QWORD *)(a1 + 232) = 0LL;
          }
          v16 = v8 - v10;
          Pool2 = ExAllocatePool2(0x100uLL, v16, 0x42456C41u);
          v18 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)(a1 + 224) = Pool2;
          if ( Pool2 )
          {
            *(_QWORD *)(a1 + 232) = v16;
            if ( v18 )
            {
              v21 = AlpcpChargePagedPoolQuota(v18, v16 - v14);
              if ( v21 < 0 )
              {
                ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
                v22 = *(_QWORD *)(a1 + 48);
                *(_QWORD *)(a1 + 224) = 0LL;
                *(_QWORD *)(a1 + 232) = 0LL;
                AlpcpReleasePagedPoolQuota(v22, v14);
                return (unsigned int)v21;
              }
            }
          }
          else
          {
            if ( v18 )
              AlpcpReleasePagedPoolQuota(v18, v14);
            return (unsigned int)-1073741670;
          }
        }
      }
    }
    else
    {
      v12 = *(void **)(a1 + 224);
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0x42456C41u);
        v19 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 224) = 0LL;
        if ( v19 )
        {
          v20 = *(_QWORD *)(a1 + 232);
          if ( v20 + *(_QWORD *)(v19 + 1432) >= 0x1000 )
            PsReturnProcessPagedPoolQuota(v19, v20);
          else
            _InterlockedAdd64((volatile signed __int64 *)(v19 + 1432), v20);
        }
        *(_QWORD *)(a1 + 232) = 0LL;
      }
    }
  }
  return v6;
}
