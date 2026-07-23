/*
 * XREFs of PopPepRegisterDevice @ 0x140A934A0
 * Callers:
 *     PopFxRegisterDeviceWithPep @ 0x1404BEBF8 (PopFxRegisterDeviceWithPep.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PopPepComponentGetResidencyIdleState @ 0x140447D50 (PopPepComponentGetResidencyIdleState.c)
 *     PopPepComponentGetLatencyIdleState @ 0x14044DB3C (PopPepComponentGetLatencyIdleState.c)
 *     PopPepInsertDevice @ 0x1404BB598 (PopPepInsertDevice.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall PopPepRegisterDevice(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  char v5; // bl
  unsigned int v9; // ebp
  unsigned int v10; // r10d
  unsigned int i; // r11d
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 Pool2; // rax
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 *v18; // r8
  _QWORD *v19; // rdx
  __int64 *v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int v22; // r15d
  __int64 *v23; // rcx
  __int64 v24; // r13
  unsigned __int64 v25; // rdx
  __int64 *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r9
  _QWORD *v29; // r10
  int v30; // eax
  int v31; // ecx
  _DWORD *v32; // rax
  unsigned int j; // r8d
  unsigned __int64 v34; // rdx
  int LatencyIdleState; // eax
  unsigned __int64 v36; // rdx
  int v37; // eax
  ULONG_PTR v39; // [rsp+30h] [rbp-48h]
  _QWORD *v40; // [rsp+90h] [rbp+18h]

  v5 = 0;
  *a5 = 0LL;
  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 )
  {
    v10 = 0;
    for ( i = 0; i < v9; ++i )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(a3 + 8LL * i + 16) + 28LL);
      if ( v12 <= 0 || v12 + v10 < v10 )
        return v5;
      v10 += v12;
    }
    v13 = 0LL;
    v14 = (int)(208 * v9 + 192);
    if ( v10 )
    {
      v13 = (int)(208 * v9 + 192);
      v14 += 24LL * v10;
    }
    v39 = v14 + 60LL * (v9 + 1);
    Pool2 = ExAllocatePool2(0x40uLL, v39, 0x54706550u);
    v16 = Pool2;
    if ( Pool2 )
    {
      DbgPrintEx(0x92u, 3u, "PopPep: register device (0x%p, %wZ)\n", Pool2, a1);
      *(_QWORD *)(v16 + 32) = a2;
      v40 = (_QWORD *)(v13 + v16);
      v17 = v16 + v14;
      *(_QWORD *)(v16 + 24) = *(_QWORD *)a3;
      KeInitializeEvent((PRKEVENT)(v16 + 40), NotificationEvent, 0);
      v18 = (__int64 *)(v16 + 72);
      *(_DWORD *)(v16 + 180) = v9;
      v19 = (_QWORD *)(v16 + 72);
      *(_DWORD *)(v16 + 140) = v9;
      *(_BYTE *)(v16 + 136) = 1;
      v20 = ActivityAttributes;
      v21 = 0LL;
      do
      {
        if ( v21 <= 5 && *(_BYTE *)v20 == 1 )
        {
          *v19 = v17;
          v17 += 20LL;
        }
        ++v21;
        ++v19;
        v20 += 17;
      }
      while ( (__int64)v20 < (__int64)&SeSubsystemName );
      *(_QWORD *)(v16 + 16) |= 1uLL;
      v22 = 0;
LABEL_16:
      if ( v22 >= v9 )
      {
        v5 = 1;
        *a5 = v16;
        if ( a4 == 2 )
          *(_BYTE *)(v16 + 124) = 1;
        *(_DWORD *)(v16 + 168) = 1;
        PopPepInsertDevice(v21, (__int64 *)v16);
      }
      else
      {
        v23 = v18;
        v24 = *(_QWORD *)(a3 + 8LL * v22 + 16);
        v25 = 0LL;
        v26 = ActivityAttributes;
        v27 = v16 + 208LL * v22 + 192;
        *(_DWORD *)(v27 + 8) = v22;
        *(_DWORD *)(v27 + 4) = 3;
        do
        {
          v28 = v17;
          if ( v25 <= 5 && *(_BYTE *)v26 == 1 )
            v28 = *v23;
          else
            v17 += 20LL;
          v23[26 * v22 + 22] = v28;
          ++v25;
          ++v23;
          v26 += 17;
        }
        while ( (__int64)v26 < (__int64)&SeSubsystemName );
        KeInitializeEvent((PRKEVENT)(v27 + 32), NotificationEvent, 0);
        v29 = v40;
        *(_QWORD *)(v27 + 16) = *(_QWORD *)(v24 + 16);
        v30 = *(_DWORD *)(v24 + 28);
        *(_DWORD *)(v27 + 188) = v30;
        v31 = v30 - 1;
        if ( (unsigned int)(v30 - 1) >= *(_DWORD *)(v24 + 24) )
          v31 = *(_DWORD *)(v24 + 24);
        *(_DWORD *)(v24 + 24) = v31;
        *(_QWORD *)(v27 + 112) = -1LL;
        *(_QWORD *)(v27 + 120) = 0LL;
        v32 = *(_DWORD **)(v27 + 80);
        *(_DWORD *)(v27 + 148) = v31;
        *(_QWORD *)(v27 + 200) = v40;
        *(_QWORD *)(v27 + 128) = 0LL;
        *v32 |= 4u;
        if ( *(_DWORD *)(v24 + 28) > 1u )
          *(_QWORD *)(v16 + 16) &= ~1uLL;
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_DWORD *)(v24 + 28) )
          {
            v34 = *(_QWORD *)(v27 + 112);
            *(_DWORD *)(v27 + 152) = 0;
            LatencyIdleState = PopPepComponentGetLatencyIdleState(v16 + 208LL * v22 + 192, v34);
            v36 = *(_QWORD *)(v27 + 120);
            *(_DWORD *)(v27 + 156) = LatencyIdleState;
            *(_DWORD *)(v27 + 160) = PopPepComponentGetResidencyIdleState(v16 + 208LL * v22 + 192, v36);
            v18 = (__int64 *)(v16 + 72);
            v37 = *(_DWORD *)(v27 + 188) - 1;
            *(_DWORD *)(v27 + 164) = v37;
            ++v22;
            *(_DWORD *)(v27 + 168) = v37;
            *(_DWORD *)(v27 + 172) = v37;
            goto LABEL_16;
          }
          if ( (unsigned __int64)v29 - v16 > v39 - 24 )
            break;
          *v29 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 24LL * j);
          v29[1] = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 24LL * j + 8);
          v29 += 3;
          v40 = v29;
        }
        ExFreePoolWithTag((PVOID)v16, 0x54706550u);
      }
    }
  }
  return v5;
}
