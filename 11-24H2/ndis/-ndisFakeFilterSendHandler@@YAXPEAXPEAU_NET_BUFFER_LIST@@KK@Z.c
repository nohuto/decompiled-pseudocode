/*
 * XREFs of ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14007AA00
 * Callers:
 *     <none>
 * Callees:
 *     NdisStatusToDropReason @ 0x140021C60 (NdisStatusToDropReason.c)
 *     NdisFreeNetBufferListContext @ 0x140021D40 (NdisFreeNetBufferListContext.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1400427C0 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     NblContextVerifierBugcheckContextCorruption @ 0x1400A27F8 (NblContextVerifierBugcheckContextCorruption.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFakeFilterSendHandler(void *a1, struct _NET_BUFFER_LIST *a2, __int64 a3, char a4)
{
  int v7; // eax
  int v8; // r14d
  int v9; // ebx
  bool v10; // zf
  __int64 v11; // rdx
  struct _NET_BUFFER_LIST *i; // rcx
  unsigned int v13; // ebp
  int v14; // eax
  struct _NET_BUFFER_LIST *j; // rbx
  __int64 v16; // r8
  __int16 v17; // [rsp+30h] [rbp-68h] BYREF
  int v18; // [rsp+32h] [rbp-66h]
  __int16 v19; // [rsp+36h] [rbp-62h]
  struct _NET_BUFFER_LIST *v20; // [rsp+38h] [rbp-60h]
  int v21; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+44h] [rbp-54h]
  int v23; // [rsp+48h] [rbp-50h]
  int v24; // [rsp+4Ch] [rbp-4Ch]
  __int64 v25; // [rsp+50h] [rbp-48h]
  _WORD v26[2]; // [rsp+58h] [rbp-40h] BYREF
  int v27; // [rsp+5Ch] [rbp-3Ch]
  int v28; // [rsp+60h] [rbp-38h]

  if ( byte_14011D800 )
  {
    if ( (*((_DWORD *)a1 + 210) & 2) != 0 )
    {
      v7 = NdisStatusToDropReason(*((_DWORD *)a1 + 24));
      v8 = *((_DWORD *)a1 + 209);
      v9 = v7;
      v24 = 0;
      v26[1] = 0;
      v10 = (a2->NblFlags & 0x8000) == 0;
      v18 = 0;
      v19 = 0;
      if ( v10 )
      {
        if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
        {
          v11 = *((_QWORD *)a1 + 103);
          v20 = a2;
          v17 = 40;
          v26[0] = 12;
          v21 = 1;
          v22 = v8;
          v23 = 2;
          v25 = 0LL;
          v27 = v9;
          v28 = -536866815;
          (*(void (__fastcall **)(_QWORD, __int64, __int16 *, _WORD *, _QWORD))(*((_QWORD *)&xmmword_14011D820 + 1)
                                                                              + 48LL))(
            xmmword_14011D820,
            v11,
            &v17,
            v26,
            0LL);
          ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
        }
      }
    }
  }
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = *((_DWORD *)a1 + 24);
  v13 = a4 & 1;
  if ( ndisNblContextVerifierMode && ndisNblContextVerifierMode != 3 && a1 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 5:
        v14 = *((_DWORD *)a1 + 14) >> 10;
        break;
      case 0x11:
        v14 = *((_DWORD *)a1 + 922) >> 12;
        break;
      case 0x12:
        v14 = *((_DWORD *)a1 + 56) >> 31;
        goto LABEL_18;
      default:
        goto LABEL_22;
    }
    LOBYTE(v14) = v14 & 1;
LABEL_18:
    if ( (_BYTE)v14 )
    {
      for ( j = a2; j; j = (struct _NET_BUFFER_LIST *)j->Link.Alignment )
      {
        if ( *(void **)&j->Context->ContextData[j->Context->Offset] != a1 )
          NblContextVerifierBugcheckContextCorruption(j, a2, a1);
        NdisFreeNetBufferListContext(j, 8u);
      }
    }
  }
LABEL_22:
  v16 = *((_QWORD *)a1 + 14);
  if ( v16 )
    ndisInvokeNextSendCompleteHandler(
      a2,
      v13,
      (struct _NDIS_FILTER_BLOCK *)v16,
      *(struct _NDIS_OBJECT_HEADER **)(v16 + 488),
      *(void **)(v16 + 472),
      *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v16 + 464));
  else
    ndisInvokeNextSendCompleteHandler(
      a2,
      v13,
      *((struct _NDIS_FILTER_BLOCK **)a1 + 4),
      *(struct _NDIS_OBJECT_HEADER **)(*((_QWORD *)a1 + 4) + 2592LL),
      *(void **)(*((_QWORD *)a1 + 4) + 2576LL),
      *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(*((_QWORD *)a1 + 4) + 2616LL));
}
