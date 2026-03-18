/*
 * XREFs of PnpGetDeviceDependencyList @ 0x140A7A000
 * Callers:
 *     PiControlGetPropertyData @ 0x140834060 (PiControlGetPropertyData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     RtlStringCchCopyExW @ 0x1404209E0 (RtlStringCchCopyExW.c)
 *     RtlStringCchLengthW @ 0x140433290 (RtlStringCchLengthW.c)
 *     PiListEntryToDependencyEdge @ 0x1404F5E64 (PiListEntryToDependencyEdge.c)
 *     PiGetDependentList @ 0x140830B54 (PiGetDependentList.c)
 *     PiGetProviderList @ 0x1408319BC (PiGetProviderList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140832A80 (PnpReleaseDependencyRelationsLock.c)
 *     PnpUnicodeStringToWstrFree @ 0x140956510 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1409D04B0 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PnpGetDeviceDependencyList(__int64 a1, int a2, wchar_t *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rsi
  int v6; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // edi
  int v9; // ebx
  __int64 *DependentList; // rax
  __int64 v12; // r8
  __int64 *v13; // rcx
  size_t v14; // rsi
  wchar_t *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // r10
  _QWORD *v23; // rax
  _QWORD *v24; // r13
  _QWORD *v25; // r12
  unsigned __int16 *v26; // r12
  wchar_t *v27; // r15
  NTSTRSAFE_PWSTR pszDest; // [rsp+30h] [rbp-38h] BYREF
  size_t cchDest; // [rsp+38h] [rbp-30h] BYREF
  size_t pcchLength; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v31; // [rsp+48h] [rbp-20h]
  __int64 v32; // [rsp+50h] [rbp-18h]
  STRSAFE_PCNZWCH psz[2]; // [rsp+58h] [rbp-10h] BYREF
  _QWORD *v34; // [rsp+B0h] [rbp+48h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = a2;
  CurrentThread = KeGetCurrentThread();
  pcchLength = 0LL;
  cchDest = a4;
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  pszDest = a3;
  psz[0] = 0LL;
  v9 = 0;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v9 = -1073741811;
      PnpReleaseDependencyRelationsLock();
      return (unsigned int)v9;
    }
    DependentList = PiGetDependentList(v5);
  }
  else
  {
    DependentList = PiGetProviderList(v5);
  }
  v12 = *DependentList;
  v13 = DependentList;
  v14 = cchDest;
  v15 = pszDest;
  v31 = DependentList;
  while ( 1 )
  {
    v16 = v8;
    if ( (__int64 *)v12 == v13 )
      break;
    v17 = PiListEntryToDependencyEdge(v12, v6);
    v32 = *v18;
    if ( v6 )
      v19 = *(_QWORD *)(v17 + 40);
    else
      v19 = *(_QWORD *)(v17 + 32);
    v20 = *(_QWORD *)(v19 + 48);
    if ( v20 && (v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL)) != 0 && *(_QWORD *)(v21 + 48) )
    {
      v9 = RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(v21 + 48), 0xC8uLL, &pcchLength);
      if ( v9 < 0 )
        goto LABEL_5;
      v13 = v31;
      v8 += ++pcchLength;
      v12 = v32;
      if ( pcchLength <= v14 )
      {
        v9 = RtlStringCchCopyExW(v15, v14, *(NTSTRSAFE_PCWSTR *)(v22 + 48), &pszDest, &cchDest, 0x800u);
        if ( v9 < 0 )
          goto LABEL_5;
        v15 = pszDest + 1;
        v12 = v32;
        v14 = cchDest - 1;
        v13 = v31;
        --cchDest;
        ++pszDest;
      }
    }
    else
    {
      v23 = (_QWORD *)(v19 + 56);
      v24 = *(_QWORD **)(v19 + 56);
      v34 = (_QWORD *)(v19 + 56);
      while ( v24 != v23 )
      {
        v25 = v24;
        v24 = (_QWORD *)*v24;
        v26 = (unsigned __int16 *)(v25 + 2);
        v9 = PnpUnicodeStringToWstr(psz, 0LL, v26);
        if ( v9 < 0 )
          goto LABEL_5;
        v27 = (wchar_t *)psz[0];
        v9 = RtlStringCchLengthW(psz[0], 0x7FFFuLL, &pcchLength);
        if ( v9 < 0 )
        {
LABEL_34:
          PnpUnicodeStringToWstrFree(v27, (__int64)v26);
          PnpReleaseDependencyRelationsLock();
          goto LABEL_8;
        }
        v8 += ++pcchLength;
        if ( pcchLength <= v14 )
        {
          v9 = RtlStringCchCopyExW(v15, v14, v27, &pszDest, &cchDest, 0x800u);
          if ( v9 < 0 )
            goto LABEL_34;
          v15 = pszDest + 1;
          v14 = cchDest - 1;
          ++pszDest;
          --cchDest;
        }
        PnpUnicodeStringToWstrFree(v27, (__int64)v26);
        v23 = v34;
      }
      if ( v9 < 0 )
        goto LABEL_5;
      v12 = v32;
      v13 = v31;
      v6 = a2;
    }
  }
  if ( v9 >= 0 )
  {
    if ( ++v8 <= a4 )
      a3[v16] = 0;
    else
      v9 = -1073741789;
    PnpReleaseDependencyRelationsLock();
    goto LABEL_6;
  }
LABEL_5:
  PnpReleaseDependencyRelationsLock();
  if ( v9 < 0 )
  {
LABEL_8:
    if ( v9 != -1073741789 )
      return (unsigned int)v9;
  }
LABEL_6:
  if ( a5 )
    *a5 = v8;
  return (unsigned int)v9;
}
