/*
 * XREFs of KeConnectInterrupt @ 0x1403B6EEC
 * Callers:
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 * Callees:
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiConnectInterrupt @ 0x1403B70E8 (KiConnectInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1403B7390 (KiConnectSecondaryInterrupt.c)
 *     KiIsInterruptTypeSecondary @ 0x1403B764C (KiIsInterruptTypeSecondary.c)
 *     KiIntSteerConnect @ 0x1403B7680 (KiIntSteerConnect.c)
 *     KiIntSteerEnable @ 0x1403B7C7C (KiIntSteerEnable.c)
 *     HalEnableInterrupt @ 0x1403B7D10 (HalEnableInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1403B8A3C (KeDisconnectInterrupt.c)
 *     KiUnmaskInterruptInternal @ 0x14046E508 (KiUnmaskInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x14046E528 (KiUnmaskSecondaryInterruptInternal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeConnectInterrupt(_QWORD *a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // r12
  char IsInterruptTypeSecondary; // bl
  int v7; // r8d
  char v8; // r15
  unsigned __int8 i; // di
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  char v17; // r15
  __int16 v18; // r12
  __int64 v19; // r13
  int v20; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // [rsp+30h] [rbp-40h] BYREF
  int v25; // [rsp+38h] [rbp-38h] BYREF
  int v26; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-28h]
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  __int128 v29; // [rsp+60h] [rbp-10h]
  char v30; // [rsp+B8h] [rbp+48h] BYREF
  char v31; // [rsp+C8h] [rbp+58h]

  v24 = 0;
  v4 = a2;
  v30 = 0;
  v28 = 0LL;
  v29 = 0LL;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v31 = IsInterruptTypeSecondary;
  KiSetSystemPriorityThread(KeGetCurrentThread(), 31, v7);
  v8 = 0;
  for ( i = 0; i < (unsigned __int8)v4; ++i )
  {
    *(_DWORD *)(a1[i] + 104LL) |= 1u;
    if ( IsInterruptTypeSecondary )
      v10 = KiConnectSecondaryInterrupt();
    else
      v10 = KiConnectInterrupt();
    v11 = v10;
    if ( v10 < 0 )
    {
      v25 = 31;
      KiClearSystemPriority(KeGetCurrentThread(), &v25);
      goto LABEL_27;
    }
    IsInterruptTypeSecondary = v31;
    if ( v10 == 295 )
      v8 = 1;
  }
  v26 = 31;
  KiClearSystemPriority(KeGetCurrentThread(), &v26);
  v27 = v4;
  v11 = KiIntSteerConnect((_DWORD)a1, v4, (int)a3 + 8, (unsigned int)&v30, (__int64)&v28);
  if ( v11 >= 0 )
  {
    i = 0;
    if ( (_BYTE)v4 )
    {
      v15 = a1;
      i = v4;
      v16 = v4;
      do
      {
        _InterlockedAnd((volatile signed __int32 *)(*v15++ + 104LL), 0xFFFFFFFE);
        --v16;
      }
      while ( v16 );
    }
    if ( v8 )
    {
      if ( (int)guard_dispatch_icall_no_overrides(a3 + 8, &v24, v13, v14) < 0 )
        return 295;
      v22 = *a1;
      v23 = v31
          ? KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(v22 + 88), v24)
          : KiUnmaskInterruptInternal(v22, v24);
      v11 = v23;
      if ( v23 >= 0 )
        return 295;
    }
    else
    {
      v17 = v30;
      if ( v30 )
      {
        v18 = *(_WORD *)(a3 + 40);
        v19 = *(_QWORD *)(a3 + 32);
        *(_WORD *)(a3 + 40) = WORD4(v28);
        *(_QWORD *)(a3 + 32) = v28;
      }
      else
      {
        v18 = WORD4(v29);
        v19 = v29;
      }
      v20 = HalEnableInterrupt(a3);
      v11 = v20;
      if ( v17 )
      {
        *(_WORD *)(a3 + 40) = v18;
        *(_QWORD *)(a3 + 32) = v19;
      }
      if ( v20 >= 0 )
      {
        KiIntSteerEnable(a1, v27);
        return (unsigned int)v11;
      }
    }
  }
LABEL_27:
  if ( i )
  {
    LOBYTE(v12) = i;
    KeDisconnectInterrupt(a1, v12, a3);
  }
  return (unsigned int)v11;
}
