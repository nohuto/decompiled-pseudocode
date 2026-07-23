/*
 * XREFs of RtlpComputePath @ 0x180006610
 * Callers:
 *     RtlpComputeDllPath @ 0x1800063D0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x1800064C0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeSearchPath @ 0x180105DB0 (RtlpComputeSearchPath.c)
 *     RtlpComputeExePath @ 0x180108200 (RtlpComputeExePath.c)
 * Callees:
 *     RtlpGetDirPath @ 0x180005A04 (RtlpGetDirPath.c)
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpAddForwarderPath @ 0x18011BAA8 (RtlpAddForwarderPath.c)
 *     LdrpIncludeAlternateForwarders @ 0x18011CDA4 (LdrpIncludeAlternateForwarders.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

int *__fastcall RtlpComputePath(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // r14
  WCHAR *Heap; // r12
  SIZE_T v7; // rsi
  int *v8; // rbx
  unsigned int v9; // edi
  __int128 *v10; // r8
  __int64 v11; // rcx
  _WORD *v12; // rax
  UNICODE_STRING *v13; // rdi
  _WORD *v14; // r14
  unsigned int v15; // r15d
  ULONG_PTR v16; // r13
  unsigned int v17; // esi
  int v18; // eax
  _WORD *v20; // rcx
  _WORD *v21; // rax
  wchar_t *DirPath; // rax
  size_t Length; // rax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  unsigned __int8 v27; // [rsp+30h] [rbp-78h]
  NTSTATUS EnvironmentVariable; // [rsp+34h] [rbp-74h]
  ULONG_PTR ReturnLength[2]; // [rsp+38h] [rbp-70h] BYREF
  UNICODE_STRING *v30; // [rsp+48h] [rbp-60h]
  size_t Size[2]; // [rsp+50h] [rbp-58h] BYREF
  void *Src; // [rsp+60h] [rbp-48h]
  __int64 v33; // [rsp+B0h] [rbp+8h]
  char v34; // [rsp+C8h] [rbp+20h]

  v34 = a4;
  v33 = a1;
  v4 = (LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 60) & 3;
  Src = 0LL;
  Size[0] = 0LL;
  Size[1] = 0LL;
  ReturnLength[1] = 0LL;
  Heap = 0LL;
  ReturnLength[0] = 0LL;
  v7 = 128LL;
  v27 = 0;
  v8 = 0LL;
  EnvironmentVariable = 0;
  v9 = 0;
  v30 = 0LL;
  while ( 1 )
  {
    v10 = &RtlpSystem32Dirs;
    if ( v9 >= a2 )
      break;
    v11 = *(int *)(a1 + 4LL * v9);
    if ( (_DWORD)v11 == 3 )
    {
      RtlEnterCriticalSection(&FastPebLock);
      EnvironmentVariable = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, ReturnLength);
      if ( EnvironmentVariable == -1073741789 )
      {
        Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2 * ReturnLength[0]);
        if ( !Heap )
        {
          RtlLeaveCriticalSection(&FastPebLock);
          return v8;
        }
        EnvironmentVariable = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, Heap, ReturnLength[0], ReturnLength);
      }
      RtlLeaveCriticalSection(&FastPebLock);
      if ( EnvironmentVariable == -1073741568 )
      {
        a1 = v33;
        a4 = v34;
        ++v9;
        ReturnLength[0] = 0LL;
        EnvironmentVariable = 0;
      }
      else
      {
        if ( EnvironmentVariable < 0 )
          goto LABEL_20;
        v7 += 2 * ReturnLength[0] + 2;
LABEL_8:
        a1 = v33;
        ++v9;
        a4 = v34;
      }
    }
    else if ( (_DWORD)v11 == 7 )
    {
      v7 += (unsigned __int16)RtlpSystem32Dirs;
      if ( a4 )
      {
        v27 = LdrpIncludeAlternateForwarders(v11, (unsigned __int16)RtlpSystem32Dirs, &RtlpSystem32Dirs);
        v7 += v26 + 22;
        if ( v27 )
          v7 += v26 + 30;
      }
      if ( (_BYTE)v4 != 1 )
        goto LABEL_8;
      a1 = v33;
      ++v9;
      a4 = v34;
      v30 = (UNICODE_STRING *)v10;
    }
    else
    {
      switch ( (int)v11 )
      {
        case 0:
          if ( LdrpDllDirectory.Length )
            v7 += LdrpDllDirectory.Length + 2LL;
          goto LABEL_8;
        case 1:
          DirPath = (wchar_t *)RtlpGetDirPath(0LL, Size);
          a4 = v34;
          v7 += Size[0] + 2;
          Src = DirPath;
          a1 = v33;
          ++v9;
          continue;
        case 2:
          v7 += RtlpSystemDirs.Length;
          if ( (_BYTE)v4 != 1 )
            goto LABEL_8;
          a1 = v33;
          a4 = v34;
          ++v9;
          v30 = &RtlpSystemDirs;
          break;
        default:
          __fastfail(0x25u);
      }
    }
  }
  if ( v7 - 128 > 0xFFFE )
  {
    EnvironmentVariable = -1073741562;
  }
  else
  {
    v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v8 = (int *)v12;
    if ( v12 )
    {
      v13 = v30;
      v14 = v12 + 64;
      v12[36] = a2;
      *((_QWORD *)v12 + 11) = 0LL;
      v15 = 0;
      *((_QWORD *)v12 + 12) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
      *((_DWORD *)v12 + 28) = v7;
      *((_QWORD *)v12 + 15) = 0LL;
      if ( v13 )
      {
        *((_QWORD *)v12 + 3) = v14;
        v25 = 7;
        if ( &RtlpSystem32Dirs != (__int128 *)v13 )
          v25 = 2;
        *v8 = v25;
        memmove(v14, v13->Buffer, v13->Length);
        v15 = 1;
        v14 += (unsigned __int64)v13->Length >> 1;
        if ( v34 )
          v14 = (_WORD *)RtlpAddForwarderPath(v27, v14);
      }
      v16 = ReturnLength[0];
      v17 = 0;
      while ( v17 < a2 )
      {
        if ( v13 && ((v24 = *(_DWORD *)(v33 + 4LL * v17), v24 == 2) || v24 == 7) )
        {
LABEL_18:
          ++v17;
        }
        else
        {
          v8[v15] = *(_DWORD *)(v33 + 4LL * v17);
          *(_QWORD *)&v8[2 * v15 + 6] = v14;
          v18 = *(_DWORD *)(v33 + 4LL * v17);
          if ( v18 == 4 )
          {
            *((_QWORD *)v8 + 15) = v14;
            ++v15;
            *v14 = asc_1801772E4[0];
            v14 += 2;
            ++v17;
            *(v14 - 1) = 59;
          }
          else
          {
            switch ( v18 )
            {
              case 0:
                if ( !LdrpDllDirectory.Length )
                  goto LABEL_17;
                memmove(v14, LdrpDllDirectory.Buffer, LdrpDllDirectory.Length);
                Length = LdrpDllDirectory.Length;
LABEL_39:
                v20 = &v14[Length >> 1];
                *v20 = 59;
                ++v15;
                v14 = v20 + 1;
                ++v17;
                continue;
              case 1:
                memmove(v14, Src, Size[0]);
                Length = Size[0];
                goto LABEL_39;
              case 2:
                memmove(v14, RtlpSystemDirs.Buffer, RtlpSystemDirs.Length);
                v14 += (unsigned __int64)RtlpSystemDirs.Length >> 1;
                goto LABEL_17;
              case 3:
                if ( !v16 )
                {
LABEL_17:
                  ++v15;
                  goto LABEL_18;
                }
                memmove(v14, Heap, 2 * v16);
                v21 = &v14[v16];
                v13 = v30;
                v14 = v21 + 1;
                *v21 = 59;
                ++v15;
                ++v17;
                break;
              default:
                __fastfail(0x25u);
            }
          }
        }
      }
      *(v14 - 1) = 0;
    }
    else
    {
      EnvironmentVariable = -1073741801;
    }
  }
LABEL_20:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v8 && EnvironmentVariable < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  return v8;
}
