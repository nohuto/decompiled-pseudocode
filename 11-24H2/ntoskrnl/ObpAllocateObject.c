/*
 * XREFs of ObpAllocateObject @ 0x1408A3930
 * Callers:
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083A3C0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     NtCreateMutant @ 0x14083AEC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x14083B1F0 (NtCreateWaitCompletionPacket.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x140411D10 (SeAuditHeaderRequired.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(_DWORD *a1, char a2, __int64 a3, _WORD *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  int v8; // esi
  char v11; // r8
  int v12; // r10d
  int v13; // r9d
  struct _KTHREAD *CurrentThread; // rcx
  char v15; // bp
  char v16; // cl
  char v17; // di
  int v18; // r8d
  char v19; // r13
  unsigned __int8 v20; // r12
  char v21; // bp
  int v22; // r14d
  int v23; // r14d
  unsigned int v24; // ecx
  char *PoolWithTag; // rax
  char *v26; // r8
  __int64 v27; // rdx
  __int128 v28; // xmm0
  char v29; // dl
  unsigned __int32 v30; // r8d
  unsigned __int8 v32; // dl
  int v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+24h] [rbp-54h]
  bool v35; // [rsp+80h] [rbp+8h]
  int v37; // [rsp+90h] [rbp+18h]

  v8 = *a1 & 0x20;
  v35 = SeAuditHeaderRequired((POBJECT_TYPE *)a3);
  if ( v35 )
    v11 |= 0x20u;
  v13 = 32;
  v34 = 32;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || (CurrentThread = KeGetCurrentThread(), !PsInitialSystemProcess)
    || CurrentThread->ApcState.Process == PsIdleProcess )
  {
    v33 = 0;
  }
  else
  {
    v33 = 32;
    v11 |= 8u;
  }
  v15 = *(_BYTE *)(a3 + 66);
  v16 = v11 | 4;
  v17 = v15 & 0x10;
  if ( (v15 & 0x10) == 0 )
    v16 = v11;
  if ( *a4 )
  {
    if ( (v15 & 2) != 0 )
      return 3221225523LL;
    v16 |= 2u;
  }
  else
  {
    v13 = 0;
    v34 = 0;
  }
  v18 = 48;
  v19 = v16 | 1;
  v20 = (v15 >> 7) & 0x30;
  v21 = v15 & 0x20;
  if ( !v21 )
    v19 = v16;
  if ( a7 && (*a7 || a7[1]) )
  {
    v19 |= 0x40u;
    v37 = 16;
  }
  else
  {
    v18 = 0;
    v37 = 0;
  }
  v22 = 64;
  if ( !v35 )
    v22 = 48;
  v23 = v37 + v13 + v33 + v12 + (v17 != 0 ? 0x10 : 0) + (v21 != 0 ? 0x20 : 0) + v22;
  v24 = v18 + v23 + v20;
  if ( v24 + a5 < v24 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          (POOL_TYPE)(*(_DWORD *)(a3 + 100) | 0x400),
                          v24 + a5,
                          *(_DWORD *)(a3 + 192));
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( v20 )
  {
    v32 = -(char)((_BYTE)PoolWithTag + v23) & 0x3F;
    if ( v32 )
    {
      PoolWithTag += v32;
      v19 |= 0x80u;
      *((_DWORD *)PoolWithTag - 1) = v32;
    }
  }
  if ( v37 )
  {
    v26 = &PoolWithTag[v23 + a5];
    *(_QWORD *)PoolWithTag = v26;
    *(_OWORD *)v26 = 0LL;
    *((_OWORD *)v26 + 1) = 0LL;
    *((_OWORD *)v26 + 2) = 0LL;
    v27 = *(_QWORD *)PoolWithTag;
    PoolWithTag += 16;
    *(_BYTE *)(v27 + 24) = *a7;
  }
  if ( v35 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    PoolWithTag += 16;
  }
  if ( v8 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v33 )
  {
    *(_DWORD *)PoolWithTag = a1[5];
    *((_DWORD *)PoolWithTag + 1) = a1[6];
    *((_DWORD *)PoolWithTag + 2) = a1[7];
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    PoolWithTag += 32;
  }
  if ( v17 )
  {
    *((_DWORD *)PoolWithTag + 2) &= 0xFF000000;
    PoolWithTag[11] = 0;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v34 )
  {
    v28 = *(_OWORD *)a4;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *(_OWORD *)(PoolWithTag + 8) = v28;
    PoolWithTag += 32;
  }
  if ( v21 )
  {
    *((_WORD *)PoolWithTag + 12) = 0;
    *((_QWORD *)PoolWithTag + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    PoolWithTag += 32;
  }
  PoolWithTag[26] = v19;
  v29 = 1;
  PoolWithTag[25] = 0;
  PoolWithTag[27] = 1;
  if ( v17 )
  {
    PoolWithTag[27] = 65;
    v29 = 65;
  }
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *(_QWORD *)PoolWithTag = 1LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(PoolWithTag);
  if ( !a2 )
  {
    v29 |= 2u;
    PoolWithTag[27] = v29;
    if ( (*a1 & 0x10000) != 0 )
    {
      v29 |= 4u;
      PoolWithTag[27] = v29;
    }
  }
  if ( (*a1 & 0x10) != 0 )
  {
    v29 |= 0x10u;
    PoolWithTag[27] = v29;
  }
  if ( (*a1 & 0x20) != 0 )
    PoolWithTag[27] = v29 | 8;
  *((_QWORD *)PoolWithTag + 4) = a1;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  v30 = _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  if ( v30 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v30;
  *a6 = PoolWithTag;
  return 0LL;
}
