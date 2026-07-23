/*
 * XREFs of PiQueryDeviceRelations @ 0x140A3435C
 * Callers:
 *     PiControlQueryDeviceRelations @ 0x140A341F0 (PiControlQueryDeviceRelations.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpQueryDeviceRelations @ 0x1408B8FB8 (PnpQueryDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryDeviceRelations(__int64 a1, int a2, unsigned int *a3, _WORD *a4)
{
  unsigned int v7; // ebx
  unsigned int v8; // esi
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rax
  unsigned int v15; // ebp
  void *v16; // r13
  __int64 v17; // r14
  _QWORD *v18; // rax
  unsigned int v19; // edi
  unsigned int *Pool2; // rax
  _DWORD *v21; // r8
  __int64 **v22; // r14
  __int64 v23; // rdx
  __int64 v25; // rdx
  unsigned __int16 *v26; // rdi
  int v27; // r9d
  _WORD *v28; // r15
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v30; // [rsp+28h] [rbp-30h]
  int DeviceRelations; // [rsp+68h] [rbp+10h]

  P = 0LL;
  v7 = 0;
  DeviceRelations = 0;
  v8 = 0;
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            return 3221225485LL;
          v12 = 6;
        }
        else
        {
          v12 = 0;
        }
      }
      else
      {
        v12 = 2;
      }
    }
    else
    {
      v12 = 3;
    }
  }
  else
  {
    v12 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  v14 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v15 = 0;
  v30 = v14;
  v16 = v14;
  if ( v14 )
  {
    v17 = *(_QWORD *)(v14[39] + 40LL);
    if ( (unsigned int)(*(_DWORD *)(v17 + 300) - 789) > 1 )
    {
      if ( v12 )
      {
        DeviceRelations = PnpQueryDeviceRelations((__int64)v14, v12, 0LL, (__int64)&P);
        v7 = DeviceRelations;
        if ( DeviceRelations < 0 )
        {
          v21 = 0LL;
          P = 0LL;
          goto LABEL_18;
        }
      }
      else
      {
        v18 = *(_QWORD **)(v17 + 8);
        v19 = 0;
        while ( v18 )
        {
          v18 = (_QWORD *)*v18;
          ++v19;
        }
        Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, 8LL * v19 + 16, 0x20207050u);
        P = Pool2;
        v21 = Pool2;
        if ( !Pool2 )
        {
          v7 = -1073741670;
          DeviceRelations = -1073741670;
          goto LABEL_18;
        }
        *Pool2 = v19;
        v22 = *(__int64 ***)(v17 + 8);
        if ( v22 )
        {
          do
          {
            if ( v15 >= v19 )
              break;
            ObfReferenceObjectWithTag(v22[4], 0x43706E50u);
            v23 = v15++;
            *((_QWORD *)P + v23 + 1) = v22[4];
            v22 = (__int64 **)*v22;
          }
          while ( v22 );
          v15 = 0;
        }
      }
      v21 = P;
LABEL_18:
      if ( v21 && *v21 )
      {
        v8 = 2;
        do
        {
          v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v21[2 * v15 + 2] + 312LL) + 40LL);
          if ( v25 )
          {
            v26 = (unsigned __int16 *)(v25 + 40);
            if ( v25 != -40 )
            {
              v27 = *v26;
              if ( (unsigned __int16)v27 >= 2u )
              {
                if ( a4 && *a3 >= (unsigned __int64)(v8 + v27) + 2 )
                {
                  memmove(a4, *(const void **)(v25 + 48), *v26);
                  v28 = &a4[(unsigned __int64)*v26 >> 1];
                  *v28 = 0;
                  a4 = v28 + 1;
                  v21 = P;
                }
                v8 += *v26 + 2;
              }
            }
          }
          ObfDereferenceObjectWithTag(*(PVOID *)&v21[2 * v15 + 2], 0x43706E50u);
          v21 = P;
          ++v15;
        }
        while ( v15 < *(_DWORD *)P );
        v7 = DeviceRelations;
        v16 = v30;
        if ( a4 && *a3 >= 2 )
          *a4 = 0;
        if ( *a3 < v8 )
          v7 = -1073741789;
      }
      goto LABEL_19;
    }
  }
  v7 = -1073741810;
LABEL_19:
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
    v8 = 0;
  *a3 = v8;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x43706E50u);
  return v7;
}
