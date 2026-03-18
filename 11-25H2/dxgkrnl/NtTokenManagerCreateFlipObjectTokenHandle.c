/*
 * XREFs of NtTokenManagerCreateFlipObjectTokenHandle @ 0x1400974B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x140035FE0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x14004A4A4 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009C18C (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtTokenManagerCreateFlipObjectTokenHandle(
        void *a1,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct FlipPropertyItem *a6,
        void *a7,
        void *a8,
        void *a9)
{
  int ProducerTokenInitInfo; // esi
  struct _LUID v11; // rbx
  void *v12; // r12
  void *v13; // rax
  __int64 Win32kImportTable; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned __int64 v19; // [rsp+50h] [rbp-118h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-110h] BYREF
  void *Src; // [rsp+60h] [rbp-108h] BYREF
  struct _LUID v22; // [rsp+68h] [rbp-100h] BYREF
  struct _LUID v23; // [rsp+70h] [rbp-F8h]
  void *v24; // [rsp+78h] [rbp-F0h]
  struct FlipPropertyItem *v25; // [rsp+80h] [rbp-E8h]
  void *v26; // [rsp+88h] [rbp-E0h]
  void *v27; // [rsp+90h] [rbp-D8h]
  void *v28; // [rsp+98h] [rbp-D0h]
  void *v29; // [rsp+A0h] [rbp-C8h]
  void *v30; // [rsp+A8h] [rbp-C0h]
  __int128 v31; // [rsp+B0h] [rbp-B8h] BYREF
  char v32; // [rsp+C0h] [rbp-A8h]
  __int64 v33; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-98h]
  __int64 v35; // [rsp+D8h] [rbp-90h]
  __int64 v36; // [rsp+E0h] [rbp-88h]
  __int128 v37; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v38; // [rsp+F8h] [rbp-70h]
  __int128 v39; // [rsp+108h] [rbp-60h]
  __int128 v40; // [rsp+118h] [rbp-50h] BYREF

  Src = a3;
  v26 = a1;
  v29 = a1;
  v25 = a6;
  v28 = a7;
  v27 = a8;
  v30 = a9;
  ProducerTokenInitInfo = 0;
  Handle = 0LL;
  v11 = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v12 = 0LL;
  v24 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  KeEnterCriticalRegion();
  if ( a7 && a2 )
  {
    v22 = 0LL;
    RtlCopyFromUser(&v22, a2, 8uLL);
    v11 = v22;
    v23 = v22;
    v13 = Src;
    if ( Src )
    {
      Src = 0LL;
      RtlCopyFromUser(&Src, v13, 8uLL);
      v12 = Src;
      v24 = Src;
    }
  }
  else
  {
    ProducerTokenInitInfo = -1073741811;
  }
  if ( ProducerTokenInitInfo >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    ProducerTokenInitInfo = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(Win32kImportTable + 504))(
                              0x80000000LL,
                              &v19);
    if ( ProducerTokenInitInfo >= 0 )
    {
      ProducerTokenInitInfo = FlipManagerCreateProducerTokenInitInfo(
                                v26,
                                v11,
                                a4 != 0,
                                (unsigned __int64)v12,
                                a5,
                                v25,
                                (struct FlipManagerTokenInitInfo *)&v31);
      if ( ProducerTokenInitInfo >= 0 )
      {
        if ( v34 && !v32 )
          ProducerTokenInitInfo = -1073741811;
        if ( ProducerTokenInitInfo >= 0 )
        {
          if ( v35 )
          {
            *(_QWORD *)&v40 = *(_QWORD *)(v35 + 32);
            *((_QWORD *)&v40 + 1) = *(_QWORD *)(v35 + 48);
          }
          LODWORD(v37) = 48;
          *((_QWORD *)&v37 + 1) = 0LL;
          DWORD2(v38) = 0;
          *(_QWORD *)&v38 = 0LL;
          v39 = v19;
          ProducerTokenInitInfo = DxgkCompositionObject::Create(
                                    0LL,
                                    (__int64)&v37,
                                    3u,
                                    v15,
                                    5,
                                    160,
                                    (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerTokenObject::ObjectInit,
                                    (__int64)&v31,
                                    &Handle);
          if ( ProducerTokenInitInfo >= 0 )
          {
            if ( v27 )
              RtlCopyToUser(v27, &v33, 8uLL);
            if ( a9 )
              RtlCopyToUser(a9, &v40, 0x10uLL);
            RtlCopyToUser(v28, &Handle, 8uLL);
            Handle = 0LL;
          }
        }
      }
    }
  }
  if ( v19 )
  {
    v16 = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(unsigned __int64))(v16 + 624))(v19);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v31, v17);
  return (unsigned int)ProducerTokenInitInfo;
}
