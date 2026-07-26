/*
 * XREFs of ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140021110
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14001D250 (-ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     NdisFSendNetBufferListsComplete @ 0x1400207A0 (NdisFSendNetBufferListsComplete.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     PktMonClientNblLogNdis @ 0x14003BE50 (PktMonClientNblLogNdis.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14003C9A0 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140044000 (-ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEA.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140044330 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x140062630 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x140062930 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x14008DD70 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisSendNBLToFilter(char *a1, struct _NET_BUFFER_LIST *a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  unsigned int v5; // edi
  char *v7; // rbx
  int v8; // eax
  _QWORD *v9; // rcx
  char *v10; // r14
  _QWORD *v11; // r15
  __int64 v12; // r15
  void (__fastcall *v13)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD); // r12
  __int64 v14; // r13
  char *v15; // rdx
  struct _NET_BUFFER_LIST **v16; // rcx
  unsigned int v17; // eax
  bool v18; // zf
  struct _NET_BUFFER_LIST *v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rsi
  struct _NET_BUFFER_LIST *v22; // rax
  __int64 NdisReserved2; // r8
  struct _NET_BUFFER_LIST *Scratch; // rsi
  unsigned int v25; // edx
  __int64 v26; // r8
  struct _NET_BUFFER_LIST *v27; // r10
  struct _NET_BUFFER_LIST *v28; // rsi
  unsigned int v29; // ecx
  struct _NET_BUFFER_LIST *v30; // rax
  unsigned int v31; // edx
  struct _NET_BUFFER_LIST *v32; // rbx
  unsigned int ChildRefCount; // ecx
  struct _NET_BUFFER_LIST *v34; // rax
  ULONG v35; // edx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // bl
  struct _NET_BUFFER_LIST *v40; // r12
  unsigned int v41; // r15d
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NET_BUFFER *FirstNetBuffer; // r13
  __int64 v44; // rax
  int v45; // ecx
  int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // rcx
  ULONG v51; // r13d
  struct _NET_BUFFER_LIST *v52; // rax
  unsigned __int8 v53; // [rsp+40h] [rbp-79h] BYREF
  char v54; // [rsp+41h] [rbp-78h]
  KIRQL v55; // [rsp+42h] [rbp-77h]
  ULONG SendCompleteFlags[2]; // [rsp+48h] [rbp-71h]
  struct _NET_BUFFER_LIST *v57; // [rsp+50h] [rbp-69h]
  struct _NET_BUFFER_LIST *v58; // [rsp+58h] [rbp-61h]
  struct _NET_BUFFER_LIST *v59; // [rsp+60h] [rbp-59h]
  __int64 v60; // [rsp+68h] [rbp-51h] BYREF
  __int64 v61; // [rsp+70h] [rbp-49h]
  int v62; // [rsp+78h] [rbp-41h]
  _QWORD Parameter[4]; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v64; // [rsp+A0h] [rbp-19h]
  int v65; // [rsp+A4h] [rbp-15h]
  unsigned int v66; // [rsp+A8h] [rbp-11h]
  int v67; // [rsp+ACh] [rbp-Dh]
  _QWORD v68[12]; // [rsp+B0h] [rbp-9h] BYREF
  unsigned int v70; // [rsp+120h] [rbp+67h]
  unsigned int v71; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned int v72; // [rsp+130h] [rbp+77h]
  unsigned int v73; // [rsp+138h] [rbp+7Fh]

  v73 = a4;
  v72 = a3;
  v4 = *((_QWORD *)a1 + 321);
  v5 = 0;
  v7 = a1;
  if ( *(_BYTE *)v4 == 5 )
  {
    if ( !FILTER_TEST_FLAG(*((const struct _NDIS_FILTER_BLOCK **)a1 + 321), 0x8000) || *(_DWORD *)(v4 + 336) )
    {
LABEL_19:
      a4 = v73;
    }
    else if ( v7[91] && (*((_WORD *)v7 + 910) > 1u || v7[1999])
           || (a4 = v73, (v73 & 2) != 0)
           || (*((_DWORD *)v7 + 30) & 0x4000) != 0 )
    {
      v39 = v73;
      v40 = a2;
      v41 = v72;
      v57 = 0LL;
      SendCompleteFlags[0] = 0;
      v53 = 0;
      LOBYTE(v71) = 0;
      while ( 1 )
      {
        v18 = (v40->Flags & 0x800) == 0;
        Alignment = (struct _NET_BUFFER_LIST *)v40->Link.Alignment;
        v58 = (struct _NET_BUFFER_LIST *)v40->Link.Alignment;
        if ( v18 )
        {
          FirstNetBuffer = v40->FirstNetBuffer;
          do
          {
            ndisFIsLoopbackNetBuffer(
              (struct _NDIS_FILTER_BLOCK *)v4,
              FirstNetBuffer,
              v40,
              &v53,
              (unsigned __int8 *)&v71);
            if ( v53 == 1 )
            {
              v53 = 0;
              ndisFDoLoopbackNetBufferList((struct _NDIS_FILTER_BLOCK *)v4, FirstNetBuffer, v40, v41, v39);
            }
            FirstNetBuffer = (struct _NET_BUFFER *)FirstNetBuffer->Link.Alignment;
          }
          while ( FirstNetBuffer );
          if ( (_BYTE)v71 == 1 )
          {
            LOBYTE(v71) = 0;
            if ( a2 == v40 )
              a2 = v58;
            else
              v57->Link.Alignment = (unsigned __int64)v58;
            v51 = SendCompleteFlags[0];
            v40->Link.Alignment = 0LL;
            v40->Status = 0;
            if ( (v39 & 1) != 0 )
            {
              v51 |= 1u;
              SendCompleteFlags[0] = v51;
            }
            NdisFSendNetBufferListsComplete((NDIS_HANDLE)v4, v40, v51);
            Alignment = v58;
            goto LABEL_78;
          }
          Alignment = v58;
        }
        else
        {
          LOBYTE(v71) = 0;
        }
        v57 = v40;
LABEL_78:
        v40 = Alignment;
        if ( !Alignment )
        {
          v7 = a1;
          goto LABEL_19;
        }
      }
    }
    a3 = v72;
  }
  if ( !a2 )
    return;
  v8 = *((_DWORD *)v7 + 12);
  v9 = v7 + 2552;
  v10 = (char *)*((_QWORD *)v7 + 319);
  v55 = 2;
  v54 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v62 = -1;
  if ( v8 )
  {
    v15 = v7 + 2552;
  }
  else
  {
    v11 = v7 + 2552;
    if ( !*((_DWORD *)v7 + 20) )
      goto LABEL_5;
    v15 = v7 + 2552;
  }
  LODWORD(v61) = v8;
  v11 = v7 + 2552;
  HIDWORD(v61) = *((_DWORD *)v7 + 20);
  v60 = *((_QWORD *)v7 + 5);
  if ( !v60 )
  {
    v11 = v15;
    v60 = *((_QWORD *)v7 + 5);
  }
LABEL_5:
  if ( v10 == v7 )
  {
    v9 = v11;
    if ( (v61 & 0x8000000000LL) != 0 )
    {
      if ( (a4 & 1) == 0 )
      {
        v55 = KfRaiseIrql(2u);
        v54 = 1;
      }
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v60, 7u);
      a4 = v73;
      v9 = v11;
      a3 = v72;
    }
  }
  v12 = *((_QWORD *)v7 + 321);
  v13 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))*((_QWORD *)v7 + 331);
  v14 = *v9;
  if ( *(_BYTE *)v12 != 17 )
  {
    if ( (a4 & 1) == 0 )
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        if ( ndisIsLwfGuaranteedStackSpaceAvailable() )
        {
          if ( byte_1401278B0 )
          {
            if ( *(_BYTE *)v12 == 5 )
            {
              v44 = *(_QWORD *)(v12 + 912);
              if ( v44 )
              {
                if ( (*(_DWORD *)(v44 + 56) & 1) != 0 )
                  PktMonClientNblLogNdis(v12 + 888, a2, v36, 2LL);
              }
            }
          }
          if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v50 = *(_QWORD *)(v12 + 776)) != 0 )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, __int64, void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD)))ndisVerifierNdisDispatch
             + 10))(
              v14,
              a2,
              v72,
              v73,
              v50,
              v13);
          else
            v13(v14, a2, v72, v73);
        }
        else
        {
          v66 = v73;
          v45 = 24576;
          v64 = v72;
          v67 = 0;
          Parameter[0] = v12;
          Parameter[1] = v14;
          Parameter[2] = v13;
          Parameter[3] = a2;
          v65 = 0;
          if ( (unsigned int)Size > 0x6000 )
            v45 = Size;
          if ( KeExpandKernelStackAndCalloutEx(
                 ndisDataPathExpandStackCallback<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>,
                 Parameter,
                 v45,
                 0,
                 0LL) < 0 )
          {
            if ( byte_1401278B0 && (*(_DWORD *)(v12 + 840) & 2) != 0 )
              PktMonClientNblDropNdis(v12 + 784, (_DWORD)a2, v46, 2, -1073741670, -536866812);
            NdisSetStatusInNblChain(a2, -1073741670);
            v52 = a2;
            do
            {
              v52 = (struct _NET_BUFFER_LIST *)v52->Link.Alignment;
              ++v5;
            }
            while ( v52 );
            _InterlockedAdd((volatile signed __int32 *)(v12 + 296), v5);
            ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v12, a2, 1u);
          }
        }
        goto LABEL_9;
      }
      a4 = v73;
    }
    LODWORD(a3) = KeGetPcr()->Prcb.Number;
    v16 = (struct _NET_BUFFER_LIST **)v68;
    v17 = v72;
    LODWORD(v58) = a3;
    v68[2] = 0LL;
    v68[0] = a2;
    v68[1] = a2;
    a2->Scratch = 0LL;
    a2->ChildRefCount = a4;
    a2->Status = v17;
    while ( 1 )
    {
      v18 = *(_BYTE *)v12 == 5;
      *(_QWORD *)SendCompleteFlags = v16;
      if ( !v18 )
        break;
      v19 = *v16;
      v57 = v19;
      if ( !v19 )
        break;
      v20 = v12;
      v21 = *(_QWORD *)(v12 + 424) + 96LL * (unsigned int)a3;
      if ( *(_BYTE *)(v21 + 16) )
      {
        *v16 = 0LL;
        do
        {
          NdisReserved2 = v19->NdisReserved2;
          Scratch = v19->Scratch;
          v19->ChildRefCount = 0;
          v71 = NdisReserved2;
          if ( byte_1401278B0 )
          {
            if ( *(_BYTE *)v12 == 5 )
            {
              v47 = *(_QWORD *)(v12 + 912);
              if ( v47 )
              {
                if ( (*(_DWORD *)(v47 + 56) & 1) != 0 )
                  PktMonClientNblLogNdis(v12 + 888, v19, NdisReserved2, 2LL);
              }
            }
          }
          if ( ndisIsFilterVerified((struct _NDIS_FILTER_BLOCK *)v12) )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, __int64, _QWORD, _QWORD, void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD)))ndisVerifierNdisDispatch
             + 10))(
              v14,
              v27,
              v26,
              v25,
              *(_QWORD *)(v12 + 776),
              v13);
          else
            v13(v14, v27, v26, v25);
          v57 = (struct _NET_BUFFER_LIST *)Scratch;
          v19 = (struct _NET_BUFFER_LIST *)Scratch;
        }
        while ( Scratch );
        v16 = *(struct _NET_BUFFER_LIST ***)SendCompleteFlags;
        break;
      }
      *(_BYTE *)(v21 + 16) = 1;
      v22 = *v16;
      *v16 = 0LL;
      if ( v22 )
      {
        v32 = v22;
        do
        {
          ChildRefCount = v32->ChildRefCount;
          v34 = v32->Scratch;
          v35 = v32->NdisReserved2;
          v32->ChildRefCount = 0;
          v57 = (struct _NET_BUFFER_LIST *)v34;
          v71 = ChildRefCount;
          SendCompleteFlags[0] = v35;
          if ( byte_1401278B0 )
          {
            if ( *(_BYTE *)v12 == 5 )
            {
              v37 = *(_QWORD *)(v12 + 912);
              if ( v37 )
              {
                if ( (*(_DWORD *)(v37 + 56) & 1) != 0 )
                {
                  PktMonClientNblLogNdis(v12 + 888, v32, a3, 2LL);
                  ChildRefCount = v71;
                  v35 = SendCompleteFlags[0];
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v48 = *(_QWORD *)(v12 + 776)) != 0 )
            (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, __int64, void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD)))ndisVerifierNdisDispatch
             + 10))(
              v14,
              v32,
              v35,
              ChildRefCount,
              v48,
              v13);
          else
            v13(v14, v32, v35, ChildRefCount);
          v32 = v57;
        }
        while ( v57 );
        v7 = a1;
        v20 = v12;
        a3 = (unsigned int)v58;
      }
      *(_BYTE *)(v21 + 16) = 0;
      v16 = (struct _NET_BUFFER_LIST **)v21;
      v12 = *(_QWORD *)(v12 + 456);
      v13 = *(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))(v20 + 432);
      v14 = *(_QWORD *)(v20 + 440);
    }
    v28 = *v16;
    if ( *v16 )
    {
      *v16 = 0LL;
      do
      {
        v29 = v28->ChildRefCount;
        v30 = v28->Scratch;
        v31 = v28->NdisReserved2;
        v28->ChildRefCount = 0;
        v59 = (struct _NET_BUFFER_LIST *)v30;
        v70 = v29;
        v71 = v31;
        if ( byte_1401278B0 )
        {
          if ( *(_BYTE *)v12 == 5 )
          {
            v38 = *(_QWORD *)(v12 + 912);
            if ( v38 )
            {
              if ( (*(_DWORD *)(v38 + 56) & 1) != 0 )
              {
                PktMonClientNblLogNdis(v12 + 888, v28, a3, 2LL);
                v29 = v70;
                v31 = v71;
              }
            }
          }
        }
        if ( ndisVerifierNdisDispatch && *(_BYTE *)v12 == 5 && (v49 = *(_QWORD *)(v12 + 776)) != 0 )
          (*((void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, __int64, void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD)))ndisVerifierNdisDispatch
           + 10))(
            v14,
            v28,
            v31,
            v29,
            v49,
            v13);
        else
          v13(v14, v28, v31, v29);
        v28 = v59;
      }
      while ( v59 );
    }
    goto LABEL_9;
  }
  (*((void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *))v7 + 331))(*v9, a2);
LABEL_9:
  if ( v10 == v7 )
  {
    if ( (v61 & 0x8000000000LL) != 0 )
      ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v60, 7u, 0x14uLL);
    if ( v54 )
    {
      if ( v55 != 2 )
        KeLowerIrql(v55);
    }
  }
}
