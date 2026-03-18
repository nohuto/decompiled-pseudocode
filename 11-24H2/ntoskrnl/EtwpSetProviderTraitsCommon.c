/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1408361EC
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x140836014 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x140A889E8 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     strnlen @ 0x1404FF8C0 (strnlen.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwpAddRegEntryToGroup @ 0x140839260 (EtwpAddRegEntryToGroup.c)
 *     TraitsCompare @ 0x1409F5C40 (TraitsCompare.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A00320 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpGetProviderGroupFromTraits @ 0x140A209C4 (EtwpGetProviderGroupFromTraits.c)
 *     AddDecodeGuidToSessions @ 0x140A6206C (AddDecodeGuidToSessions.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const char *P,
        unsigned int a6,
        PKGUARDED_MUTEX Mutex,
        __int64 a8)
{
  _DWORD *v8; // rdi
  char *v10; // r13
  __int16 v11; // r14
  unsigned int v12; // ebx
  __int64 v13; // rcx
  bool v14; // zf
  unsigned int v15; // edx
  bool v16; // bp
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  char v19; // r15
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  _OWORD *ProviderGroupFromTraits; // rax
  PKGUARDED_MUTEX v28[2]; // [rsp+48h] [rbp-60h] BYREF

  v8 = P;
  v10 = (char *)P;
  v11 = 0;
  v28[0] = Mutex;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( *((unsigned __int16 *)P + 14) != a6 )
    goto LABEL_2;
  v13 = (unsigned int)strnlen(P + 30, a6 - 2) + 3;
  v14 = (_DWORD)v13 == a6;
  if ( (unsigned int)v13 > a6 )
    goto LABEL_2;
  if ( (unsigned int)v13 < a6 )
  {
    while ( (int)v13 + 2 <= a6 )
    {
      v15 = *(unsigned __int16 *)&P[v13 + 28];
      if ( v15 < 3 )
        break;
      v13 = v15 + (unsigned int)v13;
      v14 = (_DWORD)v13 == a6;
      if ( (unsigned int)v13 >= a6 )
        goto LABEL_9;
    }
LABEL_2:
    v12 = -1073741566;
    goto LABEL_40;
  }
LABEL_9:
  if ( !v14 )
    goto LABEL_2;
  *(_OWORD *)P = 0LL;
  *((_QWORD *)P + 2) = 0LL;
  v16 = 1;
  *((_DWORD *)P + 6) = 1;
  ExAcquireFastMutex(Mutex);
  if ( (*(_BYTE *)(a8 + 8) & 1) != 0 )
  {
    v17 = *(_QWORD *)a8;
    if ( !*(_QWORD *)a8 )
    {
LABEL_15:
      v17 = 0LL;
      v19 = 0;
      goto LABEL_16;
    }
    v18 = a8 ^ v17;
  }
  else
  {
    v18 = *(_QWORD *)a8;
    v17 = *(_QWORD *)a8;
  }
  if ( !v18 )
    goto LABEL_15;
  v19 = 0;
  if ( v17 )
  {
    while ( 1 )
    {
      v20 = TraitsCompare(P, v17);
      if ( v20 <= 0 )
      {
        if ( v20 >= 0 )
        {
          v22 = *(_DWORD *)(v17 + 24);
          v19 = 1;
          v8 = (_DWORD *)v17;
          if ( v22 + 1 >= v22 )
          {
            *(_DWORD *)(v17 + 24) = v22 + 1;
            goto LABEL_18;
          }
          v12 = -1073741675;
          KeReleaseGuardedMutex(v28[0]);
          goto LABEL_40;
        }
        v21 = *(_QWORD *)v17;
        if ( !*(_QWORD *)v17 )
        {
          v16 = 0;
          goto LABEL_17;
        }
      }
      else
      {
        v21 = *(_QWORD *)(v17 + 8);
        if ( !v21 )
          goto LABEL_17;
      }
      v17 = v21;
    }
  }
LABEL_16:
  v16 = 0;
LABEL_17:
  RtlRbInsertNodeEx((__int64 *)a8, v17, v16, (unsigned __int64)P);
  v10 = 0LL;
LABEL_18:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 112), (signed __int64)v8, 0LL) )
  {
    if ( v19 )
    {
      --v8[6];
    }
    else
    {
      RtlRbRemoveNode((unsigned __int64 *)a8, (unsigned __int64 *)v8);
      v10 = (char *)v8;
    }
    v12 = -1073741823;
  }
  else
  {
    v12 = 0;
  }
  KeReleaseGuardedMutex(v28[0]);
  if ( !v12 )
  {
    if ( *((_WORD *)v8 + 14) == 22 && *(_DWORD *)((char *)v8 + 30) == 33559296 )
    {
      v11 = (unsigned __int8)AddDecodeGuidToSessions(a4) != 0 ? 0x200 : 0;
    }
    else if ( !*(_QWORD *)(a4 + 40) )
    {
      *(_OWORD *)v28 = 0LL;
      ProviderGroupFromTraits = (_OWORD *)EtwpGetProviderGroupFromTraits();
      if ( ProviderGroupFromTraits )
      {
        *(_OWORD *)v28 = *ProviderGroupFromTraits;
        v12 = EtwpAddRegEntryToGroup(a4, (unsigned int)v28, a1, a2, a3);
        if ( v12 )
        {
          EtwpReleaseProviderTraitsReference(a4);
          goto LABEL_40;
        }
      }
    }
    _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v11 | 0x100);
  }
LABEL_40:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v12;
}
