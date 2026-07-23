/*
 * XREFs of PopPowerRequestEvaluatePendingRequestStatus @ 0x140464D44
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x140464798 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceRelease @ 0x1404649E0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x140464AF0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x140464C2C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestHandleClose @ 0x140464CC4 (PopPowerRequestHandleClose.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404AF4B0 (PopPowerRequestUnrevokeRequests.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B0D7C (PopPowerRequestRevokeRequests.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 */

int __fastcall PopPowerRequestEvaluatePendingRequestStatus(_BYTE *Object, __int64 *a2)
{
  __int64 *v2; // rbp
  int v4; // esi
  unsigned int v5; // r14d
  char *v6; // rdi
  __int64 **v7; // rax
  int v8; // r8d
  int v9; // ecx
  unsigned int v10; // ecx
  _DWORD *v11; // rdx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 ***v14; // rcx
  __int64 **v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx

  v2 = &PopPowerRequestUpdateQueue;
  if ( a2 )
    v2 = a2;
  v4 = 0;
  if ( !Object[32] )
  {
    v10 = 0;
    v11 = Object + 40;
    do
    {
      if ( *v11 )
        v4 |= 1 << v10;
      ++v10;
      ++v11;
    }
    while ( v10 < 6 );
  }
  if ( !Object[152] )
    v4 &= ~PopPowerRequestGlobalOverrideMask & ~(*((_DWORD *)Object + 6) | *((_DWORD *)Object + 7));
  v5 = 0;
  v6 = (char *)&unk_140E019B0;
  do
  {
    LODWORD(v7) = (1 << v5) & *((_DWORD *)Object + 20);
    v8 = v4 & (1 << v5);
    if ( (_DWORD)v7 != v8 )
    {
      v12 = *(_DWORD *)v6;
      if ( ((1 << v5) & *((_DWORD *)Object + 21)) == v8 )
      {
        LODWORD(v7) = v12 - 1;
        *(_DWORD *)v6 = v12 - 1;
        if ( v12 == 1 )
          LODWORD(v7) = KeSetEvent((PRKEVENT)(v6 + 8), 0, 0);
      }
      else
      {
        *(_DWORD *)v6 = v12 + 1;
        LODWORD(v7) = KeResetEvent((PRKEVENT)(v6 + 8));
      }
    }
    ++v5;
    v6 += 48;
  }
  while ( v5 < 6 );
  v9 = *((_DWORD *)Object + 22);
  *((_DWORD *)Object + 20) = v4;
  if ( v4 == *((_DWORD *)Object + 21) )
  {
    if ( v9 != 1 )
      return (int)v7;
    v16 = Object + 64;
    v17 = *((_QWORD *)Object + 8);
    if ( *(_BYTE **)(v17 + 8) == Object + 64 )
    {
      v18 = (_QWORD *)*((_QWORD *)Object + 9);
      if ( (_QWORD *)*v18 == v16 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *((_QWORD *)Object + 9) = Object + 64;
        *v16 = v16;
        *((_DWORD *)Object + 22) = 0;
        LODWORD(v7) = ObfDereferenceObjectWithTag(Object, 0x72506F50u);
        return (int)v7;
      }
    }
LABEL_24:
    __fastfail(3u);
  }
  if ( v9 )
  {
    if ( v9 != 1 )
      return (int)v7;
  }
  else
  {
    ObfReferenceObjectWithTag(Object, 0x72506F50u);
  }
  v7 = (__int64 **)(Object + 64);
  v13 = *((_QWORD *)Object + 8);
  if ( *(_BYTE **)(v13 + 8) != Object + 64 )
    goto LABEL_24;
  v14 = (__int64 ***)*((_QWORD *)Object + 9);
  if ( *v14 != v7 )
    goto LABEL_24;
  *v14 = (__int64 **)v13;
  *(_QWORD *)(v13 + 8) = v14;
  v15 = (__int64 **)v2[1];
  if ( *v15 != v2 )
    goto LABEL_24;
  *v7 = v2;
  *((_QWORD *)Object + 9) = v15;
  *v15 = (__int64 *)v7;
  v2[1] = (__int64)v7;
  *((_DWORD *)Object + 22) = 1;
  return (int)v7;
}
