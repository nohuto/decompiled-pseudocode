/*
 * XREFs of ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x1800445F0
 * Callers:
 *     HamRpcSrvServicingQueryActiveAppsInPackage @ 0x18006E980 (HamRpcSrvServicingQueryActiveAppsInPackage.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180016950 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180017520 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18001E74C (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x1800449A8 (-HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800449B8 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180044ABC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?HampPkgIsPpleApplication@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180045DC0 (-HampPkgIsPpleApplication@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800535E0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18005436C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x18006BE94 (--$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180083C04 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvQueryActiveAppsInPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_CLIENT_PACKAGE_CONTEXT *a2,
        int a3,
        unsigned __int16 ***a4,
        unsigned int *a5)
{
  int v5; // r14d
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v6; // rdi
  unsigned __int16 **v8; // rsi
  int v9; // r13d
  int v10; // r12d
  unsigned int v11; // r15d
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v12; // rax
  struct _HAM_APPLICATION *i; // rax
  struct _HAM_APPLICATION *v14; // rdi
  int AumidFromKey; // ebx
  unsigned __int16 *v16; // r14
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned __int16 *Heap; // rax
  int v22; // eax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  int v27; // r13d
  void **v28; // r12
  __int64 v29; // r13
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 **v35; // [rsp+58h] [rbp-A8h] BYREF
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v36; // [rsp+60h] [rbp-A0h] BYREF
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v37; // [rsp+68h] [rbp-98h]
  char *v38; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_RC_TREE_NODE *v39; // [rsp+78h] [rbp-88h]
  unsigned __int16 ***v40; // [rsp+80h] [rbp-80h]
  unsigned int *v41; // [rsp+88h] [rbp-78h]
  _BYTE v42[144]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v43[136]; // [rsp+120h] [rbp+20h] BYREF

  v5 = a3;
  v32 = a3;
  v6 = a2;
  v37 = a2;
  v41 = a5;
  v40 = a4;
  memset_0(v42, 0, 0x88uLL);
  v31 = 0;
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D4C51);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v42);
  v8 = 0LL;
  v33 = 0;
  v9 = 0;
  v35 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( (v5 & 3) != v5 )
  {
    AumidFromKey = -1073741583;
    goto LABEL_17;
  }
  v12 = HampClientPkgFindByPackageHandle(a1, (unsigned __int64)v6);
  v36 = v12;
  if ( !v12 )
  {
    AumidFromKey = -1073741275;
    goto LABEL_17;
  }
  v39 = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)v12 + 7);
  for ( i = HampPkgGetFirstApplication(v39); ; i = HamRcNodeGetSuccessor(v39, v14) )
  {
    v14 = i;
    if ( !i )
    {
      *v40 = v8;
      v8 = 0LL;
      AumidFromKey = 0;
      *v41 = v11;
LABEL_10:
      v16 = 0LL;
      goto LABEL_11;
    }
    if ( !HampPkgIsPpleApplication(i) )
    {
      if ( (v5 & 2) == 0
        || (HampAppAcquireLockShared(v14),
            v10 = (*((_DWORD *)v14 + 154) >> 25) & 7,
            v27 = *((_DWORD *)v14 + 155) >> 5,
            HampAppReleaseLockShared(v14),
            (v9 = v27 & 7) == 0)
        || !v10 )
      {
        if ( (v5 & 1) == 0 || HampAppGetHasStartedWindow(v14) )
          break;
      }
    }
LABEL_23:
    ;
  }
  v31 = 130;
  AumidFromKey = PsmGetAumidFromKey((char *)v14 + 96, &v31, v43);
  if ( AumidFromKey < 0 )
    goto LABEL_10;
  Heap = (unsigned __int16 *)HampAllocateHeap(2LL * v31);
  v16 = Heap;
  if ( Heap )
  {
    StringCchCopyW(Heap, v31, v43);
    v30 = v11 + 1;
    v22 = RmpArrayGrow<unsigned short *>(&v35, &v33, v11 + 1);
    v8 = v35;
    AumidFromKey = v22;
    if ( v22 < 0 )
      goto LABEL_11;
    v26 = v11;
    v11 = v30;
    v35[v26] = v16;
    if ( (unsigned int)dword_1800E82B0 > 5 )
    {
      v30 = v10;
      v38 = (char *)v14 + 96;
      v34 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v23,
        (unsigned int)&unk_1800D4E88,
        v24,
        v25,
        (__int64)&v38,
        (__int64)&v34,
        (__int64)&v30);
    }
    LOBYTE(v5) = v32;
    goto LABEL_23;
  }
  AumidFromKey = -1073741801;
LABEL_11:
  if ( v8 )
  {
    if ( v11 )
    {
      v28 = (void **)v8;
      v29 = v11;
      do
      {
        HampFreeHeap(*v28++);
        --v29;
      }
      while ( v29 );
    }
    HampFreeHeap(v8);
  }
  CemRcObjectDereference(v36);
  if ( v14 )
    CemRcObjectDereference(v14);
  if ( v16 )
    HampFreeHeap(v16);
  v6 = v37;
  v5 = v32;
LABEL_17:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v34 = v11;
    v30 = v5;
    v36 = v6;
    v33 = AumidFromKey;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v17,
      (unsigned int)&unk_1800D52EA,
      v18,
      v19,
      (__int64)&v33,
      (__int64)&v36,
      (__int64)&v30,
      (__int64)&v34);
  }
  return (unsigned int)AumidFromKey;
}
