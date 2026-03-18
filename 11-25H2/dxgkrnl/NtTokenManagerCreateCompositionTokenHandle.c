/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x140052AD0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x140035FE0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        void *a5,
        void *a6)
{
  unsigned __int64 v7; // r12
  int v8; // edi
  void *v9; // rsi
  unsigned __int64 v10; // rax
  size_t v11; // r14
  __int64 Win32kImportTable; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  size_t Size; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  void *v19; // [rsp+68h] [rbp-A0h]
  size_t v20; // [rsp+70h] [rbp-98h]
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  void *v22; // [rsp+80h] [rbp-88h]
  __int128 v23; // [rsp+88h] [rbp-80h] BYREF
  size_t v24; // [rsp+98h] [rbp-70h]
  _DWORD v25[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B8h] [rbp-50h]
  int v29; // [rsp+BCh] [rbp-4Ch]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int64 v31; // [rsp+C8h] [rbp-40h]
  void *Src; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v33; // [rsp+118h] [rbp+10h]
  unsigned int v34; // [rsp+120h] [rbp+18h]
  void *v35; // [rsp+128h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  Src = a1;
  v7 = a2;
  v8 = 0;
  Handle = (HANDLE)-1LL;
  v9 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v20 = 0LL;
  KeEnterCriticalRegion();
  if ( !Src || !(_DWORD)v7 || !a3 || !v35 || !a5 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    Size = 24 * v7;
    if ( is_mul_ok(v7, 0x18uLL) )
    {
      v8 = 0;
    }
    else
    {
      Size = -1LL;
      v8 = -1073741675;
    }
    if ( v8 >= 0 )
    {
      v10 = 24 * v7;
      if ( !is_mul_ok(v7, 0x18uLL) )
        v10 = -1LL;
      v9 = (void *)operator new[](v10, 0x62634D54u, 256LL, (__int64)Src);
      v19 = v9;
      if ( !v9 )
        v8 = -1073741801;
      if ( v8 >= 0 )
      {
        RtlCopyFromUser(v9, Src, Size);
        Src = 0LL;
        RtlCopyFromUser(&Src, v35, 8uLL);
        v22 = Src;
        Size = 0LL;
        RtlCopyFromUser(&Size, a5, 8uLL);
        v11 = Size;
        v20 = Size;
        Win32kImportTable = DxgkGetWin32kImportTable();
        v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(Win32kImportTable + 504))(0x80000000LL, &v18);
        if ( v8 >= 0 )
        {
          v25[1] = 0;
          v29 = 0;
          v25[0] = 48;
          v26 = 0LL;
          v28 = 0;
          v27 = 0LL;
          v30 = v18;
          v31 = 0LL;
          *(_QWORD *)&v23 = v9;
          *((_QWORD *)&v23 + 1) = __PAIR64__(a3, v7);
          v24 = v11;
          v8 = DxgkCompositionObject::Create(
                 0LL,
                 (__int64)v25,
                 3u,
                 v13,
                 2,
                 136,
                 (__int64 (__fastcall *)(PVOID, __int64, char *))CompositionTokenObject::ObjectInit,
                 (__int64)&v23,
                 &Handle);
          if ( v8 >= 0 )
          {
            if ( a6 )
              RtlCopyToUser(a6, &Handle, 8uLL);
            else
              v8 = -1073741811;
            if ( v8 >= 0 && v11 )
            {
              v14 = DxgkGetWin32kImportTable();
              (*(void (__fastcall **)(size_t, void *))(v14 + 56))(v11, v22);
            }
          }
        }
      }
    }
  }
  if ( v18 )
  {
    v15 = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(__int64))(v15 + 624))(v18);
  }
  if ( v8 < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  if ( v9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
