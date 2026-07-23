/*
 * XREFs of PspSetEffectiveJobLimits @ 0x140A2C888
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 *     PspSetJobLimitsJobPreCallback @ 0x140A2C810 (PspSetJobLimitsJobPreCallback.c)
 * Callees:
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspSetEffectiveLimit @ 0x140A2CBA0 (PspSetEffectiveLimit.c)
 */

__int64 __fastcall PspSetEffectiveJobLimits(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  char v5; // al
  int v6; // ecx
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int8 v19; // dl
  struct _KAFFINITY_EX *v20; // rcx
  struct _KAFFINITY_EX *v21; // r8
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  _DWORD v25[2]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v26[264]; // [rsp+28h] [rbp-150h] BYREF

  memset_0(v26, 0, 0x100uLL);
  v4 = *(_QWORD *)(a1 + 1304);
  v5 = PspSetEffectiveLimit(16LL, a2);
  v7 = v6 - 15;
  v8 = v6 + 16;
  if ( v5 )
  {
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v6) != 0 )
    {
      if ( !v4 || (unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)(v4 + 728)) )
      {
        v20 = (struct _KAFFINITY_EX *)(a1 + 728);
        v21 = (struct _KAFFINITY_EX *)(a1 + 264);
      }
      else
      {
        v25[1] = 0;
        v25[0] = 2097153;
        memset_0(v26, 0, 0x100uLL);
        KeAndAffinityEx2((struct _KAFFINITY_EX *)(v4 + 728), (struct _KAFFINITY_EX *)(a1 + 264), (__int64)v25);
        if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)(a1 + 264), (unsigned __int16 *)v25)
          || (unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)v25) )
        {
          v20 = (struct _KAFFINITY_EX *)(a1 + 728);
          v21 = (struct _KAFFINITY_EX *)(v4 + 728);
        }
        else
        {
          v20 = (struct _KAFFINITY_EX *)(a1 + 728);
          v21 = (struct _KAFFINITY_EX *)v25;
        }
      }
    }
    else
    {
      v20 = (struct _KAFFINITY_EX *)(a1 + 728);
      if ( !v4 )
      {
        *(_DWORD *)(a1 + 732) = 0;
        *(_DWORD *)&v20->Count = 2097153;
        memset_0((void *)(a1 + 736), 0, 0x100uLL);
        goto LABEL_2;
      }
      v21 = (struct _KAFFINITY_EX *)(v4 + 728);
    }
    KiCopyAffinityEx(v20, v20->Size, v21);
  }
LABEL_2:
  if ( (unsigned __int8)PspSetEffectiveLimit(v8, a2) )
  {
    if ( v4 )
      v19 = *(_BYTE *)(v4 + 1100);
    else
      v19 = 0;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v8) != 0
      && *((_BYTE *)&PspPriorityClassRank + v19) >= *((_BYTE *)&PspPriorityClassRank + *(unsigned __int8 *)(a1 + 1101)) )
    {
      v19 = *(_BYTE *)(a1 + 1101);
    }
    *(_BYTE *)(a1 + 1100) = v19;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(128LL, a2) )
  {
    if ( v4 )
      v17 = *(_DWORD *)(v4 + 1060);
    else
      v17 = 10;
    if ( (*(_DWORD *)(a1 + 256) & 0x80u) == 0 || (v22 = *(_DWORD *)(a1 + 580), v22 >= v17) )
      *(_DWORD *)(a1 + 1060) = v17;
    else
      *(_DWORD *)(a1 + 1060) = v22;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(v7, v9) )
  {
    if ( v4 )
    {
      v13 = *(_QWORD *)(v4 + 1000);
      v14 = *(_QWORD *)(v4 + 1008);
    }
    else
    {
      v13 = 0LL;
      v14 = 0LL;
    }
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v7) == 0
      || (v23 = *(_QWORD *)(a1 + 248), v23 >= v14) && v14 )
    {
      *(_QWORD *)(a1 + 1008) = v14;
      *(_QWORD *)(a1 + 1000) = v13;
    }
    else
    {
      *(_QWORD *)(a1 + 1008) = v23;
      *(_QWORD *)(a1 + 1000) = *(_QWORD *)(a1 + 240);
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(256LL, a2) )
  {
    if ( v4 )
    {
      v10 = *(_QWORD *)(v4 + 1016);
      v11 = *(_QWORD *)(v4 + 1024);
    }
    else
    {
      v10 = 0LL;
      v11 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 0x100) == 0 || (v18 = *(_QWORD *)(a1 + 688), v18 >= v10) && v10 )
    {
      *(_QWORD *)(a1 + 1016) = v10;
      *(_QWORD *)(a1 + 1024) = v11;
    }
    else
    {
      *(_QWORD *)(a1 + 1016) = v18;
      *(_QWORD *)(a1 + 1024) = a1;
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(2LL, a2) )
  {
    if ( v4 )
    {
      v15 = *(_QWORD *)(v4 + 992);
      v16 = *(_QWORD *)(v4 + 1032);
    }
    else
    {
      v15 = 0LL;
      v16 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 2) == 0 || (v24 = *(_QWORD *)(a1 + 224), v24 >= v15) && v15 )
    {
      *(_QWORD *)(a1 + 992) = v15;
      *(_QWORD *)(a1 + 1032) = v16;
    }
    else
    {
      *(_QWORD *)(a1 + 992) = v24;
      *(_QWORD *)(a1 + 1032) = a1;
    }
  }
  result = *(unsigned int *)(a1 + 256);
  *(_DWORD *)(a1 + 1056) = result;
  if ( v4 )
  {
    result = *(_DWORD *)(v4 + 1056) | (unsigned int)result;
    *(_DWORD *)(a1 + 1056) = result;
  }
  return result;
}
