/*
 * XREFs of HvSwapLogFiles @ 0x1409F7174
 * Callers:
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140884FC0 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1409F8638 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvSwapLogFiles(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // eax
  char v5; // r10
  int v6; // r11d
  int *v7; // rsi
  int v8; // edx
  __int64 v9; // rbx
  int v10; // r9d
  int v11; // ecx
  __int64 result; // rax
  bool v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+60h] [rbp-A0h] BYREF
  bool *v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+8Ch] [rbp-74h]
  int *v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  int *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  int *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  int *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  int *v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  __int64 *v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]

  HvGetEffectiveLogSizeCapForHive((unsigned int *)a1);
  v4 = HvpLogTypeToLogArrayIndex(*(unsigned int *)(a1 + 168), v2, v3);
  v7 = (int *)(a1 + 180);
  v8 = *(_DWORD *)(a1 + 172) - *(_DWORD *)(a1 + 176);
  v9 = MEMORY[0xFFFFF78000000014];
  v10 = *(_DWORD *)(a1 + 8LL * v4 + 1808);
  if ( (unsigned int)dword_140E09E08 > 5 )
  {
    v20 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 200);
    v22 = &v13;
    v14 = *(_DWORD *)(a1 + 280);
    v13 = v5 == 0;
    v25 = &v14;
    v11 = *(_DWORD *)(a1 + 188);
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v15 = v11;
    v28 = &v15;
    v31 = &v16;
    v17 = *v7;
    v34 = &v17;
    v37 = &v18;
    v43 = &v20;
    v40 = &v19;
    v18 = v10;
    v19 = v8;
    v23 = 1;
    v26 = 4;
    v29 = 4;
    v16 = v6;
    v32 = 4;
    v35 = 4;
    v38 = 4;
    v41 = 4;
    v44 = 8;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09E08,
      (unsigned __int8 *)byte_1400545A0,
      0LL,
      0LL,
      0xAu,
      &v21);
  }
  *(_DWORD *)(a1 + 168) = 5 - (*(_DWORD *)(a1 + 168) != 4);
  result = *(unsigned int *)(a1 + 172);
  *v7 = 0;
  *(_DWORD *)(a1 + 176) = result;
  *(_QWORD *)(a1 + 200) = v9;
  return result;
}
