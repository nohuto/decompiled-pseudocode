/*
 * XREFs of RequestPendingCompletion @ 0x140009240
 * Callers:
 *     NVMeHwInterrupt @ 0x1400080A0 (NVMeHwInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x140008650 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeHwMSIInterrupt @ 0x140008FC0 (NVMeHwMSIInterrupt.c)
 * Callees:
 *     Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline @ 0x1400176D8 (Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall RequestPendingCompletion(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 v5; // rbx
  unsigned __int16 *v6; // rsi
  unsigned __int16 *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  __int16 v12; // dx
  bool v13; // zf
  bool v14; // r12
  __int64 v15; // r9
  unsigned int v16; // edx
  unsigned __int16 v17; // si
  __int16 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int16 v21; // r15
  _QWORD *v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF
  char v28; // [rsp+68h] [rbp+10h]

  v2 = *(unsigned __int16 *)(a1 + 332);
  if ( a2 == 0xFFFF )
  {
    v5 = a1 + 544;
    v11 = *(_QWORD *)(a1 + 544) + 16LL * *(unsigned __int16 *)(a1 + 714);
    if ( (*(_WORD *)(v11 + 14) & 1) == *(_WORD *)(a1 + 716) )
    {
      v15 = *(_QWORD *)(a1 + 944);
      v14 = 0;
      v16 = 0;
      if ( v15 )
      {
        while ( 1 )
        {
          v14 = 0;
          if ( v16 >= v2 )
            break;
          v5 = v15 + 392LL * v16;
          v11 = *(_QWORD *)v5 + 16LL * *(unsigned __int16 *)(v5 + 170);
          if ( (*(_WORD *)(v11 + 14) & 1) != *(_WORD *)(v5 + 172) )
            goto LABEL_17;
          ++v16;
        }
      }
      return v14;
    }
LABEL_17:
    v14 = 1;
    v28 = 1;
    goto LABEL_18;
  }
  if ( a2 > (unsigned __int16)v2 )
    return 0;
  if ( a2 )
  {
    v8 = 392LL * a2;
    v9 = *(_QWORD *)(a1 + 944);
    v5 = v8 + v9 - 392;
    v6 = (unsigned __int16 *)(v8 + v9 - 222);
    v7 = v6;
  }
  else
  {
    v5 = a1 + 544;
    v6 = (unsigned __int16 *)(a1 + 714);
    v7 = (unsigned __int16 *)(a1 + 714);
  }
  if ( (unsigned int)Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline() )
    v10 = *v7;
  else
    v10 = *v6;
  v11 = *(_QWORD *)v5 + 16LL * v10;
  v12 = HIWORD(*(_DWORD *)(v11 + 12)) & 1;
  v13 = v12 == *(_WORD *)(v5 + 172);
  v14 = v12 != *(_WORD *)(v5 + 172);
  v28 = v14;
  if ( !v13 )
  {
LABEL_18:
    if ( (*(_DWORD *)(a1 + 108) & 2) != 0 )
    {
      v17 = *(_WORD *)(v5 + 170);
      v18 = *(_WORD *)(v5 + 172);
      if ( (*(_WORD *)(v11 + 14) & 1) != v18 )
      {
        do
        {
          v19 = *(unsigned __int16 *)(v11 + 10);
          v20 = *(unsigned __int16 *)(v11 + 12);
          if ( *(_WORD *)(v5 + 168) && (*(_DWORD *)(a1 + 24) & 1) == 0 )
            break;
          if ( (_WORD)v19 )
          {
            v24 = *(_QWORD *)(a1 + 936);
            v21 = *(_WORD *)(a1 + 326);
            v25 = 208 * v19;
            v22 = (_QWORD *)(v25 + v24 - 168);
            v23 = (_QWORD *)(v25 + v24 - 176);
          }
          else
          {
            v21 = *(_WORD *)(a1 + 324);
            v22 = (_QWORD *)(a1 + 376);
            v23 = (_QWORD *)(a1 + 368);
          }
          v26 = v20;
          if ( *(_QWORD *)(32 * v20 + *v23 + 8) && *v22 )
          {
            v27 = 0LL;
            StorPortExtendedFunction(47LL, a1, 0LL, &v27);
            *(_QWORD *)(*v22 + 16 * v26 + 8) = v27;
          }
          if ( v17 >= v21 - 1 )
          {
            v17 = 0;
            v18 = v18 != 1;
          }
          else
          {
            ++v17;
          }
          v11 = *(_QWORD *)v5 + 16LL * v17;
        }
        while ( (*(_WORD *)(v11 + 14) & 1) != v18 );
        return v28;
      }
    }
  }
  return v14;
}
