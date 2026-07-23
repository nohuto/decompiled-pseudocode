/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x1409F75EC
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x14092B3C0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     PsIsThreadInSilo @ 0x1404070DC (PsIsThreadInSilo.c)
 *     PsGetJobSilo @ 0x140407170 (PsGetJobSilo.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsMakeSiloContextPermanent @ 0x1406F9080 (PsMakeSiloContextPermanent.c)
 *     PsRemoveSiloContext @ 0x140772410 (PsRemoveSiloContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     CmSetCallbackObjectContext @ 0x140975570 (CmSetCallbackObjectContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x1409DB944 (CmGetRootKeyObjectForSilo.c)
 *     PsInsertSiloContext @ 0x1409DB9C0 (PsInsertSiloContext.c)
 *     CmInitSiloNamespace @ 0x1409DBA58 (CmInitSiloNamespace.c)
 *     VrpFreeKeyContext @ 0x1409EACB8 (VrpFreeKeyContext.c)
 *     VrpIncrementSiloCount @ 0x1409F792C (VrpIncrementSiloCount.c)
 *     VrpAllocateKeyContext @ 0x1409F7A0C (VrpAllocateKeyContext.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        PVOID a6)
{
  ULONG_PTR *v7; // r12
  _QWORD *v8; // rdi
  UNICODE_STRING *v9; // rsi
  void *RootKeyObjectForSilo; // r15
  __int64 v11; // r14
  int JobSilo; // ebx
  void *v13; // rcx
  char IsThreadInSilo; // al
  PVOID v15; // rcx
  __int64 KeyContext; // rax
  __int128 v17; // xmm0
  __int64 Pool2; // rax
  PVOID PoolWithTag; // rax
  PVOID v20; // rbx
  __int64 Tag; // [rsp+20h] [rbp-40h]
  int v24; // [rsp+A8h] [rbp+48h]
  PVOID Object; // [rsp+B8h] [rbp+58h] BYREF

  a6 = 0LL;
  v7 = a1;
  Object = 0LL;
  v8 = 0LL;
  v24 = 0;
  v9 = 0LL;
  a5 = 0LL;
  RootKeyObjectForSilo = 0LL;
  v11 = 0LL;
  if ( a2 < 8 )
    goto LABEL_33;
  JobSilo = ObCreateObjectEx(0, (_DWORD *)VrpJobContextType, 0, 1u, Tag, 96, 0, 0, &Object, 0LL);
  if ( JobSilo < 0 )
  {
    v8 = Object;
    goto LABEL_37;
  }
  v8 = Object;
  memset_0(Object, 0, 0x60uLL);
  v8[2] = 0LL;
  *((_OWORD *)v8 + 2) = 0LL;
  *((_OWORD *)v8 + 3) = 0LL;
  *((_OWORD *)v8 + 4) = 0LL;
  v8[4] = 0LL;
  v8[8] = 16LL;
  v8[6] = 0LL;
  v8[7] = 0LL;
  v8[9] = 0LL;
  v8[5] = 8LL;
  if ( is_mul_ok(0LL, 8uLL) )
  {
    if ( is_mul_ok(0x20uLL, 8uLL) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x72615452u);
      v20 = PoolWithTag;
      if ( PoolWithTag )
        memset_0(PoolWithTag, 0, 0x100uLL);
      if ( v20 )
      {
        v8[9] = v20;
        JobSilo = 0;
        v8[7] = 32LL;
      }
      else
      {
        JobSilo = -1073741801;
      }
    }
    else
    {
      JobSilo = -1073741675;
    }
    v7 = a1;
  }
  else
  {
    JobSilo = -1073741675;
  }
  if ( JobSilo )
  {
    v13 = (void *)v8[9];
    if ( v13 )
      ExFreePoolWithTag(v13, 0x72615452u);
    *((_OWORD *)v8 + 2) = 0LL;
    *((_OWORD *)v8 + 3) = 0LL;
    *((_OWORD *)v8 + 4) = 0LL;
    goto LABEL_37;
  }
  JobSilo = VrpIncrementSiloCount();
  if ( JobSilo >= 0 )
  {
    *((_DWORD *)v8 + 22) = 1;
    JobSilo = ObpReferenceObjectByHandleWithTag(*v7, 6, (__int64)PsJobType, a3, 0x52566D43u, &a6, 0LL, 0LL);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)a6);
      if ( JobSilo < 0 )
      {
        v11 = a5;
        goto LABEL_37;
      }
      v11 = a5;
      IsThreadInSilo = PsIsThreadInSilo((__int64)KeGetCurrentThread(), a5);
      v8 = Object;
      if ( !IsThreadInSilo )
      {
        v15 = Object;
        *(_OWORD *)Object = *(_OWORD *)(v11 + 1472);
        KeyContext = VrpAllocateKeyContext(v15);
        v9 = (UNICODE_STRING *)KeyContext;
        if ( !KeyContext
          || (v17 = *(_OWORD *)(v11 + 1472),
              *(_WORD *)(KeyContext + 32) = 1,
              *(_OWORD *)KeyContext = v17,
              Pool2 = ExAllocatePool2(0x100uLL, CmRegistryRootName.Length, 0x67655256u),
              (v9[1].Buffer = (wchar_t *)Pool2) == 0LL) )
        {
          JobSilo = -1073741670;
          goto LABEL_24;
        }
        v9[1].Length = 0;
        v9[1].MaximumLength = CmRegistryRootName.Length;
        RtlUnicodeStringCopy(v9 + 1, &CmRegistryRootName);
        JobSilo = CmInitSiloNamespace();
        if ( JobSilo >= 0 )
        {
          JobSilo = PsInsertSiloContext(v11, VrpSiloContextSlot, (__int64)v8);
          if ( JobSilo >= 0 )
          {
            v24 = 1;
            RootKeyObjectForSilo = (void *)CmGetRootKeyObjectForSilo();
            JobSilo = CmSetCallbackObjectContext(RootKeyObjectForSilo, &VrpCallbackCookie, v9, 0LL);
            if ( JobSilo >= 0 )
            {
              v9 = 0LL;
              PsMakeSiloContextPermanent(v11);
              JobSilo = 0;
              goto LABEL_24;
            }
          }
        }
        goto LABEL_37;
      }
LABEL_33:
      JobSilo = -1073741811;
      goto LABEL_24;
    }
  }
LABEL_37:
  if ( v24 )
    PsRemoveSiloContext(v11, (unsigned int)VrpSiloContextSlot, 0LL);
LABEL_24:
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x67655256u);
  if ( RootKeyObjectForSilo )
    ObfDereferenceObject(RootKeyObjectForSilo);
  if ( v9 )
    VrpFreeKeyContext((PVOID *)v9);
  if ( a6 )
    ObfDereferenceObjectWithTag(a6, 0x52566D43u);
  return (unsigned int)JobSilo;
}
