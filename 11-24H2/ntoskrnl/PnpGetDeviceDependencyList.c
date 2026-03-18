/*
 * XREFs of PnpGetDeviceDependencyList @ 0x140A0DA98
 * Callers:
 *     PiControlGetPropertyData @ 0x1408BD4B0 (PiControlGetPropertyData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     RtlStringCchCopyExW @ 0x14041DC50 (RtlStringCchCopyExW.c)
 *     RtlStringCchLengthW @ 0x14042EE70 (RtlStringCchLengthW.c)
 *     PiListEntryToDependencyEdge @ 0x1404F8618 (PiListEntryToDependencyEdge.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B7510 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1409D52F0 (PnpUnicodeStringToWstr.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140A0F814 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x140A0FB40 (PiGetProviderList.c)
 *     PiGetDependentList @ 0x140A0FEBC (PiGetDependentList.c)
 */

__int64 __fastcall PnpGetDeviceDependencyList(__int64 a1, int a2, wchar_t *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rsi
  int v6; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // edi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *DependentList; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rcx
  size_t v18; // rsi
  wchar_t *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // r8
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r10
  _QWORD *v30; // rax
  _QWORD *v31; // r13
  _QWORD *v32; // r12
  unsigned __int16 *v33; // r12
  wchar_t *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  NTSTRSAFE_PWSTR pszDest; // [rsp+30h] [rbp-38h] BYREF
  size_t cchDest; // [rsp+38h] [rbp-30h] BYREF
  size_t pcchLength; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v41; // [rsp+48h] [rbp-20h]
  __int64 v42; // [rsp+50h] [rbp-18h]
  STRSAFE_PCNZWCH psz[2]; // [rsp+58h] [rbp-10h] BYREF
  _QWORD *i; // [rsp+B0h] [rbp+48h]

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
      PnpReleaseDependencyRelationsLock(v11, v10, v12);
      return (unsigned int)v9;
    }
    DependentList = (__int64 *)PiGetDependentList(v5);
  }
  else
  {
    DependentList = (__int64 *)PiGetProviderList(v5);
  }
  v16 = *DependentList;
  v17 = DependentList;
  v18 = cchDest;
  v19 = pszDest;
  v41 = DependentList;
  while ( 1 )
  {
LABEL_13:
    v20 = v8;
    if ( (void *)v16 == v17 )
    {
      if ( ++v8 <= a4 )
      {
        v17 = a3;
        a3[v20] = 0;
      }
      else
      {
        v9 = -1073741789;
      }
      PnpReleaseDependencyRelationsLock(v17, v15, v16);
      goto LABEL_6;
    }
    v21 = PiListEntryToDependencyEdge(v16, v6);
    v23 = *v22;
    v42 = v23;
    v24 = v6 ? *(_QWORD *)(v21 + 40) : *(_QWORD *)(v21 + 32);
    v25 = *(_QWORD *)(v24 + 48);
    if ( !v25 )
      break;
    v26 = *(_QWORD *)(*(_QWORD *)(v25 + 312) + 40LL);
    if ( !v26 || !*(_QWORD *)(v26 + 48) )
      break;
    v9 = RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(v26 + 48), 0xC8uLL, &pcchLength);
    if ( v9 < 0 )
      goto LABEL_5;
    v17 = v41;
    v8 += ++pcchLength;
    v16 = v42;
    if ( pcchLength <= v18 )
    {
      v9 = RtlStringCchCopyExW(v19, v18, *(NTSTRSAFE_PCWSTR *)(v29 + 48), &pszDest, &cchDest, 0x800u);
      if ( v9 < 0 )
      {
LABEL_5:
        PnpReleaseDependencyRelationsLock(v27, v15, v28);
        goto LABEL_8;
      }
      v19 = pszDest + 1;
      v16 = v42;
      v18 = cchDest - 1;
      v17 = v41;
      --cchDest;
      ++pszDest;
    }
  }
  v30 = (_QWORD *)(v24 + 56);
  v31 = *(_QWORD **)(v24 + 56);
  for ( i = (_QWORD *)(v24 + 56); ; v30 = i )
  {
    if ( v31 == v30 )
    {
      v16 = v42;
      v17 = v41;
      v6 = a2;
      goto LABEL_13;
    }
    v32 = v31;
    v31 = (_QWORD *)*v31;
    v33 = (unsigned __int16 *)(v32 + 2);
    v9 = PnpUnicodeStringToWstr(psz, 0LL, v33);
    if ( v9 < 0 )
      goto LABEL_5;
    v34 = (wchar_t *)psz[0];
    v9 = RtlStringCchLengthW(psz[0], 0x7FFFuLL, &pcchLength);
    if ( v9 < 0 )
      break;
    v8 += ++pcchLength;
    if ( pcchLength <= v18 )
    {
      v9 = RtlStringCchCopyExW(v19, v18, v34, &pszDest, &cchDest, 0x800u);
      if ( v9 < 0 )
        break;
      v19 = pszDest + 1;
      v18 = cchDest - 1;
      ++pszDest;
      --cchDest;
    }
    PnpUnicodeStringToWstrFree(v34, (__int64)v33);
  }
  PnpUnicodeStringToWstrFree(v34, (__int64)v33);
  PnpReleaseDependencyRelationsLock(v36, v35, v37);
LABEL_8:
  if ( v9 != -1073741789 )
    return (unsigned int)v9;
LABEL_6:
  if ( a5 )
    *a5 = v8;
  return (unsigned int)v9;
}
