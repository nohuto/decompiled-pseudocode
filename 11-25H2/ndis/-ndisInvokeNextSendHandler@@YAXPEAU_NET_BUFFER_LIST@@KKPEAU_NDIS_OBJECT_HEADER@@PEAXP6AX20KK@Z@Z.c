/*
 * XREFs of ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003BF50
 * Callers:
 *     NdisSendNetBufferLists @ 0x140031410 (NdisSendNetBufferLists.c)
 * Callees:
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     PktMonClientNblLogNdis @ 0x14003BE50 (PktMonClientNblLogNdis.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14003C9A0 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x14008DD70 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeNextSendHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        __int64 a3,
        struct _NDIS_OBJECT_HEADER *a4,
        void *a5,
        void (*a6)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))
{
  __int64 v6; // rax
  struct _NDIS_OBJECT_HEADER *v7; // rbx
  unsigned int v8; // esi
  __int64 *v11; // r15
  void *v12; // r10
  void (*v13)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // r13
  __int64 v14; // rsi
  struct _NDIS_OBJECT_HEADER *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // r14d
  __int64 v19; // rdi
  unsigned int v20; // edx
  __int64 v21; // r10
  __int64 v22; // rdi
  unsigned int v23; // r15d
  unsigned int v24; // ecx
  __int64 v25; // r14
  void *v26; // r14
  unsigned int v27; // ecx
  unsigned int v28; // edx
  __int64 v29; // r15
  unsigned __int64 v30; // r12
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  bool v35; // zf
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r12d
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rdx
  struct _NET_BUFFER_LIST *i; // rax
  void *v47; // [rsp+40h] [rbp-79h]
  struct _NDIS_OBJECT_HEADER v48; // [rsp+40h] [rbp-79h]
  unsigned int v49; // [rsp+48h] [rbp-71h]
  unsigned int v50; // [rsp+4Ch] [rbp-6Dh]
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int64 HighLimit; // [rsp+58h] [rbp-61h] BYREF
  __int128 v53; // [rsp+60h] [rbp-59h] BYREF
  __int128 v54; // [rsp+70h] [rbp-49h]
  __int64 v55; // [rsp+80h] [rbp-39h]
  __int64 v56; // [rsp+88h] [rbp-31h]
  _QWORD Parameter[4]; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v58; // [rsp+B0h] [rbp-9h]
  int v59; // [rsp+B4h] [rbp-5h]
  unsigned int v60; // [rsp+B8h] [rbp-1h]
  int v61; // [rsp+BCh] [rbp+3h]
  _QWORD v62[8]; // [rsp+C0h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+4Fh] BYREF
  unsigned int v64; // [rsp+128h] [rbp+6Fh]
  unsigned int v65; // [rsp+128h] [rbp+6Fh]

  v7 = a4;
  v8 = a3;
  if ( a4->Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a6)(a5, a1, a2, (unsigned int)a3);
  }
  else if ( (a3 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    v11 = v62;
    v12 = a5;
    v13 = a6;
    v50 = v6;
    v62[2] = 0LL;
    a1->Scratch = 0LL;
    v62[0] = a1;
    v62[1] = a1;
    a1->ChildRefCount = v8;
    a1->Status = a2;
    while ( 1 )
    {
      v47 = v12;
      if ( v7->Type != 5 )
        break;
      v14 = *v11;
      if ( !*v11 )
        break;
      v15 = v7;
      v16 = *(_QWORD *)&v7[106].Type + 96 * v6;
      v56 = v16;
      if ( *(_BYTE *)(v16 + 16) )
      {
        *v11 = 0LL;
        do
        {
          v18 = *(_DWORD *)(v14 + 132);
          v19 = *(_QWORD *)(v14 + 112);
          *(_DWORD *)(v14 + 132) = 0;
          if ( byte_1401278B0 )
          {
            if ( v7->Type == 5 )
            {
              v42 = *(_QWORD *)&v7[228].Type;
              if ( v42 )
              {
                if ( (*(_DWORD *)(v42 + 56) & 1) != 0 )
                  PktMonClientNblLogNdis((__int64)&v7[222], v14, a3, 2);
              }
            }
          }
          if ( ndisIsFilterVerified((struct _NDIS_FILTER_BLOCK *)v7) )
            (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 10))(
              v21,
              v14,
              v20,
              v18,
              *(_QWORD *)&v7[194].Type,
              v13);
          else
            ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v13)(v21, v14, v20, v18);
          v14 = v19;
        }
        while ( v19 );
        break;
      }
      *(_BYTE *)(v16 + 16) = 1;
      v17 = *v11;
      *v11 = 0LL;
      if ( v17 )
      {
        v26 = v12;
        do
        {
          v27 = *(_DWORD *)(v17 + 132);
          v28 = *(_DWORD *)(v17 + 140);
          v29 = *(_QWORD *)(v17 + 112);
          *(_DWORD *)(v17 + 132) = 0;
          v65 = v27;
          v49 = v28;
          if ( byte_1401278B0 )
          {
            if ( v7->Type == 5 )
            {
              v34 = *(_QWORD *)&v7[228].Type;
              if ( v34 )
              {
                if ( (*(_DWORD *)(v34 + 56) & 1) != 0 )
                {
                  v48 = v7[230];
                  v35 = (*(_DWORD *)(v17 + 128) & 0x8000) == 0;
                  v53 = 0LL;
                  LODWORD(v55) = 0;
                  v54 = 0LL;
                  if ( v35 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
                    {
                      v36 = *(_QWORD *)&v7[226].Type;
                      *(_QWORD *)((char *)&v54 + 4) = *(unsigned int *)&v48 | 0x200000000LL;
                      LOWORD(v53) = 40;
                      *((_QWORD *)&v53 + 1) = v17;
                      LODWORD(v54) = 1;
                      v55 = 0LL;
                      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1)
                                                                                  + 40LL))(
                        xmmword_1401278D0,
                        v36,
                        &v53,
                        0LL);
                      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
                    }
                    v28 = v49;
                    v27 = v65;
                  }
                }
              }
            }
          }
          if ( ndisVerifierNdisDispatch && v7->Type == 5 && (v43 = *(_QWORD *)&v7[194].Type) != 0 )
            (*((void (__fastcall **)(void *, __int64, _QWORD, _QWORD, __int64, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 10))(
              v26,
              v17,
              v28,
              v27,
              v43,
              v13);
          else
            ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD))v13)(v26, v17, v28, v27);
          v17 = v29;
        }
        while ( v29 );
        v16 = v56;
        v15 = v7;
      }
      v6 = v50;
      v11 = (__int64 *)v16;
      *(_BYTE *)(v16 + 16) = 0;
      v7 = *(struct _NDIS_OBJECT_HEADER **)&v7[114].Type;
      v13 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))&v15[108].Type;
      v12 = *(void **)&v15[110].Type;
    }
    v22 = *v11;
    if ( *v11 )
    {
      *v11 = 0LL;
      do
      {
        v23 = *(_DWORD *)(v22 + 132);
        v24 = *(_DWORD *)(v22 + 140);
        v25 = *(_QWORD *)(v22 + 112);
        *(_DWORD *)(v22 + 132) = 0;
        v64 = v24;
        if ( byte_1401278B0 )
        {
          if ( v7->Type == 5 )
          {
            v37 = *(_QWORD *)&v7[228].Type;
            if ( v37 )
            {
              if ( (*(_DWORD *)(v37 + 56) & 1) != 0 )
              {
                PktMonClientNblLogNdis((__int64)&v7[222], v22, a3, 2);
                v24 = v64;
              }
            }
          }
        }
        if ( ndisVerifierNdisDispatch && v7->Type == 5 && (v44 = *(_QWORD *)&v7[194].Type) != 0 )
          (*((void (__fastcall **)(void *, __int64, _QWORD, _QWORD, __int64, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
           + 10))(
            v47,
            v22,
            v24,
            v23,
            v44,
            v13);
        else
          ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD))v13)(v47, v22, v24, v23);
        v22 = v25;
      }
      while ( v25 );
    }
  }
  else
  {
    v30 = (unsigned int)Size;
    v31 = KeGetPcr()->Prcb.Number << 12;
    v32 = *(_QWORD *)(v31 + qword_1401270F8);
    LowLimit = v32;
    v33 = *(_QWORD *)(v31 + qword_1401270F0);
    HighLimit = v33;
    if ( v32 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v33 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v32 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v32 < v30 )
    {
      v39 = 0;
      Parameter[1] = a5;
      v40 = 24576;
      Parameter[2] = a6;
      v61 = 0;
      Parameter[0] = v7;
      Parameter[3] = a1;
      v59 = 0;
      v58 = a2;
      v60 = v8;
      if ( (unsigned int)Size > 0x6000 )
        v40 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>,
             Parameter,
             v40,
             0,
             0LL) < 0 )
      {
        if ( byte_1401278B0 && (*(_DWORD *)&v7[210] & 2) != 0 )
          PktMonClientNblDropNdis((_DWORD)v7 + 784, (_DWORD)a1, v41, 2, -1073741670, -536866812);
        NdisSetStatusInNblChain(a1, -1073741670);
        for ( i = a1; i; ++v39 )
          i = (struct _NET_BUFFER_LIST *)i->Link.Alignment;
        _InterlockedAdd((volatile signed __int32 *)&v7[74], v39);
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v7, a1, 1u);
      }
    }
    else
    {
      if ( byte_1401278B0 )
      {
        if ( v7->Type == 5 )
        {
          v38 = *(_QWORD *)&v7[228].Type;
          if ( v38 )
          {
            if ( (*(_DWORD *)(v38 + 56) & 1) != 0 )
              PktMonClientNblLogNdis((__int64)&v7[222], (__int64)a1, v33, 2);
          }
        }
      }
      if ( ndisVerifierNdisDispatch && v7->Type == 5 && (v45 = *(_QWORD *)&v7[194].Type) != 0 )
        (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, __int64, void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
         + 10))(
          a5,
          a1,
          a2,
          v8,
          v45,
          a6);
      else
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a6)(a5, a1, a2, v8);
    }
  }
}
