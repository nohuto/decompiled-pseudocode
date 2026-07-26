/*
 * XREFs of ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210
 * Callers:
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x140049CF0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14004B2E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ndisNsiQueuedIfBlockRodChangeNotification @ 0x14004C0D0 (ndisNsiQueuedIfBlockRodChangeNotification.c)
 *     ndisIfDetachMiniportBlock @ 0x14004C680 (ndisIfDetachMiniportBlock.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14007F010 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x14008CAF0 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1400953D0 (ndisIfRegisterInterfaceEx.c)
 *     ndisIfUpdateExternalInterface @ 0x1400CF9A0 (ndisIfUpdateExternalInterface.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D3350 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisNsiQueuedTimestampingChangeNotification @ 0x1400D3580 (ndisNsiQueuedTimestampingChangeNotification.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D36C8 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1400D3908 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D4020 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D4310 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1400109B0 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140010A70 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140010AD0 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140010B10 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall IFBLOCK_DECREMENT_REF(char *P, unsigned __int8 a2)
{
  ULONG_PTR v2; // r8
  __int64 v4; // r10
  bool v5; // zf
  unsigned __int8 j; // al
  _BYTE *v7; // r9
  char v8; // cl
  PVOID *v9; // rdi
  PVOID *v10; // rcx
  char *v11; // rdx
  char **v12; // rdx
  PVOID *v13; // rcx
  char **v14; // rdx
  PVOID *v15; // rcx
  char **v16; // rdx
  PVOID *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // ecx
  _RTL_BITMAP_EX *v21; // rsi
  ULONG64 SizeOfBitMap; // rdx
  unsigned int v23; // eax
  ULONG64 v24; // rdi
  ULONG_PTR v25; // rdi
  ULONG AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v27; // rax
  struct _NDIS_REFCOUNT_BLOCK *v28; // rdi
  void *v29; // rcx
  void *v30; // rcx
  struct _KEVENT *v31; // rcx
  PVOID *v32; // rdx
  PVOID **v33; // rax
  ULONG_PTR v34; // rdi
  unsigned int v35; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rsi
  struct _KEVENT *v37; // rcx

  v2 = *((_QWORD *)P + 179);
  if ( v2 - 2 > 1 )
  {
    if ( v2 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v2, 0LL);
    if ( a2 == 0xFF )
    {
      if ( (*(_BYTE *)v2 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, v2, 0xFFuLL);
      *(_BYTE *)v2 &= ~2u;
    }
    else
    {
      if ( a2 >= *(_BYTE *)(v2 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, v2, a2);
      if ( *(_BYTE *)(v2 + 1) )
      {
        if ( *(_BYTE *)(v2 + 1) == 1 )
        {
          v34 = v2 + ((unsigned __int64)a2 << 6);
          v35 = *(_DWORD *)(v34 + 64);
          if ( v35 >> 17 < 0x3FFE && (unsigned __int16)v35 >> 1 == (v35 >> 17) + 1 )
          {
            for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v34 + 8);
                  i;
                  i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v34 + 8) )
            {
              *(_QWORD *)(v34 + 8) = i->Next;
              ndisFreeRefCountStacksInBlock(i);
              ExFreePoolWithTag(i, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v34 + 8));
            *(_DWORD *)(v34 + 64) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v35 >> 1) && (v35 & 1) == 0 )
              goto LABEL_17;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v34 + 8), 0);
          }
        }
      }
      else
      {
        v4 = *(_QWORD *)(v2 + 8);
        if ( !v4 )
        {
LABEL_7:
          if ( _bittestandreset((signed __int32 *)(v2 + 16), a2) )
            goto LABEL_8;
LABEL_17:
          ndisReportRefcountImbalance(v2, a2);
        }
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_BYTE *)(v2 + 3) )
            goto LABEL_7;
          v7 = (_BYTE *)(v4 + 2LL * j);
          if ( *v7 == a2 )
          {
            v8 = v7[1];
            if ( v8 )
              break;
          }
        }
        v7[1] = v8 - 1;
      }
    }
  }
LABEL_8:
  v5 = (*((_DWORD *)P + 326))-- == 1;
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel(&qword_140126A68);
    v9 = (PVOID *)::P;
    if ( ::P != &::P )
    {
      do
      {
        v10 = v9;
        v9 = (PVOID *)*v9;
        v11 = (char *)v10[3];
        if ( v11 == P || v10[4] == P )
        {
          --*((_DWORD *)v11 + 324);
          --*((_DWORD *)v10[4] + 325);
          v32 = (PVOID *)*v10;
          if ( *((PVOID **)*v10 + 1) != v10 )
            goto LABEL_53;
          v33 = (PVOID **)v10[1];
          if ( *v33 != v10 )
            goto LABEL_53;
          *v33 = v32;
          v32[1] = v33;
          ExFreePoolWithTag(v10, 0);
        }
      }
      while ( v9 != &::P );
    }
    *((_QWORD *)P + 162) = 0LL;
    KeReleaseSpinLockFromDpcLevel(&qword_140126A68);
    v12 = (char **)*((_QWORD *)P + 154);
    if ( v12[1] != P + 1232 )
      goto LABEL_53;
    v13 = (PVOID *)*((_QWORD *)P + 155);
    if ( *v13 != P + 1232 )
      goto LABEL_53;
    *v13 = v12;
    v12[1] = (char *)v13;
    v14 = (char **)*((_QWORD *)P + 156);
    if ( v14[1] != P + 1248
      || (v15 = (PVOID *)*((_QWORD *)P + 157), *v15 != P + 1248)
      || (*v15 = v14, v14[1] = (char *)v15, v16 = (char **)*((_QWORD *)P + 158), v16[1] != P + 1264)
      || (v17 = (PVOID *)*((_QWORD *)P + 159), *v17 != P + 1264) )
    {
LABEL_53:
      __fastfail(3u);
    }
    *v17 = v16;
    v16[1] = (char *)v17;
    v18 = *((_QWORD *)P + 171);
    v5 = (*(_DWORD *)(v18 + 76))-- == 1;
    if ( v5 )
    {
      v37 = *(struct _KEVENT **)(v18 + 608);
      if ( v37 )
        KeSetEvent(v37, 0, 0);
    }
    v19 = *((_DWORD *)P + 1);
    if ( v19 < *(_DWORD *)dword_1401275E8 )
    {
      v20 = dword_140126B60;
      v21 = (_RTL_BITMAP_EX *)&xmmword_140126B68;
      SizeOfBitMap = xmmword_140126B68;
    }
    else
    {
      v20 = dword_140126B78;
      v21 = &BitMapHeader;
      SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    }
    v23 = v19 - v20;
    v24 = v23;
    if ( v23 < SizeOfBitMap && RtlTestBitEx(v21, v23) )
      RtlClearBitEx(v21, v24);
    --ndisInterfaceCount;
    v25 = *((_QWORD *)P + 179);
    if ( v25 )
    {
      AnyActiveRefTag = ndisGetAnyActiveRefTag(*((struct NDIS_REFCOUNT_HANDLE__ **)P + 179));
      if ( AnyActiveRefTag != -2 )
        ndisBugCheckEx(0x1EuLL, 4uLL, v25, AnyActiveRefTag);
      v27 = ndisRefCountBlockFromRefCountHandle(v25);
      v28 = v27;
      if ( v27 )
      {
        ndisFreeRefCountAuxiliaryMemory(v27);
        ExFreePoolWithTag(v28, 0);
      }
    }
    v29 = (void *)*((_QWORD *)P + 178);
    *((_QWORD *)P + 179) = 0LL;
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0);
      *((_QWORD *)P + 178) = 0LL;
    }
    v30 = (void *)*((_QWORD *)P + 160);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0);
      *((_QWORD *)P + 160) = 0LL;
      *((_QWORD *)P + 161) = 0LL;
    }
    v31 = (struct _KEVENT *)*((_QWORD *)P + 173);
    if ( v31 )
      KeSetEvent(v31, 0, 0);
    ExFreePoolWithTag(P, 0);
  }
}
