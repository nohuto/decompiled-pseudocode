/*
 * XREFs of SeSetSessionIdTokenWithLinked @ 0x14078F8C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SepReferenceTokenByHandle @ 0x1403E36B0 (SepReferenceTokenByHandle.c)
 *     SepDeReferenceLogonSessionDirect @ 0x14043F618 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x140A25AB4 (SepReferenceLogonSessionSilo.c)
 *     SeSetSessionIdToken @ 0x140A471F8 (SeSetSessionIdToken.c)
 */

__int64 __fastcall SeSetSessionIdTokenWithLinked(void *a1, ULONG a2, __int64 a3, int a4)
{
  void *v5; // rsi
  NTSTATUS v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v8; // rbx
  PERESOURCE v9; // rdx
  void *v10; // r14
  _QWORD *v12; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  POWNER_ENTRY OwnerTable; // [rsp+A0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v6 = SepReferenceTokenByHandle(a1, 8u, KeGetCurrentThread()->PreviousMode, a4, &Object, &OwnerTable, &v14);
  if ( v6 < 0 )
  {
    v8 = (PERESOURCE *)Object;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = (PERESOURCE *)Object;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(v8[6], 1u);
    if ( *((_BYTE *)v8 + 204) )
    {
      v6 = -1073741525;
      goto LABEL_13;
    }
    v6 = SepReferenceLogonSessionSilo(&v8[27]->SystemResourcesList.Blink, *(_QWORD *)&v8[27][1].ActiveEntries, &v12);
    if ( v6 >= 0 )
    {
      v9 = v8[27];
      v10 = (void *)v12[7];
      OwnerTable = v9->OwnerTable;
      if ( OwnerTable )
      {
        v6 = SepReferenceLogonSessionSilo(&OwnerTable, *(_QWORD *)&v9[1].ActiveEntries, &v13);
        if ( v6 < 0 )
          goto LABEL_13;
        v5 = (void *)v13[7];
      }
      if ( !v10 || (v6 = SeSetSessionIdToken(v10, a2), v6 >= 0) )
      {
        if ( v5 )
          v6 = SeSetSessionIdToken(v5, a2);
      }
    }
  }
LABEL_13:
  if ( v8 )
  {
    ExReleaseResourceLite(v8[6]);
    KeLeaveCriticalRegion();
    ObfDereferenceObjectWithTag(v8, 0x74726853u);
  }
  if ( v12 )
    SepDeReferenceLogonSessionDirect(v12);
  if ( v13 )
    SepDeReferenceLogonSessionDirect(v13);
  return (unsigned int)v6;
}
