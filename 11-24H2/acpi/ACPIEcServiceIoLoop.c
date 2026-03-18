/*
 * XREFs of ACPIEcServiceIoLoop @ 0x140018860
 * Callers:
 *     ACPIEcServiceDevice @ 0x14001873C (ACPIEcServiceDevice.c)
 * Callees:
 *     ACPIEcDispatchQueries @ 0x140017D78 (ACPIEcDispatchQueries.c)
 *     ACPIEcLogAction @ 0x140019010 (ACPIEcLogAction.c)
 *     ACPIEcLogError @ 0x140056040 (ACPIEcLogError.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIEcServiceIoLoop(__int64 a1)
{
  unsigned __int8 v1; // di
  char v2; // dl
  int *v3; // r14
  __int64 v4; // rbp
  unsigned int v5; // r12d
  ULONG v6; // esi
  int *v7; // r13
  char v8; // al
  ULONG v9; // ebx
  char v10; // di
  KSPIN_LOCK *v11; // rdi
  KIRQL v12; // bl
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  KIRQL v16; // al
  __int64 v17; // r8
  __int64 v18; // rdx
  KIRQL v19; // di
  int *v20; // rsi
  __int64 v21; // r15
  KSPIN_LOCK *v22; // rcx
  unsigned __int8 v23; // al
  KIRQL v24; // al
  __int64 v25; // rdx
  KIRQL v26; // bl
  KSPIN_LOCK *v27; // r15
  char v28; // al
  unsigned __int16 v29; // cx
  char v30; // al
  PLIST_ENTRY v31; // rax
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rsi
  KIRQL v34; // al
  __int64 v35; // rdx
  __int64 v36; // r9
  KIRQL v37; // r13
  __int64 v38; // r9
  int v39; // ecx
  char v40; // al
  void (__fastcall **v41)(_QWORD); // rbx
  _LIST_ENTRY *Blink; // rcx
  char v43; // r8
  __int16 v44; // dx
  int v45; // ecx
  char v46; // al
  __int64 v47; // rax
  PVOID **v48; // rax
  PVOID *v49; // rcx
  unsigned __int8 v50; // al
  unsigned __int8 *v51; // rax
  KIRQL v52; // r9
  int v53; // edx
  unsigned __int64 v54; // rax
  int v55; // ecx
  __int64 v56; // r8
  char v57; // [rsp+20h] [rbp-78h]
  char v58; // [rsp+21h] [rbp-77h]
  int v59; // [rsp+24h] [rbp-74h] BYREF
  int *v60; // [rsp+28h] [rbp-70h]
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-68h]
  PVOID P; // [rsp+38h] [rbp-60h] BYREF
  PVOID *p_P; // [rsp+40h] [rbp-58h]
  char v65; // [rsp+A8h] [rbp+10h]
  unsigned __int8 v66; // [rsp+B0h] [rbp+18h]
  char v67; // [rsp+B8h] [rbp+20h]

  v1 = 0;
  v59 = 0;
  v66 = 0;
  v2 = 1;
  v57 = 0;
  v3 = 0LL;
  v58 = 0;
  v4 = 0LL;
  v65 = 1;
  p_P = &P;
  v5 = 0;
  v60 = 0LL;
  P = &P;
  SpinLock = (PKSPIN_LOCK)(a1 + 88);
LABEL_2:
  v6 = 0;
  while ( 1 )
  {
    v67 = v2;
    v7 = v3;
    v8 = v2;
    v9 = v6;
    if ( v4 )
    {
      v11 = SpinLock;
      v12 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v13 = *(_QWORD *)(a1 + 480);
      if ( v13 )
        v14 = *(_QWORD *)(v13 + 40);
      else
        v14 = 0LL;
      v15 = 48LL;
      if ( v4 != *(_QWORD *)(a1 + 40) )
        v15 = 64LL;
      ACPIEcLogAction(a1, v15, v66, v14);
      KeReleaseSpinLock(v11, v12);
      __outbyte(v4, v66);
      KeStallExecutionProcessor(1u);
      ++v5;
      v4 = 0LL;
      v6 = 0;
LABEL_15:
      v3 = v60;
      if ( v60 )
      {
        v3 = 0LL;
        v60 = 0LL;
        v65 = 1;
      }
      goto LABEL_21;
    }
    if ( !v6 )
      goto LABEL_15;
    if ( v3 )
      break;
    v10 = v1 & 0x10;
    if ( !v2 )
    {
      if ( v10 )
      {
        v16 = KeAcquireSpinLockRaiseToDpc(SpinLock);
        LOBYTE(v17) = -125;
        LOBYTE(v18) = 48;
        v19 = v16;
        ACPIEcLogAction(a1, v18, v17, 0LL);
        KeReleaseSpinLock(SpinLock, v19);
        v20 = (int *)(a1 + 2192);
        __outbyte(*(_QWORD *)(a1 + 40), 0x83u);
        v8 = v67;
      }
      else
      {
        v20 = &v59;
      }
      v60 = v20;
      v6 = v9;
      v3 = v60;
      goto LABEL_20;
    }
    v5 += v6;
    KeStallExecutionProcessor(v6);
    v8 = v67;
    v65 = v67;
    if ( !v10 )
    {
      v3 = (int *)(a1 + 2184);
      if ( v6 < *(_DWORD *)(a1 + 68) )
        v3 = v7;
      v60 = v3;
      goto LABEL_21;
    }
    v60 = 0LL;
    if ( v6 >= *(_DWORD *)(a1 + 64) )
    {
      v3 = (int *)(a1 + 2188);
      v60 = (int *)(a1 + 2188);
LABEL_20:
      v65 = v8;
    }
LABEL_21:
    v21 = a1;
    ++v6;
    v22 = (KSPIN_LOCK *)(a1 + 88);
    v23 = __inbyte(*(_QWORD *)(a1 + 32));
    v1 = v23;
    v24 = KeAcquireSpinLockRaiseToDpc(v22);
    LOBYTE(v25) = 16;
    v26 = v24;
    ACPIEcLogAction(v21, v25, v1, 0LL);
    v27 = SpinLock;
    KeReleaseSpinLock(SpinLock, v26);
    if ( v57 && (v1 & 0x10) == 0 )
    {
      ++*(_DWORD *)(a1 + 2196);
      v57 = 0;
      v1 |= 0x10u;
    }
    if ( (v1 & 1) != 0 )
    {
      v32 = __inbyte(*(_QWORD *)(a1 + 24));
      v33 = v32;
      v34 = KeAcquireSpinLockRaiseToDpc(v27);
      v36 = *(_QWORD *)(a1 + 480);
      v37 = v34;
      if ( v36 )
        v38 = *(_QWORD *)(v36 + 40);
      else
        v38 = 0LL;
      LOBYTE(v35) = 32;
      ACPIEcLogAction(a1, v35, (unsigned __int8)v33, v38);
      KeReleaseSpinLock(v27, v37);
      v39 = *(unsigned __int8 *)(a1 + 488);
      if ( v39 == 1 )
      {
        v2 = v65;
        **(_BYTE **)(a1 + 496) = v33;
        *(_BYTE *)(a1 + 488) = 5;
      }
      else
      {
        v45 = v39 - 2;
        if ( v45 )
        {
          if ( v45 == 1 )
          {
            v46 = *(_BYTE *)(a1 + 489);
            ++*(_DWORD *)(a1 + 2200);
            v2 = v65;
            *(_BYTE *)(a1 + 488) = v46;
            *(_BYTE *)(a1 + 489) = 7;
            v57 = 1;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 2204) < 5u )
              ACPIEcLogError(a1, 2147811343LL);
            ++*(_DWORD *)(a1 + 2204);
            v2 = v65;
          }
        }
        else
        {
          if ( (_BYTE)v33 )
          {
            v52 = KeAcquireSpinLockRaiseToDpc(v27);
            v53 = 1 << (v33 & 0x1F);
            v54 = v33 >> 5;
            v59 = v53;
            v55 = *(_DWORD *)(a1 + 4 * (v33 >> 5) + 124);
            if ( (v55 & v53) == 0 )
            {
              *(_DWORD *)(a1 + 4 * v54 + 124) = v53 | v55;
              if ( (v53 & *(_DWORD *)(a1 + 4 * v54 + 156)) != 0 )
              {
                v56 = *(unsigned __int8 *)(v33 + a1 + 188);
                *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24 * v56) = *(_BYTE *)(a1 + 445);
                *(_BYTE *)(a1 + 445) = v56;
              }
              else
              {
                *(_BYTE *)(v33 + a1 + 188) = *(_BYTE *)(a1 + 444);
                *(_BYTE *)(a1 + 444) = v33;
              }
            }
            KeReleaseSpinLock(v27, v52);
            v58 = 1;
          }
          v2 = v65;
          *(_BYTE *)(a1 + 488) = 0;
        }
      }
      goto LABEL_2;
    }
    v2 = v65;
    if ( (v1 & 2) == 0 )
    {
      v28 = *(_BYTE *)(a1 + 488);
      switch ( v28 )
      {
        case 5:
          v29 = *(_WORD *)(a1 + 494);
          if ( v29 )
          {
            if ( (v1 & 0x10) != 0 || v29 <= *(_WORD *)(a1 + 2312) && (AcpiOverrideAttributes & 0x1000000) != 0 )
            {
              v50 = *(_BYTE *)(a1 + 490);
              ++*(_QWORD *)(a1 + 496);
              ++*(_BYTE *)(a1 + 491);
              v66 = v50;
              *(_WORD *)(a1 + 494) = v29 - 1;
              v30 = 6;
            }
            else
            {
              *(_BYTE *)(a1 + 489) = 5;
              v30 = 3;
              v66 = -126;
            }
            v4 = *(_QWORD *)(a1 + 40);
            *(_BYTE *)(a1 + 488) = v30;
          }
          else
          {
            v48 = *(PVOID ***)(a1 + 480);
            *(_BYTE *)(a1 + 488) = 0;
            *(_WORD *)(a1 + 494) = 0;
            *(_QWORD *)(a1 + 480) = 0LL;
            v49 = p_P;
            if ( *p_P != &P )
LABEL_71:
              __fastfail(3u);
            v48[1] = p_P;
            *v48 = &P;
            *v49 = v48;
            p_P = (PVOID *)v48;
          }
          break;
        case 4:
          v51 = *(unsigned __int8 **)(a1 + 496);
          v4 = *(_QWORD *)(a1 + 24);
          *(_BYTE *)(a1 + 488) = 5;
          v66 = *v51;
          break;
        case 6:
          v4 = *(_QWORD *)(a1 + 24);
          v66 = *(_BYTE *)(a1 + 491);
          v40 = 1;
          if ( *(_BYTE *)(a1 + 490) != 0x80 )
            v40 = 4;
          *(_BYTE *)(a1 + 488) = v40;
          break;
      }
      v2 = v65;
      if ( !v4 && !*(_BYTE *)(a1 + 488) )
      {
        *(_BYTE *)(a1 + 504) = 0;
        if ( (v1 & 0x20) != 0 )
        {
          v4 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 488) = 2;
          v66 = -124;
LABEL_58:
          KeSetTimer((PKTIMER)(a1 + 520), ACPIEcWatchdogTimeout, (PKDPC)(a1 + 584));
          v2 = v65;
        }
        else
        {
          v31 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 464), v27);
          if ( v31 )
          {
            *(_QWORD *)(a1 + 480) = v31;
            Blink = v31[1].Blink;
            *(_QWORD *)(a1 + 496) = Blink;
            v43 = BYTE1(v31[1].Flink);
            *(_BYTE *)(a1 + 491) = v43;
            v44 = WORD1(v31[1].Flink);
            *(_WORD *)(a1 + 492) = v44;
            *(_BYTE *)(a1 + 490) = v31[1].Flink;
            *(_QWORD *)(a1 + 496) = (char *)Blink - 1;
            v6 = 0;
            *(_BYTE *)(a1 + 491) = v43 - 1;
            *(_WORD *)(a1 + 494) = v44;
            *(_BYTE *)(a1 + 488) = 5;
            goto LABEL_58;
          }
          v65 = 0;
          KeCancelTimer((PKTIMER)(a1 + 520));
          v2 = 0;
        }
      }
    }
  }
  ++*v3;
  if ( v5 > *(_DWORD *)(a1 + 2208) )
    *(_DWORD *)(a1 + 2208) = v5;
  while ( 1 )
  {
    v41 = (void (__fastcall **)(_QWORD))P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_71;
    v47 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_71;
    P = *(PVOID *)P;
    *(_QWORD *)(v47 + 8) = &P;
    v41[4](v41[5]);
    ExFreePoolWithTag(v41, 0);
  }
  if ( v58 )
    ACPIEcDispatchQueries(a1);
}
