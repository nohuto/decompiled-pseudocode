/*
 * XREFs of KiGetNextClockOwner @ 0x1405B781C
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiHeteroReduceToMaximallyPreferredByClass @ 0x14032AA14 (KiHeteroReduceToMaximallyPreferredByClass.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140330300 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x140371000 (KeFindFirstSetRightGroupAffinity.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KiInitializeSystemSubNodeEnumerationContext @ 0x14042C414 (KiInitializeSystemSubNodeEnumerationContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiGetNextClockOwner(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstSetRightGroupAffinity; // esi
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int16 v11; // [rsp+30h] [rbp-99h] BYREF
  __int64 v12; // [rsp+38h] [rbp-91h] BYREF
  __int128 v13; // [rsp+40h] [rbp-89h] BYREF
  int v14; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v15; // [rsp+54h] [rbp-75h] BYREF
  _OWORD v16[2]; // [rsp+58h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+80h] [rbp-49h] BYREF
  int *v18; // [rsp+A0h] [rbp-29h]
  int v19; // [rsp+A8h] [rbp-21h]
  int v20; // [rsp+ACh] [rbp-1Dh]
  unsigned int *v21; // [rsp+B0h] [rbp-19h]
  int v22; // [rsp+B8h] [rbp-11h]
  int v23; // [rsp+BCh] [rbp-Dh]
  __int64 *v24; // [rsp+C0h] [rbp-9h]
  int v25; // [rsp+C8h] [rbp-1h]
  int v26; // [rsp+CCh] [rbp+3h]
  __int16 *v27; // [rsp+D0h] [rbp+7h]
  int v28; // [rsp+D8h] [rbp+Fh]
  int v29; // [rsp+DCh] [rbp+13h]
  __int128 *v30; // [rsp+E0h] [rbp+17h]
  int v31; // [rsp+E8h] [rbp+1Fh]
  int v32; // [rsp+ECh] [rbp+23h]

  v12 = 0LL;
  v2 = *(_DWORD *)(a1 + 36);
  memset(v16, 0, sizeof(v16));
  if ( !KiClockTimerPerCpu )
    return v2;
  FirstSetRightGroupAffinity = -1;
  v13 = 0LL;
  v5 = 0;
  if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)KiIntSteerMask, v2) )
  {
    LOWORD(v6) = WORD4(v13);
    FirstSetRightGroupAffinity = v2;
    v7 = v13;
LABEL_18:
    if ( FirstSetRightGroupAffinity != -1 )
      goto LABEL_20;
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 208);
    v5 = 1;
    WORD4(v13) = *(unsigned __int8 *)(a1 + 208);
    if ( (unsigned __int16)v6 >= LOWORD(KiIntSteerMask[0]) )
      v8 = 0LL;
    else
      v8 = KiIntSteerMask[v6 + 1];
    v9 = *(_QWORD *)(a1 + 192);
    v7 = *(_QWORD *)(v9 + 128) & v8;
    if ( v7 )
    {
      *(_QWORD *)&v13 = KiHeteroReduceToMaximallyPreferredByClass(v9, v7, 4, 0);
      v7 = v13;
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v13);
      if ( FirstSetRightGroupAffinity != -1 )
        goto LABEL_20;
    }
    KiInitializeSystemSubNodeEnumerationContext((__int64)v16, *(_WORD *)(*(_QWORD *)(a1 + 192) + 138LL));
    if ( !(unsigned int)KiEnumerateNextSchedulerSubNodeInSystem((unsigned __int16 *)v16, &v12) )
    {
      while ( 1 )
      {
        if ( v12 != *(_QWORD *)(a1 + 192) )
        {
          ++v5;
          WORD4(v13) = *(_WORD *)(v12 + 136);
          LOWORD(v6) = WORD4(v13);
          v10 = WORD4(v13) >= LOWORD(KiIntSteerMask[0]) ? 0LL : KiIntSteerMask[WORD4(v13) + 1];
          v7 = *(_QWORD *)(v12 + 128) & v10;
          if ( v7 )
          {
            *(_QWORD *)&v13 = KiHeteroReduceToMaximallyPreferredByClass(v12, v7, 4, 0);
            v7 = v13;
            FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v13);
            if ( FirstSetRightGroupAffinity != -1 )
              goto LABEL_20;
          }
        }
        if ( (unsigned int)KiEnumerateNextSchedulerSubNodeInSystem((unsigned __int16 *)v16, &v12) )
          goto LABEL_18;
      }
    }
  }
  FirstSetRightGroupAffinity = *(_DWORD *)(a1 + 36);
LABEL_20:
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v14 = KiClockTimerOwner;
    v18 = &v14;
    v21 = &v15;
    v24 = &v12;
    v27 = &v11;
    v30 = &v13;
    v19 = 4;
    v22 = 4;
    v25 = 4;
    v15 = FirstSetRightGroupAffinity;
    LODWORD(v12) = v5;
    v11 = v6;
    v28 = 2;
    *(_QWORD *)&v13 = v7;
    v31 = 8;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07080,
      (unsigned __int8 *)&dword_140047C8C,
      0LL,
      0LL,
      7u,
      &v17);
  }
  return FirstSetRightGroupAffinity;
}
