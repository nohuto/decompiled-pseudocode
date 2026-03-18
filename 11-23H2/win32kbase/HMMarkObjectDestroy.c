/*
 * XREFs of HMMarkObjectDestroy @ 0x1C0096FE0
 * Callers:
 *     DestroyMonitor @ 0x1C00A04C0 (DestroyMonitor.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD390 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD480 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  char v11; // al

  v4 = 0;
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v7, v6, v8, v9) || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  v10 = (char *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*a1;
  v11 = v10[25] | 1;
  v10[25] = v11;
  if ( a1[2] )
    v10[25] = v11 & 0xFD;
  else
    return 1;
  return v4;
}
