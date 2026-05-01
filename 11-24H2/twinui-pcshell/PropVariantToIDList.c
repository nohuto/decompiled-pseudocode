/*
 * XREFs of PropVariantToIDList @ 0x1805ECF9C
 * Callers:
 *     ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18029093C (-GetUnpackagedAppPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@.c)
 *     ?GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z @ 0x1805E5C10 (-GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1801C1094 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1805E8BB0 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     ?_GetIDListFromObject@@YAJPEAUIUnknown@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x1805EC394 (-_GetIDListFromObject@@YAJPEAUIUnknown@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     IDListContainerIsConsistent @ 0x1805ECF4C (IDListContainerIsConsistent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PropVariantToIDList(unsigned __int16 *a1, struct _ITEMIDLIST **a2)
{
  unsigned int v3; // ecx
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edx
  struct IUnknown *v12; // rcx
  struct IUnknown **v14; // rcx
  __int64 v15; // rdx
  const ITEMIDLIST *v16; // rdi
  const struct _ITEMIDLIST *v17; // rcx
  int (__fastcall ***v18)(_QWORD, GUID *, IStream **); // rcx
  void *v19; // rcx
  ITEMIDLIST *v20; // rdi
  void *pv; // [rsp+30h] [rbp-20h] BYREF
  IStream *pstm; // [rsp+38h] [rbp-18h] BYREF
  ULARGE_INTEGER pui; // [rsp+40h] [rbp-10h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  v5 = -2147024809;
  if ( v3 > 0x14 )
  {
    if ( v3 != 21 )
    {
      if ( v3 != 31 )
      {
        switch ( v3 )
        {
          case 0x42u:
            v18 = (int (__fastcall ***)(_QWORD, GUID *, IStream **))*((_QWORD *)a1 + 1);
            pstm = 0LL;
            if ( (**v18)(v18, &GUID_0000000c_0000_0000_c000_000000000046, &pstm) >= 0 )
            {
              pui.QuadPart = 0LL;
              v5 = IStream_Size(pstm, &pui);
              if ( (v5 & 0x80000000) == 0 )
              {
                v5 = -2147024809;
                if ( !pui.HighPart )
                {
                  pv = 0LL;
                  v5 = CTCoAllocPolicy::Alloc(v19, 1, pui.LowPart, &pv);
                  if ( (v5 & 0x80000000) == 0 )
                  {
                    v20 = (ITEMIDLIST *)pv;
                    v5 = IStream_Read(pstm, pv, pui.LowPart);
                    if ( (v5 & 0x80000000) == 0 )
                    {
                      v5 = -2147024809;
                      if ( IDListContainerIsConsistent(v20, pui.LowPart) )
                      {
                        *a2 = v20;
                        v20 = 0LL;
                        v5 = 0;
                      }
                    }
                    CoTaskMemFree(v20);
                  }
                }
              }
              (*(void (__fastcall **)(IStream *))(*(_QWORD *)pstm + 16LL))(pstm);
            }
            return v5;
          case 0x1011u:
            if ( !IDListContainerIsConsistent(*((LPCITEMIDLIST *)a1 + 2), *((_DWORD *)a1 + 2)) )
              return v5;
            v17 = (const struct _ITEMIDLIST *)*((_QWORD *)a1 + 2);
            break;
          case 0x2011u:
            if ( SafeArrayGetDim(*((SAFEARRAY **)a1 + 1)) != 1 )
              return v5;
            v15 = *((_QWORD *)a1 + 1);
            v16 = *(const ITEMIDLIST **)(v15 + 16);
            if ( !IDListContainerIsConsistent(v16, *(_DWORD *)(v15 + 24)) )
              return v5;
            v17 = v16;
            break;
          case 0x4009u:
            v14 = (struct IUnknown **)*((_QWORD *)a1 + 1);
            if ( !v14 )
              return v5;
            v12 = *v14;
            return (unsigned int)_GetIDListFromObject(v12, a2);
          default:
            return v5;
        }
        return (unsigned int)SHILClone(v17, a2);
      }
      return (unsigned int)SHParseDisplayName(*((PCWSTR *)a1 + 1), 0LL, a2, 0, 0LL);
    }
    goto LABEL_38;
  }
  if ( v3 == 20 )
  {
LABEL_38:
    if ( *((_QWORD *)a1 + 1) >= 0xFFFFuLL )
      return v5;
    v11 = *((_DWORD *)a1 + 2);
    return (unsigned int)SHGetSpecialFolderLocation(0LL, v11 | 0x8000, a2);
  }
  v6 = v3 - 2;
  if ( !v6 )
  {
    v11 = (__int16)a1[4];
    return (unsigned int)SHGetSpecialFolderLocation(0LL, v11 | 0x8000, a2);
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 5;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 4;
        if ( v10 )
        {
          if ( v10 != 6 )
            return v5;
          goto LABEL_9;
        }
      }
      v12 = (struct IUnknown *)*((_QWORD *)a1 + 1);
      return (unsigned int)_GetIDListFromObject(v12, a2);
    }
    return (unsigned int)SHParseDisplayName(*((PCWSTR *)a1 + 1), 0LL, a2, 0, 0LL);
  }
LABEL_9:
  v11 = *((_DWORD *)a1 + 2);
  if ( v11 < 0xFFFF )
    return (unsigned int)SHGetSpecialFolderLocation(0LL, v11 | 0x8000, a2);
  return v5;
}
