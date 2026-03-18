/*
 * XREFs of DxgkNetDispGetNextChunkInfo @ 0x1401ABE20
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1400803A4 (DxgkMiracastGetNextChunkInfo.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DxgkNetDispGetNextChunkInfo(
        const void *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        ULONG64 a5,
        char *a6,
        __int64 a7)
{
  struct D3DKMT_MIRACAST_CHUNK_DATA *v10; // rdi
  __int64 v11; // rdx
  int NextChunkInfo; // ebx
  const void *v13; // rdx
  __int64 v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // rsi
  void *v17; // rcx
  NTSTATUS v18; // eax
  void *v19; // r13
  void *v20; // r14
  size_t v21; // r8
  char *v22; // rax
  __int64 v23; // rsi
  unsigned int i; // edx
  PVOID v25; // rcx
  unsigned int Size; // [rsp+30h] [rbp-1C8h] BYREF
  NTSTATUS Size_4; // [rsp+34h] [rbp-1C4h]
  unsigned int Src; // [rsp+38h] [rbp-1C0h] BYREF
  int v30; // [rsp+3Ch] [rbp-1BCh]
  unsigned int v31; // [rsp+40h] [rbp-1B8h]
  struct D3DKMT_MIRACAST_CHUNK_DATA *v32; // [rsp+48h] [rbp-1B0h]
  PVOID Object; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-1A0h] BYREF
  ULONG64 v35; // [rsp+60h] [rbp-198h]
  __int64 v36; // [rsp+68h] [rbp-190h]
  ULONG64 v37; // [rsp+70h] [rbp-188h]
  char *v38; // [rsp+78h] [rbp-180h]
  __int64 v39; // [rsp+80h] [rbp-178h]
  PVOID v40[36]; // [rsp+90h] [rbp-168h] BYREF

  v31 = a2;
  v35 = a5;
  v37 = a5;
  v38 = a6;
  v36 = a7;
  v39 = a7;
  v34 = 0LL;
  Size = 0;
  v10 = 0LL;
  v32 = 0LL;
  memset(v40, 0, sizeof(v40));
  if ( a3 <= 4 )
  {
    LODWORD(v40[35]) = a3;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v34, a1, 8uLL);
    v13 = (const void *)a5;
    if ( a5 >= MmUserProbeAddress )
      v13 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&Size, v13, 4uLL);
    v15 = (unsigned int)v40[35];
    if ( LODWORD(v40[35]) )
    {
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + LODWORD(v40[35]) > MmUserProbeAddress || a4 + LODWORD(v40[35]) < a4 )
        v15 = (unsigned int)v40[35];
    }
    v16 = 0LL;
    v30 = 0;
    while ( (unsigned int)v16 < v15 )
    {
      v17 = *(void **)(a4 + 8 * v16);
      Object = 0LL;
      v18 = ObReferenceObjectByHandle(v17, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v40[v16 + 1] = Object;
      NextChunkInfo = v18;
      Size_4 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry2(3LL, *(_QWORD *)(a4 + 8 * v16), v18);
        WdLogGlobalForLineNumber = 9091;
        v19 = (void *)v35;
        v20 = (void *)v36;
        goto LABEL_21;
      }
      v16 = (unsigned int)(v16 + 1);
      v30 = v16;
      v15 = (unsigned int)v40[35];
    }
    v10 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)operator new[](Size, 0x4B677844u, 64LL, v14);
    v32 = v10;
    if ( !v10 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 9107;
      NextChunkInfo = -1073741801;
      goto LABEL_32;
    }
    Src = 0;
    NextChunkInfo = DxgkMiracastGetNextChunkInfo(&v34, v31, (__int64)v40, &Size, v10, &Src);
    Size_4 = NextChunkInfo;
    v19 = (void *)v35;
    v20 = (void *)v36;
LABEL_21:
    if ( NextChunkInfo >= 0 )
    {
      if ( Size )
      {
        v21 = Size;
        v22 = &a6[Size];
        if ( (unsigned __int64)v22 > MmUserProbeAddress || v22 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, v21);
      }
      if ( (unsigned __int64)v20 >= MmUserProbeAddress )
        v20 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v20, &Src, 4uLL);
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v19 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v19, &Size, 4uLL);
    }
  }
  else
  {
    v11 = a3;
    NextChunkInfo = -1073741811;
    WdLogSingleEntry3(3LL, v11, 4LL, -1073741811LL);
    WdLogGlobalForLineNumber = 9066;
  }
LABEL_32:
  v23 = 0LL;
  for ( i = (unsigned int)v40[35]; (unsigned int)v23 < i; v23 = (unsigned int)(v23 + 1) )
  {
    v25 = v40[v23 + 1];
    if ( v25 )
    {
      ObfDereferenceObject(v25);
      i = (unsigned int)v40[35];
    }
  }
  if ( v10 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  return (unsigned int)NextChunkInfo;
}
