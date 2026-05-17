/*
 * XREFs of RtlpComputePath @ 0x180084760
 * Callers:
 *     RtlpComputeDllPath @ 0x180084520 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x180084610 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeSearchPath @ 0x18010B010 (RtlpComputeSearchPath.c)
 *     RtlpComputeExePath @ 0x18010D270 (RtlpComputeExePath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpGetDirPath @ 0x180083B58 (RtlpGetDirPath.c)
 *     RtlQueryEnvironmentVariable @ 0x1800851D0 (RtlQueryEnvironmentVariable.c)
 *     RtlpAddForwarderPath @ 0x18011D878 (RtlpAddForwarderPath.c)
 *     LdrpIncludeAlternateForwarders @ 0x18011EB74 (LdrpIncludeAlternateForwarders.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

unsigned __int64 __fastcall RtlpComputePath(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // r14
  const void *Heap; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned int v9; // edi
  __int128 *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 *v13; // rdi
  _WORD *v14; // r14
  unsigned int v15; // r15d
  __int64 v16; // r13
  unsigned int v17; // esi
  int v18; // eax
  _WORD *v20; // rcx
  _WORD *v21; // rax
  wchar_t *DirPath; // rax
  size_t v23; // rax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  unsigned __int8 v27; // [rsp+30h] [rbp-78h]
  int EnvironmentVariable; // [rsp+34h] [rbp-74h]
  _QWORD v29[2]; // [rsp+38h] [rbp-70h] BYREF
  __int128 *v30; // [rsp+48h] [rbp-60h]
  size_t Size[2]; // [rsp+50h] [rbp-58h] BYREF
  void *Src; // [rsp+60h] [rbp-48h]
  __int64 v33; // [rsp+B0h] [rbp+8h]
  char v34; // [rsp+C8h] [rbp+20h]

  v34 = a4;
  v33 = a1;
  v4 = ((unsigned __int64)xmmword_1801EA4F0 >> 60) & 3;
  Src = 0LL;
  Size[0] = 0LL;
  Size[1] = 0LL;
  v29[1] = 0LL;
  Heap = 0LL;
  v29[0] = 0LL;
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
      RtlEnterCriticalSection((__int64)&FastPebLock);
      EnvironmentVariable = RtlQueryEnvironmentVariable(0LL, L"PATH", 4LL, 0LL, 0LL, v29);
      if ( EnvironmentVariable == -1073741789 )
      {
        Heap = (const void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2LL * v29[0]);
        if ( !Heap )
        {
          RtlLeaveCriticalSection((__int64)&FastPebLock);
          return v8;
        }
        EnvironmentVariable = RtlQueryEnvironmentVariable(0LL, L"PATH", 4LL, Heap, v29[0], v29);
      }
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      if ( EnvironmentVariable == -1073741568 )
      {
        a1 = v33;
        a4 = v34;
        ++v9;
        v29[0] = 0LL;
        EnvironmentVariable = 0;
      }
      else
      {
        if ( EnvironmentVariable < 0 )
          goto LABEL_20;
        v7 += 2LL * v29[0] + 2;
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
      v30 = v10;
    }
    else
    {
      switch ( (int)v11 )
      {
        case 0:
          if ( (_WORD)LdrpDllDirectory )
            v7 += (unsigned __int16)LdrpDllDirectory + 2LL;
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
          v7 += (unsigned __int16)RtlpSystemDirs;
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
    v12 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    v8 = v12;
    if ( v12 )
    {
      v13 = v30;
      v14 = (_WORD *)(v12 + 128);
      *(_WORD *)(v12 + 72) = a2;
      *(_QWORD *)(v12 + 88) = 0LL;
      v15 = 0;
      *(_QWORD *)(v12 + 96) = 0LL;
      *(_QWORD *)(v12 + 104) = 0LL;
      *(_DWORD *)(v12 + 112) = v7;
      *(_QWORD *)(v12 + 120) = 0LL;
      if ( v13 )
      {
        *(_QWORD *)(v12 + 24) = v14;
        v25 = 7;
        if ( &RtlpSystem32Dirs != v13 )
          v25 = 2;
        *(_DWORD *)v8 = v25;
        memmove(v14, *((const void **)v13 + 1), *(unsigned __int16 *)v13);
        v15 = 1;
        v14 += (unsigned __int64)*(unsigned __int16 *)v13 >> 1;
        if ( v34 )
          v14 = (_WORD *)RtlpAddForwarderPath(v27, v14);
      }
      v16 = v29[0];
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
          *(_DWORD *)(v8 + 4LL * v15) = *(_DWORD *)(v33 + 4LL * v17);
          *(_QWORD *)(v8 + 8LL * v15 + 24) = v14;
          v18 = *(_DWORD *)(v33 + 4LL * v17);
          if ( v18 == 4 )
          {
            *(_QWORD *)(v8 + 120) = v14;
            ++v15;
            *v14 = asc_18017C344[0];
            v14 += 2;
            ++v17;
            *(v14 - 1) = 59;
          }
          else
          {
            switch ( v18 )
            {
              case 0:
                if ( !(_WORD)LdrpDllDirectory )
                  goto LABEL_17;
                memmove(v14, *((const void **)&LdrpDllDirectory + 1), (unsigned __int16)LdrpDllDirectory);
                v23 = (unsigned __int16)LdrpDllDirectory;
LABEL_39:
                v20 = &v14[v23 >> 1];
                *v20 = 59;
                ++v15;
                v14 = v20 + 1;
                ++v17;
                continue;
              case 1:
                memmove(v14, Src, Size[0]);
                v23 = Size[0];
                goto LABEL_39;
              case 2:
                memmove(v14, *((const void **)&RtlpSystemDirs + 1), (unsigned __int16)RtlpSystemDirs);
                v14 += (unsigned __int64)(unsigned __int16)RtlpSystemDirs >> 1;
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  if ( v8 && EnvironmentVariable < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  return v8;
}
