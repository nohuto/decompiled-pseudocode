/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14005EAF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v4; // r12d
  int *ThreadProperty; // rax
  __int64 v6; // rcx
  PACCESS_TOKEN v7; // rax
  void *v8; // r15
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v10; // edi
  int v11; // edi
  unsigned int v12; // r15d
  KIRQL v13; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v14; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // rdx
  KIRQL v16; // al
  int v17; // edx
  KIRQL v18; // r8
  int v19; // edx
  KIRQL v20; // dl
  char v21; // r13
  char *v22; // r14
  char v23; // r15
  unsigned int v24; // edi
  KIRQL v25; // di
  struct _KEVENT *v26; // rcx
  unsigned int v28; // eax
  int v29; // r15d
  int v30; // r12d
  unsigned int v31; // edi
  struct _KTHREAD *v32; // r15
  __int64 v33; // rcx
  PACCESS_TOKEN v34; // rax
  void *v35; // rsi
  unsigned int ThreadSessionId; // eax
  NTSTATUS v37; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v38; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v39; // rsi
  char *v40; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v41; // rax
  _DWORD *v42; // rcx
  int v43; // eax
  NTSTATUS InformationToken; // edi
  int v45; // esi
  KIRQL v46; // r8
  char *v47; // rcx
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-19h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+41h] [rbp-18h] BYREF
  BOOLEAN v50; // [rsp+42h] [rbp-17h] BYREF
  BOOLEAN v51; // [rsp+43h] [rbp-16h] BYREF
  char v52; // [rsp+44h] [rbp-15h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+48h] [rbp-11h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v54; // [rsp+4Ch] [rbp-Dh] BYREF
  PVOID TokenInformation; // [rsp+50h] [rbp-9h] BYREF
  PVOID v56[5]; // [rsp+58h] [rbp-1h] BYREF

  v2 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      47,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      (char)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) == 4 )
  {
    if ( *((_DWORD *)a1 + 12) )
    {
      if ( *((_QWORD *)a1 + 5) )
      {
        CurrentThread = KeGetCurrentThread();
        v4 = **((_DWORD **)a1 + 2);
        memset(&v56[2], 0, 24);
        ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
        if ( ThreadProperty )
        {
          v11 = *ThreadProperty;
          LODWORD(v56[2]) = ThreadProperty[1];
          HIDWORD(v56[2]) = v11;
          ObfDereferenceObject(ThreadProperty);
          v12 = v11;
          if ( v11 )
            goto LABEL_15;
        }
        CopyOnOpen = 0;
        EffectiveOnly = 0;
        ImpersonationLevel = SecurityAnonymous;
        TokenInformation = 0LL;
        if ( KeGetCurrentIrql() >= 2u )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
        }
        else
        {
          v7 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
          v8 = v7;
          if ( v7 )
          {
            v37 = SeQueryInformationToken(v7, TokenSessionId, &TokenInformation);
            PsDereferenceImpersonationToken(v8);
            if ( v37 >= 0 )
            {
              v10 = (unsigned int)TokenInformation;
LABEL_11:
              if ( v10 == -1 )
              {
                v32 = KeGetCurrentThread();
                v51 = 0;
                v50 = 0;
                v54 = SecurityAnonymous;
                v56[0] = 0LL;
                if ( KeGetCurrentIrql() >= 2u )
                {
                  ThreadSessionId = PsGetCurrentProcessSessionId(v33);
                }
                else
                {
                  v34 = PsReferenceImpersonationToken(v32, &v51, &v50, &v54);
                  v35 = v34;
                  if ( v34 )
                  {
                    InformationToken = SeQueryInformationToken(v34, TokenSessionId, v56);
                    PsDereferenceImpersonationToken(v35);
                    if ( InformationToken >= 0 )
                    {
                      v10 = (unsigned int)v56[0];
                      goto LABEL_12;
                    }
                  }
                  ThreadSessionId = PsGetThreadSessionId(v32);
                }
                v10 = ThreadSessionId;
              }
LABEL_12:
              if ( v10 < dword_140126990 )
              {
                v45 = 0;
                v46 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
                if ( v10 < dword_140126990 )
                  v45 = *((_DWORD *)qword_140126A30 + 6 * v10);
                KeReleaseSpinLock(&qword_1401269E0, v46);
                if ( !v45 )
                  v45 = 1;
                v11 = v45;
              }
              else
              {
                v11 = 1;
              }
              HIDWORD(v56[2]) = v11;
              v12 = v11;
LABEL_15:
              v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
              v14 = qword_140126AF0;
              v15 = 0LL;
              while ( v14 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
              {
                if ( *((_DWORD *)v14 + 4) == v12 )
                {
                  v15 = v14;
                  break;
                }
                if ( *((_DWORD *)v14 + 4) > v12 )
                  break;
                v14 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v14;
              }
              *(_OWORD *)&v56[3] = *(_OWORD *)((char *)v15 + 1684);
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v13);
              v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
              v17 = *((_DWORD *)a1 + 14);
              v18 = v16;
              if ( v17 )
              {
                v19 = v17 - 1;
                if ( !v19 )
                {
                  v4 = 0;
                  goto LABEL_79;
                }
                if ( v19 != 1 )
                {
                  v2 = -1073741808;
                  v20 = v16;
LABEL_43:
                  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v20);
                  goto LABEL_44;
                }
LABEL_79:
                while ( 1 )
                {
                  v41 = qword_140126AF0;
                  v39 = 0LL;
                  while ( v41 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
                  {
                    if ( *((_DWORD *)v41 + 4) > v4 )
                    {
                      v39 = v41;
                      break;
                    }
                    v41 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v41;
                  }
                  if ( !v39 )
                    goto LABEL_73;
                  v4 = *((_DWORD *)v39 + 4);
                  if ( v11 != v4 )
                  {
                    v47 = (char *)v56[3] - *(_QWORD *)((char *)v39 + 1684);
                    if ( v56[3] == *(PVOID *)((char *)v39 + 1684) )
                      v47 = (char *)v56[4] - *(_QWORD *)((char *)v39 + 1692);
                    if ( v47 && ((*((_DWORD *)v39 + 420) & 2) != 0 || v11 != 1) )
                      continue;
                  }
                  goto LABEL_86;
                }
              }
              v38 = qword_140126AF0;
              v39 = 0LL;
              while ( v38 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
              {
                if ( *((_DWORD *)v38 + 4) == v4 )
                {
                  v39 = v38;
                  break;
                }
                if ( *((_DWORD *)v38 + 4) > v4 )
                  break;
                v38 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v38;
              }
              if ( !v39 )
              {
LABEL_73:
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v18);
                v23 = 0;
                v2 = -1073741772;
                if ( *((_DWORD *)a1 + 14) )
                  v2 = -2147483622;
                goto LABEL_38;
              }
              if ( v11 != *((_DWORD *)v39 + 4) )
              {
                v40 = (char *)v56[3] - *(_QWORD *)((char *)v39 + 1684);
                if ( v56[3] == *(PVOID *)((char *)v39 + 1684) )
                  v40 = (char *)v56[4] - *(_QWORD *)((char *)v39 + 1692);
                if ( v40 && ((*((_DWORD *)v39 + 420) & 2) != 0 || v11 != 1) )
                {
                  v39 = 0LL;
                  goto LABEL_73;
                }
              }
LABEL_86:
              _InterlockedIncrement((volatile signed __int32 *)v39 + 11);
              v42 = (_DWORD *)*((_QWORD *)a1 + 2);
              v23 = 1;
              v43 = *((_DWORD *)v39 + 4);
              v52 = 1;
              *v42 = v43;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v18);
              if ( *((_DWORD *)a1 + 8) )
              {
                v2 = -1073741808;
                goto LABEL_38;
              }
              v31 = *((_DWORD *)a1 + 13);
              v30 = *((_DWORD *)a1 + 12);
              if ( !*((_QWORD *)a1 + 5) )
              {
                *((_DWORD *)a1 + 12) = 0;
LABEL_38:
                if ( !v23 )
                  goto LABEL_44;
                v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v39 + 11, 0xFFFFFFFF) == 1 )
                {
                  v26 = (struct _KEVENT *)*((_QWORD *)v39 + 214);
                  if ( v26 )
                    KeSetEvent(v26, 0, 0);
                }
                v20 = v25;
                goto LABEL_43;
              }
              v21 = 0;
              if ( v30 <= 0 )
              {
LABEL_36:
                v24 = v31 - *((_DWORD *)a1 + 13);
                *((_DWORD *)a1 + 12) = v24;
                if ( !v24 )
                  v2 = -1073741811;
                goto LABEL_38;
              }
              v22 = (char *)*((_QWORD *)a1 + 5);
              while ( 1 )
              {
                if ( v21 )
                {
LABEL_35:
                  v23 = v52;
                  v2 = 0;
                  goto LABEL_36;
                }
                if ( v31 > 0x234 )
                  break;
                if ( v31 == 564 )
                {
                  v28 = 516;
                  v29 = 1080;
                }
                else if ( v31 )
                {
                  switch ( v31 )
                  {
                    case 8u:
                      v28 = 8;
                      v29 = 16;
                      break;
                    case 0x10u:
                      v29 = 32;
LABEL_77:
                      v28 = 16;
                      break;
                    case 0x20u:
                      v29 = 48;
                      v28 = 16;
                      break;
                    case 0x30u:
                      v28 = 516;
                      v29 = 564;
                      break;
                    default:
                      goto LABEL_33;
                  }
                }
                else
                {
                  v28 = 4;
                  v29 = 8;
                }
LABEL_51:
                if ( v30 >= v28 )
                {
                  memmove(v22, (char *)v39 + v31 + 64, v28);
                  v22 += v29 - v31;
                  v30 += v31 - v29;
                  v31 = v29;
                  goto LABEL_34;
                }
LABEL_33:
                v21 = 1;
LABEL_34:
                if ( v30 <= 0 )
                  goto LABEL_35;
              }
              if ( v31 != 1080 )
              {
                switch ( v31 )
                {
                  case 0x448u:
                    v28 = 516;
                    v29 = 1616;
                    break;
                  case 0x650u:
                    v28 = 4;
                    v29 = 1620;
                    break;
                  case 0x654u:
                    v29 = 1636;
                    v21 = 1;
                    v28 = 16;
                    break;
                  default:
                    goto LABEL_33;
                }
                goto LABEL_51;
              }
              v29 = 1096;
              goto LABEL_77;
            }
          }
          CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
        }
        v10 = CurrentProcessSessionId;
        goto LABEL_11;
      }
      v2 = -1073741808;
    }
    else
    {
      v2 = -1073741808;
    }
  }
  else
  {
    v2 = -1073741808;
  }
LABEL_44:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x30u,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      (char)a1,
      v2);
  KeLeaveCriticalRegion();
  return v2;
}
