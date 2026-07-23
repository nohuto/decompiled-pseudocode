/*
 * XREFs of RtlpMuiRegFreeRegistryInfo @ 0x1800871E0
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x180087080 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800871E0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180088D50 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180120B18 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800871E0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegFreeStringPool @ 0x180087410 (RtlpMuiRegFreeStringPool.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18008D024 (RtlpMuiRegFreeLanguageConfigList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 */

__int64 __fastcall RtlpMuiRegFreeRegistryInfo(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  void *v4; // r8
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // r8
  __int64 v12; // rcx
  void *v13; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = 4095;
  if ( (a2 & 0x400) == 0 )
    v3 = a2;
  if ( (v3 & 1) != 0 )
  {
    v4 = *(void **)(a1 + 24);
    if ( v4 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    *(_DWORD *)a1 &= ~1u;
  }
  if ( (v3 & 2) != 0 )
  {
    v5 = *(void **)(a1 + 32);
    if ( v5 )
    {
      if ( (*(_BYTE *)a1 & 2) != 0 )
        RtlpMuiRegFreeStringPool(v5);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    *(_DWORD *)a1 &= ~2u;
  }
  if ( (v3 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      if ( (*(_BYTE *)a1 & 4) != 0 )
        RtlpMuiRegFreeLanguageConfigList();
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    *(_DWORD *)a1 &= ~4u;
  }
  if ( (v3 & 8) != 0 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( (*(_BYTE *)a1 & 8) != 0 )
        RtlpMuiRegFreeLanguageConfigList();
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    *(_DWORD *)a1 &= ~8u;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( v6 )
    {
      if ( (*(_BYTE *)a1 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 40) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(_QWORD *)(a1 + 56));
      }
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x10u;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      if ( (*(_BYTE *)a1 & 0x20) != 0 )
      {
        *(_DWORD *)(v7 + 40) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(_QWORD *)(a1 + 64));
      }
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x20u;
  }
  if ( (v3 & 0x40) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 88);
    if ( v8 )
    {
      if ( (*(_BYTE *)a1 & 0x40) != 0 )
      {
        *(_DWORD *)(v8 + 40) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(_QWORD *)(a1 + 88));
      }
      *(_QWORD *)(a1 + 88) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x40u;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 80);
    if ( v9 )
    {
      if ( *(char *)a1 < 0 )
      {
        *(_DWORD *)(v9 + 40) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(_QWORD *)(a1 + 80));
      }
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x80u;
  }
  if ( (v3 & 0x200) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 96);
    if ( v10 )
    {
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        *(_DWORD *)(v10 + 40) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(_QWORD *)(a1 + 96));
      }
      *(_QWORD *)(a1 + 96) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x200u;
  }
  if ( (v3 & 0x800) != 0 )
  {
    v11 = *(void **)(a1 + 136);
    if ( v11 )
    {
      if ( (*(_DWORD *)a1 & 0x800) != 0 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x800u;
  }
  if ( (v3 & 0xFFF) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 104);
    if ( v12 )
    {
      RtlpMuiRegFreeRegistryInfo(v12, v3);
      v13 = *(void **)(a1 + 104);
      if ( v13 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  return 0LL;
}
