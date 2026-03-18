/*
 * XREFs of DynamicLock_Create @ 0x1400564D4
 * Callers:
 *     RootHub_InitializeReadModifyWriteLock @ 0x140049F0C (RootHub_InitializeReadModifyWriteLock.c)
 *     Command_Create @ 0x1400741FC (Command_Create.c)
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 *     Interrupter_CreateInterrupter @ 0x14007BA50 (Interrupter_CreateInterrupter.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DynamicLock_Create(__int64 a1, int a2, int a3, __int64 *a4)
{
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h] BYREF
  __int128 v15; // [rsp+3Ch] [rbp-34h]
  int v16; // [rsp+4Ch] [rbp-24h]
  int v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+54h] [rbp-1Ch]
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  void *v21; // [rsp+68h] [rbp-8h]
  __int64 v22; // [rsp+90h] [rbp+20h] BYREF

  v22 = 0LL;
  v13 = 0LL;
  v16 = 0;
  v20 = 0LL;
  v15 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v14 = -1;
    else
      v14 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v14 = 56;
  }
  v21 = off_14006B010;
  v17 = 1;
  v18 = 1;
  v19 = a1;
  if ( a3 != 1 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int64 *))(WdfFunctions_01033 + 2520))(
           WdfDriverGlobals,
           &v14,
           &v13);
    v9 = v7;
    if ( v7 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v9;
      v10 = 11;
      goto LABEL_10;
    }
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v13,
            off_14006B010);
    *(_DWORD *)v11 = a3;
    *(_QWORD *)(v11 + 8) = v13;
LABEL_16:
    *a4 = v11;
    return v9;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int64 *))(WdfFunctions_01033 + 2496))(
         WdfDriverGlobals,
         &v14,
         &v22);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v22,
            off_14006B010);
    *(_DWORD *)v11 = 1;
    *(_QWORD *)(v11 + 8) = v22;
    goto LABEL_16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 10;
LABEL_10:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_d(a2, v8, 1, v10, (__int64)&WPP_9f361d353f7233e73cc38b6fc433503f_Traceguids, v7);
  }
  return v9;
}
