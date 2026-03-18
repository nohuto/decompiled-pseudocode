/*
 * XREFs of HalpIommuAllocateDmaDomain @ 0x1405534C4
 * Callers:
 *     HalpIommuInitializeDmar @ 0x140553FDC (HalpIommuInitializeDmar.c)
 *     IommuDomainCreate @ 0x140703C70 (IommuDomainCreate.c)
 *     IommuDomainCreateEx @ 0x140703CA0 (IommuDomainCreateEx.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1403AD858 (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpGetCpuInfo @ 0x14048CB70 (HalpGetCpuInfo.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140553C24 (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuFreeDmaDomain @ 0x140553CB8 (HalpIommuFreeDmaDomain.c)
 *     HalpIommuGetPageTableType @ 0x140553DE0 (HalpIommuGetPageTableType.c)
 *     HalpIommuCreateDmarPageTable @ 0x14056788C (HalpIommuCreateDmarPageTable.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x14057485C (HalpBuddyAllocatorCreateAllocator.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpIommuAllocateDmaDomain(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4, ULONG_PTR *a5)
{
  int PageTableType; // edi
  void *v8; // rax
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  _BYTE *v13; // r13
  char v14; // r15
  char v15; // r14
  int v16; // eax
  __int64 v17; // r8
  bool v18; // zf
  unsigned __int32 v19; // eax
  _DWORD *v20; // r8
  __int64 *v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 v23; // r14
  unsigned __int64 v25; // rdx
  unsigned __int8 v26[2]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned int v27; // [rsp+44h] [rbp-3Ch]
  int v28; // [rsp+48h] [rbp-38h] BYREF
  int v29; // [rsp+4Ch] [rbp-34h]
  int v30; // [rsp+50h] [rbp-30h]
  _DWORD *v31; // [rsp+58h] [rbp-28h] BYREF
  ULONG_PTR *v32; // [rsp+60h] [rbp-20h]
  __int64 v33; // [rsp+68h] [rbp-18h] BYREF
  bool v34; // [rsp+70h] [rbp-10h]
  __int16 v35; // [rsp+71h] [rbp-Fh]
  char v36; // [rsp+73h] [rbp-Dh]

  v28 = 0;
  PageTableType = 0;
  v31 = a3;
  v27 = a1;
  v32 = a5;
  v26[0] = 0;
  v8 = (void *)HalpMmAllocCtxAlloc(a1, 112LL);
  v9 = (ULONG_PTR)v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x70uLL);
    v10 = v27;
    v11 = 4LL;
    *(_DWORD *)(v9 + 56) = -1;
    v12 = (unsigned int)v10;
    *(_DWORD *)(v9 + 8) = 4;
    if ( (_DWORD)v10 )
    {
      v12 = (unsigned int)(v10 - 1);
      if ( (_DWORD)v10 == 1 )
      {
        v14 = 0;
        v13 = (_BYTE *)(v9 + 52);
        v16 = 0;
        v15 = 0;
        goto LABEL_14;
      }
      v12 = (unsigned int)(v10 - 2);
      if ( (_DWORD)v10 == 2 )
      {
        v14 = 0;
        *(_BYTE *)(v9 + 52) = 1;
        v15 = 0;
        v13 = (_BYTE *)(v9 + 52);
LABEL_13:
        v16 = 2;
LABEL_14:
        *(_DWORD *)(v9 + 12) = v16;
        *(_QWORD *)(v9 + 80) = v9 + 72;
        *(_QWORD *)(v9 + 72) = v9 + 72;
        v18 = HalpHvIommu == 0;
        *(_DWORD *)(v9 + 8) = v10;
        *(_DWORD *)(v9 + 88) = 0;
        if ( !v18 )
          *(_QWORD *)(v9 + 104) = 0LL;
        if ( (_DWORD)v10 == 2 )
          goto LABEL_17;
        v29 = HalpIommuMaxPageTableDepth;
        v17 = (unsigned int)HalpIommuMinPageTableDepth;
        v30 = HalpIommuMinPageTableDepth;
        if ( *v13 )
        {
          v29 = 4;
          v30 = 4;
          if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline()
            && HalpGetCpuInfo(0LL, 0LL, 0LL, v26) )
          {
            v10 = v27;
            v12 = (unsigned __int64)v13;
            if ( v26[0] == 2 )
            {
              v17 = 4LL;
              v29 = 4;
              v30 = 4;
            }
          }
          else
          {
            v10 = v27;
          }
        }
        if ( HalpHvIommu )
        {
          if ( (_DWORD)v10 == 1 )
          {
            *(_DWORD *)(v9 + 48) = 0;
            goto LABEL_40;
          }
          if ( *v13 )
            v18 = HalpHvParaVirtIommuDomain == 0;
          else
            v18 = HalpHvIommuDeviceDomain == 0;
          if ( !v18 )
          {
            if ( (_DWORD)v10 != 3 )
            {
              v19 = _InterlockedIncrement(&HalpIommuDomainId);
              *(_DWORD *)(v9 + 48) = v19;
              if ( !(_DWORD)v10 )
              {
                v33 = v19;
                BYTE4(v33) = *(_BYTE *)(v9 + 52);
                v36 = 0;
                v34 = (a2 & 0x4000000000000000LL) != 0;
                v35 = a2 < 0;
                PageTableType = guard_dispatch_icall_no_overrides(&v33, v10, v17, v11);
                if ( PageTableType < 0 )
                  goto LABEL_64;
                LODWORD(v10) = v27;
              }
              v15 = v14;
              if ( !(_DWORD)v10 )
                v15 = 0;
LABEL_40:
              if ( v15 )
              {
                LOBYTE(v12) = *(_BYTE *)(v9 + 52);
                PageTableType = HalpIommuGetPageTableType(v12, &v28);
                if ( PageTableType < 0 )
                  goto LABEL_64;
                PageTableType = HalpIommuCreateDmarPageTable(v28, v30, v29);
                if ( PageTableType < 0 )
                  goto LABEL_64;
              }
              v20 = v31;
              if ( v31 )
              {
                if ( !v14 && *v31 )
                {
                  PageTableType = -1073741811;
                  goto LABEL_64;
                }
                *(_QWORD *)(v9 + 64) = 0LL;
                if ( *v20 )
                {
                  if ( *v20 != 1 )
                    goto LABEL_7;
                  PageTableType = HalpBuddyAllocatorCreateAllocator((unsigned int)v20[1]);
                  if ( PageTableType < 0 )
                    goto LABEL_64;
                }
                else
                {
                  PageTableType = 0;
                }
              }
              v21 = a4;
              if ( !a4 )
              {
LABEL_58:
                *v32 = v9;
                return (unsigned int)PageTableType;
              }
              while ( 1 )
              {
                v22 = *(_QWORD *)(v9 + 64);
                v23 = v21[1] & 0xFFFFFFFFFFFFF000uLL;
                if ( v22 )
                {
                  PageTableType = guard_dispatch_icall_no_overrides(v22, v21[1] & 0xFFFFFFFFFFFFF000uLL, v21[2], v11);
                  if ( PageTableType < 0 )
                    break;
                }
                if ( *((_BYTE *)v21 + 24) )
                {
                  PageTableType = HalpIommuDomainMapLogicalRange(v9, 3, v23, (unsigned int)v21[2] << 12, v23);
                  if ( PageTableType < 0 )
                    break;
                }
                v21 = (__int64 *)*v21;
                if ( !v21 )
                  goto LABEL_58;
              }
              while ( a4 != v21 )
              {
                if ( *((_BYTE *)a4 + 24) )
                {
                  v25 = a4[1] & 0xFFFFFFFFFFFFF000uLL;
                  v31 = (_DWORD *)(a4[2] << 12);
                  HalpIommuDomainUnmapLogicalRange(v9, v25, (unsigned __int64 *)&v31, 0);
                }
                a4 = (__int64 *)*a4;
              }
LABEL_64:
              HalpIommuFreeDmaDomain(v9);
              return (unsigned int)PageTableType;
            }
LABEL_39:
            v15 = v14;
            goto LABEL_40;
          }
        }
        else if ( (a2 & 0x4000000000000000LL) == 0 )
        {
          *(_QWORD *)(v9 + 32) = 0LL;
          *(_QWORD *)(v9 + 24) = v9 + 16;
          *(_QWORD *)(v9 + 16) = v9 + 16;
          goto LABEL_39;
        }
LABEL_17:
        PageTableType = -1073741637;
        goto LABEL_64;
      }
      if ( (_DWORD)v10 != 3 )
      {
LABEL_7:
        PageTableType = -1073741585;
        goto LABEL_64;
      }
      v13 = (_BYTE *)(v9 + 52);
      *(_BYTE *)(v9 + 52) = 1;
    }
    else
    {
      v13 = (_BYTE *)(v9 + 52);
    }
    v14 = 1;
    v15 = 1;
    goto LABEL_13;
  }
  return (unsigned int)-1073741670;
}
