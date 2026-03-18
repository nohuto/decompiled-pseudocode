/*
 * XREFs of ?HmgShareLockCheck2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@E@Z @ 0x140031290
 * Callers:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14000C51C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreDCSelectBrush @ 0x140035920 (GreDCSelectBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140031250 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

struct _BASEOBJECT *__fastcall HmgShareLockCheck2(struct Gre::Base::SESSION_GLOBALS *a1, struct HOBJ__ *a2, char a3)
{
  __int16 v4; // edi^2
  __int64 v5; // rsi
  int v6; // ebx
  unsigned int *v7; // rbx
  struct Gre::Base::SESSION_GLOBALS *v8; // r14
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // r9d
  __int64 v12; // r10
  unsigned int v13; // r11d
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned int v17; // r8d
  __int64 v18; // r10
  unsigned int v20; // eax
  __int64 v21; // r9
  unsigned int v22; // r10d
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // r9d
  __int64 v27; // r10
  unsigned int v28; // r11d
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // r9
  unsigned int v32; // r11d
  __int64 v33; // r10
  _DWORD *v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned int v37; // r11d
  __int64 v38; // r10
  __int64 v39; // rcx
  unsigned int *v40; // [rsp+20h] [rbp-38h] BYREF
  int v41; // [rsp+28h] [rbp-30h]
  __int16 v42; // [rsp+2Ch] [rbp-2Ch]
  struct Gre::Base::SESSION_GLOBALS *v43; // [rsp+30h] [rbp-28h]

  v4 = WORD1(a2);
  v43 = a1;
  v40 = 0LL;
  v5 = 0LL;
  v41 = 0;
  v42 = 0;
  HANDLELOCK::vLockHandle((__int64 *)&v40, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 0);
  v6 = v41;
  if ( v41 )
  {
    v7 = v40;
    v8 = v43;
    if ( *((_BYTE *)v40 + 14) == a3 && *((_WORD *)v40 + 6) == v4 )
    {
      v9 = *v40;
      v10 = *((_QWORD *)v43 + 709);
      if ( (unsigned int)v9 >= 0x10000 )
      {
        v11 = (unsigned __int16)v9;
        if ( *(_DWORD *)v10 <= 0x10000u )
        {
          v9 = (unsigned __int16)v9;
        }
        else
        {
          v12 = *(_QWORD *)(v10 + 16);
          v13 = *(_DWORD *)(v12 + 2056);
          if ( (unsigned __int16)v9 >= v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
          {
            v15 = 0LL;
          }
          else
          {
            if ( (unsigned __int16)v9 >= v13 )
            {
              v14 = *(_QWORD *)(v12 + 8LL * ((((unsigned __int16)v9 - v13) >> 16) + 1) + 8);
              v11 = -65536 * (((unsigned __int16)v9 - v13) >> 16) - v13 + (unsigned __int16)v9;
            }
            else
            {
              v14 = *(_QWORD *)(v12 + 8);
            }
            v15 = 0LL;
            if ( v11 < *(_DWORD *)(v14 + 20) )
              v15 = *(_QWORD *)v14 + 24LL * v11;
          }
          if ( *(unsigned __int8 *)(v15 + 13) == WORD1(v9) )
            v9 = (unsigned __int16)v9;
        }
      }
      v21 = *(_QWORD *)(v10 + 16);
      v22 = *(_DWORD *)(v21 + 2056);
      if ( (unsigned int)v9 < v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
      {
        if ( (unsigned int)v9 >= v22 )
        {
          v23 = *(_QWORD *)(v21 + 8LL * ((((unsigned int)v9 - v22) >> 16) + 1) + 8);
          v9 = -65536 * (((unsigned int)v9 - v22) >> 16) - v22 + (unsigned int)v9;
        }
        else
        {
          v23 = *(_QWORD *)(v21 + 8);
        }
        if ( (unsigned int)v9 < *(_DWORD *)(v23 + 20) )
          v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
      }
      ++*(_DWORD *)(v5 + 8);
      if ( a3 == 5 )
      {
        TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v5 + 680));
      }
      else if ( a3 == 16 )
      {
        TrackObjectReferenceIncrement(2LL, *(_QWORD *)(v5 + 136));
      }
    }
    else
    {
      HIBYTE(v42) = 1;
    }
    v24 = *v7;
    v25 = *((_QWORD *)v8 + 709);
    if ( (unsigned int)v24 >= 0x10000 )
    {
      v26 = (unsigned __int16)v24;
      if ( *(_DWORD *)v25 <= 0x10000u )
      {
        v24 = (unsigned __int16)v24;
      }
      else
      {
        v27 = *(_QWORD *)(v25 + 16);
        v28 = *(_DWORD *)(v27 + 2056);
        if ( (unsigned __int16)v24 >= v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
        {
          v30 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v24 >= v28 )
          {
            v29 = *(_QWORD *)(v27 + 8LL * ((((unsigned __int16)v24 - v28) >> 16) + 1) + 8);
            v26 = -65536 * (((unsigned __int16)v24 - v28) >> 16) - v28 + (unsigned __int16)v24;
          }
          else
          {
            v29 = *(_QWORD *)(v27 + 8);
          }
          v30 = 0LL;
          if ( v26 < *(_DWORD *)(v29 + 20) )
            v30 = *(_QWORD *)v29 + 24LL * v26;
        }
        if ( *(unsigned __int8 *)(v30 + 13) == WORD1(v24) )
          v24 = (unsigned __int16)v24;
      }
    }
    v31 = *(_QWORD *)(v25 + 16);
    v32 = *(_DWORD *)(v31 + 2056);
    if ( (unsigned int)v24 >= v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16)
      || ((unsigned int)v24 >= v32
        ? (v33 = *(_QWORD *)(v31 + 8LL * ((((unsigned int)v24 - v32) >> 16) + 1) + 8),
           v24 = -65536 * (((unsigned int)v24 - v32) >> 16) - v32 + (unsigned int)v24)
        : (v33 = *(_QWORD *)(v31 + 8)),
          (unsigned int)v24 >= *(_DWORD *)(v33 + 20)) )
    {
      v34 = 0LL;
    }
    else
    {
      v34 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
    }
    v20 = (unsigned __int16)*v34 | (*v34 >> 8) & 0xFF0000;
    if ( v20 >= 0x10000 )
    {
      v35 = (unsigned __int16)*v34;
      if ( *(_DWORD *)v25 <= 0x10000u )
      {
        v20 = (unsigned __int16)*v34;
      }
      else
      {
        v36 = *(_QWORD *)(v25 + 16);
        v37 = *(_DWORD *)(v36 + 2056);
        if ( (unsigned __int16)*v34 >= v37 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
        {
          v39 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)*v34 >= v37 )
          {
            v38 = *(_QWORD *)(v36 + 8LL * ((((unsigned __int16)*v34 - v37) >> 16) + 1) + 8);
            v35 = -65536 * (((unsigned __int16)v20 - v37) >> 16) - v37 + (unsigned __int16)v20;
          }
          else
          {
            v38 = *(_QWORD *)(v36 + 8);
          }
          v39 = 0LL;
          if ( (unsigned int)v35 < *(_DWORD *)(v38 + 20) )
            v39 = *(_QWORD *)v38 + 24 * v35;
        }
        if ( *(unsigned __int8 *)(v39 + 13) == HIWORD(v20) )
          v20 = (unsigned __int16)v20;
      }
    }
    v16 = *(_QWORD *)(v25 + 16);
    v17 = *(_DWORD *)(v16 + 2056);
    if ( v20 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
    {
      if ( v20 >= v17 )
      {
        v18 = *(_QWORD *)(v16 + 8LL * (((v20 - v17) >> 16) + 1) + 8);
        v20 += -65536 * ((v20 - v17) >> 16) - v17;
      }
      else
      {
        v18 = *(_QWORD *)(v16 + 8);
      }
      *(_BYTE *)(*(_QWORD *)v18 + 24LL * v20 + 6) = 0;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v20 >> 8)) + 16LL * (unsigned __int8)v20,
        0LL);
      KeLeaveCriticalRegion();
    }
    v6 = 0;
    v40 = 0LL;
    v41 = 0;
    KeLeaveCriticalRegion();
  }
  if ( v6 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v40);
  return (struct _BASEOBJECT *)v5;
}
