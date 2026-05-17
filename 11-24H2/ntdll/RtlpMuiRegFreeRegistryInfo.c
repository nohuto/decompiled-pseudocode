/*
 * XREFs of RtlpMuiRegFreeRegistryInfo @ 0x1800EB0C0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800EAF10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800EAF60 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800EB0C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     _RtlpMuiRegLoadInstalled @ 0x18011F248 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x180035694 (RtlpMuiRegFreeLanguageConfigList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180035EE0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800EB0C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegFreeStringPool @ 0x1800EB2F0 (RtlpMuiRegFreeStringPool.c)
 */

__int64 __fastcall RtlpMuiRegFreeRegistryInfo(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = 4095;
  if ( (a2 & 0x400) == 0 )
    v3 = a2;
  if ( (v3 & 1) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    *(_DWORD *)a1 &= ~1u;
  }
  if ( (v3 & 2) != 0 )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( (*(_BYTE *)a1 & 2) != 0 )
        RtlpMuiRegFreeStringPool();
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    *(_DWORD *)a1 &= ~2u;
  }
  if ( (v3 & 4) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    if ( v5 )
    {
      if ( (*(_BYTE *)a1 & 4) != 0 )
        RtlpMuiRegFreeLanguageConfigList(v5);
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    *(_DWORD *)a1 &= ~4u;
  }
  if ( (v3 & 8) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
    {
      if ( (*(_BYTE *)a1 & 8) != 0 )
        RtlpMuiRegFreeLanguageConfigList(v6);
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    *(_DWORD *)a1 &= ~8u;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 56);
    if ( v7 )
    {
      if ( (*(_BYTE *)a1 & 0x10) != 0 )
      {
        *(_DWORD *)(v7 + 40) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(_QWORD *)(a1 + 56));
      }
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x10u;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      if ( (*(_BYTE *)a1 & 0x20) != 0 )
      {
        *(_DWORD *)(v8 + 40) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(_QWORD *)(a1 + 64));
      }
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x20u;
  }
  if ( (v3 & 0x40) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 88);
    if ( v9 )
    {
      if ( (*(_BYTE *)a1 & 0x40) != 0 )
      {
        *(_DWORD *)(v9 + 40) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(_QWORD *)(a1 + 88));
      }
      *(_QWORD *)(a1 + 88) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x40u;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 80);
    if ( v10 )
    {
      if ( *(char *)a1 < 0 )
      {
        *(_DWORD *)(v10 + 40) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(_QWORD *)(a1 + 80));
      }
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x80u;
  }
  if ( (v3 & 0x200) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 96);
    if ( v11 )
    {
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        *(_DWORD *)(v11 + 40) &= ~0x40u;
        RtlpMuiRegFreeLanguageList(*(_QWORD *)(a1 + 96));
      }
      *(_QWORD *)(a1 + 96) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x200u;
  }
  if ( (v3 & 0x800) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 136);
    if ( v12 )
    {
      if ( (*(_DWORD *)a1 & 0x800) != 0 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    *(_DWORD *)a1 &= ~0x800u;
  }
  if ( (v3 & 0xFFF) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 104);
    if ( v13 )
    {
      RtlpMuiRegFreeRegistryInfo(v13, v3);
      v14 = *(_QWORD *)(a1 + 104);
      if ( v14 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  return 0LL;
}
