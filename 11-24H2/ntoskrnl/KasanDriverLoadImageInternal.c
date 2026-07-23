/*
 * XREFs of KasanDriverLoadImageInternal @ 0x1404B24C0
 * Callers:
 *     KasanDriverLoadImage @ 0x1404B24A0 (KasanDriverLoadImage.c)
 *     KasanInitializeLoadedModules @ 0x140C28B50 (KasanInitializeLoadedModules.c)
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     KasanTrackAddress @ 0x14044E740 (KasanTrackAddress.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KasanUnloadInfoCompare @ 0x1405A6D30 (KasanUnloadInfoCompare.c)
 *     KasaniSendTelemetryDriver @ 0x1405A7CB0 (KasaniSendTelemetryDriver.c)
 *     strncmp @ 0x1406C0A20 (strncmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KasanDriverLoadImageInternal(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdx
  unsigned __int16 v6; // si
  unsigned __int64 v7; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v17; // rax
  __int64 Pool2; // rax
  _RTL_BALANCED_NODE *v19; // r13
  unsigned __int64 v20; // r12
  __int64 *j; // rbx
  int v22; // edx
  unsigned int v23; // edi
  unsigned __int64 v24; // rcx
  ULONG_PTR v25; // rdi
  ULONG_PTR v26; // r9
  _BYTE *v27; // rsi
  unsigned __int64 v28; // r15
  size_t v29; // r15
  unsigned __int64 v30; // rbp
  ULONG_PTR *v31; // r15
  ULONG_PTR v32; // rbx
  ULONG_PTR v33; // r9
  _BYTE *v34; // rdi
  KIRQL v35; // al
  __int64 v36; // r8
  unsigned __int64 Root; // rcx
  KIRQL v38; // di
  int v39; // ebx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rax
  ULONG_PTR *v42; // [rsp+30h] [rbp-58h]
  int v45; // [rsp+A0h] [rbp+18h]
  __int64 *v46; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 48);
  v4 = v2 + *(unsigned int *)(a1 + 152);
  if ( v2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 0LL;
  if ( *(_WORD *)v2 != 23117 )
    return 0LL;
  v5 = v2 + *(unsigned int *)(v2 + 60);
  if ( v5 < v2 || v2 <= 0x7FFFFFFEFFFFLL && (v5 + 263 < v5 || v5 + 263 > 0x7FFFFFFEFFFFLL) )
    return 0LL;
  if ( *(_DWORD *)v5 != 17744 || !v5 )
    return 0LL;
  v6 = *(_WORD *)(v5 + 6);
  v7 = v5 + *(unsigned __int16 *)(v5 + 20) + 24LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= v6 )
      return 0LL;
    if ( !strncmp((const char *)v7, "KASAN", 8uLL) )
      break;
    v7 += 40LL;
  }
  if ( !v7 )
    return 0LL;
  v9 = *(unsigned int *)(v7 + 8);
  v10 = v2 + *(unsigned int *)(v7 + 12);
  if ( !v10 )
    return 0LL;
  if ( !byte_140FCECA8 || v9 < 0x40 || (v9 & 0x3F) != 0 || *(_DWORD *)v10 != 2 )
    return 3221225473LL;
  **(_QWORD **)(v10 + 8) = qword_140FC52D8;
  if ( a2 )
    return 0LL;
  v42 = (ULONG_PTR *)(v10 + 64);
  v11 = 0LL;
  v12 = (unsigned __int64 *)(v10 + 72);
  v13 = (v9 - 64) >> 6;
  while ( v11 < v13 )
  {
    v14 = v12[1];
    if ( !v14 )
      return 3221225473LL;
    if ( *v12 > v14 )
      return 3221225473LL;
    v15 = *(v12 - 1);
    if ( v15 < v2 || v15 >= v4 )
      return 3221225473LL;
    if ( v15 + v14 < v15 )
      return 3221225621LL;
    if ( v15 + v14 > v4 )
      return 3221225473LL;
    ++v11;
    v12 += 8;
  }
  v17 = 16 * v13;
  if ( !is_mul_ok(v13, 0x10uLL) || v17 + 40 < v17 )
    return 3221225621LL;
  Pool2 = ExAllocatePool2(0x40uLL, v17 + 40, 0x6E55614Bu);
  v19 = (_RTL_BALANCED_NODE *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_QWORD *)(Pool2 + 32) = v13;
  v20 = 0LL;
  v46 = (__int64 *)(Pool2 + 48);
  for ( j = (__int64 *)(v10 + 80); ; j += 8 )
  {
    if ( v20 >= v13 )
    {
      v35 = KeAcquireSpinLockRaiseToDpc(&KasanDriverUnloadInfosLock);
      Root = (unsigned __int64)KasanDriverUnloadInfos.Root;
      v38 = v35;
      if ( (*(_BYTE *)&KasanDriverUnloadInfos.0 & 1) != 0 )
      {
        if ( !KasanDriverUnloadInfos.Root )
        {
          LOBYTE(v36) = 0;
          v40 = 0LL;
          goto LABEL_86;
        }
        Root = (unsigned __int64)&KasanDriverUnloadInfos ^ (unsigned __int64)KasanDriverUnloadInfos.Root;
      }
      LOBYTE(v36) = 0;
      v39 = *(_BYTE *)&KasanDriverUnloadInfos.0 & 1;
      v40 = Root;
      if ( !Root )
        goto LABEL_86;
      while ( 1 )
      {
        if ( (int)KasanUnloadInfoCompare(v2, v40, v36) < 0 )
        {
          v41 = *(_QWORD *)v40;
          if ( v39 )
          {
            if ( !v41 )
              goto LABEL_85;
            v41 ^= v40;
          }
          if ( !v41 )
          {
LABEL_85:
            LOBYTE(v36) = 0;
LABEL_86:
            RtlRbInsertNodeEx(&KasanDriverUnloadInfos, (PRTL_BALANCED_NODE)v40, v36, v19);
            if ( byte_140FCECAB )
              KasaniSendTelemetryDriver(a1);
            KeReleaseSpinLock(&KasanDriverUnloadInfosLock, v38);
            return 0LL;
          }
        }
        else
        {
          v41 = *(_QWORD *)(v40 + 8);
          if ( v39 )
          {
            if ( !v41 )
              goto LABEL_78;
            v41 ^= v40;
          }
          if ( !v41 )
          {
LABEL_78:
            LOBYTE(v36) = 1;
            goto LABEL_86;
          }
        }
        v40 = v41;
      }
    }
    v45 = KasanTrackAddress(*(j - 2), *j, 0LL);
    v23 = v45;
    if ( v45 < 0 )
      break;
    v24 = *j;
    v25 = *(j - 1);
    v26 = *(j - 2);
    if ( byte_140FCECA8 )
    {
      if ( v26 < 0xFFFF800000000000uLL )
        KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v26, 0LL);
      if ( (v26 & 7) != 0 )
        KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v26, 8uLL);
      if ( v25 > v24 )
        KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v25, *j);
      if ( v26 + v24 < v26 )
        KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v26, *j);
      v27 = (_BYTE *)(KasaniShadow + ((v26 + 0x800000000000LL) >> 3));
      v28 = v24 + (((_BYTE)v25 - 1) & 7) - (unsigned __int64)(((_BYTE)v24 - 1) & 7) - v25;
      if ( v25 >> 3 )
      {
        memset_0((void *)(KasaniShadow + ((v26 + 0x800000000000LL) >> 3)), 0, v25 >> 3);
        v27 += v25 >> 3;
      }
      if ( (v25 & 7) != 0 )
        *v27++ = v25 & 7;
      v29 = v28 >> 3;
      if ( v29 )
      {
        LOBYTE(v22) = -124;
        memset_0(v27, v22, v29);
      }
    }
    ++v20;
    *(v46 - 1) = *(j - 2);
    *v46 = *j;
    v46 += 2;
  }
  v30 = 0LL;
  if ( v20 )
  {
    v31 = v42;
    do
    {
      v32 = v31[2];
      v33 = *v31;
      if ( byte_140FCECA8 )
      {
        if ( v33 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v33, 0LL);
        if ( (v33 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v33, 8uLL);
        if ( v33 + v32 < v33 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v33, v31[2]);
        v34 = (_BYTE *)(KasaniShadow + ((v33 + 0x800000000000LL) >> 3));
        if ( v32 >> 3 )
        {
          memset_0((void *)(KasaniShadow + ((v33 + 0x800000000000LL) >> 3)), 0, v32 >> 3);
          v34 += v32 >> 3;
        }
        if ( (v32 & 7) != 0 )
          *v34 = v32 & 7;
      }
      ++v30;
      v31 += 8;
    }
    while ( v30 < v20 );
    v23 = v45;
  }
  ExFreePoolWithTag(v19, 0);
  return v23;
}
