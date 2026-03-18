/*
 * XREFs of MiInvalidateCollidedIos @ 0x14036FA08
 * Callers:
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiReleaseInPageRefs @ 0x14036FDF4 (MiReleaseInPageRefs.c)
 *     MiUpdateTransitionPteFrame @ 0x140395BFC (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiInvalidateCollidedIos(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r12d
  _QWORD *v4; // r14
  __int64 v5; // r13
  _QWORD *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rax
  _QWORD *v9; // rbx
  ULONG_PTR v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r15
  _DWORD *v18; // rdx
  _QWORD *v19; // r8
  _DWORD *v20; // r10
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // eax
  __int64 updated; // [rsp+50h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 80);
  v2 = 1;
  if ( (*(_DWORD *)(a1 + 192) & 0x40) != 0 )
  {
    v13 = (_QWORD *)(a1 + 16);
    v14 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v14 + 8) != a1 + 16 || (v15 = *(_QWORD **)(a1 + 24), (_QWORD *)*v15 != v13) )
LABEL_10:
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = *(_QWORD *)(a1 + 320);
    v5 = *(_QWORD *)(a1 + 328);
    v17 = 48 * v16 - 0x220000000000LL;
    if ( v1 < 0 )
    {
      MiReleaseInPageRefs(48 * v16 - 0x220000000000LL);
      result = 0LL;
      v13[1] = v13;
      *v13 = v13;
      return result;
    }
    v18 = (_DWORD *)(v5 + 272);
    v4 = (_QWORD *)(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL);
    v2 = 0;
    if ( *(_QWORD *)(v5 + 256) )
      v18 = *(_DWORD **)(v5 + 256);
    v19 = v18 + 12;
    v20 = v18 + 10;
    v21 = (((v18[8] + v18[11]) & 0xFFF) + (unsigned __int64)(unsigned int)v18[10] + 4095) >> 12;
    v22 = (unsigned __int64)&v20[2 * v21];
    v23 = *(_QWORD *)(48LL * *v19 - 0x220000000000LL + 8) | 0x8000000000000000uLL;
    if ( (unsigned __int64)v4 >= v23
      && (v24 = (__int64)((__int64)v4 - v23) >> 3, v24 < v21)
      && (v25 = 48LL * v19[v24] - 0x220000000000LL, v4 == (_QWORD *)(*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL)) )
    {
LABEL_23:
      v2 = 1;
      v26 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL);
      updated = MiUpdateTransitionPteFrame(v26, v16);
      v27 = updated;
      v28 = MiPteInShadowRange((unsigned __int64)v4);
      if ( v28 )
      {
        v28 = MiSanitizeShadowPxe();
        v27 = updated;
      }
      *v4 = v27;
      if ( v28 )
        MiWritePteShadow();
      *(_QWORD *)(a1 + 168) = updated;
      *(_QWORD *)(v17 + 16) = *(_QWORD *)(v25 + 16) ^ (*(_QWORD *)(v17 + 16) ^ *(_QWORD *)(v25 + 16)) & 0xFFFFFFFFFFFFFC1FuLL;
    }
    else
    {
      while ( (unsigned __int64)v19 <= v22 )
      {
        v25 = 48LL * *v19 - 0x220000000000LL;
        if ( (_QWORD *)(*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) == v4 )
          goto LABEL_23;
        ++v19;
      }
      v25 = 48 * v16 - 0x220000000000LL;
      *(_DWORD *)(v5 + 180) = 1;
    }
    MiReleaseInPageRefs(v25);
  }
  else
  {
    v4 = 0LL;
    v5 = a1;
  }
  v6 = *(_QWORD **)(v5 + 16);
  while ( v6 != (_QWORD *)(v5 + 16) )
  {
    v8 = v6[38];
    v9 = v6;
    v6 = (_QWORD *)*v6;
    v10 = 48 * v8 - 0x220000000000LL;
    if ( (*(_DWORD *)(a1 + 192) & 0x40) == 0 || (_QWORD *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) == v4 )
    {
      MiReleaseInPageRefs(v10);
      v11 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_10;
      v12 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v12 != v9 )
        goto LABEL_10;
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v9[1] = v9;
      *v9 = v9;
    }
  }
  return v2;
}
