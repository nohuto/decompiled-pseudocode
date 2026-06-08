/*
 * XREFs of AmdPctSnapPlatformCtrsEx @ 0x140002630
 * Callers:
 *     AmdResetCountersOnD0 @ 0x1400041C0 (AmdResetCountersOnD0.c)
 *     AmdPctSnapPlatformCtrs @ 0x1400413E0 (AmdPctSnapPlatformCtrs.c)
 * Callees:
 *     ReadGenAddr @ 0x14000297C (ReadGenAddr.c)
 *     ReadGenAddrHidden @ 0x140003ED8 (ReadGenAddrHidden.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AmdPctSnapPlatformCtrsEx(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  char v5; // r12
  int v6; // eax
  _DWORD *v7; // rdi
  unsigned __int16 v8; // r13
  __int64 v9; // r15
  int v10; // ebx
  __int64 v11; // r9
  int v12; // r11d
  _QWORD *v13; // rdx
  int v15; // esi
  _BYTE *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  wchar_t **v19; // rdx
  __int64 GenAddrHidden; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  wchar_t *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // [rsp+20h] [rbp-68h]
  char v27; // [rsp+21h] [rbp-67h]
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0LL;
  Affinity = 0LL;
  v30 = 0LL;
  PreviousAffinity = 0LL;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v5 = 1;
    v27 = 0;
    v26 = 1;
  }
  else
  {
    v5 = 0;
    v26 = 0;
    KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v27 = 1;
  }
  v6 = *(_DWORD *)(a1 + 1248);
  v7 = (_DWORD *)(a1 + 1252);
  v8 = 0;
  v9 = a1 + 1080;
  if ( v6 >= 3 )
  {
    v10 = 3;
    goto LABEL_10;
  }
  v15 = *(_DWORD *)(a1 + 1252);
  v10 = 0;
  if ( v6 >= 0 )
    v10 = *(_DWORD *)(a1 + 1248);
  if ( v10 < v15 )
  {
    v12 = v10 - 2;
    v13 = (_QWORD *)((char *)&unk_140015008 + 48 * v10);
    while ( 1 )
    {
      v16 = 0LL;
      if ( v10 < 0 )
        goto LABEL_7;
      if ( v10 >= 2 )
      {
        if ( v10 < 3 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 32LL);
          if ( v11 )
          {
            v24 = v12;
LABEL_41:
            v16 = (_BYTE *)(v11 + 40 * v24);
          }
        }
      }
      else
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
        if ( v11 )
        {
          v24 = v10;
          goto LABEL_41;
        }
      }
LABEL_7:
      if ( !*v16 || (v7 = (_DWORD *)(a1 + 1252), v9 = a1 + 1080, *v13 != 0x800000000000LL) )
      {
        ++v10;
        v7 = (_DWORD *)(a1 + 1252);
        ++v12;
        v9 = a1 + 1080;
        v13 += 6;
        if ( v10 < v15 )
          continue;
      }
      break;
    }
  }
LABEL_10:
  while ( (unsigned int)v10 < *v7 )
  {
    v17 = 6LL * (unsigned int)v10;
    if ( v10 >= 0 )
    {
      if ( v10 >= 2 )
      {
        if ( v10 < 3 )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 32LL);
          if ( v25 )
            v3 = v25 + 40LL * (v10 - 2);
        }
      }
      else
      {
        v18 = *(_QWORD *)(*(_QWORD *)v9 + 312LL);
        if ( v18 )
          v3 = v18 + 40LL * v10;
      }
    }
    if ( *(_BYTE *)v3 && ((unsigned __int64)*(&AmdPctPlatformCounterCfg + v17 + 1) & a2) != 0 )
    {
      ++v8;
      v19 = &(&AmdPctPlatformCounterCfg)[v17 + 1];
      if ( v5 )
        GenAddrHidden = ReadGenAddrHidden(*(unsigned int *)(a1 + 84), v19);
      else
        GenAddrHidden = ReadGenAddr(v19);
      v21 = GenAddrHidden;
      *(_QWORD *)(v3 + 8) = KeQueryInterruptTimePrecise(&v30);
      if ( a3 )
        v22 = v21;
      else
        v22 = *(_QWORD *)(v3 + 24);
      *(_QWORD *)(v3 + 16) = v22;
      *(_QWORD *)(v3 + 24) = v21;
      v23 = (&AmdPctPlatformCounterCfg)[v17 + 2];
      if ( v23 )
        ((void (__fastcall *)(__int64, _QWORD, __int64))v23)(a1, (unsigned int)v10, v21);
      else
        *(_QWORD *)(v3 + 32) = v21;
    }
    v5 = v26;
    ++v10;
    v3 = 0LL;
  }
  if ( v27 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v8;
}
