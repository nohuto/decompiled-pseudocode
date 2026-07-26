/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x140015000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v4; // r12d
  int *ThreadProperty; // rax
  PACCESS_TOKEN v6; // rax
  void *v7; // r15
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v9; // edi
  int v10; // edi
  unsigned int v11; // r15d
  KIRQL v12; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v13; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v14; // rdx
  KIRQL v15; // al
  int v16; // edx
  KIRQL v17; // r8
  int v18; // edx
  KIRQL v19; // dl
  char v20; // r13
  char *v21; // r14
  char v22; // r12
  unsigned int v23; // edi
  KIRQL v24; // di
  struct _KEVENT *v25; // rcx
  unsigned int v27; // eax
  int v28; // r12d
  int v29; // r15d
  unsigned int v30; // edi
  struct _KTHREAD *v31; // r15
  PACCESS_TOKEN v32; // rax
  void *v33; // rsi
  unsigned int ThreadSessionId; // eax
  NTSTATUS v35; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v36; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v37; // rsi
  char *v38; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v39; // rax
  _DWORD *v40; // rcx
  int v41; // eax
  NTSTATUS InformationToken; // edi
  int v43; // esi
  KIRQL v44; // r8
  char *v45; // rcx
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-19h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+41h] [rbp-18h] BYREF
  BOOLEAN v48; // [rsp+42h] [rbp-17h] BYREF
  BOOLEAN v49; // [rsp+43h] [rbp-16h] BYREF
  char v50; // [rsp+44h] [rbp-15h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+48h] [rbp-11h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v52; // [rsp+4Ch] [rbp-Dh] BYREF
  PVOID TokenInformation; // [rsp+50h] [rbp-9h] BYREF
  PVOID v54[5]; // [rsp+58h] [rbp-1h] BYREF

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      43,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
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
        memset(&v54[2], 0, 24);
        ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
        if ( ThreadProperty )
        {
          v10 = *ThreadProperty;
          LODWORD(v54[2]) = ThreadProperty[1];
          HIDWORD(v54[2]) = v10;
          ObfDereferenceObject(ThreadProperty);
          v11 = v10;
          if ( v10 )
            goto LABEL_15;
        }
        CopyOnOpen = 0;
        EffectiveOnly = 0;
        ImpersonationLevel = SecurityAnonymous;
        TokenInformation = 0LL;
        if ( KeGetCurrentIrql() >= 2u )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
        }
        else
        {
          v6 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
          v7 = v6;
          if ( v6 )
          {
            v35 = SeQueryInformationToken(v6, TokenSessionId, &TokenInformation);
            PsDereferenceImpersonationToken(v7);
            if ( v35 >= 0 )
            {
              v9 = (unsigned int)TokenInformation;
LABEL_11:
              if ( v9 == -1 )
              {
                v31 = KeGetCurrentThread();
                v49 = 0;
                v48 = 0;
                v52 = SecurityAnonymous;
                v54[0] = 0LL;
                if ( KeGetCurrentIrql() >= 2u )
                {
                  ThreadSessionId = PsGetCurrentProcessSessionId();
                }
                else
                {
                  v32 = PsReferenceImpersonationToken(v31, &v49, &v48, &v52);
                  v33 = v32;
                  if ( v32 )
                  {
                    InformationToken = SeQueryInformationToken(v32, TokenSessionId, v54);
                    PsDereferenceImpersonationToken(v33);
                    if ( InformationToken >= 0 )
                    {
                      v9 = (unsigned int)v54[0];
                      goto LABEL_12;
                    }
                  }
                  ThreadSessionId = PsGetThreadSessionId(v31);
                }
                v9 = ThreadSessionId;
              }
LABEL_12:
              if ( v9 < dword_14011C950 )
              {
                v43 = 0;
                v44 = KeAcquireSpinLockRaiseToDpc(&qword_14011C9A0);
                if ( v9 < dword_14011C950 )
                  v43 = *((_DWORD *)qword_14011C9F0 + 6 * v9);
                KeReleaseSpinLock(&qword_14011C9A0, v44);
                if ( !v43 )
                  v43 = 1;
                v10 = v43;
              }
              else
              {
                v10 = 1;
              }
              HIDWORD(v54[2]) = v10;
              v11 = v10;
LABEL_15:
              v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
              v13 = qword_14011CAA0;
              v14 = 0LL;
              while ( v13 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
              {
                if ( *((_DWORD *)v13 + 4) == v11 )
                {
                  v14 = v13;
                  break;
                }
                if ( *((_DWORD *)v13 + 4) > v11 )
                  break;
                v13 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v13;
              }
              *(_OWORD *)&v54[3] = *(_OWORD *)((char *)v14 + 1684);
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v12);
              v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
              v16 = *((_DWORD *)a1 + 14);
              v17 = v15;
              if ( v16 )
              {
                v18 = v16 - 1;
                if ( !v18 )
                {
                  v4 = 0;
                  goto LABEL_79;
                }
                if ( v18 != 1 )
                {
                  v2 = -1073741808;
                  v19 = v15;
LABEL_43:
                  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v19);
                  goto LABEL_44;
                }
LABEL_79:
                while ( 1 )
                {
                  v39 = qword_14011CAA0;
                  v37 = 0LL;
                  while ( v39 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
                  {
                    if ( *((_DWORD *)v39 + 4) > v4 )
                    {
                      v37 = v39;
                      break;
                    }
                    v39 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v39;
                  }
                  if ( !v37 )
                    goto LABEL_73;
                  v4 = *((_DWORD *)v37 + 4);
                  if ( v10 != v4 )
                  {
                    v45 = (char *)v54[3] - *(_QWORD *)((char *)v37 + 1684);
                    if ( v54[3] == *(PVOID *)((char *)v37 + 1684) )
                      v45 = (char *)v54[4] - *(_QWORD *)((char *)v37 + 1692);
                    if ( v45 && ((*((_DWORD *)v37 + 420) & 2) != 0 || v10 != 1) )
                      continue;
                  }
                  goto LABEL_86;
                }
              }
              v36 = qword_14011CAA0;
              v37 = 0LL;
              while ( v36 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
              {
                if ( *((_DWORD *)v36 + 4) == v4 )
                {
                  v37 = v36;
                  break;
                }
                if ( *((_DWORD *)v36 + 4) > v4 )
                  break;
                v36 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v36;
              }
              if ( !v37 )
              {
LABEL_73:
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v17);
                v22 = 0;
                v2 = -1073741772;
                if ( *((_DWORD *)a1 + 14) )
                  v2 = -2147483622;
                goto LABEL_38;
              }
              if ( v10 != *((_DWORD *)v37 + 4) )
              {
                v38 = (char *)v54[3] - *(_QWORD *)((char *)v37 + 1684);
                if ( v54[3] == *(PVOID *)((char *)v37 + 1684) )
                  v38 = (char *)v54[4] - *(_QWORD *)((char *)v37 + 1692);
                if ( v38 && ((*((_DWORD *)v37 + 420) & 2) != 0 || v10 != 1) )
                {
                  v37 = 0LL;
                  goto LABEL_73;
                }
              }
LABEL_86:
              _InterlockedIncrement((volatile signed __int32 *)v37 + 11);
              v40 = (_DWORD *)*((_QWORD *)a1 + 2);
              v22 = 1;
              v41 = *((_DWORD *)v37 + 4);
              v50 = 1;
              *v40 = v41;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v17);
              if ( *((_DWORD *)a1 + 8) )
              {
                v2 = -1073741808;
                goto LABEL_38;
              }
              v30 = *((_DWORD *)a1 + 13);
              v29 = *((_DWORD *)a1 + 12);
              if ( !*((_QWORD *)a1 + 5) )
              {
                *((_DWORD *)a1 + 12) = 0;
LABEL_38:
                if ( !v22 )
                  goto LABEL_44;
                v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v37 + 11, 0xFFFFFFFF) == 1 )
                {
                  v25 = (struct _KEVENT *)*((_QWORD *)v37 + 214);
                  if ( v25 )
                    KeSetEvent(v25, 0, 0);
                }
                v19 = v24;
                goto LABEL_43;
              }
              v20 = 0;
              if ( v29 <= 0 )
              {
LABEL_36:
                v23 = v30 - *((_DWORD *)a1 + 13);
                *((_DWORD *)a1 + 12) = v23;
                if ( !v23 )
                  v2 = -1073741811;
                goto LABEL_38;
              }
              v21 = (char *)*((_QWORD *)a1 + 5);
              while ( 1 )
              {
                if ( v20 )
                {
LABEL_35:
                  v22 = v50;
                  v2 = 0;
                  goto LABEL_36;
                }
                if ( v30 > 0x234 )
                  break;
                if ( v30 == 564 )
                {
                  v27 = 516;
                  v28 = 1080;
                }
                else if ( v30 )
                {
                  switch ( v30 )
                  {
                    case 8u:
                      v27 = 8;
                      v28 = 16;
                      break;
                    case 0x10u:
                      v28 = 32;
LABEL_77:
                      v27 = 16;
                      break;
                    case 0x20u:
                      v28 = 48;
                      v27 = 16;
                      break;
                    case 0x30u:
                      v27 = 516;
                      v28 = 564;
                      break;
                    default:
                      goto LABEL_33;
                  }
                }
                else
                {
                  v27 = 4;
                  v28 = 8;
                }
LABEL_51:
                if ( v29 >= v27 )
                {
                  memmove(v21, (char *)v37 + v30 + 64, v27);
                  v21 += v28 - v30;
                  v29 += v30 - v28;
                  v30 = v28;
                  goto LABEL_34;
                }
LABEL_33:
                v20 = 1;
LABEL_34:
                if ( v29 <= 0 )
                  goto LABEL_35;
              }
              if ( v30 != 1080 )
              {
                switch ( v30 )
                {
                  case 0x448u:
                    v27 = 516;
                    v28 = 1616;
                    break;
                  case 0x650u:
                    v27 = 4;
                    v28 = 1620;
                    break;
                  case 0x654u:
                    v28 = 1636;
                    v20 = 1;
                    v27 = 16;
                    break;
                  default:
                    goto LABEL_33;
                }
                goto LABEL_51;
              }
              v28 = 1096;
              goto LABEL_77;
            }
          }
          CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
        }
        v9 = CurrentProcessSessionId;
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x2Cu,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1,
      v2);
  KeLeaveCriticalRegion();
  return v2;
}
