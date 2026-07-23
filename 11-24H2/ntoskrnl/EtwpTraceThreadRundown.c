/*
 * XREFs of EtwpTraceThreadRundown @ 0x1404ECB50
 * Callers:
 *     EtwpThreadRundownApc @ 0x14064F010 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14064F0A4 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x1408EEB50 (EtwpThreadEnumCallback.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 *     Feature_1224463674__private_IsEnabledDeviceUsageNoInline @ 0x14064D46C (Feature_1224463674__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned int v4; // esi
  __int64 v5; // rax
  _WORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // r13
  char *v18; // r15
  unsigned __int16 *v19; // rax
  int *v20; // rcx
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 result; // rax
  unsigned __int16 v27; // [rsp+40h] [rbp-E8h]
  __int64 v28; // [rsp+50h] [rbp-D8h]
  _DWORD v29[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+78h] [rbp-B0h]
  __int64 v31; // [rsp+80h] [rbp-A8h]
  __int64 v32; // [rsp+88h] [rbp-A0h]
  __int64 v33; // [rsp+90h] [rbp-98h]
  __int64 v34; // [rsp+98h] [rbp-90h]
  __int64 v35; // [rsp+A0h] [rbp-88h]
  __int64 v36; // [rsp+A8h] [rbp-80h]
  int v37; // [rsp+B0h] [rbp-78h]
  char v38; // [rsp+B4h] [rbp-74h]
  char v39; // [rsp+B5h] [rbp-73h]
  char v40; // [rsp+B6h] [rbp-72h]
  unsigned __int8 v41; // [rsp+B7h] [rbp-71h]
  __int64 v42; // [rsp+B8h] [rbp-70h]
  _QWORD v43[2]; // [rsp+C0h] [rbp-68h] BYREF
  int *v44; // [rsp+D0h] [rbp-58h]
  __int64 v45; // [rsp+D8h] [rbp-50h]
  int *v46; // [rsp+E0h] [rbp-48h]
  __int64 v47; // [rsp+E8h] [rbp-40h]

  v42 = 0LL;
  v28 = *(_QWORD *)(a2 + 32);
  v3 = *(unsigned __int8 *)(a2 + 65);
  v4 = *(_DWORD *)(a2 + 40);
  v27 = 1284 - (*(_BYTE *)(a2 + 64) != 0);
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v4 &= 0xFFFFE7FF;
  v29[0] = *(_DWORD *)(a1 + 1288);
  v29[1] = *(_DWORD *)(a1 + 1296);
  v30 = *(_QWORD *)(a1 + 56);
  v31 = *(_QWORD *)(a1 + 48);
  v5 = *(unsigned __int16 *)(a1 + 584);
  v6 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v5 >= *v6 )
    v7 = 0LL;
  else
    v7 = *(_QWORD *)&v6[4 * v5 + 4];
  v34 = v7;
  v35 = *(_QWORD *)(a1 + 1376);
  v8 = *(_QWORD *)(a1 + 240);
  v32 = 0LL;
  v33 = 0LL;
  v36 = v8;
  v37 = 0;
  v38 = *(_BYTE *)(a1 + 563);
  v9 = (*(_DWORD *)(a1 + 1440) >> 12) & 7;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 1092);
    if ( v9 >= v11 )
      LOBYTE(v9) = v11;
  }
  v39 = v9;
  v12 = (*(_DWORD *)(a1 + 1440) >> 9) & 7;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 1084);
    if ( (int)v12 >= v14 )
      v12 = (unsigned int)v14;
  }
  if ( (int)v12 < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() && *(_DWORD *)(a1 + 1504) )
    v12 = 2LL;
  v40 = v12;
  v41 = 0;
  if ( (*(_BYTE *)(a1 + 1448) & 8) != 0 )
  {
    v12 = v41;
    if ( *(_QWORD *)(a1 + 1240) != a1 + 1240 )
      v12 = 1LL;
    v41 = v12;
  }
  if ( v8 && (_BYTE)v3 )
  {
    v15 = *(_QWORD *)(a1 + 544);
    if ( *(_QWORD *)(v15 + 784) && ((v12 = *(unsigned __int16 *)(v15 + 1772), (_WORD)v12 == 332) || (_WORD)v12 == 452) )
    {
      v37 = *(_DWORD *)(v8 + 12128);
      v32 = *(unsigned int *)(v8 + 8196);
      v16 = *(unsigned int *)(v8 + 8200);
    }
    else
    {
      v37 = *(_DWORD *)(v8 + 5920);
      v32 = *(_QWORD *)(v8 + 8);
      v16 = *(_QWORD *)(v8 + 16);
    }
    v33 = v16;
  }
  v43[0] = v29;
  v43[1] = 72LL;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)Feature_1224463674__private_IsEnabledDeviceUsageNoInline(v12, v8, v3) )
  {
    --CurrentThread->KernelApcDisable;
    v18 = (char *)KeAbPreAcquire(a1 + 1424, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1424), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 1424), 0, v18, a1 + 1424);
    if ( v18 )
      v18[10] = 1;
  }
  v19 = *(unsigned __int16 **)(a1 + 1696);
  if ( v19 && (v20 = (int *)*((_QWORD *)v19 + 1)) != 0LL )
  {
    v21 = *v19;
    v22 = 2048LL;
    if ( (unsigned __int16)v21 < 0x800u )
      v22 = v21;
    v44 = v20;
    v45 = (unsigned int)v22;
    if ( !(_DWORD)v22 || *((_WORD *)v20 + (v22 >> 1) - 1) )
    {
      v46 = &EtwpNull;
      v47 = 2LL;
      EtwpLogSystemEventUnsafe(*(_QWORD *)(v28 + 1360), (__int64)v43, (_KTHREAD *)a1, *(_DWORD *)v28, 3u, v27, v4, 0);
      goto LABEL_42;
    }
  }
  else
  {
    v44 = &EtwpNull;
    v45 = 2LL;
  }
  EtwpLogSystemEventUnsafe(*(_QWORD *)(v28 + 1360), (__int64)v43, (_KTHREAD *)a1, *(_DWORD *)v28, 2u, v27, v4, 0);
LABEL_42:
  result = Feature_1224463674__private_IsEnabledDeviceUsageNoInline(v24, v23, v25);
  if ( (_DWORD)result )
    return PspUnlockThreadSecurityShared(a1);
  return result;
}
