/*
 * XREFs of LdrQueryProcessModuleInformationEx @ 0x18006A0E0
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x180099F54 (RtlQueryProcessModuleInformation.c)
 *     LdrQueryProcessModuleInformation @ 0x1801155E0 (LdrQueryProcessModuleInformation.c)
 * Callees:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x180069210 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x180069330 (LdrQueryNextListEntry32.c)
 *     LdrQueryNextListEntry @ 0x18006A4C0 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006A600 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList @ 0x18006ACB0 (LdrQueryInLoadOrderModuleList.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x18006ADD0 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x18006BDD0 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x18006BF70 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x1800FCF20 (RtlEndStrongEnumerationHashTable.c)
 *     ExecuteHotpatchTestRuntimeFunction @ 0x180133138 (ExecuteHotpatchTestRuntimeFunction.c)
 *     GetHotpatchTestRuntimeFunctionState @ 0x180133164 (GetHotpatchTestRuntimeFunctionState.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx(
        void *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v6; // esi
  __int64 v7; // r14
  unsigned __int64 i; // rbx
  int v9; // r12d
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // rax
  __int64 (__fastcall *v13)(); // rax
  int v14; // eax
  __int64 (__fastcall *v15)(void *, __int64, __int64 *); // rax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 (__fastcall *v18)(void *, _DWORD *, __int64, __int64, __int64); // rax
  int ModuleInfoFromLdrEntry; // eax
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(void *, __int64, __int64 *); // rax
  int v23; // eax
  void (*v24)(void); // rax
  int v26; // [rsp+30h] [rbp-98h]
  unsigned int v27; // [rsp+34h] [rbp-94h]
  __int64 v28; // [rsp+40h] [rbp-88h] BYREF
  __int64 v29; // [rsp+48h] [rbp-80h] BYREF
  __int64 v30; // [rsp+50h] [rbp-78h] BYREF
  _DWORD *v31; // [rsp+58h] [rbp-70h]
  int v32; // [rsp+60h] [rbp-68h]
  __int64 v33; // [rsp+68h] [rbp-60h]
  unsigned __int64 v34; // [rsp+70h] [rbp-58h]
  int v35; // [rsp+78h] [rbp-50h]
  _DWORD *v36; // [rsp+80h] [rbp-48h]
  void *v37; // [rsp+D0h] [rbp+8h]

  v37 = a1;
  v6 = 8;
  v26 = 8;
  v29 = 0LL;
  v30 = 0LL;
  if ( a4 >= 8 )
  {
    *a3 = 0;
    v31 = a3 + 2;
    v27 = 0;
  }
  else
  {
    v27 = -1073741820;
    v31 = 0LL;
  }
  if ( !a1 || (v7 = a2 & 2, (a2 & 2) != 0) )
  {
    v37 = &LdrpLocalProcess;
    v7 = a2 & 2;
  }
  ExecuteHotpatchTestRuntimeFunction();
  if ( !(unsigned int)GetHotpatchTestRuntimeFunctionState() || !a5 )
  {
    for ( i = 0LL; ; ++i )
    {
      v34 = i;
      if ( i >= (unsigned __int64)(a2 & 1) + 1 )
        return v27;
      v28 = 0LL;
      v9 = LdrpQueryProcessModuleInformationLoopDetectorCount;
      v10 = 1;
      if ( a5 )
      {
        *a5 = v6;
        v11 = v7;
      }
      else
      {
        v11 = a2 & 2;
      }
      v33 = v11;
      if ( v11 )
      {
        v12 = funcs_180069963[5 * i];
        if ( (char *)v12 == (char *)LdrQueryModuleInfoLocalLoaderLock )
          LdrQueryModuleInfoLocalLoaderLock(
            funcs_180069992,
            LdrQueryModuleInfoLocalLoaderLock,
            LdrQueryInLoadOrderModuleList,
            LdrQueryInLoadOrderModuleList32);
        else
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v12)(
            funcs_180069992,
            LdrQueryModuleInfoLocalLoaderLock,
            LdrQueryInLoadOrderModuleList,
            LdrQueryInLoadOrderModuleList32);
      }
      v13 = funcs_180069992[5 * i];
      if ( (char *)v13 == (char *)LdrQueryInLoadOrderModuleList )
        v14 = LdrQueryInLoadOrderModuleList(v37, &v29, &v30, LdrQueryInLoadOrderModuleList32);
      else
        v14 = (char *)v13 == (char *)LdrQueryInLoadOrderModuleList32
            ? LdrQueryInLoadOrderModuleList32(v37, &v29, &v30, LdrQueryInLoadOrderModuleList32)
            : ((__int64 (__fastcall *)(void *, __int64 *, __int64 *, _QWORD))v13)(
                v37,
                &v29,
                &v30,
                LdrQueryInLoadOrderModuleList32);
      if ( v14 < 0 )
        break;
      if ( v29 )
      {
        v15 = (__int64 (__fastcall *)(void *, __int64, __int64 *))*(&funcs_1800699C4 + 5 * i);
        if ( (char *)v15 == (char *)LdrQueryNextListEntry )
          v14 = LdrQueryNextListEntry(v37, v29, &v28);
        else
          v14 = v15(v37, v29, &v28);
        if ( v14 < 0 )
          break;
        while ( 1 )
        {
          v16 = v28;
          if ( v28 == v29 )
            break;
          if ( !v9 )
          {
            v27 = -1073741271;
            break;
          }
          v35 = --v9;
          v6 = 296 * v10 + v26;
          v26 = v6;
          v10 = 1;
          v32 = 1;
          v17 = a4;
          if ( a4 < v6 )
          {
            v27 = -1073741820;
          }
          else
          {
            v18 = (__int64 (__fastcall *)(void *, _DWORD *, __int64, __int64, __int64))*(&funcs_180069A5C + 5 * i);
            if ( (char *)v18 == (char *)LdrQueryModuleInfoFromLdrEntry )
              ModuleInfoFromLdrEntry = LdrQueryModuleInfoFromLdrEntry(v37, v31, v28, v30, a2);
            else
              ModuleInfoFromLdrEntry = v18(v37, v31, v28, v30, a2);
            if ( ModuleInfoFromLdrEntry < 0 )
            {
              v27 = ModuleInfoFromLdrEntry;
              goto LABEL_48;
            }
            v20 = v31;
            if ( !*((_QWORD *)v31 + 2) )
              v10 = 0;
            v32 = v10;
            v21 = 74LL * v10;
            v31 = (_DWORD *)((char *)v31 + v21 * 4);
            v36 = &v20[v21];
            v16 = v28;
            v17 = a4;
          }
          if ( a3 && v17 >= 0x130 )
            *a3 += v10;
          v22 = (__int64 (__fastcall *)(void *, __int64, __int64 *))*(&funcs_1800699C4 + 5 * i);
          if ( (char *)v22 == (char *)LdrQueryNextListEntry )
            v23 = LdrQueryNextListEntry(v37, v16, &v28);
          else
            v23 = v22(v37, v16, &v28);
          if ( v23 < 0 )
          {
            v27 = v23;
            goto LABEL_48;
          }
        }
      }
LABEL_37:
      v6 = v26;
LABEL_48:
      if ( v33 )
      {
        v24 = (void (*)(void))funcs_180069FB0[5 * i];
        if ( (char *)v24 == (char *)LdrQueryModuleInfoLocalLoaderUnlock )
          LdrQueryModuleInfoLocalLoaderUnlock();
        else
          v24();
      }
      if ( a5 )
        *a5 = v6;
    }
    v27 = v14;
    goto LABEL_37;
  }
  *a5 = -269488145;
  return 3221225485LL;
}
