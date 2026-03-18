/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x14011D360
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140023480 (GreLockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1400243F0 (UserReferenceDwmApiPort.c)
 *     OpenDwmHandle @ 0x14006F814 (OpenDwmHandle.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x140073A80 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     DwmAsyncRegisterSharedThumbnailVisualApiExt @ 0x140132DAC (DwmAsyncRegisterSharedThumbnailVisualApiExt.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionRegisterThumbnailVisual(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        void *a5,
        void *a6,
        char a7,
        void *Src,
        void *a9)
{
  int v10; // r13d
  int v11; // r12d
  int v12; // esi
  PVOID v13; // rbx
  char v14; // al
  char v15; // al
  __int64 v16; // rcx
  PVOID v17; // r14
  __int64 v18; // r9
  __int64 v19; // rcx
  PVOID v20; // rdi
  int v21; // eax
  int v23; // [rsp+20h] [rbp-E8h]
  PVOID Object; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+48h] [rbp-C0h]
  PVOID v26; // [rsp+50h] [rbp-B8h]
  void *v27[2]; // [rsp+58h] [rbp-B0h] BYREF
  void *v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  void *v31; // [rsp+80h] [rbp-88h]
  __int128 v32; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v33[12]; // [rsp+98h] [rbp-70h] BYREF

  v25 = a4;
  v10 = a2;
  v11 = a1;
  v29 = a1;
  v30 = a2;
  v27[0] = a5;
  v28 = a6;
  v31 = a9;
  v12 = 0;
  v26 = 0LL;
  memset(v33, 0, 45);
  Object = 0LL;
  RtlCopyFromUser(&Object, Src, 8uLL);
  v13 = Object;
  v26 = Object;
  v33[0] = v25;
  v32 = 0LL;
  RtlCopyFromUser(&v32, v27[0], 0x10uLL);
  *(_OWORD *)&v33[1] = v32;
  *(_OWORD *)v27 = 0LL;
  RtlCopyFromUser(v27, v28, 0x10uLL);
  *(_OWORD *)&v33[5] = *(_OWORD *)v27;
  LOBYTE(v33[9]) = a7;
  *(_DWORD *)((char *)&v33[9] + 1) = (a3 >> 2) & 1;
  *(_DWORD *)((char *)&v33[10] + 1) = (a3 >> 3) & 1;
  if ( (v33[0] & 9) != 9 )
    goto LABEL_13;
  if ( (v33[0] & 2) != 0 )
  {
    if ( v33[7] < v33[5] || (v14 = 1, v33[8] < v33[6]) )
      v14 = 0;
    if ( !v14 )
      goto LABEL_13;
  }
  if ( v33[3] < v33[1] || (v15 = 1, v33[4] < v33[2]) )
    v15 = 0;
  if ( !v15 || *(_QWORD *)&v33[1] || (_WORD)v11 == (_WORD)v10 )
LABEL_13:
    v12 = -1073741811;
  if ( v12 >= 0 )
  {
    Object = 0LL;
    v12 = DirectComposition::ResourceObject::ResolveHandle(
            a9,
            1u,
            1,
            (struct DirectComposition::ResourceObject **)&Object);
    if ( v12 >= 0 )
    {
      v17 = Object;
      if ( *((_DWORD *)Object + 9) == 184 )
      {
        GreLockDwmState(v16);
        Object = 0LL;
        v12 = OpenDwmHandle(v17, ExCompositionObjectType, 3u, v18, v23, &Object);
        if ( v12 >= 0 )
        {
          v20 = Object;
          v21 = UserReferenceDwmApiPort();
          v12 = DwmAsyncRegisterSharedThumbnailVisualApiExt(
                  v21,
                  v11,
                  v10,
                  a3 & 1,
                  (a3 >> 1) & 1,
                  (__int64)v33,
                  (__int64)v13,
                  (__int64)v20);
        }
        GreUnlockDwmState(v19);
      }
      else
      {
        v12 = -1073741811;
      }
      ObfDereferenceObject(v17);
    }
  }
  return (unsigned int)v12;
}
