/*
 * XREFs of AslpFileGetVersionBlock @ 0x1800A1C84
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1800A1B9C (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     AslFileMappingEnsure @ 0x18009F0F0 (AslFileMappingEnsure.c)
 *     RtlFileMapFree @ 0x18009F7CC (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x18009F928 (RtlFileMapMapView.c)
 *     Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline @ 0x1800A3B5C (Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove_0 @ 0x1800A7AFE (memmove_0.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  unsigned __int64 v9; // r13
  int v10; // eax
  ULONGLONG v11; // rax
  ULONGLONG v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  void *v15; // rcx
  unsigned __int64 v16; // rdx
  int v17; // eax
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v19; // rbx
  SIZE_T Size; // [rsp+48h] [rbp-200h] BYREF
  void *Src; // [rsp+50h] [rbp-1F8h] BYREF
  unsigned __int16 *v23; // [rsp+58h] [rbp-1F0h]
  unsigned __int64 v24; // [rsp+68h] [rbp-1E0h]
  _QWORD *v25; // [rsp+70h] [rbp-1D8h]
  unsigned __int64 v26; // [rsp+78h] [rbp-1D0h]
  unsigned __int64 v27; // [rsp+80h] [rbp-1C8h]
  _QWORD *v28; // [rsp+88h] [rbp-1C0h]
  __int64 v29; // [rsp+90h] [rbp-1B8h]
  __int128 v30; // [rsp+98h] [rbp-1B0h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-1A0h]
  __int128 v32; // [rsp+B8h] [rbp-190h]
  PVOID ProcessHeap; // [rsp+C8h] [rbp-180h]
  struct _OSVERSIONINFOEXW VersionInfo; // [rsp+E0h] [rbp-168h] BYREF
  _QWORD v35[3]; // [rsp+200h] [rbp-48h] BYREF

  v25 = a2;
  v28 = a1;
  v29 = a3;
  Src = 0LL;
  v23 = 0LL;
  Size = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v6 = *(_QWORD *)(a3 + 64);
  if ( v6 )
  {
    v7 = 0LL;
    if ( *(_WORD *)(v6 + 2) >= 0x34u )
      v7 = v6 + 40;
    *a2 = v7;
    *a1 = *(_QWORD *)(a3 + 64);
    v8 = 0;
    goto LABEL_50;
  }
  v8 = AslFileMappingEnsure(a3);
  if ( v8 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_50;
  }
  if ( *(_DWORD *)(a3 + 56) != 6 )
  {
    v8 = -1073741687;
    goto LABEL_50;
  }
  v35[0] = 16LL;
  v35[1] = 1LL;
  v35[2] = 0LL;
  v9 = *(_QWORD *)(a3 + 32);
  v26 = v9;
  v24 = *(_QWORD *)(a3 + 40);
  v27 = v24;
  v10 = LdrResSearchResource(v9, v35, 3LL, *(_BYTE *)(a3 + 51) == 0 ? 0x200 : 0, &Src, &Size, 0LL, 0LL);
  v8 = v10;
  if ( v10 >= 0 )
  {
    v14 = v24;
  }
  else
  {
    if ( (unsigned int)(v10 + 1073741687) <= 2 )
      goto LABEL_50;
    if ( v10 != -1073741701 || *(_BYTE *)(a3 + 51) || *(_DWORD *)(a3 + 76) )
      goto LABEL_49;
    memset_0(&VersionInfo, 0, sizeof(VersionInfo));
    VersionInfo.dwOSVersionInfoSize = 284;
    VersionInfo.dwMajorVersion = 6;
    VersionInfo.dwMinorVersion = 2;
    v11 = VerSetConditionMask(0LL, 2u, 3u);
    v12 = VerSetConditionMask(v11, 1u, 3u);
    if ( RtlVerifyVersionInfo(&VersionInfo, 3u, v12) < 0 )
    {
LABEL_15:
      v8 = -1073741687;
      goto LABEL_50;
    }
    v13 = *(_QWORD *)(a3 + 8);
    BYTE8(v32) = 0;
    *(_QWORD *)&v30 = v13;
    v8 = RtlFileMapMapView((__int64)&v30, 1);
    if ( v8 < 0
      || (AslLogCallPrintf(3LL),
          v9 = *((_QWORD *)&v31 + 1),
          v8 = LdrResSearchResource(*((_QWORD *)&v31 + 1), v35, 3LL, 0LL, &Src, &Size, 0LL, 0LL),
          AslLogCallPrintf(2LL),
          v8 < 0) )
    {
LABEL_49:
      AslLogCallPrintf(1LL);
      goto LABEL_50;
    }
    v26 = v9;
    v14 = v32;
    v27 = v32;
  }
  v15 = Src;
  if ( !Src )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_15;
  }
  v16 = (unsigned __int64)Src + Size;
  if ( (char *)Src + Size < Src )
  {
    v16 = -1LL;
    v17 = -1073741675;
  }
  else
  {
    v17 = 0;
  }
  v24 = v16;
  if ( v17 < 0
    || (unsigned __int64)Src < v9
    || v16 > v14 + v9
    || !*(_BYTE *)(a3 + 51)
    && !*((_QWORD *)&v30 + 1)
    && (v15 = (void *)(v9 + *(_QWORD *)(a3 + 24)), v16 > (unsigned __int64)v15) )
  {
    v8 = -1073741687;
    goto LABEL_49;
  }
  if ( (unsigned int)Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline(v15, v16) )
  {
    if ( Size < 0x5C || _wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
    {
      v8 = -1073741595;
      goto LABEL_49;
    }
  }
  else if ( Size < 0x26 || _wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
  {
    v8 = -1073741595;
    goto LABEL_49;
  }
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (unsigned __int16 *)RtlAllocateHeap(ProcessHeap, 8u, Size);
  v19 = Heap;
  v23 = Heap;
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_49;
  }
  memmove_0(Heap, Src, Size);
  if ( Size < *v19 )
    *v19 = Size;
  *(_QWORD *)(a3 + 64) = v19;
  v23 = 0LL;
  if ( v19[1] >= 0x34u )
    *v25 = v19 + 20;
  else
    *v25 = 0LL;
  *v28 = *(_QWORD *)(a3 + 64);
  v8 = 0;
LABEL_50:
  RtlFileMapFree((__int64)&v30);
  return (unsigned int)v8;
}
