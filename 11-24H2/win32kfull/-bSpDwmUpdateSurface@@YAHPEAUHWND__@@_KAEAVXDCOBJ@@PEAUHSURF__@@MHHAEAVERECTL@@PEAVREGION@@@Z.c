/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x14010A3E4
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x14010A148 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x140009EBC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1400C761C (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     DwmSyncCaptureSurfaceBits @ 0x14010AE70 (DwmSyncCaptureSurfaceBits.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14011917C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall bSpDwmUpdateSurface(
        __int64 a1,
        __int64 a2,
        struct XDCOBJ *a3,
        HSURF a4,
        float a5,
        int a6,
        int a7,
        struct ERECTL *a8,
        struct REGION *a9)
{
  PVOID v9; // r15
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcessWin32Process; // rax
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rcx
  void *v19; // rbx
  int v20; // edi
  Gre::Base *v21; // rcx
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  PVOID v23; // r15
  _BYTE *v24; // rsi
  __int64 CurrentProcess; // rax
  __int64 v26; // rbx
  BOOL (__stdcall *v27)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r11
  void *v28; // rbx
  __int64 v29; // rax
  int v31; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // r9
  int v34; // r8d
  int v35; // r9d
  int v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  char v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+94h] [rbp-6Ch]
  HSEMAPHORE v45[2]; // [rsp+98h] [rbp-68h] BYREF
  void *v46; // [rsp+A8h] [rbp-58h] BYREF
  HSURF v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h] BYREF
  int v49; // [rsp+BCh] [rbp-44h]
  int v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C4h] [rbp-3Ch]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+D0h] [rbp-30h]
  int v54; // [rsp+D4h] [rbp-2Ch]
  _BYTE v55[32]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-8h]
  HDC v57[18]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v58[4]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v59[156]; // [rsp+194h] [rbp+94h] BYREF

  v9 = 0LL;
  Object = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  v48 = 0;
  v51 = 0;
  v54 = 0;
  v47 = a4;
  v37 = a2;
  CurrentThread = GreGetCurrentThread(a1, a2);
  if ( CurrentThread && (*((_DWORD *)CurrentThread + 86) & 8) != 0 )
  {
    v33 = 2LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( !CurrentProcessWin32Process )
      goto LABEL_7;
    if ( !*(_QWORD *)CurrentProcessWin32Process )
      goto LABEL_7;
    if ( a1 )
      goto LABEL_7;
    v16 = *(_DWORD *)(CurrentProcessWin32Process + 276);
    if ( (v16 & 1) != 0 )
      goto LABEL_7;
    v33 = 1LL;
    *(_DWORD *)(CurrentProcessWin32Process + 276) = v16 | 1;
  }
  if ( (unsigned int)dword_140398BB8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x400000000000LL, v14, v33) )
  {
    LODWORD(v45[0]) = v35;
    LODWORD(Handle) = 0;
    v39 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_140398BB8,
      (unsigned int)&unk_14036A1BA,
      v34,
      v35,
      (__int64)&v39,
      (__int64)&Handle,
      (__int64)v45);
  }
LABEL_7:
  v49 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v50 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v52 = 0LL;
  v53 = 1;
  UserEnterUserCritSecShared();
  v17 = UserReferenceDwmProcess();
  v19 = (void *)UserReferenceDwmApiPort(v18);
  UserLeaveUserCritSec();
  LODWORD(Handle) = 88;
  if ( v17 && v19 )
  {
    v31 = DwmSyncCaptureSurfaceBits(v19, a7, v49, v50, v37, (__int64)&Handle, (__int64)&Object);
    v9 = Object;
    v20 = v31;
  }
  else
  {
    v20 = -1073741823;
    UserDereferenceDwmApiPort(v19);
  }
  v22 = Gre::Base::Globals(v21);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(v45, v22);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v57);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v57, a3, 0) && **(HSURF **)(*(_QWORD *)a3 + 496LL) == v47 )
  {
    if ( v20 >= 0 )
    {
      LOBYTE(v36) = 0;
      Handle = 0LL;
      v20 = ObDuplicateObject(v17, v9, 0LL, &Handle, 4, 512, 1, v36);
      if ( v20 >= 0 )
      {
        Object = 0LL;
        v20 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
        v23 = Object;
        ZwClose(Handle);
        goto LABEL_15;
      }
    }
  }
  else
  {
    v20 = -1073741823;
  }
  v23 = 0LL;
LABEL_15:
  UserDereferenceDwmProcess(v17);
  v24 = 0LL;
  if ( v20 >= 0 )
  {
    v39 = 0LL;
    v37 = 0LL;
    CurrentProcess = PsGetCurrentProcess();
    v20 = MmMapViewOfSection(v23, CurrentProcess, &v46, 0LL, 0LL, &v39, &v37, 2, 0, 2);
    if ( v20 >= 0 )
    {
      v48 = 6;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v42, (struct _DEVBITMAPINFO *)&v48, v46, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v40 = 0;
        v39 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v39, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v32 = v42;
          v40 = 1;
          v37 = *(_QWORD *)(v42 + 128);
          if ( v37 )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v37);
            v32 = v42;
          }
          *(_QWORD *)(v32 + 128) = v39;
          if ( v39 )
            INC_SHARE_REF_CNT(v39);
        }
        else
        {
          v20 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v39);
      }
      else
      {
        v20 = -1073741823;
      }
    }
    if ( v20 >= 0 )
    {
      SURFREF::SURFREF((SURFREF *)v55, v47);
      if ( v56 && *(_DWORD *)(v56 + 96) == 6 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
        v37 = v26;
        v39 = 0LL;
        SURFREFVIEW::bMap(
          (SURFREFVIEW *)&v39,
          (struct _SURFOBJ *)((v42 + 24) & ((unsigned __int128)-(__int128)v42 >> 64)));
        if ( v39 )
        {
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v58);
          if ( a9 )
          {
            XCLIPOBJ::vSetup((XCLIPOBJ *)v58, a9, a8, 0);
            v24 = v58;
          }
          if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v37) )
          {
            v27 = RedirCopyBits;
          }
          else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL) & 0x400) != 0 )
          {
            v27 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v26 + 2832);
          }
          else
          {
            v27 = EngCopyBits;
          }
          if ( !v24 || !ERECTL::bEmpty((ERECTL *)v59) )
          {
            v37 = 0LL;
            ((void (__fastcall *)(__int64, unsigned __int64, _BYTE *, _QWORD, struct ERECTL *, __int64 *))v27)(
              -(__int64)(v56 != 0) & (v56 + 24),
              (v42 + 24) & -(__int64)(v42 != 0),
              v24,
              0LL,
              a8,
              &v37);
          }
        }
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v39);
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v55);
    }
  }
  if ( a9 )
  {
    v37 = (__int64)a9;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
  }
  v28 = v46;
  if ( v46 )
  {
    v29 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v29, v28);
  }
  if ( v23 )
    ObfDereferenceObject(v23);
  DEVLOCKOBJ::~DEVLOCKOBJ(v57);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    (__int64)v45[0]);
  SURFMEM::~SURFMEM((SURFMEM *)&v42);
  return v20 >= 0;
}
