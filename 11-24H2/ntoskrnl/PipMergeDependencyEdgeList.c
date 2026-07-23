/*
 * XREFs of PipMergeDependencyEdgeList @ 0x14071C45C
 * Callers:
 *     PipMergeDependencyNodes @ 0x14071C5C8 (PipMergeDependencyNodes.c)
 * Callees:
 *     PipFreeDependencyEdge @ 0x1404C6D54 (PipFreeDependencyEdge.c)
 *     PiListEntryToDependencyEdge @ 0x1404F5EF8 (PiListEntryToDependencyEdge.c)
 *     PipMoveListEntries @ 0x1405A164C (PipMoveListEntries.c)
 *     PipNotifyDependenciesChanged @ 0x1406F7FA8 (PipNotifyDependenciesChanged.c)
 *     PipAddRequestToEdge @ 0x14071BFA8 (PipAddRequestToEdge.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PipDereferenceDependencyNode @ 0x140AAF930 (PipDereferenceDependencyNode.c)
 */

void __fastcall PipMergeDependencyEdgeList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int v5; // r13d
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 **v11; // r8
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // r15
  __int64 v16; // rdx
  bool v17; // r12
  UNICODE_STRING *v18; // rsi
  PCUNICODE_STRING *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  PVOID P; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v23; // [rsp+28h] [rbp-40h]
  __int64 *v25; // [rsp+88h] [rbp+20h]

  P = 0LL;
  v3 = a2;
  v5 = a3;
  v6 = (__int64 *)(((_DWORD)a3 != 0 ? 0x10 : 0) + a1 + 16);
  v25 = v6;
  v7 = a2 + 16;
  v8 = (__int64 *)(v7 + ((_DWORD)a3 != 0 ? 0x10 : 0));
  PiPnpRtlBeginOperation(&P, v7, a3);
  v9 = *v8;
  if ( (__int64 *)*v8 != v8 )
  {
    do
    {
      v10 = PiListEntryToDependencyEdge(v9, v5);
      v23 = *v11;
      v12 = *v6;
      while ( (__int64 *)v12 != v6 )
      {
        v13 = PiListEntryToDependencyEdge(v12, v5);
        v12 = *v14;
        v15 = v13;
        if ( v5 )
        {
          if ( *(_QWORD *)(v10 + 40) == *(_QWORD *)(v13 + 40) )
          {
            v17 = 1;
LABEL_9:
            v18 = *(UNICODE_STRING **)(v10 + 56);
            while ( v18 != (UNICODE_STRING *)(v10 + 56) )
            {
              v19 = (PCUNICODE_STRING *)v18;
              v18 = *(UNICODE_STRING **)&v18->Length;
              PipAddRequestToEdge(v15, v19 + 2);
            }
            PipFreeDependencyEdge((_DWORD *)v10, v15);
            v3 = a2;
            v10 = 0LL;
            if ( v17 )
              goto LABEL_17;
            break;
          }
        }
        else
        {
          v16 = *(_QWORD *)(v10 + 32);
          v17 = v16 == *(_QWORD *)(v13 + 32);
          if ( v16 == *(_QWORD *)(v13 + 32) )
            goto LABEL_9;
        }
      }
      if ( v5 )
      {
        v21 = *(_QWORD *)(v10 + 40);
        v20 = a1;
        *(_QWORD *)(v10 + 32) = a1;
      }
      else
      {
        v20 = *(_QWORD *)(v10 + 32);
        v21 = a1;
        *(_QWORD *)(v10 + 40) = a1;
      }
      PipNotifyDependenciesChanged(v21, v20);
      ++*(_DWORD *)(a1 + 88);
      PipDereferenceDependencyNode(v3);
LABEL_17:
      v9 = (__int64)v23;
      v6 = v25;
    }
    while ( v23 != v8 );
  }
  PipMoveListEntries(v6, (__int64)v8);
  if ( P )
    PiPnpRtlEndOperation(P);
}
