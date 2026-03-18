/*
 * XREFs of ?HmgLockEx2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002F070
 * Callers:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x140034950 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x14000F160 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?IncrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x1400311D0 (-IncrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall HmgLockEx2(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  __int16 v4; // edi^2
  char v6; // r15
  __int64 v7; // rsi
  unsigned int *v8; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // r10
  unsigned int v14; // r11d
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int v18; // r8d
  __int64 v19; // r10
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  unsigned int v22; // r8d
  __int64 v23; // r10
  unsigned int v24; // r11d
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // r10
  unsigned int v28; // r8d
  __int64 v29; // r11
  _DWORD *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // r8
  unsigned int v33; // r11d
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // r10
  unsigned int v37; // r8d
  __int64 v38; // r11
  __int64 v40; // r8
  unsigned int *v41; // [rsp+30h] [rbp-38h] BYREF
  int v42; // [rsp+38h] [rbp-30h]
  __int16 v43; // [rsp+3Ch] [rbp-2Ch]
  __int64 v44; // [rsp+40h] [rbp-28h]

  v4 = HIWORD(a2);
  v44 = a1;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v6 = a4;
  v7 = 0LL;
  HANDLELOCK::vLockHandle(&v41, (unsigned __int16)a2 | (a2 >> 8) & 0xFF0000, a4);
  if ( !v42 )
    return v7;
  v8 = v41;
  if ( *((_BYTE *)v41 + 14) == a3 && *((_WORD *)v41 + 6) == v4 )
  {
    if ( (v6 & 2) == 0 || (*((_BYTE *)v41 + 15) & 0x20) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v8 = v41;
      v10 = *v41;
      v11 = *(_QWORD *)(v44 + 5672);
      if ( (unsigned int)v10 >= 0x10000 )
      {
        v12 = (unsigned __int16)v10;
        if ( *(_DWORD *)v11 <= 0x10000u )
        {
          v10 = (unsigned __int16)v10;
        }
        else
        {
          v13 = *(_QWORD *)(v11 + 16);
          v14 = *(_DWORD *)(v13 + 2056);
          if ( (unsigned __int16)v10 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
          {
            v16 = 0LL;
          }
          else
          {
            if ( (unsigned __int16)v10 >= v14 )
            {
              v15 = *(_QWORD *)(v13 + 8LL * ((((unsigned __int16)v10 - v14) >> 16) + 1) + 8);
              v12 = -65536 * (((unsigned __int16)v10 - v14) >> 16) - v14 + (unsigned __int16)v10;
            }
            else
            {
              v15 = *(_QWORD *)(v13 + 8);
            }
            v16 = 0LL;
            if ( v12 < *(_DWORD *)(v15 + 20) )
              v16 = *(_QWORD *)v15 + 24LL * v12;
          }
          if ( *(unsigned __int8 *)(v16 + 13) == WORD1(v10) )
            v10 = (unsigned __int16)v10;
        }
      }
      v17 = *(_QWORD *)(v11 + 16);
      v18 = *(_DWORD *)(v17 + 2056);
      if ( (unsigned int)v10 < v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
      {
        if ( (unsigned int)v10 >= v18 )
        {
          v19 = *(_QWORD *)(v17 + 8LL * ((((unsigned int)v10 - v18) >> 16) + 1) + 8);
          v10 = -65536 * (((unsigned int)v10 - v18) >> 16) - v18 + (unsigned int)v10;
        }
        else
        {
          v19 = *(_QWORD *)(v17 + 8);
        }
        if ( (unsigned int)v10 < *(_DWORD *)(v19 + 20) )
          v7 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
      }
      if ( !*(_WORD *)(v7 + 12) || *(struct _KTHREAD **)(v7 + 16) == CurrentThread )
      {
        OBJECT::IncrementExclusiveLockCount((OBJECT *)v7);
        *(_QWORD *)(v7 + 16) = CurrentThread;
      }
      else
      {
        if ( (v6 & 8) != 0 )
          GrepCaptureLiveMemoryDump(0x190u, 56LL, 7LL, 0LL, 0LL, 0);
        v7 = 0LL;
      }
      goto LABEL_20;
    }
    if ( (v6 & 8) != 0 )
    {
      v40 = 3LL;
      goto LABEL_70;
    }
  }
  else if ( (v6 & 8) != 0 )
  {
    v40 = 4LL;
LABEL_70:
    GrepCaptureLiveMemoryDump(0x190u, 56LL, v40, 0LL, 0LL, 0);
  }
LABEL_20:
  v20 = *v8;
  v21 = *(_QWORD *)(v44 + 5672);
  if ( (unsigned int)v20 >= 0x10000 )
  {
    v22 = (unsigned __int16)v20;
    if ( *(_DWORD *)v21 <= 0x10000u )
    {
      v20 = (unsigned __int16)v20;
    }
    else
    {
      v23 = *(_QWORD *)(v21 + 16);
      v24 = *(_DWORD *)(v23 + 2056);
      if ( (unsigned __int16)v20 >= v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
      {
        v26 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v20 >= v24 )
        {
          v25 = *(_QWORD *)(v23 + 8LL * ((((unsigned __int16)v20 - v24) >> 16) + 1) + 8);
          v22 = -65536 * (((unsigned __int16)v20 - v24) >> 16) - v24 + (unsigned __int16)v20;
        }
        else
        {
          v25 = *(_QWORD *)(v23 + 8);
        }
        v26 = 0LL;
        if ( v22 < *(_DWORD *)(v25 + 20) )
          v26 = *(_QWORD *)v25 + 24LL * v22;
      }
      if ( *(unsigned __int8 *)(v26 + 13) == WORD1(v20) )
        v20 = (unsigned __int16)v20;
    }
  }
  v27 = *(_QWORD *)(v21 + 16);
  v28 = *(_DWORD *)(v27 + 2056);
  if ( (unsigned int)v20 >= v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16)
    || ((unsigned int)v20 >= v28
      ? (v29 = *(_QWORD *)(v27 + 8LL * ((((unsigned int)v20 - v28) >> 16) + 1) + 8),
         v20 = -65536 * (((unsigned int)v20 - v28) >> 16) - v28 + (unsigned int)v20)
      : (v29 = *(_QWORD *)(v27 + 8)),
        (unsigned int)v20 >= *(_DWORD *)(v29 + 20)) )
  {
    v30 = 0LL;
  }
  else
  {
    v30 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * (v20 >> 8)) + 16LL * (unsigned __int8)v20 + 8);
  }
  v31 = (unsigned __int16)*v30 | (*v30 >> 8) & 0xFF0000;
  if ( v31 >= 0x10000 )
  {
    v32 = (unsigned __int16)*v30;
    if ( *(_DWORD *)v21 <= 0x10000u )
    {
      v31 = (unsigned __int16)*v30;
    }
    else
    {
      v33 = *(_DWORD *)(v27 + 2056);
      if ( (unsigned __int16)*v30 >= v33 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
      {
        v35 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)*v30 >= v33 )
        {
          v34 = *(_QWORD *)(v27 + 8LL * ((((unsigned __int16)*v30 - v33) >> 16) + 1) + 8);
          v32 = -65536 * (((unsigned __int16)v31 - v33) >> 16) - v33 + (unsigned __int16)v31;
        }
        else
        {
          v34 = *(_QWORD *)(v27 + 8);
        }
        v35 = 0LL;
        if ( (unsigned int)v32 < *(_DWORD *)(v34 + 20) )
          v35 = *(_QWORD *)v34 + 24 * v32;
      }
      if ( *(unsigned __int8 *)(v35 + 13) == HIWORD(v31) )
        v31 = (unsigned __int16)v31;
    }
  }
  v36 = *(_QWORD *)(v21 + 16);
  v37 = *(_DWORD *)(v36 + 2056);
  if ( v31 < v37 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
  {
    if ( v31 >= v37 )
    {
      v38 = *(_QWORD *)(v36 + 8LL * (((v31 - v37) >> 16) + 1) + 8);
      v31 += -65536 * ((v31 - v37) >> 16) - v37;
    }
    else
    {
      v38 = *(_QWORD *)(v36 + 8);
    }
    *(_BYTE *)(*(_QWORD *)v38 + 24LL * v31 + 6) = 0;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * ((unsigned __int64)v31 >> 8)) + 16LL * (unsigned __int8)v31,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v7;
}
