/*
 * XREFs of HalSendNMI @ 0x140541990
 * Callers:
 *     HalpNmiReboot @ 0x140557354 (HalpNmiReboot.c)
 *     KiSendFreeze @ 0x1405BDEE4 (KiSendFreeze.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140266EB0 (KeAndGroupAffinityEx.c)
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140267478 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeCountSetBitsAffinityEx @ 0x140271370 (KeCountSetBitsAffinityEx.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HalSendNMI(struct _KAFFINITY_EX *a1)
{
  bool v2; // r12
  int v3; // r15d
  int v4; // esi
  bool v5; // bl
  __int64 result; // rax
  __int64 v7; // rbx
  _DWORD *v8; // r14
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // si
  bool v11; // zf
  bool v12; // di
  bool v13; // di
  bool v14; // di
  _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h]
  __int128 v17; // [rsp+48h] [rbp-C0h]
  int v18; // [rsp+58h] [rbp-B0h]
  __int128 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h]
  int v21; // [rsp+78h] [rbp-90h]
  int v22; // [rsp+7Ch] [rbp-8Ch]
  int v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+84h] [rbp-84h]
  int v25; // [rsp+88h] [rbp-80h]
  int v26; // [rsp+8Ch] [rbp-7Ch]
  __int64 v27; // [rsp+90h] [rbp-78h]
  __int64 v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  __int128 v30; // [rsp+A8h] [rbp-60h] BYREF
  struct _KAFFINITY_EX v31; // [rsp+B8h] [rbp-50h] BYREF

  v16 = 0x2FFFFFFFFLL;
  v2 = HalpDisableInterrupts();
  v20 = 0LL;
  v3 = 0;
  ProcNumber[0] = 0;
  v30 = 0LL;
  v19 = 0LL;
  memset_0(&v31.8, 0, sizeof(v31.8));
  *(_QWORD *)&v31.Count = 2097153LL;
  v18 = 0;
  v4 = 0;
  v17 = 0LL;
  memset_0(&v31.8, 0, sizeof(v31.8));
  KiAndAffinityEx(&HalpInterruptPhysicalTargets, a1, &v31, 0x20u);
  if ( HalpInterruptIpiPolicy == 3 && (unsigned int)KeCountSetBitsAffinityEx(&v31.Count) > HalpInterruptIpiThreshold )
  {
    LODWORD(v17) = 1;
    v22 = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v21 = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v27 = v16;
    v5 = HalpDisableInterrupts();
    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16));
    v4 = result;
    if ( v5 )
      _enable();
    goto LABEL_35;
  }
  v7 = v16;
  if ( HalpInterruptClusterModeEnabled )
  {
    v8 = (_DWORD *)HalpInterruptClusterData;
    ProcNumber[0] = 0;
    while ( (unsigned __int64)v8 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(a1, (__int64)(v8 + 2), (char *)&v30) )
      {
        LODWORD(v17) = 6;
        DWORD2(v17) = *v8;
        if ( HalpInterruptIpiPolicy == 2 )
        {
          HIDWORD(v17) = -1;
        }
        else
        {
          v9 = v30;
          v10 = 0;
          v11 = (_QWORD)v30 == 0LL;
          ProcNumber[0].Group = WORD4(v30);
          HIDWORD(v17) = 0;
          while ( 1 )
          {
            ProcNumber[0].Number = v10;
            if ( v11 )
              break;
            if ( (v9 & 1) != 0 )
            {
              v3 |= *(_DWORD *)(HalpInterruptTargets + 24LL * KeGetProcessorIndexFromNumber(ProcNumber) + 12);
              HIDWORD(v17) = v3;
            }
            ++v10;
            v9 >>= 1;
            v11 = v9 == 0;
          }
          v3 = 0;
        }
        v28 = v7;
        v16 = *(_QWORD *)(HalpInterruptIpiLines + 16);
        v12 = HalpDisableInterrupts();
        result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16));
        v4 = result;
        if ( v12 )
          _enable();
        if ( (int)result < 0 )
          goto LABEL_36;
      }
      v8 += 6;
    }
    goto LABEL_30;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_30;
  *((_QWORD *)&v19 + 1) = a1->Bitmap[0];
  LODWORD(v17) = 5;
  DWORD2(v17) = 0;
  *(_QWORD *)&v19 = a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(ProcNumber, (unsigned __int16 **)&v19) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * *(_DWORD *)ProcNumber) == 5 )
      DWORD2(v17) |= *(_DWORD *)(HalpInterruptTargets + 24LL * *(_DWORD *)ProcNumber + 8);
  }
  if ( !DWORD2(v17) )
    goto LABEL_30;
  v29 = v7;
  v24 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v23 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v13 = HalpDisableInterrupts();
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16));
  v4 = result;
  if ( v13 )
    _enable();
  if ( (int)result >= 0 )
  {
LABEL_30:
    *((_QWORD *)&v19 + 1) = v31.Bitmap[0];
    *(_QWORD *)&v19 = &v31;
    ProcNumber[0] = 0;
    LOWORD(v20) = 0;
    do
    {
      result = KeEnumerateNextProcessor(ProcNumber, (unsigned __int16 **)&v19);
      if ( (_DWORD)result )
        break;
      LODWORD(v17) = 4;
      *(_QWORD *)&v30 = v7;
      DWORD2(v17) = *(_DWORD *)(HalpInterruptTargets + 24LL * *(_DWORD *)ProcNumber + 8);
      v26 = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v25 = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v14 = HalpDisableInterrupts();
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16));
      v4 = result;
      if ( v14 )
        _enable();
    }
    while ( (int)result >= 0 );
LABEL_35:
    if ( v4 >= 0 )
      goto LABEL_37;
  }
LABEL_36:
  HalpInterruptSendNmiFailed = 1;
LABEL_37:
  if ( v2 )
    _enable();
  return result;
}
