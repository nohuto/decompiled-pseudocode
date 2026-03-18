/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00081A8
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0102AF0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0267980 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     DwmSyncCaptureSurfaceBits @ 0x1C000887C (DwmSyncCaptureSurfaceBits.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00C5F04 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00D81C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall bSpDwmUpdateSurface(
        HWND a1,
        __int64 a2,
        struct XDCOBJ *a3,
        HSURF a4,
        float a5,
        int a6,
        int a7,
        struct ERECTL *a8,
        struct REGION *a9)
{
  __int64 ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  int v14; // ecx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rsi
  void *v19; // rbx
  NTSTATUS v20; // edi
  PVOID v21; // r13
  _BYTE *v22; // rsi
  __int64 CurrentProcess; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // rbx
  BOOL (__stdcall *v27)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r11
  void *v28; // rbx
  __int64 v29; // rax
  BOOL v30; // edi
  int v32; // [rsp+38h] [rbp-C8h]
  _BYTE v33[4]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v34[3]; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  char v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+84h] [rbp-7Ch]
  int v39; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  void *v41; // [rsp+98h] [rbp-68h]
  void *v42; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  int v45; // [rsp+B8h] [rbp-48h]
  PVOID Object; // [rsp+C0h] [rbp-40h] BYREF
  HSURF v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+D0h] [rbp-30h] BYREF
  int v49; // [rsp+D4h] [rbp-2Ch]
  int v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+DCh] [rbp-24h]
  __int64 v52; // [rsp+E0h] [rbp-20h]
  int v53; // [rsp+E8h] [rbp-18h]
  int v54; // [rsp+ECh] [rbp-14h]
  _QWORD v55[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v56[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v57[32]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v58; // [rsp+130h] [rbp+30h]
  _BYTE v59[32]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v60[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v61[64]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v62[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v63[52]; // [rsp+1B4h] [rbp+B4h] BYREF
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  __int64 v65; // [rsp+200h] [rbp+100h]
  int v66; // [rsp+208h] [rbp+108h]
  int v67; // [rsp+230h] [rbp+130h]
  __int64 v68; // [rsp+240h] [rbp+140h]

  v42 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  v48 = 0;
  v51 = 0;
  v54 = 0;
  v47 = a4;
  v35 = 0LL;
  v41 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || (*(_DWORD *)(ThreadWin32Thread + 328) & 8) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( !CurrentProcessWin32Process )
      goto LABEL_11;
    if ( !*(_QWORD *)CurrentProcessWin32Process )
      goto LABEL_11;
    if ( a1 )
      goto LABEL_11;
    v14 = *(_DWORD *)(CurrentProcessWin32Process + 288);
    if ( (v14 & 2) != 0 )
      goto LABEL_11;
    *(_DWORD *)(CurrentProcessWin32Process + 288) = v14 | 2;
  }
  if ( (unsigned int)dword_1C0354098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354098, 0x400000000000LL) )
  {
    v39 = v17;
    v34[0] = 0;
    v43 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (unsigned int)&unk_1C031E82C,
      v16,
      v17,
      (__int64)&v43,
      (__int64)v34,
      (__int64)&v39);
  }
LABEL_11:
  v49 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v50 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v52 = 0LL;
  v53 = 1;
  UserEnterUserCritSecShared();
  v18 = UserReferenceDwmProcess();
  v19 = (void *)UserReferenceDwmApiPort();
  UserLeaveUserCritSec();
  v34[0] = 88;
  if ( v18 && v19 )
  {
    v20 = DwmSyncCaptureSurfaceBits(v19, a7, v49, v50, a2, (__int64)v34, (__int64)&v35);
  }
  else
  {
    v20 = -1073741823;
    UserDereferenceDwmApiPort(v19);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v33);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v60);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v59, a3, 0);
  if ( (v59[24] & 1) != 0 && **(HSURF **)(*(_QWORD *)a3 + 496LL) == v47 )
  {
    if ( v20 < 0
      || (LOBYTE(v32) = 0, Handle = 0LL, v20 = ObDuplicateObject(v18, v35, 0LL, &Handle, 4, 512, 1, v32), v20 < 0) )
    {
      v21 = 0LL;
    }
    else
    {
      Object = 0LL;
      v20 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
      v21 = Object;
      ZwClose(Handle);
    }
  }
  else
  {
    v21 = v41;
    v20 = -1073741823;
  }
  UserDereferenceDwmProcess(v18);
  v22 = 0LL;
  if ( v20 >= 0 )
  {
    v35 = 0LL;
    v43 = 0LL;
    CurrentProcess = PsGetCurrentProcess();
    v20 = MmMapViewOfSection(v21, CurrentProcess, &v42, 0LL, 0LL, &v35, &v43, 2, 0, 2);
    if ( v20 >= 0 )
    {
      v48 = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v36, (struct _DEVBITMAPINFO *)&v48, v42, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v20 = -1073741823;
        goto LABEL_52;
      }
      v45 = 0;
      v44 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v44, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
      {
        v24 = v36;
        v45 = 1;
        *(_QWORD *)&v34[1] = *(_QWORD *)(v36 + 128);
        if ( *(_QWORD *)&v34[1] )
        {
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v34[1]);
          v24 = v36;
        }
        *(_QWORD *)(v24 + 128) = v44;
        if ( v44 )
          INC_SHARE_REF_CNT(v44);
      }
      else
      {
        v20 = -1073741823;
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v44);
    }
    if ( v20 >= 0 )
    {
      SURFREF::SURFREF((SURFREF *)v57, v47);
      v25 = v58;
      if ( v58 && *(_DWORD *)(v58 + 96) == 6 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
        v56[0] = 0LL;
        *(_QWORD *)&v34[1] = v26;
        SURFREFVIEW::bMap(
          (SURFREFVIEW *)v56,
          (struct _SURFOBJ *)((v36 + 24) & ((unsigned __int128)-(__int128)v36 >> 64)));
        v55[0] = 0LL;
        SURFREFVIEW::bMap(
          (SURFREFVIEW *)v55,
          (struct _SURFOBJ *)((v58 + 24) & ((unsigned __int128)-(__int128)v58 >> 64)));
        if ( v56[0] && v55[0] )
        {
          v65 = 0LL;
          v66 = 0;
          v67 = 1;
          v68 = 0LL;
          v64 = 0LL;
          if ( a9 )
          {
            XCLIPOBJ::vSetup((XCLIPOBJ *)v62, a9, a8, 0);
            v22 = v62;
          }
          if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v34[1]) )
          {
            v27 = RedirCopyBits;
          }
          else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL) & 0x400) != 0 )
          {
            v27 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v26 + 2816);
          }
          else
          {
            v27 = EngCopyBits;
          }
          if ( !v22 || !(unsigned int)ERECTL::bEmpty((ERECTL *)v63) )
          {
            *(_QWORD *)&v34[1] = 0LL;
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, _BYTE *, _QWORD, struct ERECTL *, _DWORD *))v27)(
              -(__int64)(v58 != 0) & (v58 + 24),
              (v36 + 24) & -(__int64)(v36 != 0),
              v22,
              0LL,
              a8,
              &v34[1]);
          }
        }
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v55);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v56);
        v25 = v58;
      }
      if ( v25 )
        DEC_SHARE_REF_CNT(v25);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v57);
    }
  }
LABEL_52:
  if ( a9 )
    REGION::vDeleteREGION(a9);
  v28 = v42;
  if ( v42 )
  {
    v29 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v29, v28);
  }
  if ( v21 )
    ObfDereferenceObject(v21);
  v30 = v20 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v59);
  if ( v60[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v60);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v61);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v33);
  SURFMEM::~SURFMEM((SURFMEM *)&v36);
  return v30;
}
