/*
 * XREFs of HMRemoveHandleForObject @ 0x1C00B3CF0
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD390 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD480 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C01E2C00 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C004F94C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C005CCDC (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C00B3E1C (HMRemoveHandleForObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C00B3ED0 (EtwTraceUserDestroyHandle.c)
 *     HMCleanupGrantedHandle @ 0x1C012C928 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMRemoveHandleForObject(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  char *v11; // rbx
  unsigned __int8 v12; // cl
  _QWORD **v13; // r14
  __int64 v14; // rsi
  unsigned int EtwUserHandleType; // eax
  char v16; // al
  void *v18; // rcx

  v4 = 0LL;
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v7, v6, v8, v9)
     || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  v10 = *a1;
  v11 = (char *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*a1;
  v12 = v11[24];
  if ( v12 == 22 || v12 == 19 )
  {
    v13 = (_QWORD **)gpKernelHandleTable;
    v14 = 3LL * (unsigned __int16)v10;
    EtwUserHandleType = GetEtwUserHandleType(v12);
    EtwTraceUserDestroyHandle(*v13[v14], EtwUserHandleType, 0LL);
    if ( (v11[25] & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(*v13[v14]);
      v11[25] &= ~0x20u;
    }
    v16 = v11[24];
    if ( v16 == 19 )
    {
      v18 = (void *)v13[v14][4];
    }
    else
    {
      if ( v16 != 22 )
        goto LABEL_8;
      v4 = v13[v14][2];
      v18 = *(void **)(v4 + 32);
    }
    ObfDereferenceObject(v18);
  }
LABEL_8:
  HMRemoveHandleForObjectWorker(v11);
  if ( !gbInDestroyHandleTableObjects && v4 )
    HMUnlockObject(v4);
  return 1LL;
}
