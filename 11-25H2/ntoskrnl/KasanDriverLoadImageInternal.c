/*
 * XREFs of KasanDriverLoadImageInternal @ 0x1404B82E0
 * Callers:
 *     KasanDriverLoadImage @ 0x1404B82C0 (KasanDriverLoadImage.c)
 *     KasanInitializeLoadedModules @ 0x140C15A70 (KasanInitializeLoadedModules.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KasanTrackAddress @ 0x140414470 (KasanTrackAddress.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KasanUnloadInfoCompare @ 0x1405A6430 (KasanUnloadInfoCompare.c)
 *     KasaniSendTelemetryDriver @ 0x1405A73B0 (KasaniSendTelemetryDriver.c)
 *     strncmp @ 0x1406B4820 (strncmp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 Pool2; // rax
  _RTL_BALANCED_NODE *v18; // r13
  unsigned __int64 v19; // r12
  __int64 *j; // rbx
  int v21; // edx
  unsigned int v22; // edi
  unsigned __int64 v23; // rcx
  ULONG_PTR v24; // rdi
  ULONG_PTR v25; // r9
  _BYTE *v26; // rsi
  unsigned __int64 v27; // r15
  size_t v28; // r15
  unsigned __int64 v29; // rbp
  ULONG_PTR *v30; // r15
  ULONG_PTR v31; // rbx
  ULONG_PTR v32; // r9
  _BYTE *v33; // rdi
  KIRQL v34; // al
  __int64 v35; // r8
  unsigned __int64 Root; // rcx
  KIRQL v37; // di
  int v38; // ebx
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rax
  ULONG_PTR *v41; // [rsp+30h] [rbp-58h]
  int v44; // [rsp+A0h] [rbp+18h]
  __int64 *v45; // [rsp+A8h] [rbp+20h]

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
  if ( !byte_140FCDC68 || v9 < 0x40 || (v9 & 0x3F) != 0 || *(_DWORD *)v10 != 2 )
    return 3221225473LL;
  **(_QWORD **)(v10 + 8) = qword_140FC42D0;
  if ( a2 )
    return 0LL;
  v41 = (ULONG_PTR *)(v10 + 64);
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
  if ( !is_mul_ok(v13, 0x10uLL) || 16 * v13 + 40 < 16 * v13 )
    return 3221225621LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v18 = (_RTL_BALANCED_NODE *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_QWORD *)(Pool2 + 32) = v13;
  v19 = 0LL;
  v45 = (__int64 *)(Pool2 + 48);
  for ( j = (__int64 *)(v10 + 80); ; j += 8 )
  {
    if ( v19 >= v13 )
    {
      v34 = KeAcquireSpinLockRaiseToDpc(&KasanDriverUnloadInfosLock);
      Root = (unsigned __int64)KasanDriverUnloadInfos.Root;
      v37 = v34;
      if ( (*(_BYTE *)&KasanDriverUnloadInfos.0 & 1) != 0 )
      {
        if ( !KasanDriverUnloadInfos.Root )
        {
          LOBYTE(v35) = 0;
          v39 = 0LL;
          goto LABEL_86;
        }
        Root = (unsigned __int64)&KasanDriverUnloadInfos ^ (unsigned __int64)KasanDriverUnloadInfos.Root;
      }
      LOBYTE(v35) = 0;
      v38 = *(_BYTE *)&KasanDriverUnloadInfos.0 & 1;
      v39 = Root;
      if ( !Root )
        goto LABEL_86;
      while ( 1 )
      {
        if ( (int)KasanUnloadInfoCompare(v2, v39, v35) < 0 )
        {
          v40 = *(_QWORD *)v39;
          if ( v38 )
          {
            if ( !v40 )
              goto LABEL_85;
            v40 ^= v39;
          }
          if ( !v40 )
          {
LABEL_85:
            LOBYTE(v35) = 0;
LABEL_86:
            RtlRbInsertNodeEx(&KasanDriverUnloadInfos, (PRTL_BALANCED_NODE)v39, v35, v18);
            if ( byte_140FCDC6B )
              KasaniSendTelemetryDriver(a1);
            KeReleaseSpinLock(&KasanDriverUnloadInfosLock, v37);
            return 0LL;
          }
        }
        else
        {
          v40 = *(_QWORD *)(v39 + 8);
          if ( v38 )
          {
            if ( !v40 )
              goto LABEL_78;
            v40 ^= v39;
          }
          if ( !v40 )
          {
LABEL_78:
            LOBYTE(v35) = 1;
            goto LABEL_86;
          }
        }
        v39 = v40;
      }
    }
    v44 = KasanTrackAddress(*(j - 2), *j, 0);
    v22 = v44;
    if ( v44 < 0 )
      break;
    v23 = *j;
    v24 = *(j - 1);
    v25 = *(j - 2);
    if ( byte_140FCDC68 )
    {
      if ( v25 < 0xFFFF800000000000uLL )
        KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v25, 0LL);
      if ( (v25 & 7) != 0 )
        KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v25, 8uLL);
      if ( v24 > v23 )
        KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v24, *j);
      if ( v25 + v23 < v25 )
        KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v25, *j);
      v26 = (_BYTE *)(KasaniShadow + ((v25 + 0x800000000000LL) >> 3));
      v27 = v23 + (((_BYTE)v24 - 1) & 7) - (unsigned __int64)(((_BYTE)v23 - 1) & 7) - v24;
      if ( v24 >> 3 )
      {
        memset_0((void *)(KasaniShadow + ((v25 + 0x800000000000LL) >> 3)), 0, v24 >> 3);
        v26 += v24 >> 3;
      }
      if ( (v24 & 7) != 0 )
        *v26++ = v24 & 7;
      v28 = v27 >> 3;
      if ( v28 )
      {
        LOBYTE(v21) = -124;
        memset_0(v26, v21, v28);
      }
    }
    ++v19;
    *(v45 - 1) = *(j - 2);
    *v45 = *j;
    v45 += 2;
  }
  v29 = 0LL;
  if ( v19 )
  {
    v30 = v41;
    do
    {
      v31 = v30[2];
      v32 = *v30;
      if ( byte_140FCDC68 )
      {
        if ( v32 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v32, 0LL);
        if ( (v32 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v32, 8uLL);
        if ( v32 + v31 < v32 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v32, v30[2]);
        v33 = (_BYTE *)(KasaniShadow + ((v32 + 0x800000000000LL) >> 3));
        if ( v31 >> 3 )
        {
          memset_0((void *)(KasaniShadow + ((v32 + 0x800000000000LL) >> 3)), 0, v31 >> 3);
          v33 += v31 >> 3;
        }
        if ( (v31 & 7) != 0 )
          *v33 = v31 & 7;
      }
      ++v29;
      v30 += 8;
    }
    while ( v29 < v19 );
    v22 = v44;
  }
  ExFreePoolWithTag(v18, 0);
  return v22;
}
