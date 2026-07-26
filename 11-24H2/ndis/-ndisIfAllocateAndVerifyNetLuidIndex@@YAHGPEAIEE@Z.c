/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140163CC0
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14005C760 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x140087DB0 (ndisIfRegisterInterfaceEx.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140088780 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400C9FE0 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     NdisIfAllocateNetLuidIndex @ 0x140147810 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x140147830 (NdisIfAllocateNetLuidIndexEx.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     WPP_RECORDER_SF_dL @ 0x140065B80 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_dllL @ 0x140065DC0 (WPP_RECORDER_SF_dllL.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ndisIfWriteRegistry @ 0x140147640 (ndisIfWriteRegistry.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(__int16 a1, unsigned int *a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  char v5; // bp
  unsigned int v6; // r13d
  unsigned int v7; // esi
  const void **v8; // r15
  unsigned int v9; // r14d
  unsigned int *v11; // r12
  NTSTATUS v12; // eax
  __int64 i; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char v19; // dl
  unsigned int k; // ecx
  unsigned int j; // ecx
  __int64 v22; // r11
  unsigned __int8 v23; // r9
  char *v24; // r10
  __int64 v25; // r13
  unsigned int v26; // r14d
  __int64 Pool2; // rax
  __int64 v28; // rsi
  __int64 v29; // rcx
  _BYTE *v30; // rax
  char *v31; // rcx
  void *v32; // rcx
  void **v33; // rax
  __int64 v34; // rax
  int Timeout; // [rsp+20h] [rbp-88h]
  int Timeouta; // [rsp+20h] [rbp-88h]
  _BYTE *v37; // [rsp+58h] [rbp-50h]
  char *v38; // [rsp+60h] [rbp-48h]
  char v39; // [rsp+C0h] [rbp+18h]

  v4 = 0;
  v5 = a3;
  v6 = 0;
  v38 = 0LL;
  v7 = 0;
  v37 = 0LL;
  v8 = 0LL;
  v39 = 0;
  v9 = 0;
  v11 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, a3, 0xAu, Timeout);
  if ( v5 )
  {
    *v11 = 0;
LABEL_5:
    v12 = KeWaitForSingleObject(&Mutex, Executive, 0, 0, 0LL);
    if ( v12 )
      ndisBugCheckEx(0x24uLL, 1uLL, v12, 1uLL);
    for ( i = qword_14011CA68; ; i = *(_QWORD *)i )
    {
      if ( (__int64 *)i == &qword_14011CA68 )
        goto LABEL_28;
      if ( *(_WORD *)(i + 16) == a1 )
        break;
    }
    v14 = *(_QWORD *)(i + 48);
    v8 = (const void **)i;
    v9 = *(_DWORD *)(i + 40);
    if ( !v5 )
    {
      if ( v9 < (v7 >> 3) + 1 )
      {
        v4 = -1073741072;
      }
      else if ( ((unsigned __int8)(1 << (v7 & 7)) & *(_BYTE *)(((unsigned __int64)v7 >> 3) + v14)) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), 3u, v14, 0xCu, Timeouta);
        v4 = -1073741072;
      }
      goto LABEL_13;
    }
    for ( j = 0; ; ++j )
    {
      if ( j >= v9 )
        goto LABEL_39;
      v22 = j;
      v23 = *(_BYTE *)(j + v14);
      v24 = (char *)(j + v14);
      if ( v23 != 0xFF )
        break;
      v6 += 8;
    }
    v19 = 1;
    for ( k = 0; ; ++k )
    {
      if ( k >= 8 )
        goto LABEL_39;
      if ( (v23 & (unsigned __int8)v19) == 0 )
        break;
      v19 *= 2;
    }
    v38 = v24;
    v6 += k;
    *v24 = v19 | v23;
    v39 = k;
    if ( a4 )
    {
      *(_BYTE *)(*(_QWORD *)(i + 56) + v22) |= v19;
      v37 = (_BYTE *)(v22 + *(_QWORD *)(i + 56));
    }
    if ( !v24 )
    {
LABEL_39:
      if ( 8 * v9 + 1 >= 0x1001 )
      {
        v4 = -1073741670;
LABEL_15:
        KeReleaseMutex(&Mutex, 0);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dllL(*((_QWORD *)WPP_GLOBAL_Control + 8), v15, v16, v17, Timeouta);
        return v4;
      }
    }
LABEL_28:
    if ( !v5 )
    {
LABEL_13:
      if ( !v8 )
        v4 = -1073741072;
      goto LABEL_15;
    }
    if ( v38 )
    {
LABEL_56:
      if ( a4 && (v4 = ndisIfWriteRegistry((__int64)v8)) != 0 )
      {
        if ( v38 )
          *v38 &= ~(1 << v39);
        if ( v37 )
          *v37 &= ~(1 << v39);
      }
      else
      {
        *v11 = v6;
      }
      goto LABEL_15;
    }
    v25 = 0LL;
    if ( v8 )
      v25 = v9;
    v26 = v25 + 1;
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(2 * (v25 + 1) + 64), 1718174798LL);
    v28 = Pool2;
    if ( !Pool2 )
    {
      v4 = -1073741670;
      goto LABEL_15;
    }
    *(_DWORD *)(Pool2 + 40) = v26;
    *(_QWORD *)(Pool2 + 48) = Pool2 + 64;
    *(_WORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 56) = Pool2 + 64 + v26;
    *(_BYTE *)(v25 + Pool2 + 64) = 1;
    v29 = *(_QWORD *)(Pool2 + 56);
    if ( a4 )
    {
      *(_BYTE *)(v29 + v25) = 1;
      v30 = (_BYTE *)((unsigned int)v25 + *(_QWORD *)(Pool2 + 56));
    }
    else
    {
      v30 = v37;
      *(_BYTE *)(v29 + v25) = 0;
    }
    v31 = *(char **)(v28 + 48);
    v37 = v30;
    v39 = 0;
    v38 = &v31[v25];
    if ( v8 )
    {
      memmove(v31, v8[6], (unsigned int)v25);
      memmove(*(void **)(v28 + 56), v8[7], (unsigned int)v25);
      v32 = (void *)*v8;
      if ( *((const void ***)*v8 + 1) != v8 )
        goto LABEL_62;
      v33 = (void **)v8[1];
      if ( *v33 != v8 )
        goto LABEL_62;
      *v33 = v32;
      *((_QWORD *)v32 + 1) = v33;
      ExFreePoolWithTag(v8, 0);
    }
    v34 = qword_14011CA68;
    if ( *(__int64 **)(qword_14011CA68 + 8) == &qword_14011CA68 )
    {
      v6 = 8 * v25;
      v8 = (const void **)v28;
      *(_QWORD *)v28 = qword_14011CA68;
      *(_QWORD *)(v28 + 8) = &qword_14011CA68;
      *(_QWORD *)(v34 + 8) = v28;
      qword_14011CA68 = v28;
      goto LABEL_56;
    }
LABEL_62:
    __fastfail(3u);
  }
  v7 = *v11;
  if ( *v11 <= 0x1000 )
    goto LABEL_5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      11,
      (struct _GUID *)&WPP_0ffebb44763b3fc5c7acd63373d92315_Traceguids,
      *v11);
  }
  return 3221226224LL;
}
