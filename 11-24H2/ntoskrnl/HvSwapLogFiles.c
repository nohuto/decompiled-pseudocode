/*
 * XREFs of HvSwapLogFiles @ 0x14096B748
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140967424 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140969A74 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvSwapLogFiles(__int64 a1)
{
  unsigned int v2; // eax
  char v3; // r10
  int v4; // r11d
  int *v5; // rsi
  int v6; // edx
  __int64 v7; // rbx
  int v8; // r9d
  int v9; // ecx
  __int64 result; // rax
  bool v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+60h] [rbp-A0h] BYREF
  bool *v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+8Ch] [rbp-74h]
  int *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+9Ch] [rbp-64h]
  int *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  int *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  int *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  int *v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  int *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  __int64 *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]

  HvGetEffectiveLogSizeCapForHive((unsigned int *)a1);
  LOBYTE(v2) = HvpLogTypeToLogArrayIndex(*(_DWORD *)(a1 + 168));
  v5 = (int *)(a1 + 180);
  v6 = *(_DWORD *)(a1 + 172) - *(_DWORD *)(a1 + 176);
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = *(_DWORD *)(a1 + 8LL * v2 + 1808);
  if ( (unsigned int)dword_140E09F58 > 5 )
  {
    v18 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 200);
    v20 = &v11;
    v12 = *(_DWORD *)(a1 + 280);
    v11 = v3 == 0;
    v23 = &v12;
    v9 = *(_DWORD *)(a1 + 188);
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v13 = v9;
    v26 = &v13;
    v29 = &v14;
    v15 = *v5;
    v32 = &v15;
    v35 = &v16;
    v41 = &v18;
    v38 = &v17;
    v16 = v8;
    v17 = v6;
    v21 = 1;
    v24 = 4;
    v27 = 4;
    v14 = v4;
    v30 = 4;
    v33 = 4;
    v36 = 4;
    v39 = 4;
    v42 = 8;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09F58,
      (unsigned __int8 *)&dword_1400564C4,
      0LL,
      0LL,
      0xAu,
      &v19);
  }
  *(_DWORD *)(a1 + 168) = 5 - (*(_DWORD *)(a1 + 168) != 4);
  result = *(unsigned int *)(a1 + 172);
  *v5 = 0;
  *(_DWORD *)(a1 + 176) = result;
  *(_QWORD *)(a1 + 200) = v7;
  return result;
}
