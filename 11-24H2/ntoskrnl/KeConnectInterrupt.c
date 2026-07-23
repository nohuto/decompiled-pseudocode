/*
 * XREFs of KeConnectInterrupt @ 0x1402B31A0
 * Callers:
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 * Callees:
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1402AE83C (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiConnectInterrupt @ 0x1402B339C (KiConnectInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1402B3644 (KiConnectSecondaryInterrupt.c)
 *     KiIsInterruptTypeSecondary @ 0x1402B3900 (KiIsInterruptTypeSecondary.c)
 *     KiIntSteerConnect @ 0x1402B3934 (KiIntSteerConnect.c)
 *     KiIntSteerEnable @ 0x1402B3D44 (KiIntSteerEnable.c)
 *     HalEnableInterrupt @ 0x1402B3DD0 (HalEnableInterrupt.c)
 *     KiUnmaskInterruptInternal @ 0x1402B4D3C (KiUnmaskInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1402B5288 (KiUnmaskSecondaryInterruptInternal.c)
 *     KeDisconnectInterrupt @ 0x140373B88 (KeDisconnectInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  char v15; // r15
  __int16 v16; // r12
  __int64 v17; // r13
  int v18; // eax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+38h] [rbp-38h] BYREF
  int v24; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-28h]
  __int128 v26; // [rsp+50h] [rbp-20h] BYREF
  __int128 v27; // [rsp+60h] [rbp-10h]
  char v28; // [rsp+B8h] [rbp+48h] BYREF
  char v29; // [rsp+C8h] [rbp+58h]

  v22 = 0;
  v4 = a2;
  v28 = 0;
  v26 = 0LL;
  v27 = 0LL;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v29 = IsInterruptTypeSecondary;
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
      v23 = 31;
      KiClearSystemPriority(KeGetCurrentThread(), &v23);
      goto LABEL_27;
    }
    IsInterruptTypeSecondary = v29;
    if ( v10 == 295 )
      v8 = 1;
  }
  v24 = 31;
  KiClearSystemPriority(KeGetCurrentThread(), &v24);
  v25 = v4;
  v11 = KiIntSteerConnect((_DWORD)a1, v4, (int)a3 + 8, (unsigned int)&v28, (__int64)&v26);
  if ( v11 >= 0 )
  {
    i = 0;
    if ( (_BYTE)v4 )
    {
      v13 = a1;
      i = v4;
      v14 = v4;
      do
      {
        _InterlockedAnd((volatile signed __int32 *)(*v13++ + 104LL), 0xFFFFFFFE);
        --v14;
      }
      while ( v14 );
    }
    if ( v8 )
    {
      if ( (int)guard_dispatch_icall_no_overrides(a3 + 8, &v22) < 0 )
        return 295;
      v20 = *a1;
      v21 = v29
          ? KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(v20 + 88), v22)
          : KiUnmaskInterruptInternal(v20, v22);
      v11 = v21;
      if ( v21 >= 0 )
        return 295;
    }
    else
    {
      v15 = v28;
      if ( v28 )
      {
        v16 = *(_WORD *)(a3 + 40);
        v17 = *(_QWORD *)(a3 + 32);
        *(_WORD *)(a3 + 40) = WORD4(v26);
        *(_QWORD *)(a3 + 32) = v26;
      }
      else
      {
        v16 = WORD4(v27);
        v17 = v27;
      }
      v18 = HalEnableInterrupt(a3);
      v11 = v18;
      if ( v15 )
      {
        *(_WORD *)(a3 + 40) = v16;
        *(_QWORD *)(a3 + 32) = v17;
      }
      if ( v18 >= 0 )
      {
        KiIntSteerEnable(a1, v25);
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
