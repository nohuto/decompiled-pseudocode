/*
 * XREFs of PspFreezeJobTree @ 0x140A67B30
 * Callers:
 *     PspFreezeJobTree @ 0x140A67B30 (PspFreezeJobTree.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspSendWakeNotification @ 0x140859738 (PspSendWakeNotification.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreezeJobTree @ 0x140A67B30 (PspFreezeJobTree.c)
 */

__int64 __fastcall PspFreezeJobTree(__int64 a1, __int64 a2)
{
  int v4; // r14d
  int v5; // ecx
  int v6; // esi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  unsigned int v13; // edi
  unsigned __int64 *v14; // rsi
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20[2]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v21; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v22[4]; // [rsp+70h] [rbp-9h] BYREF

  v20[1] = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  memset_0(v22, 0, sizeof(v22));
  v4 = 0;
  v20[0] = a2;
  LODWORD(v18) = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  v5 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 1552) & 0x200;
    if ( *(_BYTE *)(a2 + 4) )
    {
      if ( v8 )
        goto LABEL_35;
    }
    else if ( !v8 || ((*(_BYTE *)(a1 + 1556) ^ (unsigned __int8)v5) & 8) == 0 )
    {
      goto LABEL_35;
    }
  }
  if ( (v5 & 4) == 0 )
    goto LABEL_3;
  v12 = *(_DWORD *)(a1 + 1552) & 0x80000;
  if ( *(_BYTE *)(a2 + 5) )
  {
    if ( v12 )
      goto LABEL_35;
  }
  else if ( !v12 )
  {
LABEL_35:
    LODWORD(v18) = -1073741811;
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    return (unsigned int)v18;
  }
LABEL_3:
  if ( (v5 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 1552) & 0x800) != 0 )
    {
      v9 = *(_DWORD *)(a1 + 1192);
      v19 = *(_QWORD *)(a2 + 8);
      v10 = ~*(_DWORD *)(a1 + 1188);
      LODWORD(v19) = ~*(_DWORD *)(a1 + 1184) & v19;
      HIDWORD(v19) &= v10 & v9;
      v11 = v19 == 0;
      *(_DWORD *)(a1 + 1192) = v9 & ~HIDWORD(v19);
      if ( !v11 )
      {
        v15 = *(_OWORD *)(a1 + 1128);
        v22[0] = *(_OWORD *)(a1 + 1112);
        v16 = *(_OWORD *)(a1 + 1144);
        v22[1] = v15;
        v17 = *(_OWORD *)(a1 + 1160);
        v22[2] = v16;
        v22[3] = v17;
      }
    }
    *(_QWORD *)(a1 + 1184) = *(_QWORD *)(a2 + 8);
  }
  v6 = 5;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1552), 9u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1552), 9u);
    if ( (*(_DWORD *)a2 & 8) == 0 )
    {
      if ( *(_BYTE *)(a2 + 4) )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1556), 3u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1556), 3u);
    }
    v4 = 5;
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1552), 0x13u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1552), 0x13u);
  }
  else
  {
    v6 = v4;
    if ( !v4 )
      goto LABEL_14;
  }
  PspEnumJobsAndProcessesInJobHierarchy(
    (char *)a1,
    (int)PspSetJobFreezeCountCallback,
    0,
    (int)PspSetProcessFreezeStateCallback,
    (__int64)v20,
    v6);
LABEL_14:
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( v6 )
  {
    PspEnumJobsAndProcessesInJobHierarchy((char *)a1, 0, (int)PspExecuteJobFreezeThawCallback, 0, (__int64)&v18, 0);
    if ( (int)v18 < 0 )
    {
      *(_DWORD *)a2 &= ~4u;
      LODWORD(v21) = 4;
      BYTE5(v21) = 0;
      PspFreezeJobTree(a1, &v21);
      LODWORD(v18) = 262;
    }
  }
  if ( v19 )
  {
    v13 = 0;
    v14 = (unsigned __int64 *)v22 + 1;
    do
    {
      if ( PspSendWakeNotification((PVOID)a1, v13, &v19, *v14, *v14 != 0 ? 3 : 0) )
        break;
      ++v13;
      ++v14;
    }
    while ( v13 < 7 );
  }
  return (unsigned int)v18;
}
