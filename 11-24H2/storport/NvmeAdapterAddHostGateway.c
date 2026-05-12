/*
 * XREFs of NvmeAdapterAddHostGateway @ 0x1400CC698
 * Callers:
 *     StorPortNvmeofExtendedFunction @ 0x140074180 (StorPortNvmeofExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     McTemplateK0qjzuuss_EtwWriteTransfer @ 0x1400CC2D8 (McTemplateK0qjzuuss_EtwWriteTransfer.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterAddHostGateway(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // esi
  char *Pool; // rax
  char *v8; // rdi
  _QWORD *v9; // r14
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  __int16 v11; // ax
  __int16 v12; // cx
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int64 v17; // rbx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // r8

  v6 = 0;
  if ( KeGetCurrentIrql() )
  {
    return (unsigned int)-1056964600;
  }
  else if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    if ( *(_WORD *)a2 == 1 && *(_WORD *)(a2 + 2) >= 0x138u )
    {
      Pool = (char *)RaidAllocatePool(64LL, 488LL, 1179541842LL, *(_QWORD *)(a1 + 8));
      v8 = Pool;
      if ( Pool
        && (memset_0(Pool, 0, 0x1E8uLL),
            v9 = v8 + 24,
            *((_QWORD *)v8 + 4) = v8 + 24,
            *((_QWORD *)v8 + 3) = v8 + 24,
            CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x464E6152u),
            (*((_QWORD *)v8 + 7) = CacheAwareRundownProtection) != 0LL) )
      {
        *(_DWORD *)v8 = 1314277447;
        *((_DWORD *)v8 + 1) = *(unsigned __int8 *)(a2 + 20);
        *((_DWORD *)v8 + 2) = *(unsigned __int8 *)(a2 + 21);
        if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
        {
          *((_QWORD *)v8 + 6) |= 2uLL;
          v11 = *(_WORD *)(a2 + 16);
          if ( !v11 )
            v11 = 60;
          v12 = 10;
          *((_WORD *)v8 + 6) = v11;
          if ( (unsigned __int16)v11 < 0xAu || (v12 = 1440, (unsigned __int16)v11 > 0x5A0u) )
            *((_WORD *)v8 + 6) = v12;
        }
        *((_DWORD *)v8 + 4) = *(unsigned __int16 *)(a2 + 18);
        v13 = (_OWORD *)(a2 + 22);
        v14 = 2LL;
        *((_QWORD *)v8 + 5) = a1;
        *((_QWORD *)v8 + 8) = *(_QWORD *)(a2 + 8);
        v15 = v8 + 72;
        do
        {
          *v15 = *v13;
          v15[1] = v13[1];
          v15[2] = v13[2];
          v15[3] = v13[3];
          v15[4] = v13[4];
          v15[5] = v13[5];
          v15[6] = v13[6];
          v15 += 8;
          v16 = v13[7];
          v13 += 8;
          *(v15 - 1) = v16;
          --v14;
        }
        while ( v14 );
        *(_OWORD *)(v8 + 328) = *(_OWORD *)(a2 + 278);
        *(_OWORD *)(v8 + 344) = *(_OWORD *)(a2 + 294);
        *((_QWORD *)v8 + 46) = v8 + 360;
        *((_QWORD *)v8 + 45) = v8 + 360;
        ExInitializeResourceLite((PERESOURCE)(v8 + 384));
        v17 = *(_QWORD *)(a1 + 592);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 24), 1u);
        v18 = *(_QWORD *)(a1 + 592);
        v19 = *(_QWORD **)(v18 + 8);
        if ( *v19 != v18 )
          __fastfail(3u);
        *((_QWORD *)v8 + 4) = v19;
        *v9 = v18;
        *v19 = v9;
        *(_QWORD *)(v18 + 8) = v9;
        ++*(_DWORD *)(*(_QWORD *)(a1 + 592) + 16LL);
        ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 592) + 24LL));
        KeLeaveCriticalRegion();
        *a3 = v8;
        if ( (byte_14017146A & 2) != 0 )
          McTemplateK0qjzuuss_EtwWriteTransfer(
            a1 + 1032,
            &EventNVMeoFHostGatewayAdded,
            v20,
            *(_DWORD *)(a1 + 56),
            a1 + 1032,
            *(const wchar_t **)(a1 + 1016),
            v8[4],
            v8[8],
            v8 + 72,
            v8 + 328);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v6;
}
