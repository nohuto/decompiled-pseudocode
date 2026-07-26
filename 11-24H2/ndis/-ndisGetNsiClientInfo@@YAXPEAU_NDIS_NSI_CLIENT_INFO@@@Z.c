/*
 * XREFs of ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14002A160
 * Callers:
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x140029E70 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140053CF0 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400CB280 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400CBD70 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400CD9F0 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400CDC80 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CDFA0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400CE530 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisEnumerateInterfaces32 @ 0x140171CB0 (ndisEnumerateInterfaces32.c)
 *     ndisEnumerateInterfaces @ 0x140175F50 (ndisEnumerateInterfaces.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetNsiClientInfo(struct _NDIS_NSI_CLIENT_INFO *a1)
{
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *ThreadProperty; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v4; // rdi
  __int64 v5; // rcx
  PACCESS_TOKEN v6; // rax
  void *v7; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v9; // ebx
  int v10; // eax
  KIRQL v11; // al
  unsigned int v12; // r8d
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rcx
  struct _KTHREAD *v14; // rbp
  __int64 v15; // rcx
  PACCESS_TOKEN v16; // rax
  void *v17; // r14
  unsigned int ThreadSessionId; // eax
  NTSTATUS v19; // ebx
  NTSTATUS v20; // ebx
  int v21; // ebp
  KIRQL v22; // al
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+20h] [rbp-48h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v24; // [rsp+24h] [rbp-44h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-40h] BYREF
  PVOID v26; // [rsp+30h] [rbp-38h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+70h] [rbp+8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v29; // [rsp+80h] [rbp+18h] BYREF
  BOOLEAN v30; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v4 = 0LL;
  if ( ThreadProperty )
  {
    *((_DWORD *)a1 + 1) = *ThreadProperty;
    *(_DWORD *)a1 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
  }
  if ( !*((_DWORD *)a1 + 1) )
  {
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
    }
    else
    {
      v6 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v7 = v6;
      if ( v6 )
      {
        v19 = SeQueryInformationToken(v6, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v7);
        if ( v19 >= 0 )
        {
          v9 = (unsigned int)TokenInformation;
LABEL_8:
          if ( v9 == -1 )
          {
            v14 = KeGetCurrentThread();
            v30 = 0;
            v29 = 0;
            v24 = SecurityAnonymous;
            v26 = 0LL;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId(v15);
            }
            else
            {
              v16 = PsReferenceImpersonationToken(v14, &v30, &v29, &v24);
              v17 = v16;
              if ( v16 )
              {
                v20 = SeQueryInformationToken(v16, TokenSessionId, &v26);
                PsDereferenceImpersonationToken(v17);
                if ( v20 >= 0 )
                {
                  v9 = (unsigned int)v26;
                  goto LABEL_9;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(v14);
            }
            v9 = ThreadSessionId;
          }
LABEL_9:
          if ( v9 < dword_14011C950 )
          {
            v21 = 0;
            v22 = KeAcquireSpinLockRaiseToDpc(&qword_14011C9A0);
            if ( v9 < dword_14011C950 )
              v21 = *((_DWORD *)qword_14011C9F0 + 6 * v9);
            KeReleaseSpinLock(&qword_14011C9A0, v22);
            if ( !v21 )
              v21 = 1;
            v10 = v21;
          }
          else
          {
            v10 = 1;
          }
          *((_DWORD *)a1 + 1) = v10;
          goto LABEL_12;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v9 = CurrentProcessSessionId;
    goto LABEL_8;
  }
LABEL_12:
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v12 = *((_DWORD *)a1 + 1);
  for ( i = qword_14011CAA0;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0;
        i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
  {
    if ( *((_DWORD *)i + 4) == v12 )
    {
      v4 = i;
      break;
    }
    if ( *((_DWORD *)i + 4) > v12 )
      break;
  }
  *(_OWORD *)((char *)a1 + 8) = *(_OWORD *)((char *)v4 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v11);
}
